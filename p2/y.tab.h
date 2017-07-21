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




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 11 "mini_l.y"
{
  int ival;
  char* idval;
}
/* Line 1529 of yacc.c.  */
#line 146 "y.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

