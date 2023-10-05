// A Bison parser, made by GNU Bison 3.8.2.

// Skeleton implementation for Bison LALR(1) parsers in C++

// Copyright (C) 2002-2015, 2018-2021 Free Software Foundation, Inc.

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <https://www.gnu.org/licenses/>.

// As a special exception, you may create a larger work that contains
// part or all of the Bison parser skeleton and distribute that work
// under terms of your choice, so long as that work isn't itself a
// parser generator using the skeleton or a modified version thereof
// as a parser skeleton.  Alternatively, if you modify or redistribute
// the parser skeleton itself, you may (at your option) remove this
// special exception, which will cause the skeleton and the resulting
// Bison output files to be licensed under the GNU General Public
// License without this special exception.

// This special exception was added by the Free Software Foundation in
// version 2.2 of Bison.

// DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
// especially those whose name start with YY_ or yy_.  They are
// private implementation details that can be changed or removed.


// Take the name prefix into account.
#define yylex   GringoNonGroundGrammar_lex

// First part of user prologue.
#line 58 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"


#include "gringo/input/nongroundparser.hh"
#include "gringo/input/programbuilder.hh"
#include <climits> 

#define BUILDER (lexer->builder())
#define LOGGER (lexer->logger())
#define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do {                                                               \
        if (N) {                                                       \
            (Current).beginFilename = YYRHSLOC (Rhs, 1).beginFilename; \
            (Current).beginLine     = YYRHSLOC (Rhs, 1).beginLine;     \
            (Current).beginColumn   = YYRHSLOC (Rhs, 1).beginColumn;   \
            (Current).endFilename   = YYRHSLOC (Rhs, N).endFilename;   \
            (Current).endLine       = YYRHSLOC (Rhs, N).endLine;       \
            (Current).endColumn     = YYRHSLOC (Rhs, N).endColumn;     \
        }                                                              \
        else {                                                         \
            (Current).beginFilename = YYRHSLOC (Rhs, 0).endFilename;   \
            (Current).beginLine     = YYRHSLOC (Rhs, 0).endLine;       \
            (Current).beginColumn   = YYRHSLOC (Rhs, 0).endColumn;     \
            (Current).endFilename   = YYRHSLOC (Rhs, 0).endFilename;   \
            (Current).endLine       = YYRHSLOC (Rhs, 0).endLine;       \
            (Current).endColumn     = YYRHSLOC (Rhs, 0).endColumn;     \
        }                                                              \
    }                                                                  \
    while (false)

using namespace Gringo;
using namespace Gringo::Input;

int GringoNonGroundGrammar_lex(void *value, Gringo::Location* loc, NonGroundParser *lexer) {
    return lexer->lex(value, *loc);
}


#line 81 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"


#include "grammar.hh"


// Unqualified %code blocks.
#line 96 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"


void NonGroundGrammar::parser::error(DefaultLocation const &l, std::string const &msg) {
    lexer->parseError(l, msg);
}


#line 96 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"


#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> // FIXME: INFRINGES ON USER NAME SPACE.
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif


// Whether we are compiled with exception support.
#ifndef YY_EXCEPTIONS
# if defined __GNUC__ && !defined __EXCEPTIONS
#  define YY_EXCEPTIONS 0
# else
#  define YY_EXCEPTIONS 1
# endif
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K].location)
/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

# ifndef YYLLOC_DEFAULT
#  define YYLLOC_DEFAULT(Current, Rhs, N)                               \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).begin  = YYRHSLOC (Rhs, 1).begin;                   \
          (Current).end    = YYRHSLOC (Rhs, N).end;                     \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).begin = (Current).end = YYRHSLOC (Rhs, 0).end;      \
        }                                                               \
    while (false)
# endif


// Enable debugging if requested.
#if YYDEBUG

// A pseudo ostream that takes yydebug_ into account.
# define YYCDEBUG if (yydebug_) (*yycdebug_)

# define YY_SYMBOL_PRINT(Title, Symbol)         \
  do {                                          \
    if (yydebug_)                               \
    {                                           \
      *yycdebug_ << Title << ' ';               \
      yy_print_ (*yycdebug_, Symbol);           \
      *yycdebug_ << '\n';                       \
    }                                           \
  } while (false)

# define YY_REDUCE_PRINT(Rule)          \
  do {                                  \
    if (yydebug_)                       \
      yy_reduce_print_ (Rule);          \
  } while (false)

# define YY_STACK_PRINT()               \
  do {                                  \
    if (yydebug_)                       \
      yy_stack_print_ ();                \
  } while (false)

#else // !YYDEBUG

# define YYCDEBUG if (false) std::cerr
# define YY_SYMBOL_PRINT(Title, Symbol)  YY_USE (Symbol)
# define YY_REDUCE_PRINT(Rule)           static_cast<void> (0)
# define YY_STACK_PRINT()                static_cast<void> (0)

#endif // !YYDEBUG

#define yyerrok         (yyerrstatus_ = 0)
#define yyclearin       (yyla.clear ())

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYRECOVERING()  (!!yyerrstatus_)

#line 28 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
namespace Gringo { namespace Input { namespace NonGroundGrammar {
#line 189 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"

  /// Build a parser object.
  parser::parser (Gringo::Input::NonGroundParser *lexer_yyarg)
#if YYDEBUG
    : yydebug_ (false),
      yycdebug_ (&std::cerr),
#else
    :
#endif
      lexer (lexer_yyarg)
  {}

  parser::~parser ()
  {}

  parser::syntax_error::~syntax_error () YY_NOEXCEPT YY_NOTHROW
  {}

  /*---------.
  | symbol.  |
  `---------*/

  // basic_symbol.
  template <typename Base>
  parser::basic_symbol<Base>::basic_symbol (const basic_symbol& that)
    : Base (that)
    , value (that.value)
    , location (that.location)
  {}


  /// Constructor for valueless symbols.
  template <typename Base>
  parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, YY_MOVE_REF (location_type) l)
    : Base (t)
    , value ()
    , location (l)
  {}

  template <typename Base>
  parser::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, YY_RVREF (value_type) v, YY_RVREF (location_type) l)
    : Base (t)
    , value (YY_MOVE (v))
    , location (YY_MOVE (l))
  {}


  template <typename Base>
  parser::symbol_kind_type
  parser::basic_symbol<Base>::type_get () const YY_NOEXCEPT
  {
    return this->kind ();
  }


  template <typename Base>
  bool
  parser::basic_symbol<Base>::empty () const YY_NOEXCEPT
  {
    return this->kind () == symbol_kind::S_YYEMPTY;
  }

  template <typename Base>
  void
  parser::basic_symbol<Base>::move (basic_symbol& s)
  {
    super_type::move (s);
    value = YY_MOVE (s.value);
    location = YY_MOVE (s.location);
  }

  // by_kind.
  parser::by_kind::by_kind () YY_NOEXCEPT
    : kind_ (symbol_kind::S_YYEMPTY)
  {}

#if 201103L <= YY_CPLUSPLUS
  parser::by_kind::by_kind (by_kind&& that) YY_NOEXCEPT
    : kind_ (that.kind_)
  {
    that.clear ();
  }
#endif

  parser::by_kind::by_kind (const by_kind& that) YY_NOEXCEPT
    : kind_ (that.kind_)
  {}

  parser::by_kind::by_kind (token_kind_type t) YY_NOEXCEPT
    : kind_ (yytranslate_ (t))
  {}



  void
  parser::by_kind::clear () YY_NOEXCEPT
  {
    kind_ = symbol_kind::S_YYEMPTY;
  }

  void
  parser::by_kind::move (by_kind& that)
  {
    kind_ = that.kind_;
    that.clear ();
  }

  parser::symbol_kind_type
  parser::by_kind::kind () const YY_NOEXCEPT
  {
    return kind_;
  }


  parser::symbol_kind_type
  parser::by_kind::type_get () const YY_NOEXCEPT
  {
    return this->kind ();
  }



  // by_state.
  parser::by_state::by_state () YY_NOEXCEPT
    : state (empty_state)
  {}

  parser::by_state::by_state (const by_state& that) YY_NOEXCEPT
    : state (that.state)
  {}

  void
  parser::by_state::clear () YY_NOEXCEPT
  {
    state = empty_state;
  }

  void
  parser::by_state::move (by_state& that)
  {
    state = that.state;
    that.clear ();
  }

  parser::by_state::by_state (state_type s) YY_NOEXCEPT
    : state (s)
  {}

  parser::symbol_kind_type
  parser::by_state::kind () const YY_NOEXCEPT
  {
    if (state == empty_state)
      return symbol_kind::S_YYEMPTY;
    else
      return YY_CAST (symbol_kind_type, yystos_[+state]);
  }

  parser::stack_symbol_type::stack_symbol_type ()
  {}

  parser::stack_symbol_type::stack_symbol_type (YY_RVREF (stack_symbol_type) that)
    : super_type (YY_MOVE (that.state), YY_MOVE (that.value), YY_MOVE (that.location))
  {
#if 201103L <= YY_CPLUSPLUS
    // that is emptied.
    that.state = empty_state;
#endif
  }

  parser::stack_symbol_type::stack_symbol_type (state_type s, YY_MOVE_REF (symbol_type) that)
    : super_type (s, YY_MOVE (that.value), YY_MOVE (that.location))
  {
    // that is emptied.
    that.kind_ = symbol_kind::S_YYEMPTY;
  }

#if YY_CPLUSPLUS < 201103L
  parser::stack_symbol_type&
  parser::stack_symbol_type::operator= (const stack_symbol_type& that)
  {
    state = that.state;
    value = that.value;
    location = that.location;
    return *this;
  }

  parser::stack_symbol_type&
  parser::stack_symbol_type::operator= (stack_symbol_type& that)
  {
    state = that.state;
    value = that.value;
    location = that.location;
    // that is emptied.
    that.state = empty_state;
    return *this;
  }
#endif

  template <typename Base>
  void
  parser::yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const
  {
    if (yymsg)
      YY_SYMBOL_PRINT (yymsg, yysym);

    // User destructor.
    YY_USE (yysym.kind ());
  }

#if YYDEBUG
  template <typename Base>
  void
  parser::yy_print_ (std::ostream& yyo, const basic_symbol<Base>& yysym) const
  {
    std::ostream& yyoutput = yyo;
    YY_USE (yyoutput);
    if (yysym.empty ())
      yyo << "empty symbol";
    else
      {
        symbol_kind_type yykind = yysym.kind ();
        yyo << (yykind < YYNTOKENS ? "token" : "nterm")
            << ' ' << yysym.name () << " ("
            << yysym.location << ": ";
        YY_USE (yykind);
        yyo << ')';
      }
  }
#endif

  void
  parser::yypush_ (const char* m, YY_MOVE_REF (stack_symbol_type) sym)
  {
    if (m)
      YY_SYMBOL_PRINT (m, sym);
    yystack_.push (YY_MOVE (sym));
  }

  void
  parser::yypush_ (const char* m, state_type s, YY_MOVE_REF (symbol_type) sym)
  {
#if 201103L <= YY_CPLUSPLUS
    yypush_ (m, stack_symbol_type (s, std::move (sym)));
#else
    stack_symbol_type ss (s, sym);
    yypush_ (m, ss);
#endif
  }

  void
  parser::yypop_ (int n) YY_NOEXCEPT
  {
    yystack_.pop (n);
  }

#if YYDEBUG
  std::ostream&
  parser::debug_stream () const
  {
    return *yycdebug_;
  }

  void
  parser::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


  parser::debug_level_type
  parser::debug_level () const
  {
    return yydebug_;
  }

  void
  parser::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }
#endif // YYDEBUG

  parser::state_type
  parser::yy_lr_goto_state_ (state_type yystate, int yysym)
  {
    int yyr = yypgoto_[yysym - YYNTOKENS] + yystate;
    if (0 <= yyr && yyr <= yylast_ && yycheck_[yyr] == yystate)
      return yytable_[yyr];
    else
      return yydefgoto_[yysym - YYNTOKENS];
  }

  bool
  parser::yy_pact_value_is_default_ (int yyvalue) YY_NOEXCEPT
  {
    return yyvalue == yypact_ninf_;
  }

  bool
  parser::yy_table_value_is_error_ (int yyvalue) YY_NOEXCEPT
  {
    return yyvalue == yytable_ninf_;
  }

  int
  parser::operator() ()
  {
    return parse ();
  }

  int
  parser::parse ()
  {
    int yyn;
    /// Length of the RHS of the rule being reduced.
    int yylen = 0;

    // Error handling.
    int yynerrs_ = 0;
    int yyerrstatus_ = 0;

    /// The lookahead symbol.
    symbol_type yyla;

    /// The locations where the error started and ended.
    stack_symbol_type yyerror_range[3];

    /// The return value of parse ().
    int yyresult;

#if YY_EXCEPTIONS
    try
#endif // YY_EXCEPTIONS
      {
    YYCDEBUG << "Starting parse\n";


    /* Initialize the stack.  The initial state will be set in
       yynewstate, since the latter expects the semantical and the
       location values to have been already stored, initialize these
       stacks with a primary value.  */
    yystack_.clear ();
    yypush_ (YY_NULLPTR, 0, YY_MOVE (yyla));

  /*-----------------------------------------------.
  | yynewstate -- push a new symbol on the stack.  |
  `-----------------------------------------------*/
  yynewstate:
    YYCDEBUG << "Entering state " << int (yystack_[0].state) << '\n';
    YY_STACK_PRINT ();

    // Accept?
    if (yystack_[0].state == yyfinal_)
      YYACCEPT;

    goto yybackup;


  /*-----------.
  | yybackup.  |
  `-----------*/
  yybackup:
    // Try to take a decision without lookahead.
    yyn = yypact_[+yystack_[0].state];
    if (yy_pact_value_is_default_ (yyn))
      goto yydefault;

    // Read a lookahead token.
    if (yyla.empty ())
      {
        YYCDEBUG << "Reading a token\n";
#if YY_EXCEPTIONS
        try
#endif // YY_EXCEPTIONS
          {
            yyla.kind_ = yytranslate_ (yylex (&yyla.value, &yyla.location, lexer));
          }
#if YY_EXCEPTIONS
        catch (const syntax_error& yyexc)
          {
            YYCDEBUG << "Caught exception: " << yyexc.what() << '\n';
            error (yyexc);
            goto yyerrlab1;
          }
#endif // YY_EXCEPTIONS
      }
    YY_SYMBOL_PRINT ("Next token is", yyla);

    if (yyla.kind () == symbol_kind::S_YYerror)
    {
      // The scanner already issued an error message, process directly
      // to error recovery.  But do not keep the error token as
      // lookahead, it is too special and may lead us to an endless
      // loop in error recovery. */
      yyla.kind_ = symbol_kind::S_YYUNDEF;
      goto yyerrlab1;
    }

    /* If the proper action on seeing token YYLA.TYPE is to reduce or
       to detect an error, take that action.  */
    yyn += yyla.kind ();
    if (yyn < 0 || yylast_ < yyn || yycheck_[yyn] != yyla.kind ())
      {
        goto yydefault;
      }

    // Reduce or error.
    yyn = yytable_[yyn];
    if (yyn <= 0)
      {
        if (yy_table_value_is_error_ (yyn))
          goto yyerrlab;
        yyn = -yyn;
        goto yyreduce;
      }

    // Count tokens shifted since error; after three, turn off error status.
    if (yyerrstatus_)
      --yyerrstatus_;

    // Shift the lookahead token.
    yypush_ ("Shifting", state_type (yyn), YY_MOVE (yyla));
    goto yynewstate;


  /*-----------------------------------------------------------.
  | yydefault -- do the default action for the current state.  |
  `-----------------------------------------------------------*/
  yydefault:
    yyn = yydefact_[+yystack_[0].state];
    if (yyn == 0)
      goto yyerrlab;
    goto yyreduce;


  /*-----------------------------.
  | yyreduce -- do a reduction.  |
  `-----------------------------*/
  yyreduce:
    yylen = yyr2_[yyn];
    {
      stack_symbol_type yylhs;
      yylhs.state = yy_lr_goto_state_ (yystack_[yylen].state, yyr1_[yyn]);
      /* If YYLEN is nonzero, implement the default value of the
         action: '$$ = $1'.  Otherwise, use the top of the stack.

         Otherwise, the following line sets YYLHS.VALUE to garbage.
         This behavior is undocumented and Bison users should not rely
         upon it.  */
      if (yylen)
        yylhs.value = yystack_[yylen - 1].value;
      else
        yylhs.value = yystack_[0].value;

      // Default location.
      {
        stack_type::slice range (yystack_, yylen);
        YYLLOC_DEFAULT (yylhs.location, range, yylen);
        yyerror_range[1].location = yylhs.location;
      }

      // Perform the reduction.
      YY_REDUCE_PRINT (yyn);
#if YY_EXCEPTIONS
      try
#endif // YY_EXCEPTIONS
        {
          switch (yyn)
            {
  case 7: // statement: "."
#line 353 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                        { lexer->parseError(yylhs.location, "syntax error, unexpected ."); }
#line 662 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 10: // identifier: "<IDENTIFIER>"
#line 359 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                    { (yylhs.value.str) = (yystack_[0].value.str); }
#line 668 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 11: // identifier: "default"
#line 360 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                    { (yylhs.value.str) = (yystack_[0].value.str); }
#line 674 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 12: // identifier: "override"
#line 361 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                    { (yylhs.value.str) = (yystack_[0].value.str); }
#line 680 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 13: // constterm: constterm "^" constterm
#line 368 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                       { (yylhs.value.term) = BUILDER.term(yylhs.location, BinOp::XOR, (yystack_[2].value.term), (yystack_[0].value.term)); }
#line 686 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 14: // constterm: constterm "?" constterm
#line 369 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                       { (yylhs.value.term) = BUILDER.term(yylhs.location, BinOp::OR, (yystack_[2].value.term), (yystack_[0].value.term)); }
#line 692 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 15: // constterm: constterm "&" constterm
#line 370 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                       { (yylhs.value.term) = BUILDER.term(yylhs.location, BinOp::AND, (yystack_[2].value.term), (yystack_[0].value.term)); }
#line 698 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 16: // constterm: constterm "+" constterm
#line 371 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                       { (yylhs.value.term) = BUILDER.term(yylhs.location, BinOp::ADD, (yystack_[2].value.term), (yystack_[0].value.term)); }
#line 704 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 17: // constterm: constterm "-" constterm
#line 372 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                       { (yylhs.value.term) = BUILDER.term(yylhs.location, BinOp::SUB, (yystack_[2].value.term), (yystack_[0].value.term)); }
#line 710 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 18: // constterm: constterm "*" constterm
#line 373 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                       { (yylhs.value.term) = BUILDER.term(yylhs.location, BinOp::MUL, (yystack_[2].value.term), (yystack_[0].value.term)); }
#line 716 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 19: // constterm: constterm "/" constterm
#line 374 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                       { (yylhs.value.term) = BUILDER.term(yylhs.location, BinOp::DIV, (yystack_[2].value.term), (yystack_[0].value.term)); }
#line 722 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 20: // constterm: constterm "\\" constterm
#line 375 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                       { (yylhs.value.term) = BUILDER.term(yylhs.location, BinOp::MOD, (yystack_[2].value.term), (yystack_[0].value.term)); }
#line 728 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 21: // constterm: constterm "**" constterm
#line 376 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                       { (yylhs.value.term) = BUILDER.term(yylhs.location, BinOp::POW, (yystack_[2].value.term), (yystack_[0].value.term)); }
#line 734 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 22: // constterm: "-" constterm
#line 377 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                       { (yylhs.value.term) = BUILDER.term(yylhs.location, UnOp::NEG, (yystack_[0].value.term)); }
#line 740 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 23: // constterm: "~" constterm
#line 378 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                       { (yylhs.value.term) = BUILDER.term(yylhs.location, UnOp::NOT, (yystack_[0].value.term)); }
#line 746 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 24: // constterm: "(" ")"
#line 379 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                       { (yylhs.value.term) = BUILDER.term(yylhs.location, BUILDER.termvec(), false); }
#line 752 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 25: // constterm: "(" "," ")"
#line 380 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                       { (yylhs.value.term) = BUILDER.term(yylhs.location, BUILDER.termvec(), true); }
#line 758 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 26: // constterm: "(" consttermvec ")"
#line 381 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                       { (yylhs.value.term) = BUILDER.term(yylhs.location, (yystack_[1].value.termvec), false); }
#line 764 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 27: // constterm: "(" consttermvec "," ")"
#line 382 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                       { (yylhs.value.term) = BUILDER.term(yylhs.location, (yystack_[2].value.termvec), true); }
#line 770 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 28: // constterm: identifier "(" constargvec ")"
#line 383 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                       { (yylhs.value.term) = BUILDER.term(yylhs.location, String::fromRep((yystack_[3].value.str)), (yystack_[1].value.termvecvec), false); }
#line 776 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 29: // constterm: "@" identifier "(" constargvec ")"
#line 384 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                       { (yylhs.value.term) = BUILDER.term(yylhs.location, String::fromRep((yystack_[3].value.str)), (yystack_[1].value.termvecvec), true); }
#line 782 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 30: // constterm: "|" constterm "|"
#line 385 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                       { (yylhs.value.term) = BUILDER.term(yylhs.location, UnOp::ABS, (yystack_[1].value.term)); }
#line 788 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 31: // constterm: identifier
#line 386 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                       { (yylhs.value.term) = BUILDER.term(yylhs.location, Symbol::createId(String::fromRep((yystack_[0].value.str)))); }
#line 794 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 32: // constterm: "@" identifier
#line 387 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                       { (yylhs.value.term) = BUILDER.term(yylhs.location, String::fromRep((yystack_[0].value.str)), BUILDER.termvecvec(BUILDER.termvecvec(), BUILDER.termvec()), true); }
#line 800 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 33: // constterm: "<NUMBER>"
#line 388 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                       { (yylhs.value.term) = BUILDER.term(yylhs.location, Symbol::createNum((yystack_[0].value.num))); }
#line 806 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 34: // constterm: "<STRING>"
#line 389 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                       { (yylhs.value.term) = BUILDER.term(yylhs.location, Symbol::createStr(String::fromRep((yystack_[0].value.str)))); }
#line 812 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 35: // constterm: "#inf"
#line 390 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                       { (yylhs.value.term) = BUILDER.term(yylhs.location, Symbol::createInf()); }
#line 818 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 36: // constterm: "#sup"
#line 391 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                       { (yylhs.value.term) = BUILDER.term(yylhs.location, Symbol::createSup()); }
#line 824 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 37: // consttermvec: constterm
#line 397 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                         { (yylhs.value.termvec) = BUILDER.termvec(BUILDER.termvec(), (yystack_[0].value.term));  }
#line 830 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 38: // consttermvec: consttermvec "," constterm
#line 398 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                         { (yylhs.value.termvec) = BUILDER.termvec((yystack_[2].value.termvec), (yystack_[0].value.term));  }
#line 836 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 39: // constargvec: consttermvec
#line 402 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                      { (yylhs.value.termvecvec) = BUILDER.termvecvec(BUILDER.termvecvec(), (yystack_[0].value.termvec));  }
#line 842 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 40: // constargvec: %empty
#line 403 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                      { (yylhs.value.termvecvec) = BUILDER.termvecvec(BUILDER.termvecvec(), BUILDER.termvec());  }
#line 848 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 41: // term: term ".." term
#line 409 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                               { (yylhs.value.term) = BUILDER.term(yylhs.location, (yystack_[2].value.term), (yystack_[0].value.term)); }
#line 854 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 42: // term: term "^" term
#line 410 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                               { (yylhs.value.term) = BUILDER.term(yylhs.location, BinOp::XOR, (yystack_[2].value.term), (yystack_[0].value.term)); }
#line 860 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 43: // term: term "?" term
#line 411 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                               { (yylhs.value.term) = BUILDER.term(yylhs.location, BinOp::OR, (yystack_[2].value.term), (yystack_[0].value.term)); }
#line 866 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 44: // term: term "&" term
#line 412 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                               { (yylhs.value.term) = BUILDER.term(yylhs.location, BinOp::AND, (yystack_[2].value.term), (yystack_[0].value.term)); }
#line 872 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 45: // term: term "+" term
#line 413 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                               { (yylhs.value.term) = BUILDER.term(yylhs.location, BinOp::ADD, (yystack_[2].value.term), (yystack_[0].value.term)); }
#line 878 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 46: // term: term "-" term
#line 414 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                               { (yylhs.value.term) = BUILDER.term(yylhs.location, BinOp::SUB, (yystack_[2].value.term), (yystack_[0].value.term)); }
#line 884 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 47: // term: term "*" term
#line 415 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                               { (yylhs.value.term) = BUILDER.term(yylhs.location, BinOp::MUL, (yystack_[2].value.term), (yystack_[0].value.term)); }
#line 890 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 48: // term: term "/" term
#line 416 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                               { (yylhs.value.term) = BUILDER.term(yylhs.location, BinOp::DIV, (yystack_[2].value.term), (yystack_[0].value.term)); }
#line 896 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 49: // term: term "\\" term
#line 417 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                               { (yylhs.value.term) = BUILDER.term(yylhs.location, BinOp::MOD, (yystack_[2].value.term), (yystack_[0].value.term)); }
#line 902 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 50: // term: term "**" term
#line 418 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                               { (yylhs.value.term) = BUILDER.term(yylhs.location, BinOp::POW, (yystack_[2].value.term), (yystack_[0].value.term)); }
#line 908 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 51: // term: "-" term
#line 419 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                               { (yylhs.value.term) = BUILDER.term(yylhs.location, UnOp::NEG, (yystack_[0].value.term)); }
#line 914 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 52: // term: "~" term
#line 420 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                               { (yylhs.value.term) = BUILDER.term(yylhs.location, UnOp::NOT, (yystack_[0].value.term)); }
#line 920 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 53: // term: "(" tuplevec ")"
#line 421 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                               { (yylhs.value.term) = BUILDER.pool(yylhs.location, (yystack_[1].value.termvec)); }
#line 926 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 54: // term: identifier "(" argvec ")"
#line 422 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                               { (yylhs.value.term) = BUILDER.term(yylhs.location, String::fromRep((yystack_[3].value.str)), (yystack_[1].value.termvecvec), false); }
#line 932 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 55: // term: "@" identifier "(" argvec ")"
#line 423 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                               { (yylhs.value.term) = BUILDER.term(yylhs.location, String::fromRep((yystack_[3].value.str)), (yystack_[1].value.termvecvec), true); }
#line 938 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 56: // term: "|" unaryargvec "|"
#line 424 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                               { (yylhs.value.term) = BUILDER.term(yylhs.location, UnOp::ABS, (yystack_[1].value.termvec)); }
#line 944 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 57: // term: identifier
#line 425 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                               { (yylhs.value.term) = BUILDER.term(yylhs.location, Symbol::createId(String::fromRep((yystack_[0].value.str)))); }
#line 950 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 58: // term: "@" identifier
#line 426 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                               { (yylhs.value.term) = BUILDER.term(yylhs.location, String::fromRep((yystack_[0].value.str)), BUILDER.termvecvec(BUILDER.termvecvec(), BUILDER.termvec()), true); }
#line 956 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 59: // term: "<NUMBER>"
#line 427 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                               { (yylhs.value.term) = BUILDER.term(yylhs.location, Symbol::createNum((yystack_[0].value.num))); }
#line 962 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 60: // term: "<STRING>"
#line 428 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                               { (yylhs.value.term) = BUILDER.term(yylhs.location, Symbol::createStr(String::fromRep((yystack_[0].value.str)))); }
#line 968 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 61: // term: "#inf"
#line 429 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                               { (yylhs.value.term) = BUILDER.term(yylhs.location, Symbol::createInf()); }
#line 974 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 62: // term: "#sup"
#line 430 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                               { (yylhs.value.term) = BUILDER.term(yylhs.location, Symbol::createSup()); }
#line 980 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 63: // term: "<VARIABLE>"
#line 431 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                               { (yylhs.value.term) = BUILDER.term(yylhs.location, String::fromRep((yystack_[0].value.str))); }
#line 986 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 64: // term: "<ANONYMOUS>"
#line 432 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                               { (yylhs.value.term) = BUILDER.term(yylhs.location, String("_")); }
#line 992 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 65: // unaryargvec: term
#line 438 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                 { (yylhs.value.termvec) = BUILDER.termvec(BUILDER.termvec(), (yystack_[0].value.term)); }
#line 998 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 66: // unaryargvec: unaryargvec ";" term
#line 439 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                 { (yylhs.value.termvec) = BUILDER.termvec((yystack_[2].value.termvec), (yystack_[0].value.term)); }
#line 1004 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 67: // ntermvec: term
#line 445 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                { (yylhs.value.termvec) = BUILDER.termvec(BUILDER.termvec(), (yystack_[0].value.term)); }
#line 1010 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 68: // ntermvec: ntermvec "," term
#line 446 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                { (yylhs.value.termvec) = BUILDER.termvec((yystack_[2].value.termvec), (yystack_[0].value.term)); }
#line 1016 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 69: // termvec: ntermvec
#line 450 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                  { (yylhs.value.termvec) = (yystack_[0].value.termvec); }
#line 1022 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 70: // termvec: %empty
#line 451 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                  { (yylhs.value.termvec) = BUILDER.termvec(); }
#line 1028 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 71: // tuple: ntermvec ","
#line 455 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                        { (yylhs.value.term) = BUILDER.term(yylhs.location, (yystack_[1].value.termvec), true); }
#line 1034 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 72: // tuple: ntermvec
#line 456 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                        { (yylhs.value.term) = BUILDER.term(yylhs.location, (yystack_[0].value.termvec), false); }
#line 1040 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 73: // tuple: ","
#line 457 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                        { (yylhs.value.term) = BUILDER.term(yylhs.location, BUILDER.termvec(), true); }
#line 1046 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 74: // tuple: %empty
#line 458 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                        { (yylhs.value.term) = BUILDER.term(yylhs.location, BUILDER.termvec(), false); }
#line 1052 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 75: // tuplevec_sem: tuple ";"
#line 461 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                   { (yylhs.value.termvec) = BUILDER.termvec(BUILDER.termvec(), (yystack_[1].value.term)); }
#line 1058 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 76: // tuplevec_sem: tuplevec_sem tuple ";"
#line 462 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                   { (yylhs.value.termvec) = BUILDER.termvec((yystack_[2].value.termvec), (yystack_[1].value.term)); }
#line 1064 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 77: // tuplevec: tuple
#line 465 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                               { (yylhs.value.termvec) = BUILDER.termvec(BUILDER.termvec(), (yystack_[0].value.term)); }
#line 1070 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 78: // tuplevec: tuplevec_sem tuple
#line 466 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                               { (yylhs.value.termvec) = BUILDER.termvec((yystack_[1].value.termvec), (yystack_[0].value.term)); }
#line 1076 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 79: // argvec: termvec
#line 469 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                               { (yylhs.value.termvecvec) = BUILDER.termvecvec(BUILDER.termvecvec(), (yystack_[0].value.termvec)); }
#line 1082 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 80: // argvec: argvec ";" termvec
#line 470 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                               { (yylhs.value.termvecvec) = BUILDER.termvecvec((yystack_[2].value.termvecvec), (yystack_[0].value.termvec)); }
#line 1088 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 81: // binaryargvec: term "," term
#line 474 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                  { (yylhs.value.termvecvec) = BUILDER.termvecvec(BUILDER.termvecvec(), BUILDER.termvec(BUILDER.termvec(BUILDER.termvec(), (yystack_[2].value.term)), (yystack_[0].value.term))); }
#line 1094 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 82: // binaryargvec: binaryargvec ";" term "," term
#line 475 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                  { (yylhs.value.termvecvec) = BUILDER.termvecvec((yystack_[4].value.termvecvec), BUILDER.termvec(BUILDER.termvec(BUILDER.termvec(), (yystack_[2].value.term)), (yystack_[0].value.term))); }
#line 1100 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 83: // cmp: ">"
#line 485 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
             { (yylhs.value.rel) = Relation::GT; }
#line 1106 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 84: // cmp: "<"
#line 486 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
             { (yylhs.value.rel) = Relation::LT; }
#line 1112 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 85: // cmp: ">="
#line 487 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
             { (yylhs.value.rel) = Relation::GEQ; }
#line 1118 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 86: // cmp: "<="
#line 488 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
             { (yylhs.value.rel) = Relation::LEQ; }
#line 1124 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 87: // cmp: "="
#line 489 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
             { (yylhs.value.rel) = Relation::EQ; }
#line 1130 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 88: // cmp: "!="
#line 490 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
             { (yylhs.value.rel) = Relation::NEQ; }
#line 1136 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 89: // atom: identifier
#line 494 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                      { (yylhs.value.term) = BUILDER.predRep(yylhs.location, false, String::fromRep((yystack_[0].value.str)), BUILDER.termvecvec(BUILDER.termvecvec(), BUILDER.termvec())); }
#line 1142 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 90: // atom: identifier "(" argvec ")"
#line 495 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                      { (yylhs.value.term) = BUILDER.predRep(yylhs.location, false, String::fromRep((yystack_[3].value.str)), (yystack_[1].value.termvecvec)); }
#line 1148 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 91: // atom: "-" identifier
#line 496 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                      { (yylhs.value.term) = BUILDER.predRep(yylhs.location, true, String::fromRep((yystack_[0].value.str)), BUILDER.termvecvec(BUILDER.termvecvec(), BUILDER.termvec())); }
#line 1154 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 92: // atom: "-" identifier "(" argvec ")"
#line 497 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                      { (yylhs.value.term) = BUILDER.predRep(yylhs.location, true, String::fromRep((yystack_[3].value.str)), (yystack_[1].value.termvecvec)); }
#line 1160 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 93: // literal: "#true"
#line 501 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                       { (yylhs.value.lit) = BUILDER.boollit(yylhs.location, true); }
#line 1166 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 94: // literal: "not" "#true"
#line 502 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                       { (yylhs.value.lit) = BUILDER.boollit(yylhs.location, false); }
#line 1172 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 95: // literal: "not" "not" "#true"
#line 503 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                       { (yylhs.value.lit) = BUILDER.boollit(yylhs.location, true); }
#line 1178 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 96: // literal: "#false"
#line 504 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                       { (yylhs.value.lit) = BUILDER.boollit(yylhs.location, false); }
#line 1184 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 97: // literal: "not" "#false"
#line 505 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                       { (yylhs.value.lit) = BUILDER.boollit(yylhs.location, true); }
#line 1190 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 98: // literal: "not" "not" "#false"
#line 506 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                       { (yylhs.value.lit) = BUILDER.boollit(yylhs.location, false); }
#line 1196 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 99: // literal: atom
#line 507 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                       { (yylhs.value.lit) = BUILDER.predlit(yylhs.location, NAF::POS, (yystack_[0].value.term)); }
#line 1202 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 100: // literal: "not" atom
#line 508 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                       { (yylhs.value.lit) = BUILDER.predlit(yylhs.location, NAF::NOT, (yystack_[0].value.term)); }
#line 1208 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 101: // literal: "not" "not" atom
#line 509 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                       { (yylhs.value.lit) = BUILDER.predlit(yylhs.location, NAF::NOTNOT, (yystack_[0].value.term)); }
#line 1214 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 102: // literal: term cmp term
#line 510 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                       { (yylhs.value.lit) = BUILDER.rellit(yylhs.location, (yystack_[1].value.rel), (yystack_[2].value.term), (yystack_[0].value.term)); }
#line 1220 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 103: // literal: "not" term cmp term
#line 511 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                       { (yylhs.value.lit) = BUILDER.rellit(yylhs.location, neg((yystack_[1].value.rel)), (yystack_[2].value.term), (yystack_[0].value.term)); }
#line 1226 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 104: // literal: "not" "not" term cmp term
#line 512 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                       { (yylhs.value.lit) = BUILDER.rellit(yylhs.location, (yystack_[1].value.rel), (yystack_[2].value.term), (yystack_[0].value.term)); }
#line 1232 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 105: // literal: csp_literal
#line 513 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                       { (yylhs.value.lit) = BUILDER.csplit((yystack_[0].value.csplit)); }
#line 1238 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 106: // csp_mul_term: "$" term "$*" term
#line 517 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                      { (yylhs.value.cspmulterm) = BUILDER.cspmulterm(yylhs.location, (yystack_[0].value.term),                     (yystack_[2].value.term)); }
#line 1244 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 107: // csp_mul_term: term "$*" "$" term
#line 518 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                      { (yylhs.value.cspmulterm) = BUILDER.cspmulterm(yylhs.location, (yystack_[3].value.term),                     (yystack_[0].value.term)); }
#line 1250 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 108: // csp_mul_term: "$" term
#line 519 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                      { (yylhs.value.cspmulterm) = BUILDER.cspmulterm(yylhs.location, BUILDER.term(yylhs.location, Symbol::createNum(1)), (yystack_[0].value.term)); }
#line 1256 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 109: // csp_mul_term: term
#line 520 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                      { (yylhs.value.cspmulterm) = BUILDER.cspmulterm(yylhs.location, (yystack_[0].value.term)); }
#line 1262 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 110: // csp_add_term: csp_add_term "$+" csp_mul_term
#line 524 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                  { (yylhs.value.cspaddterm) = BUILDER.cspaddterm(yylhs.location, (yystack_[2].value.cspaddterm), (yystack_[0].value.cspmulterm), true); }
#line 1268 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 111: // csp_add_term: csp_add_term "$-" csp_mul_term
#line 525 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                  { (yylhs.value.cspaddterm) = BUILDER.cspaddterm(yylhs.location, (yystack_[2].value.cspaddterm), (yystack_[0].value.cspmulterm), false); }
#line 1274 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 112: // csp_add_term: csp_mul_term
#line 526 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                  { (yylhs.value.cspaddterm) = BUILDER.cspaddterm(yylhs.location, (yystack_[0].value.cspmulterm)); }
#line 1280 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 113: // csp_rel: "$>"
#line 530 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
              { (yylhs.value.rel) = Relation::GT; }
#line 1286 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 114: // csp_rel: "$<"
#line 531 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
              { (yylhs.value.rel) = Relation::LT; }
#line 1292 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 115: // csp_rel: "$>="
#line 532 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
              { (yylhs.value.rel) = Relation::GEQ; }
#line 1298 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 116: // csp_rel: "$<="
#line 533 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
              { (yylhs.value.rel) = Relation::LEQ; }
#line 1304 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 117: // csp_rel: "$="
#line 534 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
              { (yylhs.value.rel) = Relation::EQ; }
#line 1310 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 118: // csp_rel: "$!="
#line 535 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
              { (yylhs.value.rel) = Relation::NEQ; }
#line 1316 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 119: // csp_literal: csp_literal csp_rel csp_add_term
#line 539 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                    { (yylhs.value.csplit) = BUILDER.csplit(yylhs.location, (yystack_[2].value.csplit), (yystack_[1].value.rel), (yystack_[0].value.cspaddterm)); }
#line 1322 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 120: // csp_literal: csp_add_term csp_rel csp_add_term
#line 540 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                    { (yylhs.value.csplit) = BUILDER.csplit(yylhs.location, (yystack_[2].value.cspaddterm),   (yystack_[1].value.rel), (yystack_[0].value.cspaddterm)); }
#line 1328 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 121: // nlitvec: literal
#line 548 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                      { (yylhs.value.litvec) = BUILDER.litvec(BUILDER.litvec(), (yystack_[0].value.lit)); }
#line 1334 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 122: // nlitvec: nlitvec "," literal
#line 549 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                      { (yylhs.value.litvec) = BUILDER.litvec((yystack_[2].value.litvec), (yystack_[0].value.lit)); }
#line 1340 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 123: // litvec: nlitvec
#line 553 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                   { (yylhs.value.litvec) = (yystack_[0].value.litvec); }
#line 1346 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 124: // litvec: %empty
#line 554 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                   { (yylhs.value.litvec) = BUILDER.litvec(); }
#line 1352 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 125: // optcondition: ":" litvec
#line 558 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                        { (yylhs.value.litvec) = (yystack_[0].value.litvec); }
#line 1358 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 126: // optcondition: %empty
#line 559 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                        { (yylhs.value.litvec) = BUILDER.litvec(); }
#line 1364 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 127: // aggregatefunction: "#sum"
#line 563 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
            { (yylhs.value.fun) = AggregateFunction::SUM; }
#line 1370 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 128: // aggregatefunction: "#sum+"
#line 564 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
            { (yylhs.value.fun) = AggregateFunction::SUMP; }
#line 1376 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 129: // aggregatefunction: "#min"
#line 565 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
            { (yylhs.value.fun) = AggregateFunction::MIN; }
#line 1382 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 130: // aggregatefunction: "#max"
#line 566 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
            { (yylhs.value.fun) = AggregateFunction::MAX; }
#line 1388 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 131: // aggregatefunction: "#count"
#line 567 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
            { (yylhs.value.fun) = AggregateFunction::COUNT; }
#line 1394 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 132: // bodyaggrelem: ":" litvec
#line 573 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                        { (yylhs.value.bodyaggrelem) = { BUILDER.termvec(), (yystack_[0].value.litvec) }; }
#line 1400 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 133: // bodyaggrelem: ntermvec optcondition
#line 574 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                        { (yylhs.value.bodyaggrelem) = { (yystack_[1].value.termvec), (yystack_[0].value.litvec) }; }
#line 1406 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 134: // bodyaggrelemvec: bodyaggrelem
#line 578 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                  { (yylhs.value.bodyaggrelemvec) = BUILDER.bodyaggrelemvec(BUILDER.bodyaggrelemvec(), (yystack_[0].value.bodyaggrelem).first, (yystack_[0].value.bodyaggrelem).second); }
#line 1412 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 135: // bodyaggrelemvec: bodyaggrelemvec ";" bodyaggrelem
#line 579 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                  { (yylhs.value.bodyaggrelemvec) = BUILDER.bodyaggrelemvec((yystack_[2].value.bodyaggrelemvec), (yystack_[0].value.bodyaggrelem).first, (yystack_[0].value.bodyaggrelem).second); }
#line 1418 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 136: // altbodyaggrelem: literal optcondition
#line 585 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                      { (yylhs.value.lbodyaggrelem) = { (yystack_[1].value.lit), (yystack_[0].value.litvec) }; }
#line 1424 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 137: // altbodyaggrelemvec: altbodyaggrelem
#line 589 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                        { (yylhs.value.condlitlist) = BUILDER.condlitvec(BUILDER.condlitvec(), (yystack_[0].value.lbodyaggrelem).first, (yystack_[0].value.lbodyaggrelem).second); }
#line 1430 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 138: // altbodyaggrelemvec: altbodyaggrelemvec ";" altbodyaggrelem
#line 590 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                        { (yylhs.value.condlitlist) = BUILDER.condlitvec((yystack_[2].value.condlitlist), (yystack_[0].value.lbodyaggrelem).first, (yystack_[0].value.lbodyaggrelem).second); }
#line 1436 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 139: // bodyaggregate: "{" "}"
#line 596 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                                  { (yylhs.value.aggr) = { AggregateFunction::COUNT, true, BUILDER.condlitvec() }; }
#line 1442 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 140: // bodyaggregate: "{" altbodyaggrelemvec "}"
#line 597 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                                  { (yylhs.value.aggr) = { AggregateFunction::COUNT, true, (yystack_[1].value.condlitlist) }; }
#line 1448 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 141: // bodyaggregate: aggregatefunction "{" "}"
#line 598 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                                  { (yylhs.value.aggr) = { (yystack_[2].value.fun), false, BUILDER.bodyaggrelemvec() }; }
#line 1454 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 142: // bodyaggregate: aggregatefunction "{" bodyaggrelemvec "}"
#line 599 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                                  { (yylhs.value.aggr) = { (yystack_[3].value.fun), false, (yystack_[1].value.bodyaggrelemvec) }; }
#line 1460 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 143: // upper: term
#line 603 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                       { (yylhs.value.bound) = { Relation::LEQ, (yystack_[0].value.term) }; }
#line 1466 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 144: // upper: cmp term
#line 604 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                       { (yylhs.value.bound) = { (yystack_[1].value.rel), (yystack_[0].value.term) }; }
#line 1472 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 145: // upper: %empty
#line 605 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                       { (yylhs.value.bound) = { Relation::LEQ, TermUid(-1) }; }
#line 1478 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 146: // lubodyaggregate: term bodyaggregate upper
#line 609 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                 { (yylhs.value.uid) = lexer->aggregate((yystack_[1].value.aggr).fun, (yystack_[1].value.aggr).choice, (yystack_[1].value.aggr).elems, lexer->boundvec(Relation::LEQ, (yystack_[2].value.term), (yystack_[0].value.bound).rel, (yystack_[0].value.bound).term)); }
#line 1484 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 147: // lubodyaggregate: term cmp bodyaggregate upper
#line 610 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                 { (yylhs.value.uid) = lexer->aggregate((yystack_[1].value.aggr).fun, (yystack_[1].value.aggr).choice, (yystack_[1].value.aggr).elems, lexer->boundvec((yystack_[2].value.rel), (yystack_[3].value.term), (yystack_[0].value.bound).rel, (yystack_[0].value.bound).term)); }
#line 1490 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 148: // lubodyaggregate: bodyaggregate upper
#line 611 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                 { (yylhs.value.uid) = lexer->aggregate((yystack_[1].value.aggr).fun, (yystack_[1].value.aggr).choice, (yystack_[1].value.aggr).elems, lexer->boundvec(Relation::LEQ, TermUid(-1), (yystack_[0].value.bound).rel, (yystack_[0].value.bound).term)); }
#line 1496 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 149: // lubodyaggregate: theory_atom
#line 612 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                 { (yylhs.value.uid) = lexer->aggregate((yystack_[0].value.theoryAtom)); }
#line 1502 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 150: // headaggrelemvec: headaggrelemvec ";" termvec ":" literal optcondition
#line 618 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                                                     { (yylhs.value.headaggrelemvec) = BUILDER.headaggrelemvec((yystack_[5].value.headaggrelemvec), (yystack_[3].value.termvec), (yystack_[1].value.lit), (yystack_[0].value.litvec)); }
#line 1508 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 151: // headaggrelemvec: termvec ":" literal optcondition
#line 619 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                                                     { (yylhs.value.headaggrelemvec) = BUILDER.headaggrelemvec(BUILDER.headaggrelemvec(), (yystack_[3].value.termvec), (yystack_[1].value.lit), (yystack_[0].value.litvec)); }
#line 1514 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 152: // altheadaggrelemvec: literal optcondition
#line 623 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                                  { (yylhs.value.condlitlist) = BUILDER.condlitvec(BUILDER.condlitvec(), (yystack_[1].value.lit), (yystack_[0].value.litvec)); }
#line 1520 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 153: // altheadaggrelemvec: altheadaggrelemvec ";" literal optcondition
#line 624 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                                  { (yylhs.value.condlitlist) = BUILDER.condlitvec((yystack_[3].value.condlitlist), (yystack_[1].value.lit), (yystack_[0].value.litvec)); }
#line 1526 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 154: // headaggregate: aggregatefunction "{" "}"
#line 630 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                                  { (yylhs.value.aggr) = { (yystack_[2].value.fun), false, BUILDER.headaggrelemvec() }; }
#line 1532 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 155: // headaggregate: aggregatefunction "{" headaggrelemvec "}"
#line 631 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                                  { (yylhs.value.aggr) = { (yystack_[3].value.fun), false, (yystack_[1].value.headaggrelemvec) }; }
#line 1538 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 156: // headaggregate: "{" "}"
#line 632 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                                  { (yylhs.value.aggr) = { AggregateFunction::COUNT, true, BUILDER.condlitvec()}; }
#line 1544 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 157: // headaggregate: "{" altheadaggrelemvec "}"
#line 633 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                                  { (yylhs.value.aggr) = { AggregateFunction::COUNT, true, (yystack_[1].value.condlitlist)}; }
#line 1550 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 158: // luheadaggregate: term headaggregate upper
#line 637 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                 { (yylhs.value.uid) = lexer->aggregate((yystack_[1].value.aggr).fun, (yystack_[1].value.aggr).choice, (yystack_[1].value.aggr).elems, lexer->boundvec(Relation::LEQ, (yystack_[2].value.term), (yystack_[0].value.bound).rel, (yystack_[0].value.bound).term)); }
#line 1556 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 159: // luheadaggregate: term cmp headaggregate upper
#line 638 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                 { (yylhs.value.uid) = lexer->aggregate((yystack_[1].value.aggr).fun, (yystack_[1].value.aggr).choice, (yystack_[1].value.aggr).elems, lexer->boundvec((yystack_[2].value.rel), (yystack_[3].value.term), (yystack_[0].value.bound).rel, (yystack_[0].value.bound).term)); }
#line 1562 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 160: // luheadaggregate: headaggregate upper
#line 639 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                 { (yylhs.value.uid) = lexer->aggregate((yystack_[1].value.aggr).fun, (yystack_[1].value.aggr).choice, (yystack_[1].value.aggr).elems, lexer->boundvec(Relation::LEQ, TermUid(-1), (yystack_[0].value.bound).rel, (yystack_[0].value.bound).term)); }
#line 1568 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 161: // luheadaggregate: theory_atom
#line 640 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                 { (yylhs.value.uid) = lexer->aggregate((yystack_[0].value.theoryAtom)); }
#line 1574 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 162: // ncspelemvec: termvec ":" csp_add_term optcondition
#line 646 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                                                    { (yylhs.value.cspelemvec) = BUILDER.cspelemvec(BUILDER.cspelemvec(), yylhs.location, (yystack_[3].value.termvec), (yystack_[1].value.cspaddterm), (yystack_[0].value.litvec)); }
#line 1580 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 163: // ncspelemvec: cspelemvec ";" termvec ":" csp_add_term optcondition
#line 647 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                                                    { (yylhs.value.cspelemvec) = BUILDER.cspelemvec((yystack_[5].value.cspelemvec), yylhs.location, (yystack_[3].value.termvec), (yystack_[1].value.cspaddterm), (yystack_[0].value.litvec)); }
#line 1586 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 164: // cspelemvec: ncspelemvec
#line 651 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                       { (yylhs.value.cspelemvec) = (yystack_[0].value.cspelemvec); }
#line 1592 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 165: // cspelemvec: %empty
#line 652 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                       { (yylhs.value.cspelemvec) = BUILDER.cspelemvec(); }
#line 1598 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 166: // disjoint: "#disjoint" "{" cspelemvec "}"
#line 656 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                       { (yylhs.value.disjoint) = { NAF::POS, (yystack_[1].value.cspelemvec) }; }
#line 1604 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 167: // disjoint: "not" "#disjoint" "{" cspelemvec "}"
#line 657 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                       { (yylhs.value.disjoint) = { NAF::NOT, (yystack_[1].value.cspelemvec) }; }
#line 1610 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 168: // disjoint: "not" "not" "#disjoint" "{" cspelemvec "}"
#line 658 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                       { (yylhs.value.disjoint) = { NAF::NOTNOT, (yystack_[1].value.cspelemvec) }; }
#line 1616 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 169: // conjunction: literal ":" litvec
#line 665 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                      { (yylhs.value.lbodyaggrelem) = { (yystack_[2].value.lit), (yystack_[0].value.litvec) }; }
#line 1622 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 172: // disjunctionsep: disjunctionsep literal ","
#line 679 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                                { (yylhs.value.condlitlist) = BUILDER.condlitvec((yystack_[2].value.condlitlist), (yystack_[1].value.lit), BUILDER.litvec()); }
#line 1628 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 173: // disjunctionsep: disjunctionsep literal dsym
#line 680 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                                { (yylhs.value.condlitlist) = BUILDER.condlitvec((yystack_[2].value.condlitlist), (yystack_[1].value.lit), BUILDER.litvec()); }
#line 1634 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 174: // disjunctionsep: disjunctionsep literal ":" ";"
#line 681 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                                { (yylhs.value.condlitlist) = BUILDER.condlitvec((yystack_[3].value.condlitlist), (yystack_[2].value.lit), BUILDER.litvec()); }
#line 1640 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 175: // disjunctionsep: disjunctionsep literal ":" nlitvec dsym
#line 682 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                                { (yylhs.value.condlitlist) = BUILDER.condlitvec((yystack_[4].value.condlitlist), (yystack_[3].value.lit), (yystack_[1].value.litvec)); }
#line 1646 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 176: // disjunctionsep: literal ","
#line 683 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                                { (yylhs.value.condlitlist) = BUILDER.condlitvec(BUILDER.condlitvec(), (yystack_[1].value.lit), BUILDER.litvec()); }
#line 1652 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 177: // disjunctionsep: literal dsym
#line 684 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                                { (yylhs.value.condlitlist) = BUILDER.condlitvec(BUILDER.condlitvec(), (yystack_[1].value.lit), BUILDER.litvec()); }
#line 1658 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 178: // disjunctionsep: literal ":" nlitvec dsym
#line 685 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                                { (yylhs.value.condlitlist) = BUILDER.condlitvec(BUILDER.condlitvec(), (yystack_[3].value.lit), (yystack_[1].value.litvec)); }
#line 1664 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 179: // disjunctionsep: literal ":" ";"
#line 686 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                                { (yylhs.value.condlitlist) = BUILDER.condlitvec(BUILDER.condlitvec(), (yystack_[2].value.lit), BUILDER.litvec()); }
#line 1670 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 180: // disjunction: disjunctionsep literal optcondition
#line 690 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                          { (yylhs.value.condlitlist) = BUILDER.condlitvec((yystack_[2].value.condlitlist), (yystack_[1].value.lit), (yystack_[0].value.litvec)); }
#line 1676 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 181: // disjunction: literal ":" litvec
#line 691 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                          { (yylhs.value.condlitlist) = BUILDER.condlitvec(BUILDER.condlitvec(), (yystack_[2].value.lit), (yystack_[0].value.litvec)); }
#line 1682 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 182: // bodycomma: bodycomma literal ","
#line 698 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                              { (yylhs.value.body) = BUILDER.bodylit((yystack_[2].value.body), (yystack_[1].value.lit)); }
#line 1688 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 183: // bodycomma: bodycomma literal ";"
#line 699 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                              { (yylhs.value.body) = BUILDER.bodylit((yystack_[2].value.body), (yystack_[1].value.lit)); }
#line 1694 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 184: // bodycomma: bodycomma lubodyaggregate ","
#line 700 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                              { (yylhs.value.body) = lexer->bodyaggregate((yystack_[2].value.body), yystack_[1].location, NAF::POS, (yystack_[1].value.uid)); }
#line 1700 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 185: // bodycomma: bodycomma lubodyaggregate ";"
#line 701 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                              { (yylhs.value.body) = lexer->bodyaggregate((yystack_[2].value.body), yystack_[1].location, NAF::POS, (yystack_[1].value.uid)); }
#line 1706 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 186: // bodycomma: bodycomma "not" lubodyaggregate ","
#line 702 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                              { (yylhs.value.body) = lexer->bodyaggregate((yystack_[3].value.body), yystack_[1].location + yystack_[2].location, NAF::NOT, (yystack_[1].value.uid)); }
#line 1712 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 187: // bodycomma: bodycomma "not" lubodyaggregate ";"
#line 703 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                              { (yylhs.value.body) = lexer->bodyaggregate((yystack_[3].value.body), yystack_[1].location + yystack_[2].location, NAF::NOT, (yystack_[1].value.uid)); }
#line 1718 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 188: // bodycomma: bodycomma "not" "not" lubodyaggregate ","
#line 704 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                              { (yylhs.value.body) = lexer->bodyaggregate((yystack_[4].value.body), yystack_[1].location + yystack_[3].location, NAF::NOTNOT, (yystack_[1].value.uid)); }
#line 1724 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 189: // bodycomma: bodycomma "not" "not" lubodyaggregate ";"
#line 705 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                              { (yylhs.value.body) = lexer->bodyaggregate((yystack_[4].value.body), yystack_[1].location + yystack_[3].location, NAF::NOTNOT, (yystack_[1].value.uid)); }
#line 1730 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 190: // bodycomma: bodycomma conjunction ";"
#line 706 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                              { (yylhs.value.body) = BUILDER.conjunction((yystack_[2].value.body), yystack_[1].location, (yystack_[1].value.lbodyaggrelem).first, (yystack_[1].value.lbodyaggrelem).second); }
#line 1736 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 191: // bodycomma: bodycomma disjoint ";"
#line 707 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                              { (yylhs.value.body) = BUILDER.disjoint((yystack_[2].value.body), yystack_[1].location, (yystack_[1].value.disjoint).first, (yystack_[1].value.disjoint).second); }
#line 1742 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 192: // bodycomma: %empty
#line 708 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                              { (yylhs.value.body) = BUILDER.body(); }
#line 1748 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 193: // bodydot: bodycomma literal "."
#line 712 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                            { (yylhs.value.body) = BUILDER.bodylit((yystack_[2].value.body), (yystack_[1].value.lit)); }
#line 1754 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 194: // bodydot: bodycomma lubodyaggregate "."
#line 713 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                            { (yylhs.value.body) = lexer->bodyaggregate((yystack_[2].value.body), yystack_[1].location, NAF::POS, (yystack_[1].value.uid)); }
#line 1760 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 195: // bodydot: bodycomma "not" lubodyaggregate "."
#line 714 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                            { (yylhs.value.body) = lexer->bodyaggregate((yystack_[3].value.body), yystack_[1].location + yystack_[2].location, NAF::NOT, (yystack_[1].value.uid)); }
#line 1766 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 196: // bodydot: bodycomma "not" "not" lubodyaggregate "."
#line 715 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                            { (yylhs.value.body) = lexer->bodyaggregate((yystack_[4].value.body), yystack_[1].location + yystack_[3].location, NAF::NOTNOT, (yystack_[1].value.uid)); }
#line 1772 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 197: // bodydot: bodycomma conjunction "."
#line 716 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                            { (yylhs.value.body) = BUILDER.conjunction((yystack_[2].value.body), yystack_[1].location, (yystack_[1].value.lbodyaggrelem).first, (yystack_[1].value.lbodyaggrelem).second); }
#line 1778 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 198: // bodydot: bodycomma disjoint "."
#line 717 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                            { (yylhs.value.body) = BUILDER.disjoint((yystack_[2].value.body), yystack_[1].location, (yystack_[1].value.disjoint).first, (yystack_[1].value.disjoint).second); }
#line 1784 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 199: // bodyconddot: "."
#line 721 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                      { (yylhs.value.body) = BUILDER.body(); }
#line 1790 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 200: // bodyconddot: ":" "."
#line 722 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                      { (yylhs.value.body) = BUILDER.body(); }
#line 1796 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 201: // bodyconddot: ":" bodydot
#line 723 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                            { (yylhs.value.body) = (yystack_[0].value.body); }
#line 1802 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 202: // head: literal
#line 726 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                              { (yylhs.value.head) = BUILDER.headlit((yystack_[0].value.lit)); }
#line 1808 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 203: // head: disjunction
#line 727 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                              { (yylhs.value.head) = BUILDER.disjunction(yylhs.location, (yystack_[0].value.condlitlist)); }
#line 1814 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 204: // head: luheadaggregate
#line 728 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                              { (yylhs.value.head) = lexer->headaggregate(yylhs.location, (yystack_[0].value.uid)); }
#line 1820 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 205: // statement: head "."
#line 732 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                              { BUILDER.rule(yylhs.location, (yystack_[1].value.head)); }
#line 1826 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 206: // statement: head ":-" "."
#line 733 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                              { BUILDER.rule(yylhs.location, (yystack_[2].value.head)); }
#line 1832 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 207: // statement: head ":-" bodydot
#line 734 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                              { BUILDER.rule(yylhs.location, (yystack_[2].value.head), (yystack_[0].value.body)); }
#line 1838 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 208: // statement: ":-" bodydot
#line 735 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                              { BUILDER.rule(yylhs.location, BUILDER.headlit(BUILDER.boollit(yylhs.location, false)), (yystack_[0].value.body)); }
#line 1844 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 209: // statement: ":-" "."
#line 736 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                              { BUILDER.rule(yylhs.location, BUILDER.headlit(BUILDER.boollit(yylhs.location, false)), BUILDER.body()); }
#line 1850 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 210: // statement: disjoint ":-" bodydot
#line 742 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                    { BUILDER.rule(yylhs.location, BUILDER.headlit(BUILDER.boollit(yystack_[2].location, false)), BUILDER.disjoint((yystack_[0].value.body), yystack_[2].location, inv((yystack_[2].value.disjoint).first), (yystack_[2].value.disjoint).second)); }
#line 1856 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 211: // statement: disjoint ":-" "."
#line 743 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                    { BUILDER.rule(yylhs.location, BUILDER.headlit(BUILDER.boollit(yystack_[2].location, false)), BUILDER.disjoint(BUILDER.body(), yystack_[2].location, inv((yystack_[2].value.disjoint).first), (yystack_[2].value.disjoint).second)); }
#line 1862 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 212: // statement: disjoint "."
#line 744 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                    { BUILDER.rule(yylhs.location, BUILDER.headlit(BUILDER.boollit(yystack_[1].location, false)), BUILDER.disjoint(BUILDER.body(), yystack_[1].location, inv((yystack_[1].value.disjoint).first), (yystack_[1].value.disjoint).second)); }
#line 1868 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 213: // optimizetuple: "," ntermvec
#line 750 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                          { (yylhs.value.termvec) = (yystack_[0].value.termvec); }
#line 1874 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 214: // optimizetuple: %empty
#line 751 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                          { (yylhs.value.termvec) = BUILDER.termvec(); }
#line 1880 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 215: // optimizeweight: term "@" term
#line 755 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                         { (yylhs.value.termpair) = {(yystack_[2].value.term), (yystack_[0].value.term)}; }
#line 1886 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 216: // optimizeweight: term
#line 756 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                         { (yylhs.value.termpair) = {(yystack_[0].value.term), BUILDER.term(yylhs.location, Symbol::createNum(0))}; }
#line 1892 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 217: // optimizelitvec: literal
#line 760 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                            { (yylhs.value.body) = BUILDER.bodylit(BUILDER.body(), (yystack_[0].value.lit)); }
#line 1898 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 218: // optimizelitvec: optimizelitvec "," literal
#line 761 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                            { (yylhs.value.body) = BUILDER.bodylit((yystack_[2].value.body), (yystack_[0].value.lit)); }
#line 1904 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 219: // optimizecond: ":" optimizelitvec
#line 765 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                               { (yylhs.value.body) = (yystack_[0].value.body); }
#line 1910 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 220: // optimizecond: ":"
#line 766 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                               { (yylhs.value.body) = BUILDER.body(); }
#line 1916 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 221: // optimizecond: %empty
#line 767 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                               { (yylhs.value.body) = BUILDER.body(); }
#line 1922 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 222: // statement: ":~" bodydot "[" optimizeweight optimizetuple "]"
#line 771 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                                       { BUILDER.optimize(yylhs.location, (yystack_[2].value.termpair).first, (yystack_[2].value.termpair).second, (yystack_[1].value.termvec), (yystack_[4].value.body)); }
#line 1928 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 223: // statement: ":~" "." "[" optimizeweight optimizetuple "]"
#line 772 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                                       { BUILDER.optimize(yylhs.location, (yystack_[2].value.termpair).first, (yystack_[2].value.termpair).second, (yystack_[1].value.termvec), BUILDER.body()); }
#line 1934 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 224: // maxelemlist: optimizeweight optimizetuple optimizecond
#line 776 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                                          { BUILDER.optimize(yylhs.location, BUILDER.term(yystack_[2].location, UnOp::NEG, (yystack_[2].value.termpair).first), (yystack_[2].value.termpair).second, (yystack_[1].value.termvec), (yystack_[0].value.body)); }
#line 1940 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 225: // maxelemlist: maxelemlist ";" optimizeweight optimizetuple optimizecond
#line 777 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                                          { BUILDER.optimize(yylhs.location, BUILDER.term(yystack_[2].location, UnOp::NEG, (yystack_[2].value.termpair).first), (yystack_[2].value.termpair).second, (yystack_[1].value.termvec), (yystack_[0].value.body)); }
#line 1946 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 226: // minelemlist: optimizeweight optimizetuple optimizecond
#line 781 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                                          { BUILDER.optimize(yylhs.location, (yystack_[2].value.termpair).first, (yystack_[2].value.termpair).second, (yystack_[1].value.termvec), (yystack_[0].value.body)); }
#line 1952 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 227: // minelemlist: minelemlist ";" optimizeweight optimizetuple optimizecond
#line 782 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                                          { BUILDER.optimize(yylhs.location, (yystack_[2].value.termpair).first, (yystack_[2].value.termpair).second, (yystack_[1].value.termvec), (yystack_[0].value.body)); }
#line 1958 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 232: // statement: "#showsig" identifier "/" "<NUMBER>" "."
#line 795 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                       { BUILDER.showsig(yylhs.location, Sig(String::fromRep((yystack_[3].value.str)), (yystack_[1].value.num), false), false); }
#line 1964 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 233: // statement: "#showsig" "-" identifier "/" "<NUMBER>" "."
#line 796 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                       { BUILDER.showsig(yylhs.location, Sig(String::fromRep((yystack_[3].value.str)), (yystack_[1].value.num), true), false); }
#line 1970 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 234: // statement: "#show" "."
#line 797 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                       { BUILDER.showsig(yylhs.location, Sig("", 0, false), false); }
#line 1976 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 235: // statement: "#show" term ":" bodydot
#line 798 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                       { BUILDER.show(yylhs.location, (yystack_[2].value.term), (yystack_[0].value.body), false); }
#line 1982 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 236: // statement: "#show" term "."
#line 799 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                       { BUILDER.show(yylhs.location, (yystack_[1].value.term), BUILDER.body(), false); }
#line 1988 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 237: // statement: "#showsig" "$" identifier "/" "<NUMBER>" "."
#line 800 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                       { BUILDER.showsig(yylhs.location, Sig(String::fromRep((yystack_[3].value.str)), (yystack_[1].value.num), false), true); }
#line 1994 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 238: // statement: "#show" "$" term ":" bodydot
#line 801 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                       { BUILDER.show(yylhs.location, (yystack_[2].value.term), (yystack_[0].value.body), true); }
#line 2000 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 239: // statement: "#show" "$" term "."
#line 802 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                       { BUILDER.show(yylhs.location, (yystack_[1].value.term), BUILDER.body(), true); }
#line 2006 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 240: // statement: "#defined" identifier "/" "<NUMBER>" "."
#line 808 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                       { BUILDER.defined(yylhs.location, Sig(String::fromRep((yystack_[3].value.str)), (yystack_[1].value.num), false)); }
#line 2012 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 241: // statement: "#defined" "-" identifier "/" "<NUMBER>" "."
#line 809 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                       { BUILDER.defined(yylhs.location, Sig(String::fromRep((yystack_[3].value.str)), (yystack_[1].value.num), true)); }
#line 2018 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 242: // statement: "#edge" "(" binaryargvec ")" bodyconddot
#line 814 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                              { BUILDER.edge(yylhs.location, (yystack_[2].value.termvecvec), (yystack_[0].value.body)); }
#line 2024 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 243: // statement: "#heuristic" atom bodyconddot "[" term "@" term "," term "]"
#line 820 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                                                           { BUILDER.heuristic(yylhs.location, (yystack_[8].value.term), (yystack_[7].value.body), (yystack_[5].value.term), (yystack_[3].value.term), (yystack_[1].value.term)); }
#line 2030 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 244: // statement: "#heuristic" atom bodyconddot "[" term "," term "]"
#line 821 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                                                           { BUILDER.heuristic(yylhs.location, (yystack_[6].value.term), (yystack_[5].value.body), (yystack_[3].value.term), BUILDER.term(yylhs.location, Symbol::createNum(0)), (yystack_[1].value.term)); }
#line 2036 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 245: // statement: "#project" identifier "/" "<NUMBER>" "."
#line 827 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                           { BUILDER.project(yylhs.location, Sig(String::fromRep((yystack_[3].value.str)), (yystack_[1].value.num), false)); }
#line 2042 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 246: // statement: "#project" "-" identifier "/" "<NUMBER>" "."
#line 828 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                           { BUILDER.project(yylhs.location, Sig(String::fromRep((yystack_[3].value.str)), (yystack_[1].value.num), true)); }
#line 2048 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 247: // statement: "#project" atom bodyconddot
#line 829 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                           { BUILDER.project(yylhs.location, (yystack_[1].value.term), (yystack_[0].value.body)); }
#line 2054 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 248: // define: identifier "=" constterm
#line 835 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                        {  BUILDER.define(yylhs.location, String::fromRep((yystack_[2].value.str)), (yystack_[0].value.term), false, LOGGER); }
#line 2060 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 249: // statement: "#const" identifier "=" constterm "."
#line 839 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                                         { BUILDER.define(yylhs.location, String::fromRep((yystack_[3].value.str)), (yystack_[1].value.term), true, LOGGER); }
#line 2066 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 250: // statement: "#const" identifier "=" constterm "." "[" "default" "]"
#line 840 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                                         { BUILDER.define(yylhs.location, String::fromRep((yystack_[6].value.str)), (yystack_[4].value.term), true, LOGGER); }
#line 2072 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 251: // statement: "#const" identifier "=" constterm "." "[" "override" "]"
#line 841 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                                         { BUILDER.define(yylhs.location, String::fromRep((yystack_[6].value.str)), (yystack_[4].value.term), false, LOGGER); }
#line 2078 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 252: // statement: "<SCRIPT>" "(" "<IDENTIFIER>" ")" "<CODE>" "."
#line 847 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                           { BUILDER.script(yylhs.location, String::fromRep((yystack_[3].value.str)), String::fromRep((yystack_[1].value.str))); }
#line 2084 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 253: // statement: "#include" "<STRING>" "."
#line 853 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                         { lexer->include(String::fromRep((yystack_[1].value.str)), yylhs.location, false, LOGGER); }
#line 2090 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 254: // statement: "#include" "<" identifier ">" "."
#line 854 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                         { lexer->include(String::fromRep((yystack_[2].value.str)), yylhs.location, true, LOGGER); }
#line 2096 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 255: // nidlist: nidlist "," identifier
#line 860 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                         { (yylhs.value.idlist) = BUILDER.idvec((yystack_[2].value.idlist), yystack_[0].location, String::fromRep((yystack_[0].value.str))); }
#line 2102 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 256: // nidlist: identifier
#line 861 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                         { (yylhs.value.idlist) = BUILDER.idvec(BUILDER.idvec(), yystack_[0].location, String::fromRep((yystack_[0].value.str))); }
#line 2108 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 257: // idlist: %empty
#line 865 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                    { (yylhs.value.idlist) = BUILDER.idvec(); }
#line 2114 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 258: // idlist: nidlist
#line 866 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                    { (yylhs.value.idlist) = (yystack_[0].value.idlist); }
#line 2120 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 259: // statement: "#program" identifier "(" idlist ")" "."
#line 870 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                            { BUILDER.block(yylhs.location, String::fromRep((yystack_[4].value.str)), (yystack_[2].value.idlist)); }
#line 2126 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 260: // statement: "#program" identifier "."
#line 871 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                            { BUILDER.block(yylhs.location, String::fromRep((yystack_[1].value.str)), BUILDER.idvec()); }
#line 2132 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 261: // statement: "#external" atom ":" bodydot
#line 877 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                                { BUILDER.external(yylhs.location, (yystack_[2].value.term), (yystack_[0].value.body), BUILDER.term(yylhs.location, Symbol::createId("false"))); }
#line 2138 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 262: // statement: "#external" atom ":" "."
#line 878 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                                { BUILDER.external(yylhs.location, (yystack_[2].value.term), BUILDER.body(), BUILDER.term(yylhs.location, Symbol::createId("false"))); }
#line 2144 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 263: // statement: "#external" atom "."
#line 879 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                                { BUILDER.external(yylhs.location, (yystack_[1].value.term), BUILDER.body(), BUILDER.term(yylhs.location, Symbol::createId("false"))); }
#line 2150 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 264: // statement: "#external" atom ":" bodydot "[" term "]"
#line 880 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                                { BUILDER.external(yylhs.location, (yystack_[5].value.term), (yystack_[3].value.body), (yystack_[1].value.term)); }
#line 2156 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 265: // statement: "#external" atom ":" "." "[" term "]"
#line 881 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                                { BUILDER.external(yylhs.location, (yystack_[5].value.term), BUILDER.body(), (yystack_[1].value.term)); }
#line 2162 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 266: // statement: "#external" atom "." "[" term "]"
#line 882 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                                { BUILDER.external(yylhs.location, (yystack_[4].value.term), BUILDER.body(), (yystack_[1].value.term)); }
#line 2168 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 267: // theory_op: "<THEORYOP>"
#line 888 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                     { (yylhs.value.str) = (yystack_[0].value.str); }
#line 2174 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 268: // theory_op: "not"
#line 889 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                     { (yylhs.value.str) = (yystack_[0].value.str); }
#line 2180 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 269: // theory_op_list: theory_op_list theory_op
#line 895 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                        { (yylhs.value.theoryOps) = BUILDER.theoryops((yystack_[1].value.theoryOps), String::fromRep((yystack_[0].value.str))); }
#line 2186 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 270: // theory_op_list: theory_op
#line 896 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                        { (yylhs.value.theoryOps) = BUILDER.theoryops(BUILDER.theoryops(), String::fromRep((yystack_[0].value.str))); }
#line 2192 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 271: // theory_term: "{" theory_opterm_list "}"
#line 900 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                                          { (yylhs.value.theoryTerm) = BUILDER.theorytermset(yylhs.location, (yystack_[1].value.theoryOpterms)); }
#line 2198 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 272: // theory_term: "[" theory_opterm_list "]"
#line 901 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                                          { (yylhs.value.theoryTerm) = BUILDER.theoryoptermlist(yylhs.location, (yystack_[1].value.theoryOpterms)); }
#line 2204 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 273: // theory_term: "(" ")"
#line 902 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                                          { (yylhs.value.theoryTerm) = BUILDER.theorytermtuple(yylhs.location, BUILDER.theoryopterms()); }
#line 2210 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 274: // theory_term: "(" theory_opterm ")"
#line 903 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                                          { (yylhs.value.theoryTerm) = BUILDER.theorytermopterm(yylhs.location, (yystack_[1].value.theoryOpterm)); }
#line 2216 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 275: // theory_term: "(" theory_opterm "," ")"
#line 904 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                                          { (yylhs.value.theoryTerm) = BUILDER.theorytermtuple(yylhs.location, BUILDER.theoryopterms(BUILDER.theoryopterms(), yystack_[2].location, (yystack_[2].value.theoryOpterm))); }
#line 2222 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 276: // theory_term: "(" theory_opterm "," theory_opterm_nlist ")"
#line 905 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                                          { (yylhs.value.theoryTerm) = BUILDER.theorytermtuple(yylhs.location, BUILDER.theoryopterms(yystack_[3].location, (yystack_[3].value.theoryOpterm), (yystack_[1].value.theoryOpterms))); }
#line 2228 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 277: // theory_term: identifier "(" theory_opterm_list ")"
#line 906 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                                          { (yylhs.value.theoryTerm) = BUILDER.theorytermfun(yylhs.location, String::fromRep((yystack_[3].value.str)), (yystack_[1].value.theoryOpterms)); }
#line 2234 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 278: // theory_term: identifier
#line 907 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                                          { (yylhs.value.theoryTerm) = BUILDER.theorytermvalue(yylhs.location, Symbol::createId(String::fromRep((yystack_[0].value.str)))); }
#line 2240 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 279: // theory_term: "<NUMBER>"
#line 908 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                                          { (yylhs.value.theoryTerm) = BUILDER.theorytermvalue(yylhs.location, Symbol::createNum((yystack_[0].value.num))); }
#line 2246 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 280: // theory_term: "<STRING>"
#line 909 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                                          { (yylhs.value.theoryTerm) = BUILDER.theorytermvalue(yylhs.location, Symbol::createStr(String::fromRep((yystack_[0].value.str)))); }
#line 2252 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 281: // theory_term: "#inf"
#line 910 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                                          { (yylhs.value.theoryTerm) = BUILDER.theorytermvalue(yylhs.location, Symbol::createInf()); }
#line 2258 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 282: // theory_term: "#sup"
#line 911 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                                          { (yylhs.value.theoryTerm) = BUILDER.theorytermvalue(yylhs.location, Symbol::createSup()); }
#line 2264 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 283: // theory_term: "<VARIABLE>"
#line 912 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                                          { (yylhs.value.theoryTerm) = BUILDER.theorytermvar(yylhs.location, String::fromRep((yystack_[0].value.str))); }
#line 2270 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 284: // theory_opterm: theory_opterm theory_op_list theory_term
#line 916 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                                  { (yylhs.value.theoryOpterm) = BUILDER.theoryopterm((yystack_[2].value.theoryOpterm), (yystack_[1].value.theoryOps), (yystack_[0].value.theoryTerm)); }
#line 2276 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 285: // theory_opterm: theory_op_list theory_term
#line 917 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                                  { (yylhs.value.theoryOpterm) = BUILDER.theoryopterm((yystack_[1].value.theoryOps), (yystack_[0].value.theoryTerm)); }
#line 2282 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 286: // theory_opterm: theory_term
#line 918 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                                  { (yylhs.value.theoryOpterm) = BUILDER.theoryopterm(BUILDER.theoryops(), (yystack_[0].value.theoryTerm)); }
#line 2288 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 287: // theory_opterm_nlist: theory_opterm_nlist "," theory_opterm
#line 922 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                            { (yylhs.value.theoryOpterms) = BUILDER.theoryopterms((yystack_[2].value.theoryOpterms), yystack_[0].location, (yystack_[0].value.theoryOpterm)); }
#line 2294 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 288: // theory_opterm_nlist: theory_opterm
#line 923 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                            { (yylhs.value.theoryOpterms) = BUILDER.theoryopterms(BUILDER.theoryopterms(), yystack_[0].location, (yystack_[0].value.theoryOpterm)); }
#line 2300 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 289: // theory_opterm_list: theory_opterm_nlist
#line 927 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                { (yylhs.value.theoryOpterms) = (yystack_[0].value.theoryOpterms); }
#line 2306 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 290: // theory_opterm_list: %empty
#line 928 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                { (yylhs.value.theoryOpterms) = BUILDER.theoryopterms(); }
#line 2312 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 291: // theory_atom_element: theory_opterm_nlist disable_theory_lexing optcondition
#line 932 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                                         { (yylhs.value.theoryElem) = { (yystack_[2].value.theoryOpterms), (yystack_[0].value.litvec) }; }
#line 2318 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 292: // theory_atom_element: disable_theory_lexing ":" litvec
#line 933 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                                         { (yylhs.value.theoryElem) = { BUILDER.theoryopterms(), (yystack_[0].value.litvec) }; }
#line 2324 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 293: // theory_atom_element_nlist: theory_atom_element_nlist enable_theory_lexing ";" theory_atom_element
#line 937 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                                                         { (yylhs.value.theoryElems) = BUILDER.theoryelems((yystack_[3].value.theoryElems), (yystack_[0].value.theoryElem).first, (yystack_[0].value.theoryElem).second); }
#line 2330 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 294: // theory_atom_element_nlist: theory_atom_element
#line 938 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                                                         { (yylhs.value.theoryElems) = BUILDER.theoryelems(BUILDER.theoryelems(), (yystack_[0].value.theoryElem).first, (yystack_[0].value.theoryElem).second); }
#line 2336 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 295: // theory_atom_element_list: theory_atom_element_nlist
#line 942 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                      { (yylhs.value.theoryElems) = (yystack_[0].value.theoryElems); }
#line 2342 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 296: // theory_atom_element_list: %empty
#line 943 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                      { (yylhs.value.theoryElems) = BUILDER.theoryelems(); }
#line 2348 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 297: // theory_atom_name: identifier
#line 947 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                      { (yylhs.value.term) = BUILDER.term(yylhs.location, String::fromRep((yystack_[0].value.str)), BUILDER.termvecvec(BUILDER.termvecvec(), BUILDER.termvec()), false); }
#line 2354 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 298: // theory_atom_name: identifier "(" argvec ")"
#line 948 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                      { (yylhs.value.term) = BUILDER.term(yylhs.location, String::fromRep((yystack_[3].value.str)), (yystack_[1].value.termvecvec), false); }
#line 2360 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 299: // theory_atom: "&" theory_atom_name
#line 951 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                 { (yylhs.value.theoryAtom) = BUILDER.theoryatom((yystack_[0].value.term), BUILDER.theoryelems()); }
#line 2366 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 300: // theory_atom: "&" theory_atom_name enable_theory_lexing "{" theory_atom_element_list enable_theory_lexing "}" disable_theory_lexing
#line 952 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                                                                                                                                                   { (yylhs.value.theoryAtom) = BUILDER.theoryatom((yystack_[6].value.term), (yystack_[3].value.theoryElems)); }
#line 2372 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 301: // theory_atom: "&" theory_atom_name enable_theory_lexing "{" theory_atom_element_list enable_theory_lexing "}" theory_op theory_opterm disable_theory_lexing
#line 953 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                                                                                                                                                   { (yylhs.value.theoryAtom) = BUILDER.theoryatom((yystack_[8].value.term), (yystack_[5].value.theoryElems), String::fromRep((yystack_[2].value.str)), yystack_[1].location, (yystack_[1].value.theoryOpterm)); }
#line 2378 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 302: // theory_operator_nlist: theory_op
#line 959 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                     { (yylhs.value.theoryOps) = BUILDER.theoryops(BUILDER.theoryops(), String::fromRep((yystack_[0].value.str))); }
#line 2384 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 303: // theory_operator_nlist: theory_operator_nlist "," theory_op
#line 960 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                     { (yylhs.value.theoryOps) = BUILDER.theoryops((yystack_[2].value.theoryOps), String::fromRep((yystack_[0].value.str))); }
#line 2390 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 304: // theory_operator_list: theory_operator_nlist
#line 964 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                 { (yylhs.value.theoryOps) = (yystack_[0].value.theoryOps); }
#line 2396 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 305: // theory_operator_list: %empty
#line 965 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                 { (yylhs.value.theoryOps) = BUILDER.theoryops(); }
#line 2402 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 306: // theory_operator_definition: theory_op enable_theory_definition_lexing ":" "<NUMBER>" "," "unary"
#line 969 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                                                                 { (yylhs.value.theoryOpDef) = BUILDER.theoryopdef(yylhs.location, String::fromRep((yystack_[5].value.str)), (yystack_[2].value.num), TheoryOperatorType::Unary); }
#line 2408 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 307: // theory_operator_definition: theory_op enable_theory_definition_lexing ":" "<NUMBER>" "," "binary" "," "left"
#line 970 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                                                                 { (yylhs.value.theoryOpDef) = BUILDER.theoryopdef(yylhs.location, String::fromRep((yystack_[7].value.str)), (yystack_[4].value.num), TheoryOperatorType::BinaryLeft); }
#line 2414 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 308: // theory_operator_definition: theory_op enable_theory_definition_lexing ":" "<NUMBER>" "," "binary" "," "right"
#line 971 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                                                                 { (yylhs.value.theoryOpDef) = BUILDER.theoryopdef(yylhs.location, String::fromRep((yystack_[7].value.str)), (yystack_[4].value.num), TheoryOperatorType::BinaryRight); }
#line 2420 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 309: // theory_operator_definition_nlist: theory_operator_definition
#line 975 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                                                                      { (yylhs.value.theoryOpDefs) = BUILDER.theoryopdefs(BUILDER.theoryopdefs(), (yystack_[0].value.theoryOpDef)); }
#line 2426 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 310: // theory_operator_definition_nlist: theory_operator_definition_nlist enable_theory_lexing ";" theory_operator_definition
#line 976 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                                                                      { (yylhs.value.theoryOpDefs) = BUILDER.theoryopdefs((yystack_[3].value.theoryOpDefs), (yystack_[0].value.theoryOpDef)); }
#line 2432 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 311: // theory_operator_definiton_list: theory_operator_definition_nlist
#line 980 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                             { (yylhs.value.theoryOpDefs) = (yystack_[0].value.theoryOpDefs); }
#line 2438 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 312: // theory_operator_definiton_list: %empty
#line 981 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                             { (yylhs.value.theoryOpDefs) = BUILDER.theoryopdefs(); }
#line 2444 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 313: // theory_definition_identifier: identifier
#line 985 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                     { (yylhs.value.str) = (yystack_[0].value.str); }
#line 2450 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 314: // theory_definition_identifier: "left"
#line 986 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                     { (yylhs.value.str) = String::toRep("left"); }
#line 2456 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 315: // theory_definition_identifier: "right"
#line 987 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                     { (yylhs.value.str) = String::toRep("right"); }
#line 2462 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 316: // theory_definition_identifier: "unary"
#line 988 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                     { (yylhs.value.str) = String::toRep("unary"); }
#line 2468 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 317: // theory_definition_identifier: "binary"
#line 989 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                     { (yylhs.value.str) = String::toRep("binary"); }
#line 2474 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 318: // theory_definition_identifier: "head"
#line 990 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                     { (yylhs.value.str) = String::toRep("head"); }
#line 2480 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 319: // theory_definition_identifier: "body"
#line 991 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                     { (yylhs.value.str) = String::toRep("body"); }
#line 2486 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 320: // theory_definition_identifier: "any"
#line 992 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                     { (yylhs.value.str) = String::toRep("any"); }
#line 2492 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 321: // theory_definition_identifier: "directive"
#line 993 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                     { (yylhs.value.str) = String::toRep("directive"); }
#line 2498 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 322: // theory_term_definition: theory_definition_identifier enable_theory_lexing "{" theory_operator_definiton_list enable_theory_definition_lexing "}"
#line 997 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                                                                                                                { (yylhs.value.theoryTermDef) = BUILDER.theorytermdef(yylhs.location, String::fromRep((yystack_[5].value.str)), (yystack_[2].value.theoryOpDefs), LOGGER); }
#line 2504 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 323: // theory_atom_type: "head"
#line 1001 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                { (yylhs.value.theoryAtomType) = TheoryAtomType::Head; }
#line 2510 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 324: // theory_atom_type: "body"
#line 1002 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                { (yylhs.value.theoryAtomType) = TheoryAtomType::Body; }
#line 2516 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 325: // theory_atom_type: "any"
#line 1003 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                { (yylhs.value.theoryAtomType) = TheoryAtomType::Any; }
#line 2522 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 326: // theory_atom_type: "directive"
#line 1004 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                { (yylhs.value.theoryAtomType) = TheoryAtomType::Directive; }
#line 2528 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 327: // theory_atom_definition: "&" theory_definition_identifier "/" "<NUMBER>" ":" theory_definition_identifier "," enable_theory_lexing "{" theory_operator_list enable_theory_definition_lexing "}" "," theory_definition_identifier "," theory_atom_type
#line 1009 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                                                                                                                                             { (yylhs.value.theoryAtomDef) = BUILDER.theoryatomdef(yylhs.location, String::fromRep((yystack_[14].value.str)), (yystack_[12].value.num), String::fromRep((yystack_[10].value.str)), (yystack_[0].value.theoryAtomType), (yystack_[6].value.theoryOps), String::fromRep((yystack_[2].value.str))); }
#line 2534 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 328: // theory_atom_definition: "&" theory_definition_identifier "/" "<NUMBER>" ":" theory_definition_identifier "," theory_atom_type
#line 1010 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                                                                                                                                             { (yylhs.value.theoryAtomDef) = BUILDER.theoryatomdef(yylhs.location, String::fromRep((yystack_[6].value.str)), (yystack_[4].value.num), String::fromRep((yystack_[2].value.str)), (yystack_[0].value.theoryAtomType)); }
#line 2540 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 329: // theory_definition_nlist: theory_definition_list ";" theory_atom_definition
#line 1014 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                                   { (yylhs.value.theoryDefs) = BUILDER.theorydefs((yystack_[2].value.theoryDefs), (yystack_[0].value.theoryAtomDef)); }
#line 2546 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 330: // theory_definition_nlist: theory_definition_list ";" theory_term_definition
#line 1015 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                                   { (yylhs.value.theoryDefs) = BUILDER.theorydefs((yystack_[2].value.theoryDefs), (yystack_[0].value.theoryTermDef)); }
#line 2552 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 331: // theory_definition_nlist: theory_atom_definition
#line 1016 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                  { (yylhs.value.theoryDefs) = BUILDER.theorydefs(BUILDER.theorydefs(), (yystack_[0].value.theoryAtomDef)); }
#line 2558 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 332: // theory_definition_nlist: theory_term_definition
#line 1017 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                  { (yylhs.value.theoryDefs) = BUILDER.theorydefs(BUILDER.theorydefs(), (yystack_[0].value.theoryTermDef)); }
#line 2564 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 333: // theory_definition_list: theory_definition_nlist
#line 1021 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                    { (yylhs.value.theoryDefs) = (yystack_[0].value.theoryDefs); }
#line 2570 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 334: // theory_definition_list: %empty
#line 1022 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                    { (yylhs.value.theoryDefs) = BUILDER.theorydefs(); }
#line 2576 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 335: // statement: "#theory" identifier enable_theory_definition_lexing "{" theory_definition_list "}" disable_theory_lexing "."
#line 1026 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
                                                                                                                                   { BUILDER.theorydef(yylhs.location, String::fromRep((yystack_[6].value.str)), (yystack_[3].value.theoryDefs), LOGGER); }
#line 2582 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 336: // enable_theory_lexing: %empty
#line 1032 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
      { lexer->theoryLexing(TheoryLexing::Theory); }
#line 2588 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 337: // enable_theory_definition_lexing: %empty
#line 1036 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
      { lexer->theoryLexing(TheoryLexing::Definition); }
#line 2594 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;

  case 338: // disable_theory_lexing: %empty
#line 1040 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
      { lexer->theoryLexing(TheoryLexing::Disabled); }
#line 2600 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"
    break;


#line 2604 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"

            default:
              break;
            }
        }
#if YY_EXCEPTIONS
      catch (const syntax_error& yyexc)
        {
          YYCDEBUG << "Caught exception: " << yyexc.what() << '\n';
          error (yyexc);
          YYERROR;
        }
#endif // YY_EXCEPTIONS
      YY_SYMBOL_PRINT ("-> $$ =", yylhs);
      yypop_ (yylen);
      yylen = 0;

      // Shift the result of the reduction.
      yypush_ (YY_NULLPTR, YY_MOVE (yylhs));
    }
    goto yynewstate;


  /*--------------------------------------.
  | yyerrlab -- here on detecting error.  |
  `--------------------------------------*/
  yyerrlab:
    // If not already recovering from an error, report this error.
    if (!yyerrstatus_)
      {
        ++yynerrs_;
        context yyctx (*this, yyla);
        std::string msg = yysyntax_error_ (yyctx);
        error (yyla.location, YY_MOVE (msg));
      }


    yyerror_range[1].location = yyla.location;
    if (yyerrstatus_ == 3)
      {
        /* If just tried and failed to reuse lookahead token after an
           error, discard it.  */

        // Return failure if at end of input.
        if (yyla.kind () == symbol_kind::S_YYEOF)
          YYABORT;
        else if (!yyla.empty ())
          {
            yy_destroy_ ("Error: discarding", yyla);
            yyla.clear ();
          }
      }

    // Else will try to reuse lookahead token after shifting the error token.
    goto yyerrlab1;


  /*---------------------------------------------------.
  | yyerrorlab -- error raised explicitly by YYERROR.  |
  `---------------------------------------------------*/
  yyerrorlab:
    /* Pacify compilers when the user code never invokes YYERROR and
       the label yyerrorlab therefore never appears in user code.  */
    if (false)
      YYERROR;

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYERROR.  */
    yypop_ (yylen);
    yylen = 0;
    YY_STACK_PRINT ();
    goto yyerrlab1;


  /*-------------------------------------------------------------.
  | yyerrlab1 -- common code for both syntax error and YYERROR.  |
  `-------------------------------------------------------------*/
  yyerrlab1:
    yyerrstatus_ = 3;   // Each real token shifted decrements this.
    // Pop stack until we find a state that shifts the error token.
    for (;;)
      {
        yyn = yypact_[+yystack_[0].state];
        if (!yy_pact_value_is_default_ (yyn))
          {
            yyn += symbol_kind::S_YYerror;
            if (0 <= yyn && yyn <= yylast_
                && yycheck_[yyn] == symbol_kind::S_YYerror)
              {
                yyn = yytable_[yyn];
                if (0 < yyn)
                  break;
              }
          }

        // Pop the current state because it cannot handle the error token.
        if (yystack_.size () == 1)
          YYABORT;

        yyerror_range[1].location = yystack_[0].location;
        yy_destroy_ ("Error: popping", yystack_[0]);
        yypop_ ();
        YY_STACK_PRINT ();
      }
    {
      stack_symbol_type error_token;

      yyerror_range[2].location = yyla.location;
      YYLLOC_DEFAULT (error_token.location, yyerror_range, 2);

      // Shift the error token.
      error_token.state = state_type (yyn);
      yypush_ ("Shifting", YY_MOVE (error_token));
    }
    goto yynewstate;


  /*-------------------------------------.
  | yyacceptlab -- YYACCEPT comes here.  |
  `-------------------------------------*/
  yyacceptlab:
    yyresult = 0;
    goto yyreturn;


  /*-----------------------------------.
  | yyabortlab -- YYABORT comes here.  |
  `-----------------------------------*/
  yyabortlab:
    yyresult = 1;
    goto yyreturn;


  /*-----------------------------------------------------.
  | yyreturn -- parsing is finished, return the result.  |
  `-----------------------------------------------------*/
  yyreturn:
    if (!yyla.empty ())
      yy_destroy_ ("Cleanup: discarding lookahead", yyla);

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYABORT or YYACCEPT.  */
    yypop_ (yylen);
    YY_STACK_PRINT ();
    while (1 < yystack_.size ())
      {
        yy_destroy_ ("Cleanup: popping", yystack_[0]);
        yypop_ ();
      }

    return yyresult;
  }
#if YY_EXCEPTIONS
    catch (...)
      {
        YYCDEBUG << "Exception caught: cleaning lookahead and stack\n";
        // Do not try to display the values of the reclaimed symbols,
        // as their printers might throw an exception.
        if (!yyla.empty ())
          yy_destroy_ (YY_NULLPTR, yyla);

        while (1 < yystack_.size ())
          {
            yy_destroy_ (YY_NULLPTR, yystack_[0]);
            yypop_ ();
          }
        throw;
      }
#endif // YY_EXCEPTIONS
  }

  void
  parser::error (const syntax_error& yyexc)
  {
    error (yyexc.location, yyexc.what ());
  }

  /* Return YYSTR after stripping away unnecessary quotes and
     backslashes, so that it's suitable for yyerror.  The heuristic is
     that double-quoting is unnecessary unless the string contains an
     apostrophe, a comma, or backslash (other than backslash-backslash).
     YYSTR is taken from yytname.  */
  std::string
  parser::yytnamerr_ (const char *yystr)
  {
    if (*yystr == '"')
      {
        std::string yyr;
        char const *yyp = yystr;

        for (;;)
          switch (*++yyp)
            {
            case '\'':
            case ',':
              goto do_not_strip_quotes;

            case '\\':
              if (*++yyp != '\\')
                goto do_not_strip_quotes;
              else
                goto append;

            append:
            default:
              yyr += *yyp;
              break;

            case '"':
              return yyr;
            }
      do_not_strip_quotes: ;
      }

    return yystr;
  }

  std::string
  parser::symbol_name (symbol_kind_type yysymbol)
  {
    return yytnamerr_ (yytname_[yysymbol]);
  }



  // parser::context.
  parser::context::context (const parser& yyparser, const symbol_type& yyla)
    : yyparser_ (yyparser)
    , yyla_ (yyla)
  {}

  int
  parser::context::expected_tokens (symbol_kind_type yyarg[], int yyargn) const
  {
    // Actual number of expected tokens
    int yycount = 0;

    const int yyn = yypact_[+yyparser_.yystack_[0].state];
    if (!yy_pact_value_is_default_ (yyn))
      {
        /* Start YYX at -YYN if negative to avoid negative indexes in
           YYCHECK.  In other words, skip the first -YYN actions for
           this state because they are default actions.  */
        const int yyxbegin = yyn < 0 ? -yyn : 0;
        // Stay within bounds of both yycheck and yytname.
        const int yychecklim = yylast_ - yyn + 1;
        const int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
        for (int yyx = yyxbegin; yyx < yyxend; ++yyx)
          if (yycheck_[yyx + yyn] == yyx && yyx != symbol_kind::S_YYerror
              && !yy_table_value_is_error_ (yytable_[yyx + yyn]))
            {
              if (!yyarg)
                ++yycount;
              else if (yycount == yyargn)
                return 0;
              else
                yyarg[yycount++] = YY_CAST (symbol_kind_type, yyx);
            }
      }

    if (yyarg && yycount == 0 && 0 < yyargn)
      yyarg[0] = symbol_kind::S_YYEMPTY;
    return yycount;
  }






  int
  parser::yy_syntax_error_arguments_ (const context& yyctx,
                                                 symbol_kind_type yyarg[], int yyargn) const
  {
    /* There are many possibilities here to consider:
       - If this state is a consistent state with a default action, then
         the only way this function was invoked is if the default action
         is an error action.  In that case, don't check for expected
         tokens because there are none.
       - The only way there can be no lookahead present (in yyla) is
         if this state is a consistent state with a default action.
         Thus, detecting the absence of a lookahead is sufficient to
         determine that there is no unexpected or expected token to
         report.  In that case, just report a simple "syntax error".
       - Don't assume there isn't a lookahead just because this state is
         a consistent state with a default action.  There might have
         been a previous inconsistent state, consistent state with a
         non-default action, or user semantic action that manipulated
         yyla.  (However, yyla is currently not documented for users.)
       - Of course, the expected token list depends on states to have
         correct lookahead information, and it depends on the parser not
         to perform extra reductions after fetching a lookahead from the
         scanner and before detecting a syntax error.  Thus, state merging
         (from LALR or IELR) and default reductions corrupt the expected
         token list.  However, the list is correct for canonical LR with
         one exception: it will still contain any token that will not be
         accepted due to an error action in a later state.
    */

    if (!yyctx.lookahead ().empty ())
      {
        if (yyarg)
          yyarg[0] = yyctx.token ();
        int yyn = yyctx.expected_tokens (yyarg ? yyarg + 1 : yyarg, yyargn - 1);
        return yyn + 1;
      }
    return 0;
  }

  // Generate an error message.
  std::string
  parser::yysyntax_error_ (const context& yyctx) const
  {
    // Its maximum.
    enum { YYARGS_MAX = 5 };
    // Arguments of yyformat.
    symbol_kind_type yyarg[YYARGS_MAX];
    int yycount = yy_syntax_error_arguments_ (yyctx, yyarg, YYARGS_MAX);

    char const* yyformat = YY_NULLPTR;
    switch (yycount)
      {
#define YYCASE_(N, S)                         \
        case N:                               \
          yyformat = S;                       \
        break
      default: // Avoid compiler warnings.
        YYCASE_ (0, YY_("syntax error"));
        YYCASE_ (1, YY_("syntax error, unexpected %s"));
        YYCASE_ (2, YY_("syntax error, unexpected %s, expecting %s"));
        YYCASE_ (3, YY_("syntax error, unexpected %s, expecting %s or %s"));
        YYCASE_ (4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
        YYCASE_ (5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
      }

    std::string yyres;
    // Argument number.
    std::ptrdiff_t yyi = 0;
    for (char const* yyp = yyformat; *yyp; ++yyp)
      if (yyp[0] == '%' && yyp[1] == 's' && yyi < yycount)
        {
          yyres += symbol_name (yyarg[yyi++]);
          ++yyp;
        }
      else
        yyres += *yyp;
    return yyres;
  }


  const short parser::yypact_ninf_ = -564;

  const short parser::yytable_ninf_ = -339;

  const short
  parser::yypact_[] =
  {
      89,  -564,   156,    59,   995,  -564,  -564,  -564,    47,   -19,
    -564,  -564,   156,   156,  1736,   156,  -564,  1736,   106,  -564,
     150,   154,  -564,   143,    11,  -564,   860,  1547,  -564,   144,
    -564,   157,  1447,   159,   181,   150,   145,  1736,  -564,  -564,
    -564,  -564,   156,  1736,   184,   156,  -564,  -564,  -564,   180,
    -564,  -564,  1312,  -564,   293,  1893,  -564,    63,  -564,   824,
     332,   187,  1062,  -564,   179,  1348,  -564,   204,  -564,   620,
    -564,    20,   186,   196,   221,  1736,   232,  -564,   259,  1199,
    1559,   156,   258,   121,   156,   245,  -564,   427,  -564,   156,
     290,  -564,   413,  2042,   310,    85,  -564,  2178,   313,   277,
    1547,   295,  1579,  1620,  1736,  -564,   505,  1736,   156,    50,
     140,   140,   156,   156,   297,   613,  -564,    31,  2178,    91,
     308,   323,  -564,   278,   362,  -564,  -564,  1415,  2072,  -564,
    1736,  1736,  1736,  -564,   393,  1736,  -564,  -564,  -564,  -564,
    1736,  1736,  -564,  1736,  1736,  1736,  1736,  1736,  1098,  1062,
    1200,  -564,  -564,  -564,  -564,  1668,  1668,  -564,  -564,  -564,
    -564,  -564,  -564,  1668,  1668,  1683,  2178,  1736,  -564,  -564,
     387,    71,  -564,   395,   156,   620,  -564,  1784,   620,  -564,
     620,  -564,  -564,   397,   927,  -564,  -564,  1736,   398,  1736,
    1736,   620,  1736,   428,   432,  -564,   141,   416,  1736,   439,
     420,   408,   409,  1211,   699,  1944,    87,   435,  1062,    73,
      83,   102,  -564,   460,  -564,  1458,  1736,  1348,  -564,  -564,
    1348,  1736,  -564,   441,  -564,   476,  1206,   494,   147,   485,
     494,   212,   594,  -564,  -564,  1425,   225,    56,   431,   493,
    -564,  -564,   486,   463,   465,   442,  1736,  -564,   156,  1736,
    -564,  1736,  1736,   489,   477,  1559,   492,  -564,  -564,  2072,
    -564,  1736,  -564,   234,   118,   336,  1736,  2202,   484,   484,
     484,   554,   484,   118,   317,  2178,  1062,  -564,  -564,  -564,
      52,  -564,  1443,  -564,  -564,   364,   364,  -564,   526,   229,
    2178,  -564,  -564,  1300,  -564,  -564,  -564,  -564,  -564,   497,
    -564,   487,  -564,   927,    65,  -564,  1278,   620,   620,   620,
     620,   620,   620,   620,   620,   620,   620,   341,   680,   363,
     365,  1963,  2178,  1736,  1668,  -564,  1736,  1736,   370,   504,
     507,  1736,   461,   522,  -564,   310,  -564,   243,   794,  1995,
      97,  1137,  1062,  1348,  -564,  -564,  -564,  1511,  -564,  -564,
    -564,  -564,  -564,  -564,  -564,  -564,   523,   539,  -564,   310,
    2178,  -564,  -564,  1736,  1736,   543,   531,  1736,  -564,   543,
     534,  1736,  -564,  -564,  -564,  1736,   140,  1736,   478,   535,
    -564,  -564,  1736,   479,   483,   545,   372,  -564,   558,   519,
    2178,   494,   494,   294,   491,   281,  1559,  1736,  2178,    51,
    1736,  2178,  -564,  1348,  -564,  1348,  -564,  1736,  -564,    52,
     620,  -564,  1827,  -564,  -564,   563,   525,   224,   354,   527,
     527,   527,   751,   527,   224,   401,  -564,  -564,  2230,  2230,
    2193,  -564,  -564,  -564,  -564,  -564,  -564,   541,  -564,  2230,
    -564,   338,   564,  -564,   530,  -564,   575,  -564,  -564,   550,
     286,   580,   392,  -564,  1736,  1736,  1805,   565,  -564,  -564,
    -564,  1348,  1995,   174,  1137,  -564,  -564,  -564,  1062,  -564,
    -564,  1348,  -564,   444,  -564,   285,  -564,  -564,  2178,   428,
    1348,  -564,  -564,   494,  -564,  -564,   494,  -564,  2178,  -564,
    2089,   568,  -564,   911,   570,   571,  -564,   872,   156,   581,
     557,   559,  2232,  -564,  -564,  -564,  -564,  -564,  -564,  -564,
    -564,  -564,  -564,  -564,  -564,  -564,   333,   584,  -564,   339,
    2178,  -564,  -564,   310,   596,  -564,   560,  -564,   927,   620,
    -564,   564,   561,   567,  -564,    61,  2230,  -564,  -564,  2230,
    2230,   310,   562,   574,  1348,   381,  -564,  1668,  -564,  1855,
    2119,  -564,  -564,  -564,  1137,  -564,  -564,  -564,  -564,  -564,
    -564,  -564,  1721,  -564,   617,   543,   543,  1736,  -564,  1736,
    1736,  -564,  -564,  -564,  -564,  -564,  -564,   578,   593,  -564,
     294,  -564,  -564,  -564,  1348,  -564,  -564,  -564,  2205,  -564,
     582,  -564,   338,  -564,  2230,   338,  -564,   579,   590,   286,
    -564,  -564,  -564,  1348,  -564,  -564,  2178,  2126,  2143,   566,
     338,   619,  -564,  -564,   310,  -564,    76,  -564,  -564,  2230,
    -564,  -564,  -564,  -564,  -564,  1736,  -564,   636,  -564,  -564,
     530,  -564,  -564,  -564,  -564,   338,  2150,  2232,   638,   595,
     599,  -564,  -564,   641,   573,   338,  -564,   248,   648,  -564,
    -564,  -564,  -564,  -564,  -564,   626,   404,   338,  -564,   657,
    -564,   661,  -564,   405,   338,   632,  -564,  -564,  -564,   676,
    2232,   677,   248,  -564
  };

  const short
  parser::yydefact_[] =
  {
       0,     5,     0,     0,     0,    10,    11,    12,     0,     0,
       1,   338,     0,     0,     0,     0,   131,     0,     0,     7,
       0,     0,    96,   192,     0,    61,     0,    74,   130,     0,
     129,     0,     0,     0,     0,     0,     0,     0,   127,   128,
      62,    93,     0,     0,   192,     0,     6,    59,    64,     0,
      60,    63,     0,     4,    57,   109,    99,   202,   112,     0,
     105,     0,   145,   204,     0,     0,   203,     0,   161,     0,
       3,     0,   297,   299,    58,     0,    57,    52,     0,   108,
     165,     0,    89,     0,     0,     0,   209,     0,   208,     0,
       0,   156,     0,   109,   126,     0,    73,    67,    72,    77,
      74,     0,     0,     0,     0,   234,     0,     0,     0,    89,
       0,     0,     0,     0,     0,    57,    51,     0,    65,     0,
       0,     0,   337,     0,     0,    97,    94,     0,     0,   100,
      70,     0,     0,    87,     0,     0,    85,    83,    86,    84,
       0,     0,    88,     0,     0,     0,     0,     0,     0,   145,
     124,   176,   170,   171,   177,     0,     0,   116,   114,   113,
     115,   117,   118,     0,     0,    70,   143,     0,   160,   212,
     192,   126,   205,   192,     0,     0,    35,     0,     0,    36,
       0,    33,    34,    31,   248,     8,     9,    70,     0,    70,
      70,     0,     0,    69,     0,   164,     0,    91,    70,   192,
     263,     0,     0,     0,     0,   109,     0,     0,   145,     0,
       0,     0,   149,     0,   253,     0,     0,   124,   152,   157,
       0,    71,    75,    78,    53,     0,   216,   214,     0,     0,
     214,     0,     0,   192,   236,     0,     0,    91,     0,   192,
     199,   247,     0,     0,     0,     0,    70,   260,   257,     0,
      56,     0,     0,     0,     0,   165,     0,    98,    95,     0,
     101,     0,    79,     0,    45,    44,     0,    41,    49,    47,
      50,    43,    48,    46,    42,   102,   145,   158,   179,   121,
     123,   181,   109,   110,   111,   120,   119,   154,     0,     0,
     144,   211,   210,   124,   172,   180,   173,   206,   207,    32,
      23,     0,    24,    37,     0,    22,     0,    40,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   296,     0,
       0,     0,   106,     0,     0,   166,    70,    70,     0,   262,
     261,     0,     0,     0,   139,   126,   137,     0,     0,     0,
       0,     0,   145,   124,   182,   193,   183,     0,   148,   184,
     194,   185,   198,   191,   197,   190,     0,   123,   125,   126,
      68,    76,   229,     0,     0,   221,     0,     0,   228,   221,
       0,     0,   192,   239,   235,     0,     0,     0,     0,     0,
     200,   201,     0,     0,     0,     0,     0,   256,   258,     0,
      66,   214,   214,   334,     0,     0,   165,     0,   103,    54,
      70,   107,   159,     0,   178,     0,   155,    70,   174,   123,
      40,    25,     0,    26,    30,    39,     0,    16,    15,    20,
      18,    21,    14,    19,    17,    13,   298,   281,   290,   290,
       0,   282,   279,   280,   283,   267,   268,   278,   270,     0,
     286,   288,   338,   294,   295,   336,     0,    55,    54,   249,
     126,     0,     0,    90,     0,     0,     0,     0,   240,   136,
     140,     0,     0,     0,     0,   186,   195,   187,   145,   146,
     169,   124,   141,   126,   134,     0,   254,   153,   215,   213,
     220,   224,   231,   214,   226,   230,   214,   238,    81,   242,
       0,     0,   245,     0,     0,     0,   232,    54,     0,     0,
       0,     0,     0,   320,   316,   317,   314,   315,   318,   319,
     321,   313,   336,   332,   331,   333,     0,     0,   167,     0,
     104,    80,   122,   126,     0,   175,     0,    27,    38,     0,
      28,   289,     0,     0,   273,     0,   290,   269,   285,     0,
       0,   126,     0,     0,   124,     0,   162,     0,    92,     0,
       0,   266,   241,   138,     0,   188,   196,   189,   147,   132,
     133,   142,     0,   217,   219,   221,   221,     0,   246,     0,
       0,   237,   233,   255,   259,   223,   222,     0,     0,   338,
       0,   252,   168,   151,     0,    29,   271,   272,     0,   274,
       0,   284,   287,   291,   338,   338,   292,     0,     0,   126,
     265,   264,   135,     0,   225,   227,    82,     0,     0,     0,
     312,     0,   330,   329,   126,   275,     0,   277,   293,     0,
     300,   250,   251,   163,   218,     0,   244,     0,   337,   309,
     311,   337,   335,   150,   276,   338,     0,     0,     0,     0,
       0,   301,   243,     0,     0,     0,   322,   336,     0,   310,
     325,   323,   324,   326,   328,     0,     0,   305,   306,     0,
     302,   304,   337,     0,     0,     0,   307,   308,   303,     0,
       0,     0,     0,   327
  };

  const short
  parser::yypgoto_[] =
  {
    -564,  -564,  -564,  -564,    -2,   -57,   513,   284,   529,  -564,
     -22,   -63,   591,  -564,  -564,  -132,  -564,   -51,     2,     4,
     330,  -157,   635,  -564,  -122,  -147,  -156,    37,   135,  -564,
     237,  -564,  -196,  -120,  -155,  -564,  -564,    -7,  -564,  -564,
    -209,   612,  -564,  -148,  -564,  -564,  -564,   -13,   -95,  -564,
    -210,   -82,  -564,  -331,  -564,  -564,  -564,  -564,  -564,  -365,
    -402,  -392,  -403,  -304,  -385,   107,  -564,  -564,  -564,   696,
    -564,  -564,    57,  -564,  -564,  -449,   128,    38,   132,  -564,
    -564,  -419,  -563,   -10
  };

  const short
  parser::yydefgoto_[] =
  {
       0,     3,     4,    53,    76,   303,   415,   416,    97,   119,
     193,   262,    99,   100,   101,   263,   236,   167,    56,   279,
      58,    59,   163,    60,   357,   358,   218,   207,   474,   475,
     336,   337,   208,   168,   209,   289,    95,    62,    63,   195,
     196,    64,   211,   154,    65,    66,    87,    88,   241,    67,
     365,   227,   564,   481,   228,   231,     9,   388,   389,   438,
     439,   440,   441,   531,   532,   443,   444,   445,    73,   212,
     661,   662,   629,   630,   631,   512,   513,   654,   514,   515,
     516,   188,   253,   446
  };

  const short
  parser::yytable_[] =
  {
       8,    71,    54,   281,   148,    98,   285,   286,    57,   342,
      72,    74,   184,    78,   442,   295,   242,   194,    82,    85,
     369,   230,    83,   296,    54,   542,   543,   535,   280,   277,
      94,   121,   109,    82,   114,   115,   110,   111,   484,   539,
     117,    61,   216,   122,   533,   185,   395,   538,   149,   340,
      54,    89,    69,   577,   129,   317,   247,   319,   320,    10,
     -90,   -90,   403,    54,    70,   638,   328,   183,   640,   171,
     248,   588,   150,   151,   537,   412,   -90,   261,    98,   197,
     293,   294,   201,   349,   -90,    54,   540,   213,   348,   198,
      54,   206,    61,   578,   129,   327,   343,   344,   350,   665,
      90,   -90,   288,   186,   -90,   152,   237,   465,   352,   238,
     243,   244,   345,   589,   386,   378,   152,   413,   300,   -90,
     153,   305,   466,   306,   152,    54,   351,   354,   634,   260,
     199,   153,   404,   539,   321,   219,   353,   592,   220,   153,
     346,   276,    80,   342,   249,   468,   200,   591,    54,   239,
     467,   590,   435,   436,   341,   355,   402,   292,   112,   250,
     298,     1,     2,   140,   141,   240,   143,   450,    86,   391,
     392,   409,   299,   183,   537,   183,   183,   145,   183,   459,
     102,   500,   501,   463,   555,    61,   330,   519,   643,   183,
     539,   325,   194,   103,   326,   452,   470,   366,   107,   556,
     367,    54,    54,   477,   169,   113,   129,   335,   397,   120,
      81,   639,   170,    54,    84,    54,   635,   260,    54,   123,
     374,   671,   469,   165,   359,   187,   381,   557,   655,   172,
     619,     5,  -336,   539,   604,   605,     5,   173,     6,     7,
       5,   108,     5,     6,     7,   628,   387,     6,     7,     6,
       7,   417,   418,   419,   420,   421,   422,   423,   424,   425,
     189,   525,   370,   451,   191,   371,   342,     5,   468,   310,
     311,   190,   312,   565,     6,     7,   566,   376,   377,   406,
     628,   489,   407,   314,   616,   483,   399,   400,   464,   486,
     442,    54,   660,   460,   546,   217,   461,   198,   502,   668,
     155,   156,   -89,   -89,   202,   183,   183,   183,   183,   183,
     183,   183,   183,   183,   183,   214,   437,   560,   -89,   217,
     131,   132,   650,   221,   559,   473,   -89,   651,   652,   653,
     222,   518,   130,   194,   326,   561,    54,   521,   562,   131,
     260,    54,   479,   -89,   524,   251,   -89,   224,   558,   157,
     158,   159,   160,   161,   162,   528,   245,   308,   468,   487,
     252,   -89,   140,   141,   254,   143,   144,   583,   503,   504,
     505,   506,   507,   508,   509,   510,   145,   146,   155,   156,
       5,   140,   141,   579,   143,   593,   580,     6,     7,   582,
     599,   511,   326,   426,   400,   145,   146,   596,   255,   310,
     311,    54,   312,    54,   308,   309,   266,   522,   183,   523,
     183,   554,   291,   314,   315,   447,   400,   448,   400,    13,
     297,    14,   453,   400,   497,   400,   437,   437,   437,   435,
     436,    12,   541,    13,   318,    14,   307,   437,   323,    16,
      17,   324,   125,   623,   548,   400,   310,   311,    25,   312,
     313,    18,    27,   217,   323,   327,    22,   331,   633,    54,
     314,   315,    25,   203,   329,   335,    27,   332,    28,    54,
      30,   347,   528,    37,   597,   598,    40,   126,    54,   658,
     659,    43,   666,   667,   563,   283,   284,    37,    38,    39,
      40,    41,   356,   333,   361,    43,   573,    47,    48,     5,
     511,   362,    50,    51,   364,   215,     6,     7,   131,   132,
     368,    47,    48,     5,   233,   379,    50,    51,   380,   204,
       6,     7,   383,   382,   384,   393,   385,   183,   396,   394,
     234,   135,   143,    55,   437,   405,   410,   437,   437,   411,
     473,   454,    54,    77,   455,   457,    79,   458,   476,   403,
     140,   141,   480,   143,   144,    93,   482,   131,   132,   485,
     492,   106,   491,   494,   145,   146,   116,   495,   498,   611,
     496,   499,   118,   529,   540,   312,   147,   530,   511,   517,
     536,   128,    54,  -336,   544,   620,   437,   545,   614,   547,
     552,   166,   437,   568,    93,   571,   572,   131,   132,   140,
     141,    54,   143,   372,   116,   584,   574,   624,   575,   581,
     576,   586,   585,   145,   146,   594,   205,   437,   587,   373,
     135,   128,   -91,   -91,   595,   641,   174,   603,   175,   610,
     621,   226,   226,   232,   617,   511,   235,   609,   -91,   140,
     141,   622,   143,   144,   632,   637,   -91,   644,   645,   646,
     627,   647,   246,   145,   146,   176,   259,   648,   656,   177,
     264,   265,   657,   -91,   267,   147,   -91,   663,   511,   268,
     269,   664,   270,   271,   272,   273,   274,   275,   166,    93,
     178,   -91,   669,   179,   282,   282,   670,   672,   180,  -338,
     304,   223,   282,   282,   526,   164,   290,   602,   553,   210,
      68,   618,   649,    12,   181,    13,     5,    14,   612,   182,
     673,    16,   613,     6,     7,   427,   428,   429,     0,   430,
       0,   322,     0,   124,     0,     0,     0,     0,   125,     0,
       0,     0,    93,   339,    25,   203,     0,   166,    27,     0,
      28,     0,    30,   431,   259,   275,    93,     0,     0,    93,
     360,     0,     0,     0,   308,   309,     0,     0,     0,    37,
      38,    39,    40,   126,   432,     0,     5,    43,     0,   433,
     434,   435,   436,     6,     7,     0,     0,     0,   390,     0,
     226,   226,     0,    47,    48,     5,     0,     0,    50,    51,
     398,   338,     6,     7,     0,   401,   310,   311,    12,   312,
      13,     0,    14,     0,     0,   166,    16,     0,     0,     0,
     314,   315,     0,     0,     0,     0,     0,     0,   256,     0,
       0,     0,    93,   257,     0,     0,     0,     0,     0,    25,
     203,     0,     0,    27,     0,    28,     0,    30,   155,   156,
       0,   157,   158,   159,   160,   161,   162,     0,     0,     0,
       0,     0,   360,   282,    37,    38,    39,    40,   258,     0,
     456,     0,    43,     0,     0,     0,    13,   462,    14,     0,
     275,   166,    93,    17,     0,     0,     0,     0,    47,    48,
       5,   -92,   -92,    50,    51,     0,     0,     6,     7,    22,
       0,     0,   478,     0,     0,    25,   226,   -92,     0,    27,
     226,     0,     0,     0,   488,   -92,   490,     0,     0,     0,
      91,   493,     0,     0,   131,   132,     0,   569,     0,     0,
      37,   570,   -92,    40,    41,   -92,   520,     0,    43,     0,
     308,   309,    93,     0,    93,     0,     0,   135,     0,     0,
     -92,     0,     0,     0,    47,    48,     5,     0,     0,    50,
      51,     0,    92,     6,     7,     0,   140,   141,     0,   143,
     144,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     145,   146,   310,   311,     0,   312,   313,     0,     0,     0,
       0,     0,   147,   549,   550,     0,   314,   315,     0,     0,
      93,     0,     0,   398,     0,    -2,    11,   166,   316,    12,
      93,    13,     0,    14,     0,     0,    15,    16,    17,    93,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    18,
      19,     0,    20,    21,    22,     0,     0,     0,    23,    24,
      25,    26,     0,     0,    27,     0,    28,    29,    30,    31,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    32,
      33,    34,    35,    36,     0,    37,    38,    39,    40,    41,
      42,     0,     0,    43,     0,    44,     0,   133,    13,     0,
      14,     0,     0,    93,     0,     0,   282,    45,    46,    47,
      48,     5,    49,   520,    50,    51,     0,    52,     6,     7,
       0,     0,     0,   136,   137,     0,   606,    25,   607,   608,
     138,    27,   139,     0,    13,     0,    14,     0,     0,   142,
      16,     0,     0,    93,     0,     0,     0,     0,     0,     0,
       0,     0,    75,     0,     0,    40,     0,     0,     0,     0,
      43,     0,    93,    25,    26,     0,     0,    27,     0,    28,
       0,    30,     0,    13,     0,    14,    47,    48,     5,    16,
       0,    50,    51,     0,   636,     6,     7,     0,    75,    38,
      39,    40,     0,     0,     0,     0,    43,     0,     0,     0,
       0,     0,    25,   203,     0,     0,    27,     0,    28,     0,
      30,     0,    47,    48,     5,     0,     0,    50,    51,     0,
       0,     6,     7,     0,     0,     0,     0,    75,    38,    39,
      40,     0,   131,   132,     0,    43,    13,     0,    14,   131,
     132,     0,   363,    17,     0,   192,     0,    13,     0,    14,
       0,    47,    48,     5,    17,   135,    50,    51,     0,    22,
       6,     7,   135,     0,     0,    25,     0,     0,     0,    27,
      22,     0,     0,     0,   140,   141,    25,   143,   144,     0,
      27,   140,   141,   278,   143,   144,     0,     0,   145,   146,
      37,   334,     0,    40,    41,   145,   146,     0,    43,     0,
     147,    37,     0,     0,    40,    41,     0,   147,     0,    43,
       0,   308,   309,     0,    47,    48,     5,     0,     0,    50,
      51,     0,    92,     6,     7,    47,    48,     5,     0,     0,
      50,    51,     0,    92,     6,     7,    13,     0,    14,     0,
       0,     0,     0,    17,     0,     0,     0,     0,    13,     0,
      14,     0,     0,   310,   311,     0,   312,   313,     0,    22,
       0,     0,     0,     0,     0,    25,   124,   314,   315,    27,
       0,   125,     0,     0,     0,     0,   414,    25,     0,   316,
       0,    27,     0,   408,    13,     0,    14,     0,     0,     0,
      37,    17,     0,    40,    41,     0,     0,     0,    43,     0,
       0,     0,    37,     0,     0,    40,   126,    22,     0,     0,
      43,     0,     0,    25,    47,    48,     5,    27,     0,    50,
      51,     0,    92,     6,     7,     0,    47,    48,     5,     0,
       0,    50,    51,     0,   127,     6,     7,     0,    37,     0,
       0,    40,    41,     0,     0,     0,    43,     0,     0,     0,
       0,    13,     0,    14,     0,     0,     0,     0,   131,   132,
       0,     0,    47,    48,     5,   375,     0,    50,    51,   256,
      92,     6,     7,     0,   257,     0,   131,   132,     0,     0,
      25,   135,     0,    13,    27,    14,     0,     0,     0,   134,
     104,     0,     0,     0,    13,     0,    14,     0,     0,   135,
     140,   141,   105,   143,   144,    37,     0,     0,    40,   258,
       0,     0,    25,    43,   145,   146,    27,   257,   140,   141,
       0,   143,   144,    25,     0,     0,   147,    27,     0,    47,
      48,     5,   145,   146,    50,    51,     0,    75,     6,     7,
      40,     0,     0,     0,   147,    43,     0,    13,    37,    14,
     471,    40,   258,     0,     0,     0,    43,     0,     0,     0,
       0,    47,    48,     5,     0,     0,    50,    51,     0,     0,
       6,     7,    47,    48,     5,     0,    25,    50,    51,     0,
      27,     6,     7,    13,     0,    14,     0,    96,     0,     0,
       0,   472,     0,     0,     0,    13,     0,    14,   -70,     0,
       0,    75,     0,     0,    40,     0,     0,     0,     0,    43,
       0,     0,    25,     0,     0,    13,    27,    14,     0,     0,
       0,     0,     0,     0,    25,    47,    48,     5,    27,     0,
      50,    51,     0,     0,     6,     7,     0,    75,     0,     0,
      40,     0,     0,     0,    25,    43,     0,     0,    27,    75,
       0,     0,    40,     0,     0,     0,    13,    43,    14,   225,
       0,    47,    48,     5,     0,     0,    50,    51,     0,    75,
       6,     7,    40,    47,    48,     5,     0,    43,    50,    51,
       0,     0,     6,     7,     0,    25,     0,     0,     0,    27,
       0,     0,     0,    47,    48,     5,     0,     0,    50,    51,
     229,     0,     6,     7,    13,     0,    14,     0,     0,     0,
      75,    17,     0,    40,     0,     0,     0,     0,    43,    13,
       0,    14,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    25,    47,    48,     5,    27,     0,    50,
      51,     0,     0,     6,     7,     0,     0,     0,    25,     0,
       0,     0,    27,     0,     0,     0,     0,    13,    75,    14,
     471,    40,     0,   287,     0,     0,    43,     0,     0,     0,
       0,     0,    13,    75,    14,     0,    40,     0,     0,     0,
       0,    43,    47,    48,     5,     0,    25,    50,    51,     0,
      27,     6,     7,     0,     0,     0,     0,    47,    48,     5,
       0,    25,    50,    51,     0,    27,     6,     7,     0,     0,
       0,    75,     0,     0,    40,     0,     0,     0,     0,    43,
     174,     0,   175,     0,   301,     0,    75,     0,     0,    40,
       0,     0,     0,     0,    43,    47,    48,     5,   131,   132,
      50,    51,     0,     0,     6,     7,     0,     0,     0,   176,
      47,    48,     5,   177,     0,    50,    51,     0,     0,     6,
       7,   135,     0,   174,     0,   175,   302,     0,     0,     0,
       0,     0,     0,     0,   178,     0,     0,   179,     0,     0,
     140,   141,   180,   143,   144,     0,   551,     0,   131,   132,
       0,     0,   176,     0,   145,   146,   177,     0,   181,     0,
       5,     0,     0,   182,     0,     0,   147,     6,     7,   527,
       0,   135,     0,     0,     0,     0,     0,   178,     0,     0,
     179,     0,     0,     0,     0,   180,   131,   132,   133,     0,
     140,   141,     0,   143,   144,    16,   600,     0,     0,   134,
       0,   181,     0,     5,   145,   146,   182,     0,     0,   135,
       6,     7,     0,     0,   136,   137,   147,     0,     0,    26,
       0,   138,     0,   139,    28,     0,    30,     0,   140,   141,
     142,   143,   144,     0,     0,     0,     0,   131,   132,   133,
       0,     0,   145,   146,    38,    39,    16,     0,     0,     0,
     134,     0,     0,     0,   147,     0,   308,   309,     0,     0,
     135,     0,     0,     0,     0,   136,   137,     0,     0,     0,
     203,     0,   138,     0,   139,    28,     0,    30,   449,   140,
     141,   142,   143,   144,     0,     0,     0,     0,   131,   132,
     133,     0,     0,   145,   146,    38,    39,    16,   310,   311,
       0,   312,   313,     0,     0,   147,     0,     0,     0,     0,
       0,   135,   314,   315,     0,     0,   136,   137,     0,     0,
       0,   203,     0,   138,   316,   139,    28,     0,    30,     0,
     140,   141,   142,   143,   144,   131,   132,   133,     0,     0,
       0,     0,     0,     0,   145,   146,    38,    39,   134,     0,
       0,     0,     0,     0,     0,     0,   147,     0,   135,     0,
       0,     0,     0,   136,   137,   131,   132,   133,     0,     0,
     138,     0,   139,     0,     0,     0,     0,   140,   141,   142,
     143,   144,   131,   132,     0,     0,     0,     0,   135,   567,
       0,   145,   146,   136,   137,     0,     0,     0,     0,     0,
     138,     0,   139,   147,     0,   135,     0,   140,   141,   142,
     143,   144,   131,   132,     0,     0,     0,     0,     0,   131,
     132,   145,   146,     0,   140,   141,   625,   143,   144,     0,
       0,     0,     0,   147,     0,   135,   131,   132,   145,   146,
       0,     0,   135,   131,   132,     0,     0,     0,     0,     0,
     147,     0,     0,     0,   140,   141,     0,   143,   144,   135,
     601,   140,   141,     0,   143,   144,   135,     0,   145,   146,
       0,   131,   132,     0,     0,   145,   146,     0,   140,   141,
     147,   143,   144,     0,   626,   140,   141,   147,   143,   144,
       0,   642,   145,   146,   135,   131,   132,     0,     0,   145,
     146,     0,     0,     0,   147,     0,     0,     0,     0,     0,
       0,   147,     0,   140,   141,     0,   143,   144,   427,   428,
     429,     0,   430,     0,     0,     0,     0,   145,   146,     0,
     427,   428,   429,     0,   430,   534,     0,   140,   141,   147,
     143,   144,     0,     0,     0,     0,   431,   615,     0,     0,
       0,   145,   146,     0,     0,   427,   428,   429,   431,   430,
       0,     0,     0,   147,     0,     0,     0,   432,     0,     5,
       0,     0,   433,   434,   435,   436,     6,     7,     0,   432,
       0,     5,     0,   431,   433,   434,   435,   436,     6,     7,
       0,     0,     0,     0,     0,     0,   503,   504,   505,   506,
     507,   508,   509,   510,   432,     0,     5,     0,     5,   433,
     434,   435,   436,     6,     7,     6,     7
  };

  const short
  parser::yycheck_[] =
  {
       2,    11,     4,   150,    55,    27,   163,   164,     4,   205,
      12,    13,    69,    15,   318,   171,   111,    80,    20,    21,
     230,   103,    20,   171,    26,   444,   445,   430,   150,   149,
      26,    44,    34,    35,    36,    37,    34,    35,   369,   441,
      42,     4,    93,    45,   429,    25,   255,   439,    55,   204,
      52,    40,     5,   502,    52,   187,    25,   189,   190,     0,
       9,    10,    10,    65,    83,   628,   198,    69,   631,    65,
      39,    10,     9,    10,   439,    10,    25,   128,   100,    81,
       9,    10,    84,    10,    33,    87,    10,    89,   208,    39,
      92,    87,    55,   512,    92,    39,     9,    10,    25,   662,
      89,    50,   165,    83,    53,    53,   108,    10,    25,    59,
     112,   113,    25,    52,   246,    59,    53,    52,   175,    68,
      68,   178,    25,   180,    53,   127,    53,    25,    52,   127,
       9,    68,   280,   535,   191,    50,    53,   540,    53,    68,
      53,   148,    36,   339,    53,   341,    25,   539,   150,     9,
      53,   536,    91,    92,   205,    53,   276,   170,    13,    68,
     173,    72,    73,    45,    46,    25,    48,   324,    25,   251,
     252,   293,   174,   175,   539,   177,   178,    59,   180,   335,
      36,   391,   392,   338,    10,   148,   199,   396,   637,   191,
     592,    50,   255,    36,    53,   327,   343,    50,    39,    25,
      53,   203,   204,   359,    25,    60,   204,   203,   259,    25,
      60,   630,    33,   215,    60,   217,   619,   215,   220,    39,
     233,   670,   342,    36,   220,    39,   239,    53,   647,    25,
     595,    86,    36,   635,   565,   566,    86,    33,    93,    94,
      86,    60,    86,    93,    94,   610,   248,    93,    94,    93,
      94,   308,   309,   310,   311,   312,   313,   314,   315,   316,
      39,   409,    50,   326,     5,    53,   462,    86,   464,    45,
      46,    39,    48,   483,    93,    94,   486,    52,    53,    50,
     645,   376,    53,    59,   588,   367,    52,    53,   339,   371,
     594,   293,   657,    50,   450,     9,    53,    39,     4,   664,
      14,    15,     9,    10,    59,   307,   308,   309,   310,   311,
     312,   313,   314,   315,   316,    25,   318,   473,    25,     9,
       3,     4,    74,    10,   471,   347,    33,    79,    80,    81,
      53,    50,    39,   396,    53,    50,   338,   400,    53,     3,
     338,   343,   364,    50,   407,    37,    53,    52,   468,    17,
      18,    19,    20,    21,    22,   412,    59,     3,   554,   372,
      37,    68,    45,    46,    86,    48,    49,   523,    74,    75,
      76,    77,    78,    79,    80,    81,    59,    60,    14,    15,
      86,    45,    46,    50,    48,   541,    53,    93,    94,    50,
     547,   393,    53,    52,    53,    59,    60,   544,    36,    45,
      46,   403,    48,   405,     3,     4,    13,   403,   410,   405,
     412,   462,    25,    59,    60,    52,    53,    52,    53,     6,
      25,     8,    52,    53,    52,    53,   428,   429,   430,    91,
      92,     4,   442,     6,    36,     8,    39,   439,    10,    12,
      13,     9,    29,   599,    52,    53,    45,    46,    35,    48,
      49,    24,    39,     9,    10,    39,    29,    37,   614,   461,
      59,    60,    35,    36,    25,   461,    39,    59,    41,   471,
      43,    36,   529,    60,    93,    94,    63,    64,   480,    75,
      76,    68,    77,    78,   480,   155,   156,    60,    61,    62,
      63,    64,    32,    84,    53,    68,   498,    84,    85,    86,
     502,    25,    89,    90,    10,    92,    93,    94,     3,     4,
      25,    84,    85,    86,     9,    84,    89,    90,    25,    92,
      93,    94,    59,    37,    59,    36,    84,   529,    36,    52,
      25,    26,    48,     4,   536,     9,    39,   539,   540,    52,
     562,    37,   544,    14,    37,    84,    17,    25,    25,    10,
      45,    46,     9,    48,    49,    26,    25,     3,     4,    25,
      25,    32,    84,    84,    59,    60,    37,    84,    10,   579,
      25,    52,    43,    10,    10,    48,    71,    52,   580,    88,
      39,    52,   584,    53,     9,   595,   588,    37,   584,     9,
      25,    62,   594,    25,    65,    25,    25,     3,     4,    45,
      46,   603,    48,     9,    75,     9,    25,   603,    51,    25,
      51,    50,    52,    59,    60,    53,    87,   619,    51,    25,
      26,    92,     9,    10,    50,   635,     6,    10,     8,    36,
      51,   102,   103,   104,    52,   637,   107,    59,    25,    45,
      46,    51,    48,    49,    25,     9,    33,     9,    53,    50,
      84,    10,    39,    59,    60,    35,   127,    84,    10,    39,
     131,   132,    36,    50,   135,    71,    53,    10,   670,   140,
     141,    10,   143,   144,   145,   146,   147,   148,   149,   150,
      60,    68,    50,    63,   155,   156,    10,    10,    68,     9,
     177,   100,   163,   164,   410,    60,   167,   562,   461,    87,
       4,   594,   645,     4,    84,     6,    86,     8,   580,    89,
     672,    12,   580,    93,    94,    35,    36,    37,    -1,    39,
      -1,   192,    -1,    24,    -1,    -1,    -1,    -1,    29,    -1,
      -1,    -1,   203,   204,    35,    36,    -1,   208,    39,    -1,
      41,    -1,    43,    63,   215,   216,   217,    -1,    -1,   220,
     221,    -1,    -1,    -1,     3,     4,    -1,    -1,    -1,    60,
      61,    62,    63,    64,    84,    -1,    86,    68,    -1,    89,
      90,    91,    92,    93,    94,    -1,    -1,    -1,   249,    -1,
     251,   252,    -1,    84,    85,    86,    -1,    -1,    89,    90,
     261,    92,    93,    94,    -1,   266,    45,    46,     4,    48,
       6,    -1,     8,    -1,    -1,   276,    12,    -1,    -1,    -1,
      59,    60,    -1,    -1,    -1,    -1,    -1,    -1,    24,    -1,
      -1,    -1,   293,    29,    -1,    -1,    -1,    -1,    -1,    35,
      36,    -1,    -1,    39,    -1,    41,    -1,    43,    14,    15,
      -1,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    -1,   323,   324,    60,    61,    62,    63,    64,    -1,
     331,    -1,    68,    -1,    -1,    -1,     6,   338,     8,    -1,
     341,   342,   343,    13,    -1,    -1,    -1,    -1,    84,    85,
      86,     9,    10,    89,    90,    -1,    -1,    93,    94,    29,
      -1,    -1,   363,    -1,    -1,    35,   367,    25,    -1,    39,
     371,    -1,    -1,    -1,   375,    33,   377,    -1,    -1,    -1,
      50,   382,    -1,    -1,     3,     4,    -1,     6,    -1,    -1,
      60,    10,    50,    63,    64,    53,   397,    -1,    68,    -1,
       3,     4,   403,    -1,   405,    -1,    -1,    26,    -1,    -1,
      68,    -1,    -1,    -1,    84,    85,    86,    -1,    -1,    89,
      90,    -1,    92,    93,    94,    -1,    45,    46,    -1,    48,
      49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      59,    60,    45,    46,    -1,    48,    49,    -1,    -1,    -1,
      -1,    -1,    71,   454,   455,    -1,    59,    60,    -1,    -1,
     461,    -1,    -1,   464,    -1,     0,     1,   468,    71,     4,
     471,     6,    -1,     8,    -1,    -1,    11,    12,    13,   480,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,
      25,    -1,    27,    28,    29,    -1,    -1,    -1,    33,    34,
      35,    36,    -1,    -1,    39,    -1,    41,    42,    43,    44,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,
      55,    56,    57,    58,    -1,    60,    61,    62,    63,    64,
      65,    -1,    -1,    68,    -1,    70,    -1,     5,     6,    -1,
       8,    -1,    -1,   544,    -1,    -1,   547,    82,    83,    84,
      85,    86,    87,   554,    89,    90,    -1,    92,    93,    94,
      -1,    -1,    -1,    31,    32,    -1,   567,    35,   569,   570,
      38,    39,    40,    -1,     6,    -1,     8,    -1,    -1,    47,
      12,    -1,    -1,   584,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    60,    -1,    -1,    63,    -1,    -1,    -1,    -1,
      68,    -1,   603,    35,    36,    -1,    -1,    39,    -1,    41,
      -1,    43,    -1,     6,    -1,     8,    84,    85,    86,    12,
      -1,    89,    90,    -1,   625,    93,    94,    -1,    60,    61,
      62,    63,    -1,    -1,    -1,    -1,    68,    -1,    -1,    -1,
      -1,    -1,    35,    36,    -1,    -1,    39,    -1,    41,    -1,
      43,    -1,    84,    85,    86,    -1,    -1,    89,    90,    -1,
      -1,    93,    94,    -1,    -1,    -1,    -1,    60,    61,    62,
      63,    -1,     3,     4,    -1,    68,     6,    -1,     8,     3,
       4,    -1,     6,    13,    -1,    16,    -1,     6,    -1,     8,
      -1,    84,    85,    86,    13,    26,    89,    90,    -1,    29,
      93,    94,    26,    -1,    -1,    35,    -1,    -1,    -1,    39,
      29,    -1,    -1,    -1,    45,    46,    35,    48,    49,    -1,
      39,    45,    46,    53,    48,    49,    -1,    -1,    59,    60,
      60,    50,    -1,    63,    64,    59,    60,    -1,    68,    -1,
      71,    60,    -1,    -1,    63,    64,    -1,    71,    -1,    68,
      -1,     3,     4,    -1,    84,    85,    86,    -1,    -1,    89,
      90,    -1,    92,    93,    94,    84,    85,    86,    -1,    -1,
      89,    90,    -1,    92,    93,    94,     6,    -1,     8,    -1,
      -1,    -1,    -1,    13,    -1,    -1,    -1,    -1,     6,    -1,
       8,    -1,    -1,    45,    46,    -1,    48,    49,    -1,    29,
      -1,    -1,    -1,    -1,    -1,    35,    24,    59,    60,    39,
      -1,    29,    -1,    -1,    -1,    -1,    68,    35,    -1,    71,
      -1,    39,    -1,    53,     6,    -1,     8,    -1,    -1,    -1,
      60,    13,    -1,    63,    64,    -1,    -1,    -1,    68,    -1,
      -1,    -1,    60,    -1,    -1,    63,    64,    29,    -1,    -1,
      68,    -1,    -1,    35,    84,    85,    86,    39,    -1,    89,
      90,    -1,    92,    93,    94,    -1,    84,    85,    86,    -1,
      -1,    89,    90,    -1,    92,    93,    94,    -1,    60,    -1,
      -1,    63,    64,    -1,    -1,    -1,    68,    -1,    -1,    -1,
      -1,     6,    -1,     8,    -1,    -1,    -1,    -1,     3,     4,
      -1,    -1,    84,    85,    86,    10,    -1,    89,    90,    24,
      92,    93,    94,    -1,    29,    -1,     3,     4,    -1,    -1,
      35,    26,    -1,     6,    39,     8,    -1,    -1,    -1,    16,
      13,    -1,    -1,    -1,     6,    -1,     8,    -1,    -1,    26,
      45,    46,    25,    48,    49,    60,    -1,    -1,    63,    64,
      -1,    -1,    35,    68,    59,    60,    39,    29,    45,    46,
      -1,    48,    49,    35,    -1,    -1,    71,    39,    -1,    84,
      85,    86,    59,    60,    89,    90,    -1,    60,    93,    94,
      63,    -1,    -1,    -1,    71,    68,    -1,     6,    60,     8,
       9,    63,    64,    -1,    -1,    -1,    68,    -1,    -1,    -1,
      -1,    84,    85,    86,    -1,    -1,    89,    90,    -1,    -1,
      93,    94,    84,    85,    86,    -1,    35,    89,    90,    -1,
      39,    93,    94,     6,    -1,     8,    -1,    10,    -1,    -1,
      -1,    50,    -1,    -1,    -1,     6,    -1,     8,     9,    -1,
      -1,    60,    -1,    -1,    63,    -1,    -1,    -1,    -1,    68,
      -1,    -1,    35,    -1,    -1,     6,    39,     8,    -1,    -1,
      -1,    -1,    -1,    -1,    35,    84,    85,    86,    39,    -1,
      89,    90,    -1,    -1,    93,    94,    -1,    60,    -1,    -1,
      63,    -1,    -1,    -1,    35,    68,    -1,    -1,    39,    60,
      -1,    -1,    63,    -1,    -1,    -1,     6,    68,     8,    50,
      -1,    84,    85,    86,    -1,    -1,    89,    90,    -1,    60,
      93,    94,    63,    84,    85,    86,    -1,    68,    89,    90,
      -1,    -1,    93,    94,    -1,    35,    -1,    -1,    -1,    39,
      -1,    -1,    -1,    84,    85,    86,    -1,    -1,    89,    90,
      50,    -1,    93,    94,     6,    -1,     8,    -1,    -1,    -1,
      60,    13,    -1,    63,    -1,    -1,    -1,    -1,    68,     6,
      -1,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    35,    84,    85,    86,    39,    -1,    89,
      90,    -1,    -1,    93,    94,    -1,    -1,    -1,    35,    -1,
      -1,    -1,    39,    -1,    -1,    -1,    -1,     6,    60,     8,
       9,    63,    -1,    50,    -1,    -1,    68,    -1,    -1,    -1,
      -1,    -1,     6,    60,     8,    -1,    63,    -1,    -1,    -1,
      -1,    68,    84,    85,    86,    -1,    35,    89,    90,    -1,
      39,    93,    94,    -1,    -1,    -1,    -1,    84,    85,    86,
      -1,    35,    89,    90,    -1,    39,    93,    94,    -1,    -1,
      -1,    60,    -1,    -1,    63,    -1,    -1,    -1,    -1,    68,
       6,    -1,     8,    -1,    10,    -1,    60,    -1,    -1,    63,
      -1,    -1,    -1,    -1,    68,    84,    85,    86,     3,     4,
      89,    90,    -1,    -1,    93,    94,    -1,    -1,    -1,    35,
      84,    85,    86,    39,    -1,    89,    90,    -1,    -1,    93,
      94,    26,    -1,     6,    -1,     8,    52,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    60,    -1,    -1,    63,    -1,    -1,
      45,    46,    68,    48,    49,    -1,    51,    -1,     3,     4,
      -1,    -1,    35,    -1,    59,    60,    39,    -1,    84,    -1,
      86,    -1,    -1,    89,    -1,    -1,    71,    93,    94,    52,
      -1,    26,    -1,    -1,    -1,    -1,    -1,    60,    -1,    -1,
      63,    -1,    -1,    -1,    -1,    68,     3,     4,     5,    -1,
      45,    46,    -1,    48,    49,    12,    51,    -1,    -1,    16,
      -1,    84,    -1,    86,    59,    60,    89,    -1,    -1,    26,
      93,    94,    -1,    -1,    31,    32,    71,    -1,    -1,    36,
      -1,    38,    -1,    40,    41,    -1,    43,    -1,    45,    46,
      47,    48,    49,    -1,    -1,    -1,    -1,     3,     4,     5,
      -1,    -1,    59,    60,    61,    62,    12,    -1,    -1,    -1,
      16,    -1,    -1,    -1,    71,    -1,     3,     4,    -1,    -1,
      26,    -1,    -1,    -1,    -1,    31,    32,    -1,    -1,    -1,
      36,    -1,    38,    -1,    40,    41,    -1,    43,    25,    45,
      46,    47,    48,    49,    -1,    -1,    -1,    -1,     3,     4,
       5,    -1,    -1,    59,    60,    61,    62,    12,    45,    46,
      -1,    48,    49,    -1,    -1,    71,    -1,    -1,    -1,    -1,
      -1,    26,    59,    60,    -1,    -1,    31,    32,    -1,    -1,
      -1,    36,    -1,    38,    71,    40,    41,    -1,    43,    -1,
      45,    46,    47,    48,    49,     3,     4,     5,    -1,    -1,
      -1,    -1,    -1,    -1,    59,    60,    61,    62,    16,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,    26,    -1,
      -1,    -1,    -1,    31,    32,     3,     4,     5,    -1,    -1,
      38,    -1,    40,    -1,    -1,    -1,    -1,    45,    46,    47,
      48,    49,     3,     4,    -1,    -1,    -1,    -1,    26,    10,
      -1,    59,    60,    31,    32,    -1,    -1,    -1,    -1,    -1,
      38,    -1,    40,    71,    -1,    26,    -1,    45,    46,    47,
      48,    49,     3,     4,    -1,    -1,    -1,    -1,    -1,     3,
       4,    59,    60,    -1,    45,    46,    10,    48,    49,    -1,
      -1,    -1,    -1,    71,    -1,    26,     3,     4,    59,    60,
      -1,    -1,    26,     3,     4,    -1,    -1,    -1,    -1,    -1,
      71,    -1,    -1,    -1,    45,    46,    -1,    48,    49,    26,
      51,    45,    46,    -1,    48,    49,    26,    -1,    59,    60,
      -1,     3,     4,    -1,    -1,    59,    60,    -1,    45,    46,
      71,    48,    49,    -1,    51,    45,    46,    71,    48,    49,
      -1,    51,    59,    60,    26,     3,     4,    -1,    -1,    59,
      60,    -1,    -1,    -1,    71,    -1,    -1,    -1,    -1,    -1,
      -1,    71,    -1,    45,    46,    -1,    48,    49,    35,    36,
      37,    -1,    39,    -1,    -1,    -1,    -1,    59,    60,    -1,
      35,    36,    37,    -1,    39,    52,    -1,    45,    46,    71,
      48,    49,    -1,    -1,    -1,    -1,    63,    52,    -1,    -1,
      -1,    59,    60,    -1,    -1,    35,    36,    37,    63,    39,
      -1,    -1,    -1,    71,    -1,    -1,    -1,    84,    -1,    86,
      -1,    -1,    89,    90,    91,    92,    93,    94,    -1,    84,
      -1,    86,    -1,    63,    89,    90,    91,    92,    93,    94,
      -1,    -1,    -1,    -1,    -1,    -1,    74,    75,    76,    77,
      78,    79,    80,    81,    84,    -1,    86,    -1,    86,    89,
      90,    91,    92,    93,    94,    93,    94
  };

  const unsigned char
  parser::yystos_[] =
  {
       0,    72,    73,    96,    97,    86,    93,    94,    99,   151,
       0,     1,     4,     6,     8,    11,    12,    13,    24,    25,
      27,    28,    29,    33,    34,    35,    36,    39,    41,    42,
      43,    44,    54,    55,    56,    57,    58,    60,    61,    62,
      63,    64,    65,    68,    70,    82,    83,    84,    85,    87,
      89,    90,    92,    98,    99,   103,   113,   114,   115,   116,
     118,   122,   132,   133,   136,   139,   140,   144,   164,     5,
      83,   178,    99,   163,    99,    60,    99,   103,    99,   103,
      36,    60,    99,   113,    60,    99,    25,   141,   142,    40,
      89,    50,    92,   103,   114,   131,    10,   103,   105,   107,
     108,   109,    36,    36,    13,    25,   103,    39,    60,    99,
     113,   113,    13,    60,    99,    99,   103,    99,   103,   104,
      25,   142,    99,    39,    24,    29,    64,    92,   103,   113,
      39,     3,     4,     5,    16,    26,    31,    32,    38,    40,
      45,    46,    47,    48,    49,    59,    60,    71,   112,   132,
       9,    10,    53,    68,   138,    14,    15,    17,    18,    19,
      20,    21,    22,   117,   117,    36,   103,   112,   128,    25,
      33,   114,    25,    33,     6,     8,    35,    39,    60,    63,
      68,    84,    89,    99,   100,    25,    83,    39,   176,    39,
      39,     5,    16,   105,   106,   134,   135,    99,    39,     9,
      25,    99,    59,    36,    92,   103,   114,   122,   127,   129,
     136,   137,   164,    99,    25,    92,   112,     9,   121,    50,
      53,    10,    53,   107,    52,    50,   103,   146,   149,    50,
     146,   150,   103,     9,    25,   103,   111,    99,    59,     9,
      25,   143,   143,    99,    99,    59,    39,    25,    39,    53,
      68,    37,    37,   177,    86,    36,    24,    29,    64,   103,
     113,   112,   106,   110,   103,   103,    13,   103,   103,   103,
     103,   103,   103,   103,   103,   103,   132,   128,    53,   114,
     119,   120,   103,   115,   115,   116,   116,    50,   106,   130,
     103,    25,   142,     9,    10,   121,   138,    25,   142,    99,
     100,    10,    52,   100,   101,   100,   100,    39,     3,     4,
      45,    46,    48,    49,    59,    60,    71,   110,    36,   110,
     110,   100,   103,    10,     9,    50,    53,    39,   110,    25,
     142,    37,    59,    84,    50,   114,   125,   126,    92,   103,
     129,   112,   127,     9,    10,    25,    53,    36,   128,    10,
      25,    53,    25,    53,    25,    53,    32,   119,   120,   114,
     103,    53,    25,     6,    10,   145,    50,    53,    25,   145,
      50,    53,     9,    25,   142,    10,    52,    53,    59,    84,
      25,   142,    37,    59,    59,    84,   110,    99,   152,   153,
     103,   146,   146,    36,    52,   135,    36,   112,   103,    52,
      53,   103,   128,    10,   138,     9,    50,    53,    53,   119,
      39,    52,    10,    52,    68,   101,   102,   100,   100,   100,
     100,   100,   100,   100,   100,   100,    52,    35,    36,    37,
      39,    63,    84,    89,    90,    91,    92,    99,   154,   155,
     156,   157,   158,   160,   161,   162,   178,    52,    52,    25,
     116,   106,   110,    52,    37,    37,   103,    84,    25,   121,
      50,    53,   103,   129,   112,    10,    25,    53,   127,   128,
     120,     9,    50,   105,   123,   124,    25,   121,   103,   105,
       9,   148,    25,   146,   148,    25,   146,   142,   103,   143,
     103,    84,    25,   103,    84,    84,    25,    52,    10,    52,
     145,   145,     4,    74,    75,    76,    77,    78,    79,    80,
      81,    99,   170,   171,   173,   174,   175,    88,    50,   135,
     103,   106,   114,   114,   106,   138,   102,    52,   100,    10,
      52,   158,   159,   159,    52,   157,    39,   154,   156,   155,
      10,   178,   176,   176,     9,    37,   121,     9,    52,   103,
     103,    51,    25,   125,   112,    10,    25,    53,   128,   120,
     121,    50,    53,   114,   147,   145,   145,    10,    25,     6,
      10,    25,    25,    99,    25,    51,    51,   170,   176,    50,
      53,    25,    50,   121,     9,    52,    50,    51,    10,    52,
     159,   156,   157,   121,    53,    50,   120,    93,    94,   116,
      51,    51,   123,    10,   148,   148,   103,   103,   103,    59,
      36,   178,   171,   173,   114,    52,   158,    52,   160,   154,
     178,    51,    51,   121,   114,    10,    51,    84,   154,   167,
     168,   169,    25,   121,    52,   157,   103,     9,   177,   176,
     177,   178,    51,   170,     9,    53,    50,    10,    84,   167,
      74,    79,    80,    81,   172,   176,    10,    36,    75,    76,
     154,   165,   166,    10,    10,   177,    77,    78,   154,    50,
      10,   170,    10,   172
  };

  const unsigned char
  parser::yyr1_[] =
  {
       0,    95,    96,    96,    97,    97,    98,    98,    98,    98,
      99,    99,    99,   100,   100,   100,   100,   100,   100,   100,
     100,   100,   100,   100,   100,   100,   100,   100,   100,   100,
     100,   100,   100,   100,   100,   100,   100,   101,   101,   102,
     102,   103,   103,   103,   103,   103,   103,   103,   103,   103,
     103,   103,   103,   103,   103,   103,   103,   103,   103,   103,
     103,   103,   103,   103,   103,   104,   104,   105,   105,   106,
     106,   107,   107,   107,   107,   108,   108,   109,   109,   110,
     110,   111,   111,   112,   112,   112,   112,   112,   112,   113,
     113,   113,   113,   114,   114,   114,   114,   114,   114,   114,
     114,   114,   114,   114,   114,   114,   115,   115,   115,   115,
     116,   116,   116,   117,   117,   117,   117,   117,   117,   118,
     118,   119,   119,   120,   120,   121,   121,   122,   122,   122,
     122,   122,   123,   123,   124,   124,   125,   126,   126,   127,
     127,   127,   127,   128,   128,   128,   129,   129,   129,   129,
     130,   130,   131,   131,   132,   132,   132,   132,   133,   133,
     133,   133,   134,   134,   135,   135,   136,   136,   136,   137,
     138,   138,   139,   139,   139,   139,   139,   139,   139,   139,
     140,   140,   141,   141,   141,   141,   141,   141,   141,   141,
     141,   141,   141,   142,   142,   142,   142,   142,   142,   143,
     143,   143,   144,   144,   144,    98,    98,    98,    98,    98,
      98,    98,    98,   145,   145,   146,   146,   147,   147,   148,
     148,   148,    98,    98,   149,   149,   150,   150,    98,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    98,    98,    98,    98,    98,   151,    98,
      98,    98,    98,    98,    98,   152,   152,   153,   153,    98,
      98,    98,    98,    98,    98,    98,    98,   154,   154,   155,
     155,   156,   156,   156,   156,   156,   156,   156,   156,   156,
     156,   156,   156,   156,   157,   157,   157,   158,   158,   159,
     159,   160,   160,   161,   161,   162,   162,   163,   163,   164,
     164,   164,   165,   165,   166,   166,   167,   167,   167,   168,
     168,   169,   169,   170,   170,   170,   170,   170,   170,   170,
     170,   170,   171,   172,   172,   172,   172,   173,   173,   174,
     174,   174,   174,   175,   175,    98,   176,   177,   178
  };

  const signed char
  parser::yyr2_[] =
  {
       0,     2,     2,     3,     2,     0,     1,     1,     3,     3,
       1,     1,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     2,     2,     2,     3,     3,     4,     4,     5,
       3,     1,     2,     1,     1,     1,     1,     1,     3,     1,
       0,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     2,     3,     4,     5,     3,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     3,     1,     3,     1,
       0,     2,     1,     1,     0,     2,     3,     1,     2,     1,
       3,     3,     5,     1,     1,     1,     1,     1,     1,     1,
       4,     2,     5,     1,     2,     3,     1,     2,     3,     1,
       2,     3,     3,     4,     5,     1,     4,     4,     2,     1,
       3,     3,     1,     1,     1,     1,     1,     1,     1,     3,
       3,     1,     3,     1,     0,     2,     0,     1,     1,     1,
       1,     1,     2,     2,     1,     3,     2,     1,     3,     2,
       3,     3,     4,     1,     2,     0,     3,     4,     2,     1,
       6,     4,     2,     4,     3,     4,     2,     3,     3,     4,
       2,     1,     4,     6,     1,     0,     4,     5,     6,     3,
       1,     1,     3,     3,     4,     5,     2,     2,     4,     3,
       3,     3,     3,     3,     3,     3,     4,     4,     5,     5,
       3,     3,     0,     3,     3,     4,     5,     3,     3,     1,
       2,     2,     1,     1,     1,     2,     3,     3,     2,     2,
       3,     3,     2,     2,     0,     3,     1,     1,     3,     2,
       1,     0,     6,     6,     3,     5,     3,     5,     4,     4,
       5,     5,     5,     6,     2,     4,     3,     6,     5,     4,
       5,     6,     5,    10,     8,     5,     6,     3,     3,     5,
       8,     8,     6,     3,     5,     3,     1,     0,     1,     6,
       3,     4,     4,     3,     7,     7,     6,     1,     1,     2,
       1,     3,     3,     2,     3,     4,     5,     4,     1,     1,
       1,     1,     1,     1,     3,     2,     1,     3,     1,     1,
       0,     3,     3,     4,     1,     1,     0,     1,     4,     2,
       8,    10,     1,     3,     1,     0,     6,     8,     8,     1,
       4,     1,     0,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     6,     1,     1,     1,     1,    16,     8,     3,
       3,     1,     1,     1,     0,     8,     0,     0,     0
  };


#if YYDEBUG || 1
  // YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
  // First, the terminals, then, starting at \a YYNTOKENS, nonterminals.
  const char*
  const parser::yytname_[] =
  {
  "\"<EOF>\"", "error", "\"invalid token\"", "\"+\"", "\"&\"", "\"=\"",
  "\"@\"", "\"#base\"", "\"~\"", "\":\"", "\",\"", "\"#const\"",
  "\"#count\"", "\"$\"", "\"$+\"", "\"$-\"", "\"$*\"", "\"$<=\"", "\"$<\"",
  "\"$>\"", "\"$>=\"", "\"$=\"", "\"$!=\"", "\"#cumulative\"",
  "\"#disjoint\"", "\".\"", "\"..\"", "\"#external\"", "\"#defined\"",
  "\"#false\"", "\"#forget\"", "\">=\"", "\">\"", "\":-\"", "\"#include\"",
  "\"#inf\"", "\"{\"", "\"[\"", "\"<=\"", "\"(\"", "\"<\"", "\"#max\"",
  "\"#maximize\"", "\"#min\"", "\"#minimize\"", "\"\\\\\"", "\"*\"",
  "\"!=\"", "\"**\"", "\"?\"", "\"}\"", "\"]\"", "\")\"", "\";\"",
  "\"#show\"", "\"#edge\"", "\"#project\"", "\"#heuristic\"",
  "\"#showsig\"", "\"/\"", "\"-\"", "\"#sum\"", "\"#sum+\"", "\"#sup\"",
  "\"#true\"", "\"#program\"", "UBNOT", "UMINUS", "\"|\"", "\"#volatile\"",
  "\":~\"", "\"^\"", "\"<program>\"", "\"<define>\"", "\"any\"",
  "\"unary\"", "\"binary\"", "\"left\"", "\"right\"", "\"head\"",
  "\"body\"", "\"directive\"", "\"#theory\"", "\"EOF\"", "\"<NUMBER>\"",
  "\"<ANONYMOUS>\"", "\"<IDENTIFIER>\"", "\"<SCRIPT>\"", "\"<CODE>\"",
  "\"<STRING>\"", "\"<VARIABLE>\"", "\"<THEORYOP>\"", "\"not\"",
  "\"default\"", "\"override\"", "$accept", "start", "program",
  "statement", "identifier", "constterm", "consttermvec", "constargvec",
  "term", "unaryargvec", "ntermvec", "termvec", "tuple", "tuplevec_sem",
  "tuplevec", "argvec", "binaryargvec", "cmp", "atom", "literal",
  "csp_mul_term", "csp_add_term", "csp_rel", "csp_literal", "nlitvec",
  "litvec", "optcondition", "aggregatefunction", "bodyaggrelem",
  "bodyaggrelemvec", "altbodyaggrelem", "altbodyaggrelemvec",
  "bodyaggregate", "upper", "lubodyaggregate", "headaggrelemvec",
  "altheadaggrelemvec", "headaggregate", "luheadaggregate", "ncspelemvec",
  "cspelemvec", "disjoint", "conjunction", "dsym", "disjunctionsep",
  "disjunction", "bodycomma", "bodydot", "bodyconddot", "head",
  "optimizetuple", "optimizeweight", "optimizelitvec", "optimizecond",
  "maxelemlist", "minelemlist", "define", "nidlist", "idlist", "theory_op",
  "theory_op_list", "theory_term", "theory_opterm", "theory_opterm_nlist",
  "theory_opterm_list", "theory_atom_element", "theory_atom_element_nlist",
  "theory_atom_element_list", "theory_atom_name", "theory_atom",
  "theory_operator_nlist", "theory_operator_list",
  "theory_operator_definition", "theory_operator_definition_nlist",
  "theory_operator_definiton_list", "theory_definition_identifier",
  "theory_term_definition", "theory_atom_type", "theory_atom_definition",
  "theory_definition_nlist", "theory_definition_list",
  "enable_theory_lexing", "enable_theory_definition_lexing",
  "disable_theory_lexing", YY_NULLPTR
  };
#endif


#if YYDEBUG
  const short
  parser::yyrline_[] =
  {
       0,   340,   340,   341,   345,   346,   352,   353,   354,   355,
     359,   360,   361,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   397,   398,   402,
     403,   409,   410,   411,   412,   413,   414,   415,   416,   417,
     418,   419,   420,   421,   422,   423,   424,   425,   426,   427,
     428,   429,   430,   431,   432,   438,   439,   445,   446,   450,
     451,   455,   456,   457,   458,   461,   462,   465,   466,   469,
     470,   474,   475,   485,   486,   487,   488,   489,   490,   494,
     495,   496,   497,   501,   502,   503,   504,   505,   506,   507,
     508,   509,   510,   511,   512,   513,   517,   518,   519,   520,
     524,   525,   526,   530,   531,   532,   533,   534,   535,   539,
     540,   548,   549,   553,   554,   558,   559,   563,   564,   565,
     566,   567,   573,   574,   578,   579,   585,   589,   590,   596,
     597,   598,   599,   603,   604,   605,   609,   610,   611,   612,
     618,   619,   623,   624,   630,   631,   632,   633,   637,   638,
     639,   640,   646,   647,   651,   652,   656,   657,   658,   665,
     672,   673,   679,   680,   681,   682,   683,   684,   685,   686,
     690,   691,   698,   699,   700,   701,   702,   703,   704,   705,
     706,   707,   708,   712,   713,   714,   715,   716,   717,   721,
     722,   723,   726,   727,   728,   732,   733,   734,   735,   736,
     742,   743,   744,   750,   751,   755,   756,   760,   761,   765,
     766,   767,   771,   772,   776,   777,   781,   782,   786,   787,
     788,   789,   795,   796,   797,   798,   799,   800,   801,   802,
     808,   809,   814,   820,   821,   827,   828,   829,   835,   839,
     840,   841,   847,   853,   854,   860,   861,   865,   866,   870,
     871,   877,   878,   879,   880,   881,   882,   888,   889,   895,
     896,   900,   901,   902,   903,   904,   905,   906,   907,   908,
     909,   910,   911,   912,   916,   917,   918,   922,   923,   927,
     928,   932,   933,   937,   938,   942,   943,   947,   948,   951,
     952,   953,   959,   960,   964,   965,   969,   970,   971,   975,
     976,   980,   981,   985,   986,   987,   988,   989,   990,   991,
     992,   993,   997,  1001,  1002,  1003,  1004,  1008,  1010,  1014,
    1015,  1016,  1017,  1021,  1022,  1026,  1032,  1036,  1040
  };

  void
  parser::yy_stack_print_ () const
  {
    *yycdebug_ << "Stack now";
    for (stack_type::const_iterator
           i = yystack_.begin (),
           i_end = yystack_.end ();
         i != i_end; ++i)
      *yycdebug_ << ' ' << int (i->state);
    *yycdebug_ << '\n';
  }

  void
  parser::yy_reduce_print_ (int yyrule) const
  {
    int yylno = yyrline_[yyrule];
    int yynrhs = yyr2_[yyrule];
    // Print the symbols being reduced, and their result.
    *yycdebug_ << "Reducing stack by rule " << yyrule - 1
               << " (line " << yylno << "):\n";
    // The symbols being reduced.
    for (int yyi = 0; yyi < yynrhs; yyi++)
      YY_SYMBOL_PRINT ("   $" << yyi + 1 << " =",
                       yystack_[(yynrhs) - (yyi + 1)]);
  }
#endif // YYDEBUG

  parser::symbol_kind_type
  parser::yytranslate_ (int t) YY_NOEXCEPT
  {
    // YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to
    // TOKEN-NUM as returned by yylex.
    static
    const signed char
    translate_table[] =
    {
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94
    };
    // Last valid token kind.
    const int code_max = 349;

    if (t <= 0)
      return symbol_kind::S_YYEOF;
    else if (t <= code_max)
      return static_cast <symbol_kind_type> (translate_table[t]);
    else
      return symbol_kind::S_YYUNDEF;
  }

#line 28 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/lib/clingo/libgringo/src/input/nongroundgrammar.yy"
} } } // Gringo::Input::NonGroundGrammar
#line 3937 "/Users/ccorea/PycharmProjects/myProjects/MISenumerator/inconsistency-measurement-LTL-master/build/lib/clingo/libgringo/src/input/nongroundgrammar/grammar.cc"

