/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_SRC_NEWPARSER_TAB_H_INCLUDED
# define YY_YY_SRC_NEWPARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    DOCUMENT_CLASS = 258,          /* DOCUMENT_CLASS  */
    USEPACKAGE = 259,              /* USEPACKAGE  */
    GRAPHICX = 260,                /* GRAPHICX  */
    HYPERREF = 261,                /* HYPERREF  */
    TITLE = 262,                   /* TITLE  */
    DATE = 263,                    /* DATE  */
    BEGIN_DOC = 264,               /* BEGIN_DOC  */
    END_DOC = 265,                 /* END_DOC  */
    SECTION = 266,                 /* SECTION  */
    SUBSECTION = 267,              /* SUBSECTION  */
    SUBSUBSECTION = 268,           /* SUBSUBSECTION  */
    ITALICS = 269,                 /* ITALICS  */
    BOLD = 270,                    /* BOLD  */
    HRULE = 271,                   /* HRULE  */
    HLINE = 272,                   /* HLINE  */
    PARAGRAPH = 273,               /* PARAGRAPH  */
    BEGIN_VERBATIM = 274,          /* BEGIN_VERBATIM  */
    END_VERBATIM = 275,            /* END_VERBATIM  */
    HREF = 276,                    /* HREF  */
    INCLUDE_GRAPHICS = 277,        /* INCLUDE_GRAPHICS  */
    BEGIN_ENUMERATE = 278,         /* BEGIN_ENUMERATE  */
    END_ENUMERATE = 279,           /* END_ENUMERATE  */
    BEGIN_ITEMIZE = 280,           /* BEGIN_ITEMIZE  */
    END_ITEMIZE = 281,             /* END_ITEMIZE  */
    ITEM = 282,                    /* ITEM  */
    BEGIN_TABULAR = 283,           /* BEGIN_TABULAR  */
    END_TABULAR = 284,             /* END_TABULAR  */
    ROW_SEPARATOR = 285,           /* ROW_SEPARATOR  */
    COLUMN_SEPARATOR = 286,        /* COLUMN_SEPARATOR  */
    OPEN_BRACE = 287,              /* OPEN_BRACE  */
    CLOSE_BRACE = 288,             /* CLOSE_BRACE  */
    IMG_OPTIONS = 289,             /* IMG_OPTIONS  */
    IMG_PATH = 290,                /* IMG_PATH  */
    TEXT = 291,                    /* TEXT  */
    NEWLINE = 292,                 /* NEWLINE  */
    COLUMN_SPEC = 293              /* COLUMN_SPEC  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 13 "src/newparser.y"

    ASTNode *node;
    char *str;

#line 107 "src/newparser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_SRC_NEWPARSER_TAB_H_INCLUDED  */
