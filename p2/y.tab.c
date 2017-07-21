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
     GTE = 263,
     LTE = 264,
     GT = 265,
     LT = 266,
     NEQ = 267,
     EQ = 268,
     MOD = 269,
     SUB = 270,
     ADD = 271,
     DIV = 272,
     MULT = 273,
     FALSE = 274,
     TRUE = 275,
     NOT = 276,
     OR = 277,
     AND = 278,
     WRITE = 279,
     READ = 280,
     CONTINUE = 281,
     ENDLOOP = 282,
     BEGINLOOP = 283,
     DO = 284,
     WHILE = 285,
     ELSE = 286,
     ENDIF = 287,
     THEN = 288,
     IF = 289,
     OF = 290,
     ARRAY = 291,
     ASSIGN = 292,
     COMMA = 293,
     COLON = 294,
     SEMICOLON = 295,
     L_PAREN = 296,
     R_PAREN = 297,
     END_PROGRAM = 298,
     BEGIN_PROGRAM = 299,
     PROGRAM = 300,
     UMINUS = 301
   };
#endif
/* Tokens.  */
#define IDENT 258
#define VAR 259
#define NUMBER 260
#define INTEGER 261
#define END 262
#define GTE 263
#define LTE 264
#define GT 265
#define LT 266
#define NEQ 267
#define EQ 268
#define MOD 269
#define SUB 270
#define ADD 271
#define DIV 272
#define MULT 273
#define FALSE 274
#define TRUE 275
#define NOT 276
#define OR 277
#define AND 278
#define WRITE 279
#define READ 280
#define CONTINUE 281
#define ENDLOOP 282
#define BEGINLOOP 283
#define DO 284
#define WHILE 285
#define ELSE 286
#define ENDIF 287
#define THEN 288
#define IF 289
#define OF 290
#define ARRAY 291
#define ASSIGN 292
#define COMMA 293
#define COLON 294
#define SEMICOLON 295
#define L_PAREN 296
#define R_PAREN 297
#define END_PROGRAM 298
#define BEGIN_PROGRAM 299
#define PROGRAM 300
#define UMINUS 301




