import sys
import multiprocessing
from itertools import combinations
from collections import defaultdict
import subprocess
from multiprocessing import Process, Pool
import time
import os



#help function to save kb as a tempfile "temp.txt"
def save_to_temp_file(kb,name):
    # Split the string into words
    formulas = kb.split()

    # Specify the file path where you want to save the data
    file_path = "temp/"+str(name)+".txt"

    # Open the file in write mode
    with open(file_path, "w") as file:
        # Write each word to a new line
        for formula in formulas:
            file.write(formula + "\n")


# Function to add a vertex with properties to the graph
def add_vertex(g,vertex, properties={}):
    if vertex not in g:
        g[vertex] = {}

# Function to add an edge between two vertices
def add_edge(g,vertex1, vertex2):
    if (vertex1 in g and vertex2 in g) and not(vertex2 in g[vertex1]["edges"]):
        g[vertex1]["edges"].append(vertex2)

# Function to add a property to a vertex
def add_property_to_vertex(g,vertex, property_name, property_value):

    if vertex in g:
        g[vertex][property_name] = property_value


# Function to display the graph
def display_graph(g):
    for vertex, properties in g.items():
        print(f"Vertex: {vertex}, Properties: {properties}")


def is_inconsistent(kb):
    #save to tmp
    name = time.time()
    save_to_temp_file(kb,name)

    result = subprocess.run(["mysolver/build/im_app temp/"+str(name)+".txt drastic-ltl 3"], shell=True, capture_output=True,
                            text=True)

    result_as_float = float(result.stdout.rstrip('\n'))

    return result_as_float>0


def is_inconsistent_as_tuple(kb):
    return (kb,is_inconsistent(kb))


def get_all_nodes_not_yet_visited(graph):
    return [node for node, attributes in graph.items() if "visited" in attributes and attributes["visited"] == False]



#========== Expane ==========

#multiprocessing
def compute_MIS_with_expand_multiprocessing(start_kb,g):
    solverCount = 0
    singular_elements = start_kb.split()
    mis=set()

    for el in singular_elements:
        add_vertex(g,el)
        add_property_to_vertex(g,el, "visited", False)
        add_property_to_vertex(g,el, "edges", [])

    all_nodes_not_yet_visited = get_all_nodes_not_yet_visited(g)
    while (len(all_nodes_not_yet_visited) > 0):

        candidate_sets = set()

        current_nodes = [n for n in all_nodes_not_yet_visited]
        with Pool(multiprocessing.cpu_count()) as p:
            incmap = dict(p.map(is_inconsistent_as_tuple, current_nodes))



        for node in all_nodes_not_yet_visited:

            graph[node]["visited"]=True

            #check consistentcy
            solverCount=solverCount+1
            if incmap[node]==True:
                help_tuple= (node,)
                add_property_to_vertex(g,node, "containsA", True)
                mis.add(tuple(sorted(help_tuple)))

            else:
                #build supersets

                for el in singular_elements:
                    current_list = node.split()
                    new_list = current_list
                    if not(el in new_list):
                        new_list.append(el)
                        candidate_sets.add(tuple(sorted(new_list)))


        #prune candidate_sets
        to_prune = []
        for candidate in candidate_sets:
            for mi in mis:
                if set(mi[0].split()).issubset(set(candidate)):
                    to_prune.append(candidate)

        for prunee in to_prune:
            candidate_sets.remove(prunee)


        #build new nodes
        for final_candidate in candidate_sets:
            string_representation = ' '.join(final_candidate)
            add_vertex(g,string_representation)
            add_property_to_vertex(g,string_representation, "visited", False)
            add_property_to_vertex(g,string_representation, "edges", [])

        #recalc
        all_nodes_not_yet_visited = get_all_nodes_not_yet_visited(g)


    return {"mis":[item[0] for item in list(mis)], "calls":solverCount}






if __name__ == '__main__':

    file_path = sys.argv[1] if (len(sys.argv)>1) else "mysolver/data/test_small.txt"

    # Open the file for reading
    #file_path = "mysolver/data/test_small.txt"

    try:
        with open(file_path, "r") as file:
            # Read each line, remove '\n', and concatenate them into a single string
            file_contents = "".join(line.replace(' ', '').replace('\n', " ") for line in file.readlines())
    except FileNotFoundError:
        print(f"The file '{file_path}' was not found.")
        file_contents = ""

    start_kb = file_contents




    # =========================
    # Multiprocessing
    graph={}
    start_time = time.time()
    MIS_via_expand = compute_MIS_with_expand_multiprocessing(start_kb,graph)
    end_time = time.time()

    # Calculate the time elapsed
    elapsed_time = end_time - start_time
    # Displaying the graph
    #display_graph(graph)
    print(f"MIS: {len(MIS_via_expand['mis'])}, #calls: {MIS_via_expand['calls']}")
    print(MIS_via_expand["mis"])
    print(f"Time elapsed multiprocessing: {elapsed_time:.2f} seconds")
    print()

    #remove and restore temp
    os.system('rm -rf temp')
    os.system('mkdir temp')
