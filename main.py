import multiprocessing
from itertools import combinations
from collections import defaultdict
import subprocess
from multiprocessing import Process, Pool
from threading import Lock
import concurrent.futures
import time

lock_race_expand = Lock()


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

#Neighbors: {properties.get('edges')


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

def containsA(eset):
    return any("A" in e for e in eset)


def three_elements_and_at_least_one_A(eset):
    #elements = s.split()
    return ((len(eset)>=3) and any("A" in e for e in eset))


def exactly_three_elements_and_at_least_one_A(eset):
    #elements = s.split()
    return ((len(eset)>3) and any("A" in e for e in eset))



def get_all_nodes_not_yet_visited(graph):
    return [node for node, attributes in graph.items() if "visited" in attributes and attributes["visited"] == False]



#========== Expane ==========

#normal
def compute_MIS_with_expand(start_kb,g):
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
        for node in all_nodes_not_yet_visited:

            graph[node]["visited"]=True

            #check consistentcy
            solverCount=solverCount+1
            if is_inconsistent(node):
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


#threading
def compute_MIS_with_expand_threading(start_kb,g):
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
        max_threads= 1000
        with concurrent.futures.ThreadPoolExecutor(max_workers=max_threads) as executor:
            incmap = dict(executor.map(is_inconsistent_as_tuple, current_nodes))

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
        with Pool(4) as p:
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






def process_subset_for_shrink_algorithm(s,node,lock,graph):


    string_representation_of_s = ' '.join(s)




    #solverCount += 1

    if is_inconsistent(string_representation_of_s):

        try:
            lock.acquire()
            add_vertex(graph,string_representation_of_s)

            #add_edge(graph,node, string_representation_of_s)

            x = graph[node]["edges"]
            x.append(string_representation_of_s)
            y={"edges":x}

            z = graph[node]
            z.update(y)

            graph[node]=z



            x = {"visited": False, "containsA": True, "edges": []}
            graph[string_representation_of_s] = x


            #add_property_to_vertex(graph,string_representation_of_s, "visited", False)
            #add_property_to_vertex(graph,string_representation_of_s, "containsA", True)
            #add_property_to_vertex(graph,string_representation_of_s, "edges", [])

        finally:
            lock.release()






def compute_MIS_with_Shrink(start_kb,g,manager):


    solverCount=0

    add_vertex(g, start_kb)
    x = {"visited": False, "containsA":False,"edges":[]}
    g[start_kb] = x



    #check initial once:
    element_set = start_kb.split()
    solverCount += 1
    if not is_inconsistent(start_kb):
        x = g[start_kb]
        y = {"containsA": False}
        x.update(y)
        g[start_kb] = x
        return {"mis": [], "calls": solverCount}
    else:
        x = g[start_kb]
        y={"containsA":True}
        x.update(y)
        g[start_kb]=x



    #from here: KB is definitely inconsistent!
    all_nodes_not_yet_visited = get_all_nodes_not_yet_visited(g)

    while (len(all_nodes_not_yet_visited)>0):


        for node in all_nodes_not_yet_visited:

            #mark current node as visited
            x = g[node]
            y = {"visited": True}
            x.update(y)
            g[node]=x


            element_set = node.split()

            #generate all possible 1-subsets
            subset_size = len(element_set) - 1
            subsets = list(combinations(element_set, subset_size)) if subset_size>0 else []

            procs = []
            for s in subsets:

                p = Process(target=process_subset_for_shrink_algorithm, args=(s,node,lock,g))
                procs.append(p)
                p.start()
                # complete the processes
            for proc in procs:
                proc.join()








        #recompute all nodes not yet visited
        all_nodes_not_yet_visited = get_all_nodes_not_yet_visited(g)

    #return
    return {"mis":[node for node, attributes in g.items() if (attributes["edges"]==[] and attributes["containsA"]) ], "calls":solverCount}


if __name__ == '__main__':
    # Create an empty graph as an adjacency list with node properties

    graph = {}
    lock = Lock()

    # Adding vertices with properties
    start_kb = 'A C A=>!B R B T'


    # Open the file for reading
    file_path = "mysolver/data/test_small.txt"

    try:
        with open(file_path, "r") as file:
            # Read each line, remove '\n', and concatenate them into a single string
            file_contents = "".join(line.replace(' ', '').replace('\n', " ") for line in file.readlines())
    except FileNotFoundError:
        print(f"The file '{file_path}' was not found.")
        file_contents = ""

    #start_kb = file_contents



    #========

    #start_time = time.time()
    #MIS_via_shrink = compute_MIS_with_Shrink(start_kb,graph,manager)
    #end_time = time.time()

    # Calculate the time elapsed
    #elapsed_time = end_time - start_time

    # Displaying the graph
    #display_graph(graph)
    #print(f"MIS: {len(MIS_via_shrink['mis'])}, #calls: {MIS_via_shrink['calls']}")
    #print(MIS_via_shrink["mis"])
    #print(f"Time elapsed: {elapsed_time:.2f} seconds")
    #print()



    #=========================
    #graph={}
    #start_time = time.time()
    #MIS_via_expand = compute_MIS_with_expand(start_kb,graph)
    #end_time = time.time()

    # Calculate the time elapsed
    #elapsed_time = end_time - start_time
    # Displaying the graph
    #display_graph(graph)
    #print(f"MIS: {len(MIS_via_expand['mis'])}, #calls: {MIS_via_expand['calls']}")
    #print(MIS_via_expand["mis"])
    #print(f"Time elapsed normal: {elapsed_time:.2f} seconds")
    #print()

    # =========================
    # Threading
    graph = {}
    start_time = time.time()
    MIS_via_expand = compute_MIS_with_expand_threading(start_kb, graph)
    end_time = time.time()

    # Calculate the time elapsed
    elapsed_time = end_time - start_time
    # Displaying the graph
    # display_graph(graph)
    print(f"MIS: {len(MIS_via_expand['mis'])}, #calls: {MIS_via_expand['calls']}")
    print(MIS_via_expand["mis"])
    print(f"Time elapsed threading: {elapsed_time:.2f} seconds")
    print()

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