/* Copy the first part of user declarations.  */
#line 1 "mini_l.y"

 #include <stdio.h>
 #include <stdlib.h>
 void yyerror(const char *msg);
 extern int currLine;
 extern int currPos;
 extern int yyleng;
 FILE * yyin;


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
#line 11 "mini_l.y"
{
  int ival;
  char* idval;
}
/* Line 193 of yacc.c.  */
#line 203 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 216 "y.tab.c"

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
#define YYLAST   167

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  60
/* YYNRULES -- Number of rules.  */
#define YYNRULES  100
/* YYNRULES -- Number of states.  */
#define YYNSTATES  176

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   301

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
      45,    46
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     9,    11,    13,    15,    17,    19,    21,
      23,    25,    27,    29,    31,    33,    35,    37,    39,    41,
      43,    45,    47,    49,    51,    53,    55,    57,    59,    61,
      63,    65,    67,    69,    71,    73,    75,    77,    79,    81,
      83,    85,    87,    89,    91,    93,    95,    97,    99,   101,
     103,   105,   107,   111,   115,   120,   124,   133,   141,   150,
     154,   158,   160,   164,   165,   168,   172,   175,   177,   184,
     189,   190,   194,   195,   197,   202,   205,   209,   213,   217,
     218,   221,   225,   226,   229,   231,   235,   237,   239,   243,
     246,   247,   251,   255,   257,   259,   263,   265,   268,   271,
     275
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      48,     0,    -1,    49,    50,    57,    85,    64,    -1,     1,
      -1,    45,    -1,     1,    -1,     3,    -1,    16,    -1,    15,
      -1,    18,    -1,    17,    -1,    14,    -1,    13,    -1,    12,
      -1,     9,    -1,     8,    -1,    11,    -1,    10,    -1,    40,
      -1,     1,    -1,    39,    -1,     1,    -1,    38,    -1,    37,
      -1,    41,    -1,    42,    -1,    44,    -1,     1,    -1,    43,
      -1,     1,    -1,     6,    -1,     1,    -1,     5,    -1,     1,
      -1,    36,    -1,    35,    -1,    34,    -1,    33,    -1,    32,
      -1,    23,    -1,    22,    -1,    21,    -1,    20,    -1,    19,
      -1,    30,    -1,    29,    -1,    26,    -1,    28,    -1,    27,
      -1,    25,    -1,    24,    -1,    31,    -1,    89,    57,    86,
      -1,    89,    57,    86,    -1,    63,    87,    57,    88,    -1,
      94,    60,   101,    -1,    69,   105,    70,    87,    57,    88,
      92,    71,    -1,    77,   105,    80,    87,    57,    88,    81,
      -1,    78,    80,    87,    57,    88,    81,    77,   105,    -1,
      82,    94,    93,    -1,    83,    94,    93,    -1,    79,    -1,
      87,    57,    88,    -1,    -1,    50,    90,    -1,    59,    50,
      90,    -1,    58,    91,    -1,    65,    -1,    67,    61,    66,
      62,    68,    65,    -1,    84,    87,    57,    88,    -1,    -1,
      59,    94,    93,    -1,    -1,    50,    -1,    50,    61,   101,
      62,    -1,   103,    96,    -1,    53,   103,    96,    -1,    54,
     103,    96,    -1,    55,   103,    96,    -1,    -1,    99,    98,
      -1,    72,    99,    98,    -1,    -1,    74,   100,    -1,   100,
      -1,   101,    56,   101,    -1,    75,    -1,    76,    -1,    61,
     105,    62,    -1,    95,   102,    -1,    -1,    51,    95,   102,
      -1,    52,    95,   102,    -1,    94,    -1,    66,    -1,    61,
     101,    62,    -1,   104,    -1,    52,   103,    -1,    97,   106,
      -1,    73,    97,   106,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    32,    32,    33,    35,    35,    37,    39,    41,    43,
      45,    47,    49,    50,    51,    52,    53,    54,    56,    56,
      58,    58,    60,    62,    64,    66,    68,    68,    70,    70,
      72,    72,    74,    74,    76,    78,    80,    82,    84,    86,
      88,    90,    92,    94,    96,    98,   100,   102,   104,   106,
     108,   110,   112,   114,   115,   117,   118,   119,   120,   121,
     122,   123,   125,   125,   127,   129,   130,   132,   133,   135,
     135,   137,   137,   139,   140,   141,   143,   144,   145,   146,
     148,   150,   151,   153,   154,   156,   157,   158,   159,   161,
     163,   164,   165,   167,   168,   169,   170,   172,   174,   176,
     177
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENT", "VAR", "NUMBER", "INTEGER",
  "END", "GTE", "LTE", "GT", "LT", "NEQ", "EQ", "MOD", "SUB", "ADD", "DIV",
  "MULT", "FALSE", "TRUE", "NOT", "OR", "AND", "WRITE", "READ", "CONTINUE",
  "ENDLOOP", "BEGINLOOP", "DO", "WHILE", "ELSE", "ENDIF", "THEN", "IF",
  "OF", "ARRAY", "ASSIGN", "COMMA", "COLON", "SEMICOLON", "L_PAREN",
  "R_PAREN", "END_PROGRAM", "BEGIN_PROGRAM", "PROGRAM", "UMINUS",
  "$accept", "prog_start", "program", "ident", "add", "sub", "mult", "div",
  "mod", "comp", "semicolon", "colon", "comma", "assign", "l_paren",
  "r_paren", "begin_program", "end_program", "integer", "number", "array",
  "of", "if", "then", "endif", "and", "or", "not", "true", "false",
  "while", "do", "continue", "beginloop", "endloop", "read", "write",
  "else", "block", "block2", "statement", "statement1", "dec", "dec1",
  "dec2", "if_p", "var_p", "var", "multiplicative_exp",
  "multiplicative_exp1", "relation_n_exp", "relation_n_exp1",
  "relation_exp", "relation_exp1", "expression", "expression1", "term",
  "term1", "bool_exp", "bool_exp1", 0
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
     295,   296,   297,   298,   299,   300,   301
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    47,    48,    48,    49,    49,    50,    51,    52,    53,
      54,    55,    56,    56,    56,    56,    56,    56,    57,    57,
      58,    58,    59,    60,    61,    62,    63,    63,    64,    64,
      65,    65,    66,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    86,    87,    87,    87,    87,    87,
      87,    87,    88,    88,    89,    90,    90,    91,    91,    92,
      92,    93,    93,    94,    94,    95,    96,    96,    96,    96,
      97,    98,    98,    99,    99,   100,   100,   100,   100,   101,
     102,   102,   102,   103,   103,   103,   103,   104,   105,   106,
     106
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     5,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     3,     4,     3,     8,     7,     8,     3,
       3,     1,     3,     0,     2,     3,     2,     1,     6,     4,
       0,     3,     0,     1,     4,     2,     3,     3,     3,     0,
       2,     3,     0,     2,     1,     3,     1,     1,     3,     2,
       0,     3,     3,     1,     1,     3,     1,     2,     2,     3,
       0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     3,     4,     0,     0,     1,     6,     0,    19,    18,
       0,     0,     0,     0,    21,    22,    20,     0,     0,    64,
      29,    28,     2,     0,    31,    30,    34,    67,     0,    66,
       0,    27,    26,     0,    52,     0,    24,     0,    65,    50,
      49,    46,    45,    44,    36,    73,     0,     0,     0,    61,
       0,     0,     0,     0,     0,    33,    32,     0,     0,     8,
      43,    42,    41,     0,     0,    94,     0,    86,    87,    93,
      90,   100,    82,    84,     0,    79,    96,     0,     0,    47,
       0,    72,    72,    63,    23,     0,    53,    25,     0,     0,
       0,    97,     0,     0,    83,     7,     0,     0,    89,    40,
       0,    98,    39,     0,    80,    15,    14,    17,    16,    13,
      12,     0,    11,    10,     9,     0,     0,     0,    75,    37,
       0,     0,     0,     0,    59,    60,     0,    54,    55,    35,
       0,     0,    74,    95,    88,    90,    90,   100,    82,    85,
      79,    79,    79,     0,     0,    63,    72,    63,    68,    91,
      92,    99,    81,    76,    77,    78,    63,    63,     0,    71,
      62,    70,     0,    48,     0,    51,     0,     0,    57,     0,
       0,    38,    56,    58,    63,    69
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,    45,    96,    63,   115,   116,   117,   111,
      10,    17,   123,    85,    89,   133,    33,    22,    27,    65,
      28,   130,    46,   120,   172,   103,   100,    66,    67,    68,
      47,    48,    49,    80,   164,    50,    51,   166,    12,    34,
     126,   127,    35,    19,    29,   167,   124,    69,    70,   118,
      71,   104,    72,    73,    74,    98,    75,    76,    77,   101
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -82
static const yytype_int16 yypact[] =
{
      10,    11,   -82,    38,    28,   -82,   -82,    20,   -82,   -82,
      28,    12,     4,    20,   -82,   -82,   -82,    29,    28,   -82,
     -82,   -82,   -82,     9,   -82,   -82,   -82,   -82,     2,   -82,
      12,   -82,   -82,   124,   -82,    20,   -82,    78,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,     2,    81,    81,    43,   -82,
      28,    28,    20,    37,     9,   -82,   -82,     6,    58,   -82,
     -82,   -82,   -82,    58,    81,   -82,   114,   -82,   -82,   -82,
       1,    63,    57,   -82,   151,   127,   -82,    64,    43,   -82,
     124,    53,    53,   124,   -82,    58,   -82,   -82,    83,    58,
       6,   -82,    95,     6,   -82,   -82,    58,    58,   -82,   -82,
      81,   -82,   -82,    81,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,    58,   -82,   -82,   -82,    58,    58,    58,   -82,   -82,
     124,   124,    20,    28,   -82,   -82,    20,   -82,   -82,   -82,
      31,     6,   -82,   -82,   -82,     1,     1,    63,    57,   -82,
     127,   127,   127,    20,    20,   124,    53,   124,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   124,   124,    71,   -82,
     -82,    89,    71,   -82,    91,   -82,   124,    92,   -82,    81,
      20,   -82,   -82,   -82,   124,   -82
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -82,   -82,   -82,    23,   -82,   -67,   -82,   -82,   -82,   -82,
     -13,   -82,    15,   -82,   -22,   -23,   -82,   -82,    -2,    99,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -32,   -82,   -82,    60,   -20,   -82,   -82,   -82,   -82,    85,
     -26,   -81,   136,   121,   -82,   -82,   -74,   -31,   -68,   -30,
      52,    18,    62,   100,   -49,   -48,   -59,   -82,   -46,    30
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -6
static const yytype_int16 yytable[] =
{
      23,    78,    53,    97,    91,    20,    37,    52,   125,    90,
      31,     1,     6,    14,    -5,    92,    59,    95,    93,    81,
      82,     8,    54,    58,    64,    64,    18,     7,   135,   136,
      24,     6,    24,    11,    88,    25,   128,    25,     5,    83,
     131,    30,    64,    36,    64,    18,    11,    21,    87,    53,
      15,    16,    53,    32,   122,     2,   140,   141,   142,    55,
       9,     6,   139,    56,   158,    26,   160,   132,    97,    97,
     134,    79,   159,    59,    84,   161,   162,    11,    64,    55,
     102,    64,    55,    56,     6,    99,    56,   149,   150,    53,
      53,    15,   146,   175,   143,   144,    59,   119,   163,    36,
      60,    61,    62,   105,   106,   107,   108,   109,   110,   145,
     153,   154,   155,   147,    53,    55,    53,     6,   129,    56,
     165,    43,    36,   173,   171,    53,    53,     6,   148,    59,
     156,   157,   169,    60,    61,    53,    57,    87,   121,    86,
     170,   112,   168,    53,   113,   114,    13,    64,    39,    40,
      41,    38,   137,    42,    43,    36,   152,   174,    44,   105,
     106,   107,   108,   109,   110,   138,    94,   151
};

static const yytype_uint8 yycheck[] =
{
      13,    47,    33,    70,    63,     1,    28,    33,    82,    58,
       1,     1,     3,     1,     3,    64,    15,    16,    64,    50,
      51,     1,    35,    45,    46,    47,    11,     4,    96,    97,
       1,     3,     1,    10,    57,     6,    85,     6,     0,    52,
      89,    18,    64,    41,    66,    30,    23,    43,    42,    80,
      38,    39,    83,    44,    80,    45,   115,   116,   117,     1,
      40,     3,   111,     5,   145,    36,   147,    90,   135,   136,
      93,    28,   146,    15,    37,   156,   157,    54,   100,     1,
      23,   103,     1,     5,     3,    22,     5,   135,   136,   120,
     121,    38,   123,   174,   120,   121,    15,    33,    27,    41,
      19,    20,    21,     8,     9,    10,    11,    12,    13,   122,
     140,   141,   142,   126,   145,     1,   147,     3,    35,     5,
      31,    30,    41,   169,    32,   156,   157,     3,   130,    15,
     143,   144,   164,    19,    20,   166,    37,    42,    78,    54,
     166,    14,   162,   174,    17,    18,    10,   169,    24,    25,
      26,    30,   100,    29,    30,    41,   138,   170,    34,     8,
       9,    10,    11,    12,    13,   103,    66,   137
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    45,    48,    49,     0,     3,    50,     1,    40,
      57,    50,    85,    89,     1,    38,    39,    58,    59,    90,
       1,    43,    64,    57,     1,     6,    36,    65,    67,    91,
      50,     1,    44,    63,    86,    89,    41,    61,    90,    24,
      25,    26,    29,    30,    34,    50,    69,    77,    78,    79,
      82,    83,    87,    94,    57,     1,     5,    66,    61,    15,
      19,    20,    21,    52,    61,    66,    74,    75,    76,    94,
      95,    97,    99,   100,   101,   103,   104,   105,   105,    28,
      80,    94,    94,    57,    37,    60,    86,    42,    62,    61,
     101,   103,   101,   105,   100,    16,    51,    52,   102,    22,
      73,   106,    23,    72,    98,     8,     9,    10,    11,    12,
      13,    56,    14,    17,    18,    53,    54,    55,    96,    33,
      70,    80,    87,    59,    93,    93,    87,    88,   101,    35,
      68,   101,    62,    62,    62,    95,    95,    97,    99,   101,
     103,   103,   103,    87,    87,    57,    94,    57,    65,   102,
     102,   106,    98,    96,    96,    96,    57,    57,    88,    93,
      88,    88,    88,    27,    81,    31,    84,    92,    81,    77,
      87,    32,    71,   105,    57,    88
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
#line 32 "mini_l.y"
    {
	printf("prog_start -> program ident semicolon block end_program \n");;}
    break;

  case 4:
#line 35 "mini_l.y"
    {printf("program -> PROGRAM \n");;}
    break;

  case 6:
#line 37 "mini_l.y"
    {printf("ident -> IDENT (%s) \n", (yyvsp[(1) - (1)].idval));;}
    break;

  case 7:
#line 39 "mini_l.y"
    {printf("add -> ADD \n");;}
    break;

  case 8:
#line 41 "mini_l.y"
    {printf("sub -> SUB \n");;}
    break;

  case 9:
#line 43 "mini_l.y"
    {printf("mult -> MULT \n");;}
    break;

  case 10:
#line 45 "mini_l.y"
    {printf("div -> DIV \n");;}
    break;

  case 11:
#line 47 "mini_l.y"
    {printf("mod -> MOD \n");;}
    break;

  case 12:
#line 49 "mini_l.y"
    {printf("comp -> EQ \n");;}
    break;

  case 13:
#line 50 "mini_l.y"
    {printf("comp -> NEQ \n");;}
    break;

  case 14:
#line 51 "mini_l.y"
    {printf("comp -> LTE \n");;}
    break;

  case 15:
#line 52 "mini_l.y"
    {printf("comp -> GTE \n");;}
    break;

  case 16:
#line 53 "mini_l.y"
    {printf("comp -> LT \n");;}
    break;

  case 17:
#line 54 "mini_l.y"
    {printf("comp -> GT \n");;}
    break;

  case 18:
#line 56 "mini_l.y"
    { printf("semicolon -> SEMICOLON \n");;}
    break;

  case 20:
#line 58 "mini_l.y"
    {printf("colon -> COLON \n"); ;}
    break;

  case 22:
#line 60 "mini_l.y"
    {printf("colon -> COMMA \n"); ;}
    break;

  case 23:
#line 62 "mini_l.y"
    {printf("assign -> ASSIGN \n");;}
    break;

  case 24:
#line 64 "mini_l.y"
    {printf("l_paren -> L_PAREN \n"); ;}
    break;

  case 25:
#line 66 "mini_l.y"
    {printf("r_paren -> R_PAREN \n");;}
    break;

  case 26:
#line 68 "mini_l.y"
    {printf("begin_program -> BEGIN_PROGRAM \n");;}
    break;

  case 28:
#line 70 "mini_l.y"
    {printf("end_program -> END_PROGRAM \n"); ;}
    break;

  case 30:
#line 72 "mini_l.y"
    {printf("integer -> INTEGER \n", (yyvsp[(1) - (1)].ival));;}
    break;

  case 32:
#line 74 "mini_l.y"
    {printf("number -> NUMBER (%d) \n", (yyvsp[(1) - (1)].ival));;}
    break;

  case 34:
#line 76 "mini_l.y"
    {printf("array -> ARRAY \n");;}
    break;

  case 35:
#line 78 "mini_l.y"
    {printf("of -> OF \n");;}
    break;

  case 36:
#line 80 "mini_l.y"
    {printf("if -> IF \n");;}
    break;

  case 37:
#line 82 "mini_l.y"
    {printf("then -> THEN \n");;}
    break;

  case 38:
#line 84 "mini_l.y"
    {printf("endif -> ENDIF \n");;}
    break;

  case 39:
#line 86 "mini_l.y"
    {printf("AND -> \n");;}
    break;

  case 40:
#line 88 "mini_l.y"
    {printf("or -> OR \n");;}
    break;

  case 41:
#line 90 "mini_l.y"
    {printf("not -> NOT \n");;}
    break;

  case 42:
#line 92 "mini_l.y"
    {printf("true -> TRUE \n");;}
    break;

  case 43:
#line 94 "mini_l.y"
    {printf("false -> FALSE \n");;}
    break;

  case 44:
#line 96 "mini_l.y"
    {printf("while -> WHILE \n");;}
    break;

  case 45:
#line 98 "mini_l.y"
    {printf("do -> DO \n");;}
    break;

  case 46:
#line 100 "mini_l.y"
    {printf("continue -> CONTINUE \n");;}
    break;

  case 47:
#line 102 "mini_l.y"
    {printf("beginloop -> BEGINLOOP \n");;}
    break;

  case 48:
#line 104 "mini_l.y"
    {printf("endloop -> ENDLOOP \n");;}
    break;

  case 49:
#line 106 "mini_l.y"
    {printf("read -> READ \n");;}
    break;

  case 50:
#line 108 "mini_l.y"
    {printf("write -> WRITE \n");;}
    break;

  case 51:
#line 110 "mini_l.y"
    {printf("else -> ELSE \n");;}
    break;

  case 52:
#line 112 "mini_l.y"
    {printf("block -> dec semicolon block2 \n");;}
    break;

  case 53:
#line 114 "mini_l.y"
    {printf("block2 -> dec semicolon block2 \n");;}
    break;

  case 54:
#line 115 "mini_l.y"
    {printf("block2 -> begin_program statement semicolon statement1 \n");;}
    break;

  case 55:
#line 117 "mini_l.y"
    {printf("statement -> var assign expression \n");;}
    break;

  case 56:
#line 118 "mini_l.y"
    {printf("statement -> bool_exp then statement semicolon statement1 if_p1 if_p endif \n");;}
    break;

  case 57:
#line 119 "mini_l.y"
    {printf("statement -> bool_exp beginloop statement semicolon statement1 endloop \n");;}
    break;

  case 58:
#line 120 "mini_l.y"
    {printf("statement -> beginloop statement semicolon statement1 endloop while bool_exp \n");;}
    break;

  case 59:
#line 121 "mini_l.y"
    {printf("statement -> read var var_p \n");;}
    break;

  case 60:
#line 122 "mini_l.y"
    {printf("statement -> write var var_p \n");;}
    break;

  case 61:
#line 123 "mini_l.y"
    {printf("statement -> continue \n");;}
    break;

  case 62:
#line 125 "mini_l.y"
    {printf("statement1 -> statement semicolon statement1 \n");;}
    break;

  case 63:
#line 125 "mini_l.y"
    {printf("statement1 -> \n");;}
    break;

  case 64:
#line 127 "mini_l.y"
    {printf("dec -> ident dec1 \n");;}
    break;

  case 65:
#line 129 "mini_l.y"
    {printf("dec1 -> comma ident dec1 \n");;}
    break;

  case 66:
#line 130 "mini_l.y"
    {printf("dec1 -> colon dec2 \n");;}
    break;

  case 67:
#line 132 "mini_l.y"
    {printf("dec2 -> integer \n");;}
    break;

  case 68:
#line 133 "mini_l.y"
    {printf("dec2 -> array l_paren number r_paren of integer \n");;}
    break;

  case 69:
#line 135 "mini_l.y"
    {printf("if_p -> else statement semicolon statement1 \n");;}
    break;

  case 70:
#line 135 "mini_l.y"
    {printf("if_p -> \n");;}
    break;

  case 71:
#line 137 "mini_l.y"
    {printf("var_p -> comma var var_p \n");;}
    break;

  case 72:
#line 137 "mini_l.y"
    {printf("var_p -> \n");;}
    break;

  case 73:
#line 139 "mini_l.y"
    {printf("var -> ident \n");;}
    break;

  case 74:
#line 140 "mini_l.y"
    {printf("var -> ident l_paren expression r_paren \n");;}
    break;

  case 75:
#line 141 "mini_l.y"
    {printf("multiplicative_exp -> term multiplicative_exp1 \n");;}
    break;

  case 76:
#line 143 "mini_l.y"
    {printf("multiplicative_exp -> mult term multiplicative_exp1 \n");;}
    break;

  case 77:
#line 144 "mini_l.y"
    {printf("multiplicative_exp -> div term multiplicative_exp1 \n");;}
    break;

  case 78:
#line 145 "mini_l.y"
    {printf("multiplicative_exp -> mod term multiplicative_exp1 \n");;}
    break;

  case 79:
#line 146 "mini_l.y"
    {printf("multiplicative_exp -> \n");;}
    break;

  case 80:
#line 148 "mini_l.y"
    {printf("relation_n_exp -> relation_exp \n");;}
    break;

  case 81:
#line 150 "mini_l.y"
    {printf("relation_n_exp1 -> and relation_exp relation_n_exp1 \n");;}
    break;

  case 82:
#line 151 "mini_l.y"
    {printf("relation_n_exp1 -> \n");;}
    break;

  case 83:
#line 153 "mini_l.y"
    {printf("relation_exp -> not relation_exp1 \n");;}
    break;

  case 84:
#line 154 "mini_l.y"
    {printf("relation_exp -> relation_exp1 \n");;}
    break;

  case 85:
#line 156 "mini_l.y"
    {printf("relation_exp -> expression comp expression \n");;}
    break;

  case 86:
#line 157 "mini_l.y"
    {printf("relation_exp -> true \n");;}
    break;

  case 87:
#line 158 "mini_l.y"
    {printf("relation_exp -> false \n");;}
    break;

  case 88:
#line 159 "mini_l.y"
    {printf("relation_exp -> l_paren bool_exp r_paren \n");;}
    break;

  case 89:
#line 161 "mini_l.y"
    {printf("expression -> multiplicative_sub expression1 \n");;}
    break;

  case 90:
#line 163 "mini_l.y"
    {printf("expression1 -> \n");;}
    break;

  case 91:
#line 164 "mini_l.y"
    {printf("expression1 -> add multiplicative_sub expression1 \n");;}
    break;

  case 92:
#line 165 "mini_l.y"
    {printf("expression1 -> sub multiplicative_sub expression1 \n");;}
    break;

  case 93:
#line 167 "mini_l.y"
    {printf("term -> var \n");;}
    break;

  case 94:
#line 168 "mini_l.y"
    {printf("term -> number \n");;}
    break;

  case 95:
#line 169 "mini_l.y"
    {printf("term -> l_paren expression r_paren \n");;}
    break;

  case 96:
#line 170 "mini_l.y"
    {printf("term -> term1 \n");;}
    break;

  case 97:
#line 172 "mini_l.y"
    {printf("term1 -> sub term \n");;}
    break;

  case 98:
#line 174 "mini_l.y"
    {printf("bool_exp -> relation_n_exp bool_exp1 \n");;}
    break;

  case 99:
#line 176 "mini_l.y"
    {printf("bool_exp1 -> or relation_n_exp bool_exp1 \n");;}
    break;

  case 100:
#line 177 "mini_l.y"
    {printf("bool_exp1 -> \n");;}
    break;


/* Line 1267 of yacc.c.  */
#line 2034 "y.tab.c"
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


#line 180 "mini_l.y"


int main(int argc, char **argv) {
   if (argc > 1) {
      yyin = fopen(argv[1], "r");
      if (yyin == NULL){
         printf("syntax: %s filename\n", argv[0]);
      }//end if
   }//end if
   yyparse(); // Calls yylex() for tokens.
   return 0;
}

void yyerror(const char *msg) {
   printf("** Line %d, position %d: %s\n", currLine, currPos, msg);
   exit(0);
}


