/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     IDENT = 258,
     VAR = 259,
     NUMBER = 260,
     INTEGER = 261,
     END = 262,
     FALSE = 263,
     TRUE = 264,
     NOT = 265,
     OR = 266,
     AND = 267,
     WRITE = 268,
     READ = 269,
     CONTINUE = 270,
     ENDLOOP = 271,
     BEGINLOOP = 272,
     DO = 273,
     WHILE = 274,
     ELSE = 275,
     ENDIF = 276,
     THEN = 277,
     IF = 278,
     OF = 279,
     ARRAY = 280,
     END_PROGRAM = 281,
     BEGIN_PROGRAM = 282,
     PROGRAM = 283,
     R_PAREN = 284,
     L_PAREN = 285,
     ASSIGN = 286,
     COMMA = 287,
     COLON = 288,
     SEMICOLON = 289,
     GTE = 290,
     LTE = 291,
     GT = 292,
     LT = 293,
     NEQ = 294,
     EQ = 295,
     MOD = 296,
     SUB = 297,
     ADD = 298,
     DIV = 299,
     MULT = 300
   };
#endif
/* Tokens.  */
#define IDENT 258
#define VAR 259
#define NUMBER 260
#define INTEGER 261
#define END 262
#define FALSE 263
#define TRUE 264
#define NOT 265
#define OR 266
#define AND 267
#define WRITE 268
#define READ 269
#define CONTINUE 270
#define ENDLOOP 271
#define BEGINLOOP 272
#define DO 273
#define WHILE 274
#define ELSE 275
#define ENDIF 276
#define THEN 277
#define IF 278
#define OF 279
#define ARRAY 280
#define END_PROGRAM 281
#define BEGIN_PROGRAM 282
#define PROGRAM 283
#define R_PAREN 284
#define L_PAREN 285
#define ASSIGN 286
#define COMMA 287
#define COLON 288
#define SEMICOLON 289
#define GTE 290
#define LTE 291
#define GT 292
#define LT 293
#define NEQ 294
#define EQ 295
#define MOD 296
#define SUB 297
#define ADD 298
#define DIV 299
#define MULT 300




/* Copy the first part of user declarations.  */
#line 7 "mini_l.y"


 #define YY_NO_UNPUT ////////
 
 #include <iostream>
 #include <string> //////////
 #include <stack>
 #include <sstream>
 #include <stdio.h>
 #include <stdlib.h>
 #include <map>

 using namespace std;
 void yyerror(const char *msg);
 extern int currLine;
 extern int currPos;
 extern int yyleng;
 extern FILE * yyin;
 extern char* yytext;
 extern int yylex(void);

 map<string, int> decs;
 stack<string> idents;
 stack<string> vars;
 stack<string> comps;
 stack<string> indexes;
 stack<string> reverse_s;
 stack<int> size;
 stack<int> labels;
 stack<int> loops;
 stack<int> predicates;
 unsigned t_num = 0;
 unsigned l_num = 0;
 unsigned p_num = 0;
 string error_msg = "";
 stringstream output;




