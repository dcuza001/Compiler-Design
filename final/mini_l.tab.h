/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

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




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 47 "mini_l.y"
{
  char* ival;
  char* idval;
}
/* Line 1529 of yacc.c.  */
#line 144 "mini_l.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