/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 47 "mini_l.y"
{
  char* ival;
  char* idval;
}
/* Line 193 of yacc.c.  */
#line 231 "mini_l.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 244 "mini_l.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   151

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  46
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  35
/* YYNRULES -- Number of rules.  */
#define YYNRULES  75
/* YYNRULES -- Number of states.  */
#define YYNSTATES  158

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   300

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
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
      45
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     9,    11,    13,    15,    17,    19,    21,
      23,    25,    27,    31,    35,    40,    43,    47,    50,    52,
      59,    61,    65,    74,    82,    91,    95,    99,   101,   103,
     105,   107,   111,   112,   117,   118,   122,   123,   125,   127,
     129,   131,   134,   138,   139,   142,   146,   147,   151,   153,
     156,   158,   161,   165,   170,   175,   178,   179,   183,   187,
     190,   194,   198,   202,   203,   205,   208,   210,   213,   217,
     222,   224,   226,   228,   233,   235
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      47,     0,    -1,    28,     3,    34,    50,    26,    -1,     1,
      -1,    40,    -1,    39,    -1,    38,    -1,    37,    -1,    36,
      -1,    35,    -1,    27,    -1,     1,    -1,    52,    34,    51,
      -1,    52,    34,    51,    -1,    49,    56,    34,    60,    -1,
      55,    53,    -1,    32,    55,    53,    -1,    33,    54,    -1,
       6,    -1,    25,    30,     5,    29,    24,     6,    -1,     3,
      -1,    78,    31,    72,    -1,    23,    67,    63,    56,    34,
      60,    61,    64,    -1,    57,    67,    58,    56,    34,    60,
      59,    -1,    66,    17,    56,    34,    60,    59,    19,    67,
      -1,    14,    78,    62,    -1,    13,    78,    62,    -1,    15,
      -1,    19,    -1,    17,    -1,    16,    -1,    56,    34,    60,
      -1,    -1,    65,    56,    34,    60,    -1,    -1,    32,    78,
      62,    -1,    -1,    22,    -1,    21,    -1,    20,    -1,    18,
      -1,    69,    68,    -1,    11,    69,    68,    -1,    -1,    71,
      70,    -1,    12,    71,    70,    -1,    -1,    72,    48,    72,
      -1,     9,    -1,    10,     9,    -1,     8,    -1,    10,     8,
      -1,    30,    67,    29,    -1,    10,    30,    67,    29,    -1,
      10,    72,    48,    72,    -1,    74,    73,    -1,    -1,    43,
      74,    73,    -1,    42,    74,    73,    -1,    76,    75,    -1,
      45,    76,    75,    -1,    44,    76,    75,    -1,    41,    76,
      75,    -1,    -1,    78,    -1,    42,    78,    -1,     5,    -1,
      42,    77,    -1,    30,    72,    29,    -1,    42,    30,    72,
      29,    -1,     5,    -1,     1,    -1,    80,    -1,    80,    79,
      72,    29,    -1,    30,    -1,     3,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    65,    65,    74,    79,    82,    85,    88,    91,    94,
     100,   101,   104,   107,   108,   111,   114,   115,   118,   124,
     138,   149,   171,   172,   173,   182,   201,   221,   229,   237,
     246,   256,   257,   260,   261,   264,   265,   268,   277,   283,
     292,   301,   311,   320,   323,   326,   335,   338,   365,   370,
     375,   380,   386,   387,   388,   419,   422,   423,   451,   481,
     484,   512,   541,   569,   572,   573,   590,   594,   595,   596,
     608,   616,   619,   631,   638,   649
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENT", "VAR", "NUMBER", "INTEGER",
  "END", "FALSE", "TRUE", "NOT", "OR", "AND", "WRITE", "READ", "CONTINUE",
  "ENDLOOP", "BEGINLOOP", "DO", "WHILE", "ELSE", "ENDIF", "THEN", "IF",
  "OF", "ARRAY", "END_PROGRAM", "BEGIN_PROGRAM", "PROGRAM", "R_PAREN",
  "L_PAREN", "ASSIGN", "COMMA", "COLON", "SEMICOLON", "GTE", "LTE", "GT",
  "LT", "NEQ", "EQ", "MOD", "SUB", "ADD", "DIV", "MULT", "$accept",
  "prog_start", "comp", "begin_program", "block", "block2", "declaration",
  "declaration1", "declaration2", "ident", "statement", "while",
  "beginloop", "endloop", "statement1", "else_state", "var1", "then",
  "endif", "else", "do", "bool_exp", "bool_exp1", "relation_and_exp",
  "relation_and_exp1", "relation_exp", "expression", "expression1",
  "multiplicative_exp", "multiplicative_exp1", "term", "number", "var",
  "l_paren", "ident_err", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    46,    47,    47,    48,    48,    48,    48,    48,    48,
      49,    49,    50,    51,    51,    52,    53,    53,    54,    54,
      55,    56,    56,    56,    56,    56,    56,    56,    57,    58,
      59,    60,    60,    61,    61,    62,    62,    63,    64,    65,
      66,    67,    68,    68,    69,    70,    70,    71,    71,    71,
      71,    71,    71,    71,    71,    72,    73,    73,    73,    74,
      75,    75,    75,    75,    76,    76,    76,    76,    76,    76,
      77,    77,    78,    78,    79,    80
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     5,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     3,     4,     2,     3,     2,     1,     6,
       1,     3,     8,     7,     8,     3,     3,     1,     1,     1,
       1,     3,     0,     4,     0,     3,     0,     1,     1,     1,
       1,     2,     3,     0,     2,     3,     0,     3,     1,     2,
       1,     2,     3,     4,     4,     2,     0,     3,     3,     2,
       3,     3,     3,     0,     1,     2,     1,     2,     3,     4,
       1,     1,     1,     4,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     3,     0,     0,     0,     1,     0,    20,     0,     0,
       0,     2,     0,     0,     0,    15,    11,    10,     0,    12,
       0,     0,    18,     0,    17,    75,     0,     0,    27,    40,
      28,     0,     0,     0,     0,     0,    72,     0,    16,     0,
      36,    36,    66,    50,    48,     0,     0,     0,     0,    43,
      46,     0,    56,    63,    64,    32,     0,     0,     0,    74,
       0,    13,     0,     0,    26,    25,    51,    49,     0,     0,
       0,     0,    71,    70,     0,    67,    65,    37,     0,     0,
      41,     0,    44,     9,     8,     7,     6,     5,     4,     0,
       0,     0,    55,     0,     0,     0,    59,     0,    14,    29,
       0,     0,     0,    21,     0,     0,    36,     0,     0,    52,
      68,     0,     0,    43,    46,    47,    56,    56,    63,    63,
      63,    32,     0,    32,     0,    73,     0,    35,    53,    54,
      69,    32,    42,    45,    58,    57,    62,    61,    60,    31,
      32,     0,    19,    34,     0,    30,     0,    39,     0,     0,
      23,     0,    38,    22,     0,    24,    32,    33
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,    89,    18,     8,    19,    20,    15,    24,    10,
      97,    33,   100,   146,    98,   148,    64,    78,   153,   149,
      34,    48,    80,    49,    82,    50,    51,    92,    52,    96,
      53,    75,    54,    60,    36
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -75
static const yytype_int16 yypact[] =
{
      13,   -75,     8,     4,   -21,   -75,    12,   -75,    -5,    20,
       0,   -75,     9,    12,     1,   -75,   -75,   -75,    77,   -75,
      40,     0,   -75,     5,   -75,   -75,    73,    73,   -75,   -75,
     -75,    14,    44,    14,    64,    53,    59,     9,   -75,    88,
      62,    62,   -75,   -75,   -75,    22,    14,    74,    75,    87,
      90,    79,    23,     6,   -75,    77,    82,    77,    43,   -75,
      43,   -75,    91,    73,   -75,   -75,   -75,   -75,    14,    79,
      94,    72,   -75,   -75,    43,   -75,   -75,   -75,    77,    14,
     -75,    14,   -75,   -75,   -75,   -75,   -75,   -75,   -75,    43,
      43,    43,   -75,    43,    43,    43,   -75,    92,   -75,   -75,
      77,    93,    43,   -75,    95,   101,    62,    99,    43,   -75,
     -75,   100,    96,    87,    90,   -75,    23,    23,     6,     6,
       6,    77,   102,    77,   104,   -75,   128,   -75,   -75,   -75,
     -75,    77,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
      77,   119,   -75,    86,   119,   -75,   118,   -75,   120,    77,
     -75,    14,   -75,   -75,   105,   -75,    77,   -75
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -75,   -75,    71,   -75,   -75,   106,   136,   123,   -75,   132,
     -17,   -75,   -75,     2,   -68,   -75,   -39,   -75,   -75,   -75,
     -75,   -30,    34,    69,    35,    70,   -40,   -74,    -4,   -61,
     -24,   -75,   -18,   -75,   -75
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      35,    32,    65,    56,     5,    69,    71,    22,    40,    41,
      16,     4,     7,     6,     1,     7,    70,    25,   103,    42,
     104,    11,    43,    44,    45,    25,    23,    42,    71,    76,
      66,    67,    13,    14,   111,    39,    17,    35,   107,    35,
     101,     2,   134,   135,    46,   106,    25,    93,    42,   115,
      94,    95,    68,   139,    12,   141,    47,   136,   137,   138,
      35,   112,   124,   143,    47,    90,    91,   127,   129,   118,
     119,   120,   144,   102,    37,    72,    25,    25,    55,    73,
      25,    57,    35,   122,    58,    47,   116,   117,   157,    59,
      26,    27,    28,    62,    63,    29,    30,    77,    79,    99,
      31,   110,    81,    35,    74,    35,   147,    83,    84,    85,
      86,    87,    88,    35,    83,    84,    85,    86,    87,    88,
     105,   155,    35,   109,   125,   126,   121,   123,   128,   130,
     131,    35,   154,   110,   142,   145,   140,   151,    35,   156,
     108,   152,     9,    61,    38,    21,   150,   132,   113,   133,
       0,   114
};

static const yytype_int16 yycheck[] =
{
      18,    18,    41,    33,     0,    45,    46,     6,    26,    27,
       1,     3,     3,    34,     1,     3,    46,     3,    58,     5,
      60,    26,     8,     9,    10,     3,    25,     5,    68,    47,
       8,     9,    32,    33,    74,    30,    27,    55,    68,    57,
      57,    28,   116,   117,    30,    63,     3,    41,     5,    89,
      44,    45,    30,   121,    34,   123,    42,   118,   119,   120,
      78,    78,   102,   131,    42,    42,    43,   106,   108,    93,
      94,    95,   140,    30,    34,     1,     3,     3,    34,     5,
       3,    17,   100,   100,    31,    42,    90,    91,   156,    30,
      13,    14,    15,     5,    32,    18,    19,    22,    11,    17,
      23,    29,    12,   121,    30,   123,    20,    35,    36,    37,
      38,    39,    40,   131,    35,    36,    37,    38,    39,    40,
      29,   151,   140,    29,    29,    24,    34,    34,    29,    29,
      34,   149,   149,    29,     6,    16,    34,    19,   156,    34,
      69,    21,     6,    37,    21,    13,   144,   113,    79,   114,
      -1,    81
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    28,    47,     3,     0,    34,     3,    50,    52,
      55,    26,    34,    32,    33,    53,     1,    27,    49,    51,
      52,    55,     6,    25,    54,     3,    13,    14,    15,    18,
      19,    23,    56,    57,    66,    78,    80,    34,    53,    30,
      78,    78,     5,     8,     9,    10,    30,    42,    67,    69,
      71,    72,    74,    76,    78,    34,    67,    17,    31,    30,
      79,    51,     5,    32,    62,    62,     8,     9,    30,    72,
      67,    72,     1,     5,    30,    77,    78,    22,    63,    11,
      68,    12,    70,    35,    36,    37,    38,    39,    40,    48,
      42,    43,    73,    41,    44,    45,    75,    56,    60,    17,
      58,    56,    30,    72,    72,    29,    78,    67,    48,    29,
      29,    72,    56,    69,    71,    72,    74,    74,    76,    76,
      76,    34,    56,    34,    72,    29,    24,    62,    29,    72,
      29,    34,    68,    70,    73,    73,    75,    75,    75,    60,
      34,    60,     6,    60,    60,    16,    59,    20,    61,    65,
      59,    19,    21,    64,    56,    67,    34,    60
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 65 "mini_l.y"
    {
				for (unsigned i = 0; i < t_num; ++i) {
					cout << "   . t" << i << endl;
				}
				for (unsigned i = 0; i < p_num; ++i) {
					cout << "   . p" << i << endl;
				}
				cout << output.str();
			;}
    break;

  case 4:
#line 79 "mini_l.y"
    {
				comps.push("==");	
			;}
    break;

  case 5:
#line 82 "mini_l.y"
    {
				comps.push("!=");
			;}
    break;

  case 6:
#line 85 "mini_l.y"
    {
				comps.push("<");
			;}
    break;

  case 7:
#line 88 "mini_l.y"
    {
				comps.push(">");
			;}
    break;

  case 8:
#line 91 "mini_l.y"
    {
				comps.push("<=");
			;}
    break;

  case 9:
#line 94 "mini_l.y"
    {
				comps.push(">=");
			;}
    break;

  case 10:
#line 100 "mini_l.y"
    { output << ": START" << endl;;}
    break;

  case 18:
#line 118 "mini_l.y"
    {
				while(!idents.empty()) {
					output << "   . " << idents.top() << endl;
					idents.pop();
				}
			;}
    break;

  case 19:
#line 124 "mini_l.y"
    {
				if (atoi((yyvsp[(3) - (6)].ival)) <= 0){
					error_msg = "Improper array size allocation. " ;
					yyerror(error_msg.c_str());
				}
				while(!idents.empty()) {
					output << "   .[] " << idents.top() << ", " << atoi((yyvsp[(3) - (6)].ival)) << endl;
					decs[idents.top()] = atoi((yyvsp[(3) - (6)].ival));
					idents.pop();
				}
			
			;}
    break;

  case 20:
#line 138 "mini_l.y"
    {
			if (decs.find("_" + string((yyvsp[(1) - (1)].idval))) != decs.end()) {
				error_msg =  string((yyvsp[(1) - (1)].idval)) + " was previously declared. ";
				yyerror(error_msg.c_str());
			}
			decs["_" + string((yyvsp[(1) - (1)].idval))] = -1;
			idents.push("_" + string((yyvsp[(1) - (1)].idval)));

			;}
    break;

  case 21:
#line 149 "mini_l.y"
    {
			string temp = vars.top();
			if (indexes.top() != "-1") {
				stringstream reverse_this; 
				reverse_this << t_num;
				output << "  =[] t" << t_num << ", " << temp << ", " << indexes.top() << endl;
				temp = "t" + reverse_this.str();
				t_num++;
			}

			vars.pop();
			indexes.pop();
			string temp2 = vars.top();
			if (indexes.top() != "-1") {
				output << "   []= " << temp2 << ", " << indexes.top() << ", " << temp << endl;
			}
			else {
				output << "   = " << temp2 << ", " << temp << endl;
			}
			vars.pop();
			indexes.pop();
			;}
    break;

  case 24:
#line 173 "mini_l.y"
    {
				int temp2 = predicates.top();
				predicates.pop();
				int temp1 = labels.top();
				output << "   == p" << p_num << ", p" << temp2 << ", 0" << endl;
				output << "   ?:= L" << temp1 << ", p" << p_num << endl;
				++p_num;
				labels.pop();
			;}
    break;

  case 25:
#line 182 "mini_l.y"
    {
				while (!vars.empty()) {
					stringstream reverse_this;
					if (indexes.top() == "-1") {
						reverse_this << "   .< " << vars.top() << endl;
						reverse_s.push(reverse_this.str());
					}
					else {
						reverse_this << "   .[]< " << vars.top() << ", " << indexes.top() << endl;
						reverse_s.push(reverse_this.str());
					}
					vars.pop();
					indexes.pop();
				}
				while (!reverse_s.empty()) {
					output << reverse_s.top();
					reverse_s.pop();
				}			
			;}
    break;

  case 26:
#line 201 "mini_l.y"
    {
				while (!vars.empty()) {
					stringstream reverse_this;
					if (indexes.top() == "-1") {
						reverse_this << "   .> " << vars.top() << endl;
						reverse_s.push(reverse_this.str());
					}
					else {
						reverse_this << "   .[]> " << vars.top() << ", " << indexes.top() << endl;
						reverse_s.push(reverse_this.str());
					}
					vars.pop();
					indexes.pop();
				}
				while (!reverse_s.empty()) {
					output << reverse_s.top();
					reverse_s.pop();
				}		
			
			;}
    break;

  case 27:
#line 221 "mini_l.y"
    {
				if (!loops.empty()) {
					int temp = loops.top();
					output << "   := L" << temp << endl;
				}
			;}
    break;

  case 28:
#line 229 "mini_l.y"
    {
			output << ": L" << l_num << endl;
			labels.push(l_num);
			loops.push(l_num);
			++l_num;
			;}
    break;

  case 29:
#line 237 "mini_l.y"
    {
			int temp = predicates.top();
			predicates.pop();
			output << "   ?:= L" << l_num << ", p" << temp << endl;
			labels.push(l_num);
			++l_num;
			;}
    break;

  case 30:
#line 246 "mini_l.y"
    {
			int temp = labels.top();
			labels.pop();
			int temp2 = labels.top();
			labels.pop();
			output << "   := L" << temp2 << endl << ": L" << temp << endl;
			loops.pop();
			;}
    break;

  case 37:
#line 268 "mini_l.y"
    {
			int temp = predicates.top();
			predicates.pop();
			output << "   ?:= L" << l_num << ", p" << temp << endl;
			labels.push(l_num);
			++l_num;
			;}
    break;

  case 38:
#line 277 "mini_l.y"
    {
			output << ": L" << labels.top() << endl;
			labels.pop();
			;}
    break;

  case 39:
#line 283 "mini_l.y"
    {
			output << "   := L" << l_num << endl;
			output << ": L" << labels.top() << endl;
			labels.pop();
			labels.push(l_num);
			++l_num;
			;}
    break;

  case 40:
#line 292 "mini_l.y"
    {
			output << ": L" << l_num << endl;
			labels.push(l_num);
			++l_num;
			loops.push(l_num);
			++l_num;
			;}
    break;

  case 41:
#line 301 "mini_l.y"
    {
			int temp = predicates.top();
			predicates.pop();
			output << "   == p" << p_num << ", p" << temp << ", 0" << endl;
			predicates.push(p_num);
			++p_num;
	
			;}
    break;

  case 42:
#line 311 "mini_l.y"
    {
			int temp = predicates.top();
			predicates.pop();
			int temp2 = predicates.top();
			predicates.pop();
			output << "   || p" << p_num << ", p" << temp2 << ", p" << temp << endl;
			predicates.push(p_num);
			++p_num;
			;}
    break;

  case 45:
#line 326 "mini_l.y"
    {
			int temp = predicates.top();
			predicates.pop();
			int temp2 = predicates.top();
			predicates.pop();
			output << "   && p" << p_num << ", p" << temp2 << ", p" << temp << endl;
			predicates.push(p_num);
			++p_num;
			;}
    break;

  case 47:
#line 338 "mini_l.y"
    {
			string temp = vars.top();
			if (indexes.top() != "-1"){
				stringstream reverse_this;
				reverse_this << t_num;
				output << "   =[] t" << t_num << ", " << temp << ", " << indexes.top() << endl;
				temp = "t" + reverse_this.str();
				++t_num;
			}
			vars.pop();
			indexes.pop();
			string temp2 = vars.top();
			if (indexes.top() != "-1") {
				stringstream reverse_this;
				reverse_this << t_num;
				output << "   =[] t" << t_num << ", " << temp2 << ", " << indexes.top() << endl;
				temp2 = "t" + reverse_this.str();
				++t_num;
			}
			vars.pop();
			indexes.pop();
			string temp3 = comps.top();
			comps.pop();
			output << "   " << temp3 << " p" << p_num << ", " << temp2 << ", " << temp << endl;
			predicates.push(p_num);
			++p_num;
			;}
    break;

  case 48:
#line 365 "mini_l.y"
    {
				output << "   == p" << p_num << ", 1, 1" << endl;
				predicates.push(p_num);
				++p_num;			
			;}
    break;

  case 49:
#line 370 "mini_l.y"
    {
				output << "   == p" << p_num << ", 1, 0" << endl;
				predicates.push(p_num);
				++p_num;				
			;}
    break;

  case 50:
#line 375 "mini_l.y"
    {
				output << "   == p" << p_num << ", 1, 0" << endl;
				predicates.push(p_num);
				++p_num;			
			;}
    break;

  case 51:
#line 380 "mini_l.y"
    {
				output << "   == p" << p_num << ", 1, 1" << endl;
				predicates.push(p_num);
				++p_num;
			;}
    break;

  case 54:
#line 388 "mini_l.y"
    {
			string temp = vars.top();
			if (indexes.top() != "-1"){
				stringstream reverse_this;
				reverse_this << t_num;
				output << "   =[] t" << t_num << ", " << temp << ", " << indexes.top() << endl;
				temp = "t" + reverse_this.str();
				++t_num;
			}
			vars.pop();
			indexes.pop();
			string temp2 = vars.top();
			if (indexes.top() != "-1") {
				stringstream reverse_this;
				reverse_this << t_num;
				output << "   =[] t" << t_num << ", " << temp2 << ", " << indexes.top() << endl;
				temp2 = "t" + reverse_this.str();
				++t_num;
			}
			vars.pop();
			indexes.pop();
			string temp3 = comps.top();
			comps.pop();
			output << "   " << temp3 << " p" << p_num << ", " << temp2 << ", " << temp << endl;
			++p_num;
			output << "   == p" << p_num << ", p" << p_num - 1 << ", 0" << endl;
			predicates.push(p_num);
			++p_num;		
			;}
    break;

  case 57:
#line 423 "mini_l.y"
    {
				string temp = vars.top();
				if (indexes.top() != "-1") {
					stringstream reverse_this;
					reverse_this << t_num;
					output << "   =[] t" << t_num << ", " << temp << ", " << indexes.top() << endl;
					temp = "t" + reverse_this.str();
					++t_num;
				}
				vars.pop();
				indexes.pop();
				string temp2 = vars.top();
				if (indexes.top() != "-1") {
					stringstream reverse_this;
					reverse_this << t_num;
					output << "   =[] t" << t_num << ", " << temp2 << ", " << indexes.top() << endl;
					temp2 = "t" + reverse_this.str();
					++t_num;
				}
				vars.pop();
				indexes.pop();
				output << "   + t" << t_num << ", " << temp2 << ", " << temp << endl;
				stringstream reverse_this;
				reverse_this << t_num;
				vars.push("t" + reverse_this.str());
				indexes.push("-1");
				++t_num;			
			;}
    break;

  case 58:
#line 451 "mini_l.y"
    {
				string temp = vars.top();
				if (indexes.top() != "-1") {
					stringstream reverse_this;
					reverse_this << t_num;
					output << "   =[] t" << t_num << ", " << temp << ", " << indexes.top() << endl;
					temp = "t" + reverse_this.str();
					++t_num;
				}
				vars.pop();
				indexes.pop();
				string temp2 = vars.top();
				if (indexes.top() != "-1") {
					stringstream reverse_this;
					reverse_this << t_num;
					output << "   =[] t" << t_num << ", " << temp2 << indexes.top() << endl;
					temp2 = "t" + reverse_this.str();
					++t_num;
				}
				vars.pop();
				indexes.pop();
				output << "   - t" << t_num << ", " << temp2 << ", " << temp << endl;
				stringstream reverse_this;
				reverse_this << t_num;
				vars.push("t" + reverse_this.str());
				indexes.push("-1");
				++t_num;
			;}
    break;

  case 60:
#line 484 "mini_l.y"
    {
				string temp = vars.top();
				if (indexes.top() != "-1") {
					stringstream reverse_this;
					reverse_this << t_num;
					output << "   =[] t" << t_num << ", " << temp << ", " << indexes.top() << endl;
					temp = "t" + reverse_this.str();
					++t_num;
				}
				vars.pop();
				indexes.pop();
				string temp2 = vars.top();
				if (indexes.top()!= "-1") {
					stringstream reverse_this;
					reverse_this << t_num;
					output << "   =[] t" << t_num << ", " << temp2 << ", " << indexes.top() << endl;
					temp2 = "t" + reverse_this.str();
					++t_num;
				}
				vars.pop();
				indexes.pop();
				output << " * t" << t_num << ", " << temp2 << ", " << temp << endl;
				stringstream reverse_this;
				reverse_this << t_num;
				vars.push("t" + reverse_this.str());
				indexes.push("-1");
				++t_num;			
			;}
    break;

  case 61:
#line 512 "mini_l.y"
    {
				string temp = vars.top();
				if (indexes.top() != "-1") {
					stringstream reverse_this;
					reverse_this << t_num;
					output << "   =[] t" << t_num << ", " << temp << ", " << indexes.top() << endl;
					temp = "t" + reverse_this.str();
					++t_num;
				}
				vars.pop();
				indexes.pop();
				string temp2 = vars.top();
				if (indexes.top() != "-1") {
					stringstream reverse_this;
					reverse_this << t_num;
					output << "   =[] t" << t_num << ", " << temp2 << indexes.top() << endl;
					temp2 = "t" + reverse_this.str();
					++t_num;
				}
				vars.pop();
				indexes.pop();
				output << " / t" << t_num << ", " << temp2 << ", " << temp << endl;
				stringstream reverse_this;
				reverse_this << t_num;
				vars.push("t" + reverse_this.str());
				indexes.push("-1");
				++t_num;
			;}
    break;

  case 62:
#line 541 "mini_l.y"
    {
				string temp = vars.top();
				if (indexes.top() != "-1") {
					stringstream reverse_this;
					reverse_this << t_num;
					output << "   =[] t" << t_num << ", " << temp << ", " << indexes.top() << endl;
					temp = "t" + reverse_this.str();
					++t_num;
				}
				vars.pop();
				indexes.pop();
				string temp2 = vars.top();
				if (indexes.top() != "-1") {
					stringstream reverse_this;
					reverse_this << t_num;
					output << "   =[] t" << t_num << ", " << temp2 << indexes.top() << endl;
					temp2 = "t" + reverse_this.str();
					++t_num;
				}
				vars.pop();
				indexes.pop();
				output << " % t" << t_num << ", " << temp2 << ", " << temp << endl;
				stringstream reverse_this;
				reverse_this << t_num;
				vars.push("t" + reverse_this.str());
				indexes.push("-1");
				++t_num;
			;}
    break;

  case 65:
#line 573 "mini_l.y"
    {
				string temp = vars.top();
				if (indexes.top() != "-1") {
					stringstream reverse_this;
					reverse_this << t_num;
					output << "   =[] t" << t_num << ", " << temp << ", " << indexes.top() << endl;
					temp = "t" + reverse_this.str();
					++t_num;
				}
				vars.pop();
				output << " -t" << t_num << ", 0, " << temp << endl;
				stringstream reverse_this;
				reverse_this << t_num;
				vars.push("t" + reverse_this.str());
				indexes.push("-1");
				++t_num;
			;}
    break;

  case 66:
#line 590 "mini_l.y"
    {
				vars.push(string((yyvsp[(1) - (1)].ival)));
				indexes.push("-1");			
			;}
    break;

  case 68:
#line 595 "mini_l.y"
    {;}
    break;

  case 69:
#line 596 "mini_l.y"
    {
				string temp = vars.top();
				vars.pop();
				output << " - t" << t_num << ", 0, " << temp << endl;
				stringstream reverse_this;
				reverse_this << t_num;
				vars.push("t" + reverse_this.str());
				indexes.push("-1");
				++t_num;
			;}
    break;

  case 70:
#line 608 "mini_l.y"
    {
				output << " - t" << t_num << ", 0, " << string((yyvsp[(1) - (1)].ival)) << endl;
				stringstream reverse_this;
				reverse_this << t_num;
				vars.push("t" + reverse_this.str());
				indexes.push("-1");
				++t_num;
			;}
    break;

  case 72:
#line 619 "mini_l.y"
    {
			map<string, int>:: iterator it;
			it = decs.find(vars.top());
			if (it != decs.end()) {
				if ((*it).second != - 1) {
					error_msg = "Array " + vars.top().substr(1, vars.top().length()-1) + "needs an index. ";
					yyerror(error_msg.c_str());
				}
			}
			indexes.push("-1");
			
			;}
    break;

  case 73:
#line 631 "mini_l.y"
    {
				indexes.pop();
				indexes.push(vars.top());
				vars.pop();
			;}
    break;

  case 74:
#line 638 "mini_l.y"
    {
				map<string, int>::iterator it;
				it = decs.find(vars.top());
				if (it != decs.end()){
					if ((*it).second == -1) {
						error_msg = "variable " + vars.top().substr(1, vars.top().length()-1) + "does not need an index. " ;
						yyerror(error_msg.c_str());
					}
				}
			;}
    break;

  case 75:
#line 649 "mini_l.y"
    {
			string temp_string = string((yyvsp[(1) - (1)].idval));
			if (decs.find("_" + temp_string) == decs.end()) {
				error_msg = temp_string +" is a POS was not declared. ";
				yyerror(error_msg.c_str());
			}
			else if (temp_string == "program" || temp_string == "beginprogram" || 
					temp_string == "endprogram" || temp_string == "integer" ||
					temp_string == "array" || temp_string == "of" ||
					temp_string == "if" || temp_string == "then" ||
					temp_string == "endif" || temp_string == "else" ||
					temp_string == "while" || temp_string == "do" ||
					temp_string == "beginloop" || temp_string == "endloop" ||
					temp_string == "continue" || temp_string == "read" ||
					temp_string == "write" || temp_string == "and" ||
					temp_string == "or" || temp_string == "not" ||
					temp_string == "true" || temp_string == "false") {
					
					error_msg = string((yyvsp[(1) - (1)].idval)) + " is reserved. ";
					yyerror(error_msg.c_str());
					}
			vars.push("_" + string((yyvsp[(1) - (1)].idval)));
			;}
    break;


/* Line 1267 of yacc.c.  */
#line 2268 "mini_l.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 678 "mini_l.y"


void yyerror(const char *msg) {
   printf("Error line %d, symbol %s: %s\n", currLine, yytext, msg);
   exit(0);
}


