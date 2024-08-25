/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "src/newparser.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ast.h"
#include "routines.c"
extern int yylex();     
void yyerror(const char *s);
ASTNode *latexASTRoot;

#line 82 "src/newparser.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "newparser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_DOCUMENT_CLASS = 3,             /* DOCUMENT_CLASS  */
  YYSYMBOL_USEPACKAGE = 4,                 /* USEPACKAGE  */
  YYSYMBOL_GRAPHICX = 5,                   /* GRAPHICX  */
  YYSYMBOL_HYPERREF = 6,                   /* HYPERREF  */
  YYSYMBOL_TITLE = 7,                      /* TITLE  */
  YYSYMBOL_DATE = 8,                       /* DATE  */
  YYSYMBOL_BEGIN_DOC = 9,                  /* BEGIN_DOC  */
  YYSYMBOL_END_DOC = 10,                   /* END_DOC  */
  YYSYMBOL_SECTION = 11,                   /* SECTION  */
  YYSYMBOL_SUBSECTION = 12,                /* SUBSECTION  */
  YYSYMBOL_SUBSUBSECTION = 13,             /* SUBSUBSECTION  */
  YYSYMBOL_ITALICS = 14,                   /* ITALICS  */
  YYSYMBOL_BOLD = 15,                      /* BOLD  */
  YYSYMBOL_HRULE = 16,                     /* HRULE  */
  YYSYMBOL_HLINE = 17,                     /* HLINE  */
  YYSYMBOL_PARAGRAPH = 18,                 /* PARAGRAPH  */
  YYSYMBOL_BEGIN_VERBATIM = 19,            /* BEGIN_VERBATIM  */
  YYSYMBOL_END_VERBATIM = 20,              /* END_VERBATIM  */
  YYSYMBOL_HREF = 21,                      /* HREF  */
  YYSYMBOL_INCLUDE_GRAPHICS = 22,          /* INCLUDE_GRAPHICS  */
  YYSYMBOL_BEGIN_ENUMERATE = 23,           /* BEGIN_ENUMERATE  */
  YYSYMBOL_END_ENUMERATE = 24,             /* END_ENUMERATE  */
  YYSYMBOL_BEGIN_ITEMIZE = 25,             /* BEGIN_ITEMIZE  */
  YYSYMBOL_END_ITEMIZE = 26,               /* END_ITEMIZE  */
  YYSYMBOL_ITEM = 27,                      /* ITEM  */
  YYSYMBOL_BEGIN_TABULAR = 28,             /* BEGIN_TABULAR  */
  YYSYMBOL_END_TABULAR = 29,               /* END_TABULAR  */
  YYSYMBOL_ROW_SEPARATOR = 30,             /* ROW_SEPARATOR  */
  YYSYMBOL_COLUMN_SEPARATOR = 31,          /* COLUMN_SEPARATOR  */
  YYSYMBOL_OPEN_BRACE = 32,                /* OPEN_BRACE  */
  YYSYMBOL_CLOSE_BRACE = 33,               /* CLOSE_BRACE  */
  YYSYMBOL_IMG_OPTIONS = 34,               /* IMG_OPTIONS  */
  YYSYMBOL_IMG_PATH = 35,                  /* IMG_PATH  */
  YYSYMBOL_TEXT = 36,                      /* TEXT  */
  YYSYMBOL_NEWLINE = 37,                   /* NEWLINE  */
  YYSYMBOL_COLUMN_SPEC = 38,               /* COLUMN_SPEC  */
  YYSYMBOL_YYACCEPT = 39,                  /* $accept  */
  YYSYMBOL_START = 40,                     /* START  */
  YYSYMBOL_PACKAGES = 41,                  /* PACKAGES  */
  YYSYMBOL_PACKAGE_GRAPHICX = 42,          /* PACKAGE_GRAPHICX  */
  YYSYMBOL_PACKAGE_HYPERREF = 43,          /* PACKAGE_HYPERREF  */
  YYSYMBOL_TITLE_NT = 44,                  /* TITLE_NT  */
  YYSYMBOL_DATE_NT = 45,                   /* DATE_NT  */
  YYSYMBOL_DOC_CONTENT = 46,               /* DOC_CONTENT  */
  YYSYMBOL_DOC_CONTENT_TAIL = 47,          /* DOC_CONTENT_TAIL  */
  YYSYMBOL_STANDALONE_CONTENT = 48,        /* STANDALONE_CONTENT  */
  YYSYMBOL_STANDALONE_CONTENT_TAIL = 49,   /* STANDALONE_CONTENT_TAIL  */
  YYSYMBOL_SECTION_SEQUENCE = 50,          /* SECTION_SEQUENCE  */
  YYSYMBOL_SECTION_SEQUENCE_TAIL = 51,     /* SECTION_SEQUENCE_TAIL  */
  YYSYMBOL_SECTION_NT = 52,                /* SECTION_NT  */
  YYSYMBOL_SECTION_HEADER = 53,            /* SECTION_HEADER  */
  YYSYMBOL_SECTION_BODY = 54,              /* SECTION_BODY  */
  YYSYMBOL_SECTION_BODY_TAIL = 55,         /* SECTION_BODY_TAIL  */
  YYSYMBOL_SUBSECTION_SEQUENCE = 56,       /* SUBSECTION_SEQUENCE  */
  YYSYMBOL_SUBSECTION_SEQUENCE_TAIL = 57,  /* SUBSECTION_SEQUENCE_TAIL  */
  YYSYMBOL_SUBSECTION_NT = 58,             /* SUBSECTION_NT  */
  YYSYMBOL_SUBSECTION_HEADER = 59,         /* SUBSECTION_HEADER  */
  YYSYMBOL_SUBSECTION_BODY = 60,           /* SUBSECTION_BODY  */
  YYSYMBOL_SUBSECTION_BODY_TAIL = 61,      /* SUBSECTION_BODY_TAIL  */
  YYSYMBOL_SUBSUBSECTION_SEQUENCE = 62,    /* SUBSUBSECTION_SEQUENCE  */
  YYSYMBOL_SUBSUBSECTION_SEQUENCE_TAIL = 63, /* SUBSUBSECTION_SEQUENCE_TAIL  */
  YYSYMBOL_SUBSUBSECTION_NT = 64,          /* SUBSUBSECTION_NT  */
  YYSYMBOL_SUBSUBSECTION_HEADER = 65,      /* SUBSUBSECTION_HEADER  */
  YYSYMBOL_SUBSUBSECTION_BODY = 66,        /* SUBSUBSECTION_BODY  */
  YYSYMBOL_SECTION_CONTENT = 67,           /* SECTION_CONTENT  */
  YYSYMBOL_SECTION_CONTENT_TAIL = 68,      /* SECTION_CONTENT_TAIL  */
  YYSYMBOL_SUBSECTION_CONTENT = 69,        /* SUBSECTION_CONTENT  */
  YYSYMBOL_SUBSECTION_CONTENT_TAIL = 70,   /* SUBSECTION_CONTENT_TAIL  */
  YYSYMBOL_SUBSUBSECTION_CONTENT = 71,     /* SUBSUBSECTION_CONTENT  */
  YYSYMBOL_SUBSUBSECTION_CONTENT_TAIL = 72, /* SUBSUBSECTION_CONTENT_TAIL  */
  YYSYMBOL_CONTENT_BLOCK = 73,             /* CONTENT_BLOCK  */
  YYSYMBOL_ITALICS_NT = 74,                /* ITALICS_NT  */
  YYSYMBOL_BOLD_NT = 75,                   /* BOLD_NT  */
  YYSYMBOL_HRULE_NT = 76,                  /* HRULE_NT  */
  YYSYMBOL_HLINE_NT = 77,                  /* HLINE_NT  */
  YYSYMBOL_PARAGRAPH_NT = 78,              /* PARAGRAPH_NT  */
  YYSYMBOL_CODE_LISTING_NT = 79,           /* CODE_LISTING_NT  */
  YYSYMBOL_TEXT_CONTENT_NT = 80,           /* TEXT_CONTENT_NT  */
  YYSYMBOL_TEXT_CONTENT_NT_TAIL = 81,      /* TEXT_CONTENT_NT_TAIL  */
  YYSYMBOL_HREF_NT = 82,                   /* HREF_NT  */
  YYSYMBOL_INCLUDE_GRAPHICS_NT = 83,       /* INCLUDE_GRAPHICS_NT  */
  YYSYMBOL_IMG_OPTIONS_NT = 84,            /* IMG_OPTIONS_NT  */
  YYSYMBOL_INCLUDE_GRAPHICS_NT_TAIL = 85,  /* INCLUDE_GRAPHICS_NT_TAIL  */
  YYSYMBOL_LISTS_NT = 86,                  /* LISTS_NT  */
  YYSYMBOL_ORDERED_LISTS_NT = 87,          /* ORDERED_LISTS_NT  */
  YYSYMBOL_ITEMS_OPT_NESTED_LISTS_SEQUENCE = 88, /* ITEMS_OPT_NESTED_LISTS_SEQUENCE  */
  YYSYMBOL_ITEM_OPT_NESTED_LISTS_NT = 89,  /* ITEM_OPT_NESTED_LISTS_NT  */
  YYSYMBOL_ITEMS_OPT_NESTED_LISTS_TAIL = 90, /* ITEMS_OPT_NESTED_LISTS_TAIL  */
  YYSYMBOL_UNORDERED_LISTS_NT = 91,        /* UNORDERED_LISTS_NT  */
  YYSYMBOL_NESTED_LISTS_NT = 92,           /* NESTED_LISTS_NT  */
  YYSYMBOL_TABLE_NT = 93,                  /* TABLE_NT  */
  YYSYMBOL_TABLE_ROWS_NT = 94,             /* TABLE_ROWS_NT  */
  YYSYMBOL_TABLE_ROWS_NT_TAIL = 95,        /* TABLE_ROWS_NT_TAIL  */
  YYSYMBOL_TABLE_ROW_NT = 96,              /* TABLE_ROW_NT  */
  YYSYMBOL_TABLE_ROW_NT_TAIL = 97          /* TABLE_ROW_NT_TAIL  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   213

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  39
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  59
/* YYNRULES -- Number of rules.  */
#define YYNRULES  95
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  187

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   293


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
      35,    36,    37,    38
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    53,    53,    68,    70,    74,    82,    90,    98,   106,
     107,   108,   112,   113,   118,   121,   122,   126,   129,   130,
     134,   137,   146,   148,   149,   152,   153,   157,   160,   161,
     165,   168,   177,   179,   180,   183,   184,   188,   191,   192,
     196,   199,   208,   210,   213,   216,   217,   221,   224,   225,
     229,   232,   233,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   252,   261,   270,   275,   280,   285,
     293,   298,   299,   303,   316,   320,   322,   326,   334,   335,
     338,   346,   349,   356,   357,   361,   369,   370,   371,   375,
     387,   392,   393,   397,   401,   403
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "DOCUMENT_CLASS",
  "USEPACKAGE", "GRAPHICX", "HYPERREF", "TITLE", "DATE", "BEGIN_DOC",
  "END_DOC", "SECTION", "SUBSECTION", "SUBSUBSECTION", "ITALICS", "BOLD",
  "HRULE", "HLINE", "PARAGRAPH", "BEGIN_VERBATIM", "END_VERBATIM", "HREF",
  "INCLUDE_GRAPHICS", "BEGIN_ENUMERATE", "END_ENUMERATE", "BEGIN_ITEMIZE",
  "END_ITEMIZE", "ITEM", "BEGIN_TABULAR", "END_TABULAR", "ROW_SEPARATOR",
  "COLUMN_SEPARATOR", "OPEN_BRACE", "CLOSE_BRACE", "IMG_OPTIONS",
  "IMG_PATH", "TEXT", "NEWLINE", "COLUMN_SPEC", "$accept", "START",
  "PACKAGES", "PACKAGE_GRAPHICX", "PACKAGE_HYPERREF", "TITLE_NT",
  "DATE_NT", "DOC_CONTENT", "DOC_CONTENT_TAIL", "STANDALONE_CONTENT",
  "STANDALONE_CONTENT_TAIL", "SECTION_SEQUENCE", "SECTION_SEQUENCE_TAIL",
  "SECTION_NT", "SECTION_HEADER", "SECTION_BODY", "SECTION_BODY_TAIL",
  "SUBSECTION_SEQUENCE", "SUBSECTION_SEQUENCE_TAIL", "SUBSECTION_NT",
  "SUBSECTION_HEADER", "SUBSECTION_BODY", "SUBSECTION_BODY_TAIL",
  "SUBSUBSECTION_SEQUENCE", "SUBSUBSECTION_SEQUENCE_TAIL",
  "SUBSUBSECTION_NT", "SUBSUBSECTION_HEADER", "SUBSUBSECTION_BODY",
  "SECTION_CONTENT", "SECTION_CONTENT_TAIL", "SUBSECTION_CONTENT",
  "SUBSECTION_CONTENT_TAIL", "SUBSUBSECTION_CONTENT",
  "SUBSUBSECTION_CONTENT_TAIL", "CONTENT_BLOCK", "ITALICS_NT", "BOLD_NT",
  "HRULE_NT", "HLINE_NT", "PARAGRAPH_NT", "CODE_LISTING_NT",
  "TEXT_CONTENT_NT", "TEXT_CONTENT_NT_TAIL", "HREF_NT",
  "INCLUDE_GRAPHICS_NT", "IMG_OPTIONS_NT", "INCLUDE_GRAPHICS_NT_TAIL",
  "LISTS_NT", "ORDERED_LISTS_NT", "ITEMS_OPT_NESTED_LISTS_SEQUENCE",
  "ITEM_OPT_NESTED_LISTS_NT", "ITEMS_OPT_NESTED_LISTS_TAIL",
  "UNORDERED_LISTS_NT", "NESTED_LISTS_NT", "TABLE_NT", "TABLE_ROWS_NT",
  "TABLE_ROWS_NT_TAIL", "TABLE_ROW_NT", "TABLE_ROW_NT_TAIL", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-156)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       8,   -12,    26,    25,  -156,    -1,    -7,    -5,    -4,    -2,
      27,    31,    32,     5,     7,    10,    12,    21,  -156,    23,
    -156,  -156,  -156,    20,    50,    54,    56,    30,    41,    22,
    -156,    43,    68,    47,    45,  -156,    -9,    51,    52,    55,
      48,    59,    63,    65,    71,    72,    70,    73,    77,    74,
      78,    94,  -156,    94,    29,    76,  -156,  -156,  -156,  -156,
    -156,  -156,  -156,  -156,  -156,  -156,  -156,  -156,    79,    80,
      81,  -156,  -156,  -156,    82,    83,  -156,    88,    86,    86,
      84,  -156,  -156,  -156,  -156,  -156,  -156,    89,  -156,  -156,
      96,    53,    96,    76,  -156,  -156,    90,    91,    92,    93,
     106,    95,    97,  -156,    98,   103,  -156,   105,   100,    99,
    -156,  -156,   104,  -156,  -156,   101,    76,   101,    76,  -156,
    -156,  -156,  -156,   102,   107,   108,    82,   109,   110,   114,
     111,   112,   113,   115,   118,   117,  -156,  -156,  -156,  -156,
      76,  -156,  -156,  -156,  -156,  -156,  -156,  -156,  -156,  -156,
    -156,   119,   120,    -8,  -156,  -156,   121,   122,   123,  -156,
    -156,   125,  -156,  -156,  -156,    86,   124,  -156,   126,   127,
    -156,  -156,   130,   133,   135,  -156,  -156,   124,  -156,   129,
     131,  -156,  -156,   121,   124,  -156,  -156
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     1,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     3,     0,
       4,     5,     6,     0,     0,     0,     0,     0,     0,     0,
       7,     0,     0,     0,     0,     8,    11,     0,     0,     0,
       0,     0,     0,     0,     0,    76,     0,     0,     0,     0,
       0,    13,     9,    19,    22,    16,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    78,    79,    62,     0,     0,
       0,    66,    67,    68,     0,     0,    75,     0,     0,     0,
       0,    63,     2,    10,    12,    18,    17,     0,    20,    24,
      29,    32,    26,    46,    15,    14,     0,     0,     0,     0,
       0,     0,     0,    74,     0,     0,    81,     0,     0,     0,
      28,    27,     0,    30,    34,    39,    42,    36,    49,    23,
      25,    45,    44,     0,     0,     0,    72,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    38,    37,    40,    43,
      52,    33,    35,    48,    47,    21,    64,    65,    71,    70,
      69,     0,     0,    88,    80,    85,     0,     0,     0,    51,
      50,     0,    77,    86,    87,    84,     0,    31,     0,     0,
      83,    82,    95,     0,     0,    41,    73,     0,    93,     0,
       0,    94,    89,     0,    92,    91,    90
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -156,  -156,  -156,   128,   132,  -156,  -156,  -156,  -156,   116,
    -156,   -33,  -156,  -156,  -156,  -156,  -156,   -69,  -156,  -156,
    -156,  -156,  -156,   -93,  -156,  -156,  -156,  -156,    36,  -156,
      19,  -156,     1,  -156,   -54,  -156,  -156,  -156,  -155,  -156,
    -156,    28,  -156,  -156,  -156,  -156,  -156,  -156,    14,   134,
       4,  -156,    17,  -156,  -156,   -11,  -156,    -3,  -156
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     6,     7,     8,    16,    29,    50,    83,    51,
      95,    52,    86,    53,    54,    88,   119,    89,   111,    90,
      91,   113,   141,   114,   137,   115,   116,   138,    92,   122,
     117,   144,   139,   160,    55,    56,    57,    58,    59,    60,
      61,   100,   149,    62,    63,    77,   103,    64,    65,   105,
     106,   171,    66,   165,    67,   173,   186,   174,   178
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      93,   166,    37,    13,    14,    38,    39,    40,    41,    42,
      43,     1,    44,    45,    46,    46,    47,    47,    84,    48,
      85,   110,   136,   120,   142,     3,     4,    49,   184,     5,
      10,     9,    11,    12,    15,    17,    19,   118,    21,    93,
      22,    87,    23,    38,    39,    40,    41,    42,    43,    24,
      44,    45,    46,    25,    47,    26,    27,    48,    28,    32,
      14,    13,   140,    30,   118,    49,   112,    38,    39,    40,
      41,    42,    43,    31,    44,    45,    46,    34,    47,    33,
      35,    48,    36,    68,    69,    71,   140,    70,    82,    49,
      38,    39,    40,    41,    42,    43,    72,    44,    45,    46,
      73,    47,    74,    75,    48,    37,    76,    78,    87,    80,
      79,    81,    49,   104,   112,    96,    97,    98,    99,   101,
     102,   109,   108,   123,   124,   125,   127,   131,   128,   121,
     126,   132,   129,   133,   130,   134,   135,   143,    41,   145,
      20,   159,   151,    18,   146,   147,   150,   152,   153,   154,
     155,   157,   156,   158,   148,   161,   168,   162,   169,   167,
     172,   177,   179,   175,   176,   180,   182,   163,   183,   170,
     164,    94,     0,   185,   181,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   107
};

static const yytype_int16 yycheck[] =
{
      54,   156,    11,     5,     6,    14,    15,    16,    17,    18,
      19,     3,    21,    22,    23,    23,    25,    25,    51,    28,
      53,    90,   115,    92,   117,    37,     0,    36,   183,     4,
      37,    32,    37,    37,     7,     4,     4,    91,    33,    93,
      33,    12,    32,    14,    15,    16,    17,    18,    19,    37,
      21,    22,    23,    32,    25,    32,    36,    28,     8,    37,
       6,     5,   116,    33,   118,    36,    13,    14,    15,    16,
      17,    18,    19,    32,    21,    22,    23,     9,    25,    36,
      33,    28,    37,    32,    32,    37,   140,    32,    10,    36,
      14,    15,    16,    17,    18,    19,    37,    21,    22,    23,
      37,    25,    37,    32,    28,    11,    34,    37,    12,    32,
      37,    37,    36,    27,    13,    36,    36,    36,    36,    36,
      32,    32,    38,    33,    33,    33,    20,    24,    33,    93,
      37,    26,    35,    33,    36,    36,    32,   118,    17,    37,
      12,   140,    32,    11,    37,    37,    37,    33,    37,    37,
      37,    33,    37,    36,   126,    36,    33,    37,    33,    37,
      36,    31,    29,    37,    37,    30,    37,   153,    37,   165,
     153,    55,    -1,   184,   177,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    79
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    40,    37,     0,     4,    41,    42,    43,    32,
      37,    37,    37,     5,     6,     7,    44,     4,    43,     4,
      42,    33,    33,    32,    37,    32,    32,    36,     8,    45,
      33,    32,    37,    36,     9,    33,    37,    11,    14,    15,
      16,    17,    18,    19,    21,    22,    23,    25,    28,    36,
      46,    48,    50,    52,    53,    73,    74,    75,    76,    77,
      78,    79,    82,    83,    86,    87,    91,    93,    32,    32,
      32,    37,    37,    37,    37,    32,    34,    84,    37,    37,
      32,    37,    10,    47,    50,    50,    51,    12,    54,    56,
      58,    59,    67,    73,    48,    49,    36,    36,    36,    36,
      80,    36,    32,    85,    27,    88,    89,    88,    38,    32,
      56,    57,    13,    60,    62,    64,    65,    69,    73,    55,
      56,    67,    68,    33,    33,    33,    37,    20,    33,    35,
      36,    24,    26,    33,    36,    32,    62,    63,    66,    71,
      73,    61,    62,    69,    70,    37,    37,    37,    80,    81,
      37,    32,    33,    37,    37,    37,    37,    33,    36,    71,
      72,    36,    37,    87,    91,    92,    77,    37,    33,    33,
      89,    90,    36,    94,    96,    37,    37,    31,    97,    29,
      30,    96,    37,    37,    77,    94,    95
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    39,    40,    41,    41,    42,    43,    44,    45,    46,
      46,    46,    47,    47,    48,    49,    49,    50,    51,    51,
      52,    53,    54,    54,    54,    55,    55,    56,    57,    57,
      58,    59,    60,    60,    60,    61,    61,    62,    63,    63,
      64,    65,    66,    66,    67,    68,    68,    69,    70,    70,
      71,    72,    72,    73,    73,    73,    73,    73,    73,    73,
      73,    73,    73,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    81,    82,    83,    84,    84,    85,    86,    86,
      87,    88,    89,    90,    90,    91,    92,    92,    92,    93,
      94,    95,    95,    96,    97,    97
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,    12,     3,     3,     4,     4,     4,     4,     1,
       2,     0,     1,     0,     2,     1,     0,     2,     1,     0,
       2,     5,     0,     2,     1,     1,     0,     2,     1,     0,
       2,     5,     0,     2,     1,     1,     0,     2,     1,     0,
       2,     5,     0,     1,     2,     1,     0,     2,     1,     0,
       2,     1,     0,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     5,     5,     2,     2,     2,     5,
       3,     1,     0,     8,     3,     1,     0,     4,     1,     1,
       5,     1,     5,     1,     0,     5,     1,     1,     0,     9,
       5,     1,     0,     2,     2,     0
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* START: DOCUMENT_CLASS NEWLINE PACKAGES NEWLINE TITLE_NT NEWLINE DATE_NT NEWLINE BEGIN_DOC NEWLINE DOC_CONTENT END_DOC  */
#line 54 "src/newparser.y"
                                                                                { ASTNode *documentClassNode = newASTNode("DOCUMENT_CLASS", NULL, 0);
                                                                                  ASTNode *newline1Node = newASTNode("NEWLINE", strdup((yyvsp[-10].str)), 0);
                                                                                  ASTNode *newline2Node = newASTNode("NEWLINE", strdup((yyvsp[-8].str)), 0);
                                                                                  ASTNode *newline3Node = newASTNode("NEWLINE", strdup((yyvsp[-6].str)), 0);
                                                                                  ASTNode *newline4Node = newASTNode("NEWLINE", strdup((yyvsp[-4].str)), 0);
                                                                                  ASTNode *beginDocNode = newASTNode("BEGIN_DOC", NULL, 0);
                                                                                  ASTNode *newline5Node = newASTNode("NEWLINE", strdup((yyvsp[-2].str)), 0);
                                                                                  ASTNode *endDocNode = newASTNode("END_DOC", NULL, 0);
                                                                                  (yyval.node) = newASTNode("Start", NULL, 12, documentClassNode, newline1Node, (yyvsp[-9].node),
                                                                                  newline2Node, (yyvsp[-7].node), newline3Node, (yyvsp[-5].node), newline4Node, beginDocNode, newline5Node, (yyvsp[-1].node),
                                                                                  endDocNode); 
                                                                                  latexASTRoot = (yyval.node); }
#line 1324 "src/newparser.tab.c"
    break;

  case 3: /* PACKAGES: PACKAGE_GRAPHICX NEWLINE PACKAGE_HYPERREF  */
#line 68 "src/newparser.y"
                                                            { ASTNode *newlineNode = newASTNode("NEWLINE", strdup((yyvsp[-1].str)), 0);
                                                              (yyval.node) = newASTNode("PACKAGES", NULL, 3, (yyvsp[-2].node), newlineNode, (yyvsp[0].node)); }
#line 1331 "src/newparser.tab.c"
    break;

  case 4: /* PACKAGES: PACKAGE_HYPERREF NEWLINE PACKAGE_GRAPHICX  */
#line 70 "src/newparser.y"
                                                            { ASTNode *newlineNode = newASTNode("NEWLINE", strdup((yyvsp[-1].str)), 0);
                                                              (yyval.node) = newASTNode("PACKAGES", NULL, 3, (yyvsp[-2].node), newlineNode, (yyvsp[0].node)); }
#line 1338 "src/newparser.tab.c"
    break;

  case 5: /* PACKAGE_GRAPHICX: USEPACKAGE OPEN_BRACE GRAPHICX CLOSE_BRACE  */
#line 74 "src/newparser.y"
                                                                        { ASTNode *usepackageNode = newASTNode("USEPACKAGE", NULL, 0);
                                                                          ASTNode *openBraceNode = newASTNode("OPEN_BRACE", NULL, 0);
                                                                          ASTNode *graphicxNode = newASTNode("GRAPHICX", NULL, 0);
                                                                          ASTNode *closeBraceNode = newASTNode("CLOSE_BRACE", NULL, 0);
                                                                          (yyval.node) = newASTNode("PACKAGE_GRAPHICX", NULL, 4, usepackageNode,
                                                                                          openBraceNode, graphicxNode, closeBraceNode); }
#line 1349 "src/newparser.tab.c"
    break;

  case 6: /* PACKAGE_HYPERREF: USEPACKAGE OPEN_BRACE HYPERREF CLOSE_BRACE  */
#line 82 "src/newparser.y"
                                                                        { ASTNode *usepackageNode = newASTNode("USEPACKAGE", NULL, 0);
                                                                          ASTNode *openBraceNode = newASTNode("OPEN_BRACE", NULL, 0);
                                                                          ASTNode *hyperrefNode = newASTNode("HYPERREF", NULL, 0);
                                                                          ASTNode *closeBraceNode = newASTNode("CLOSE_BRACE", NULL, 0);
                                                                          (yyval.node) = newASTNode("PACKAGE_HYPERREF", NULL, 4, usepackageNode,
                                                                                          openBraceNode, hyperrefNode, closeBraceNode); }
#line 1360 "src/newparser.tab.c"
    break;

  case 7: /* TITLE_NT: TITLE OPEN_BRACE TEXT CLOSE_BRACE  */
#line 90 "src/newparser.y"
                                                    { ASTNode *titleNode = newASTNode("TITLE", NULL, 0);
                                                      ASTNode *openBraceNode = newASTNode("OPEN_BRACE", NULL, 0);
                                                      ASTNode *textNode = newASTNode("TEXT", strdup((yyvsp[-1].str)), 0);
                                                      ASTNode *closeBraceNode = newASTNode("CLOSE_BRACE", NULL, 0);
                                                      (yyval.node) = newASTNode("TITLE_NT", NULL, 4, titleNode, openBraceNode, 
                                                                      textNode, closeBraceNode); }
#line 1371 "src/newparser.tab.c"
    break;

  case 8: /* DATE_NT: DATE OPEN_BRACE TEXT CLOSE_BRACE  */
#line 98 "src/newparser.y"
                                                    { ASTNode *dateNode = newASTNode("DATE", NULL, 0);
                                                      ASTNode *openBraceNode = newASTNode("OPEN_BRACE", NULL, 0);
                                                      ASTNode *textNode = newASTNode("TEXT", strdup((yyvsp[-1].str)), 0);
                                                      ASTNode *closeBraceNode = newASTNode("CLOSE_BRACE", NULL, 0);
                                                      (yyval.node) = newASTNode("DATE_NT", NULL, 4, dateNode, openBraceNode, 
                                                                      textNode, closeBraceNode); }
#line 1382 "src/newparser.tab.c"
    break;

  case 9: /* DOC_CONTENT: SECTION_SEQUENCE  */
#line 106 "src/newparser.y"
                                                    { (yyval.node) = newASTNode("DOC_CONTENT", NULL, 1, (yyvsp[0].node)); }
#line 1388 "src/newparser.tab.c"
    break;

  case 10: /* DOC_CONTENT: STANDALONE_CONTENT DOC_CONTENT_TAIL  */
#line 107 "src/newparser.y"
                                                    { (yyval.node) = newASTNode("DOC_CONTENT", NULL, 2, (yyvsp[-1].node), (yyvsp[0].node)); }
#line 1394 "src/newparser.tab.c"
    break;

  case 11: /* DOC_CONTENT: %empty  */
#line 108 "src/newparser.y"
                                                    { ASTNode *epsilonNode = newASTNode("EPSILON", NULL, 0);
                                                      (yyval.node) = newASTNode("DOC_CONTENT", NULL, 1, epsilonNode); }
#line 1401 "src/newparser.tab.c"
    break;

  case 12: /* DOC_CONTENT_TAIL: SECTION_SEQUENCE  */
#line 112 "src/newparser.y"
                                                    { (yyval.node) = newASTNode("DOC_CONTENT_TAIL", NULL, 1, (yyvsp[0].node)); }
#line 1407 "src/newparser.tab.c"
    break;

  case 13: /* DOC_CONTENT_TAIL: %empty  */
#line 113 "src/newparser.y"
                                                    { ASTNode *epsilonNode = newASTNode("EPSILON", NULL, 0);
                                                      (yyval.node) = newASTNode("DOC_CONTENT_TAIL", NULL, 1, epsilonNode); }
#line 1414 "src/newparser.tab.c"
    break;

  case 14: /* STANDALONE_CONTENT: CONTENT_BLOCK STANDALONE_CONTENT_TAIL  */
#line 118 "src/newparser.y"
                                                                    { (yyval.node) = newASTNode("STANDALONE_CONTENT", NULL, 2, (yyvsp[-1].node), (yyvsp[0].node)); }
#line 1420 "src/newparser.tab.c"
    break;

  case 15: /* STANDALONE_CONTENT_TAIL: STANDALONE_CONTENT  */
#line 121 "src/newparser.y"
                                                    { (yyval.node) = newASTNode("STANDALONE_CONTENT_TAIL", NULL, 1, (yyvsp[0].node)); }
#line 1426 "src/newparser.tab.c"
    break;

  case 16: /* STANDALONE_CONTENT_TAIL: %empty  */
#line 122 "src/newparser.y"
                                                    { ASTNode *epsilonNode = newASTNode("EPSILON", NULL, 0);
                                                      (yyval.node) = newASTNode("STANDALONE_CONTENT_TAIL", NULL, 1, epsilonNode); }
#line 1433 "src/newparser.tab.c"
    break;

  case 17: /* SECTION_SEQUENCE: SECTION_NT SECTION_SEQUENCE_TAIL  */
#line 126 "src/newparser.y"
                                                            { (yyval.node) = newASTNode("SECTION_SEQUENCE", NULL, 2, (yyvsp[-1].node), (yyvsp[0].node)); }
#line 1439 "src/newparser.tab.c"
    break;

  case 18: /* SECTION_SEQUENCE_TAIL: SECTION_SEQUENCE  */
#line 129 "src/newparser.y"
                                                { (yyval.node) = newASTNode("SECTION_SEQUENCE_TAIL", NULL, 1, (yyvsp[0].node)); }
#line 1445 "src/newparser.tab.c"
    break;

  case 19: /* SECTION_SEQUENCE_TAIL: %empty  */
#line 130 "src/newparser.y"
                                                { ASTNode *epsilonNode = newASTNode("EPSILON", NULL, 0);
                                                  (yyval.node) = newASTNode("SECTION_SEQUENCE_TAIL", NULL, 1, epsilonNode); }
#line 1452 "src/newparser.tab.c"
    break;

  case 20: /* SECTION_NT: SECTION_HEADER SECTION_BODY  */
#line 134 "src/newparser.y"
                                                { (yyval.node) = newASTNode("SECTION_NT", NULL, 2, (yyvsp[-1].node), (yyvsp[0].node)); }
#line 1458 "src/newparser.tab.c"
    break;

  case 21: /* SECTION_HEADER: SECTION OPEN_BRACE TEXT CLOSE_BRACE NEWLINE  */
#line 137 "src/newparser.y"
                                                                    { ASTNode *sectionNode = newASTNode("SECTION", NULL, 0);
                                                                      ASTNode *openBraceNode = newASTNode("OPEN_BRACE", NULL, 0);
                                                                      ASTNode *textNode = newASTNode("TEXT", strdup((yyvsp[-2].str)), 0);
                                                                      ASTNode *closeBraceNode = newASTNode("CLOSE_BRACE", NULL, 0);
                                                                      ASTNode *newlineNode = newASTNode("NEWLINE", strdup((yyvsp[0].str)), 0);
                                                                      (yyval.node) = newASTNode("SECTION_HEADER", NULL, 5, sectionNode,
                                                                                      openBraceNode, textNode, closeBraceNode, newlineNode); }
#line 1470 "src/newparser.tab.c"
    break;

  case 22: /* SECTION_BODY: %empty  */
#line 146 "src/newparser.y"
                                                    { ASTNode *epsilonNode = newASTNode("EPSILON", NULL, 0);
                                                      (yyval.node) = newASTNode("SECTION_BODY", NULL, 1, epsilonNode); }
#line 1477 "src/newparser.tab.c"
    break;

  case 23: /* SECTION_BODY: SECTION_CONTENT SECTION_BODY_TAIL  */
#line 148 "src/newparser.y"
                                                    { (yyval.node) = newASTNode("SECTION_BODY", NULL, 2, (yyvsp[-1].node), (yyvsp[0].node)); }
#line 1483 "src/newparser.tab.c"
    break;

  case 24: /* SECTION_BODY: SUBSECTION_SEQUENCE  */
#line 149 "src/newparser.y"
                                                    { (yyval.node) = newASTNode("SECTION_BODY", NULL, 1, (yyvsp[0].node)); }
#line 1489 "src/newparser.tab.c"
    break;

  case 25: /* SECTION_BODY_TAIL: SUBSECTION_SEQUENCE  */
#line 152 "src/newparser.y"
                                                { (yyval.node) = newASTNode("SECTION_BODY_TAIL", NULL, 1, (yyvsp[0].node)); }
#line 1495 "src/newparser.tab.c"
    break;

  case 26: /* SECTION_BODY_TAIL: %empty  */
#line 153 "src/newparser.y"
                                                { ASTNode *epsilonNode = newASTNode("EPSILON", NULL, 0);
                                                  (yyval.node) = newASTNode("SECTION_BODY_TAIL", NULL, 1, epsilonNode); }
#line 1502 "src/newparser.tab.c"
    break;

  case 27: /* SUBSECTION_SEQUENCE: SUBSECTION_NT SUBSECTION_SEQUENCE_TAIL  */
#line 157 "src/newparser.y"
                                                                    { (yyval.node) = newASTNode("SUBSECTION_SEQUENCE", NULL, 2, (yyvsp[-1].node), (yyvsp[0].node)); }
#line 1508 "src/newparser.tab.c"
    break;

  case 28: /* SUBSECTION_SEQUENCE_TAIL: SUBSECTION_SEQUENCE  */
#line 160 "src/newparser.y"
                                                        { (yyval.node) = newASTNode("SUBSECTION_SEQUENCE_TAIL", NULL, 1, (yyvsp[0].node)); }
#line 1514 "src/newparser.tab.c"
    break;

  case 29: /* SUBSECTION_SEQUENCE_TAIL: %empty  */
#line 161 "src/newparser.y"
                                                        { ASTNode *epsilonNode = newASTNode("EPSILON", NULL, 0);
                                                          (yyval.node) = newASTNode("SUBSECTION_SEQUENCE_TAIL", NULL, 1, epsilonNode); }
#line 1521 "src/newparser.tab.c"
    break;

  case 30: /* SUBSECTION_NT: SUBSECTION_HEADER SUBSECTION_BODY  */
#line 165 "src/newparser.y"
                                                            { (yyval.node) = newASTNode("SUBSECTION_NT", NULL, 2, (yyvsp[-1].node), (yyvsp[0].node)); }
#line 1527 "src/newparser.tab.c"
    break;

  case 31: /* SUBSECTION_HEADER: SUBSECTION OPEN_BRACE TEXT CLOSE_BRACE NEWLINE  */
#line 168 "src/newparser.y"
                                                                            { ASTNode *subsectionNode = newASTNode("SUBSECTION", NULL, 0);
                                                                              ASTNode *openBraceNode = newASTNode("OPEN_BRACE", NULL, 0);
                                                                              ASTNode *textNode = newASTNode("TEXT", strdup((yyvsp[-2].str)), 0);
                                                                              ASTNode *closeBraceNode = newASTNode("CLOSE_BRACE", NULL, 0);
                                                                              ASTNode *newlineNode = newASTNode("NEWLINE", strdup((yyvsp[0].str)), 0);
                                                                              (yyval.node) = newASTNode("SUBSECTION_HEADER", NULL, 5, subsectionNode,
                                                                                                  openBraceNode, textNode, closeBraceNode, newlineNode); }
#line 1539 "src/newparser.tab.c"
    break;

  case 32: /* SUBSECTION_BODY: %empty  */
#line 177 "src/newparser.y"
                                                        { ASTNode *epsilonNode = newASTNode("EPSILON", NULL, 0);
                                                          (yyval.node) = newASTNode("SUBSECTION_BODY", NULL, 1, epsilonNode); }
#line 1546 "src/newparser.tab.c"
    break;

  case 33: /* SUBSECTION_BODY: SUBSECTION_CONTENT SUBSECTION_BODY_TAIL  */
#line 179 "src/newparser.y"
                                                        { (yyval.node) = newASTNode("SUBSECTION_BODY", NULL, 2, (yyvsp[-1].node), (yyvsp[0].node)); }
#line 1552 "src/newparser.tab.c"
    break;

  case 34: /* SUBSECTION_BODY: SUBSUBSECTION_SEQUENCE  */
#line 180 "src/newparser.y"
                                                        { (yyval.node) = newASTNode("SUBSECTION_BODY", NULL, 1, (yyvsp[0].node)); }
#line 1558 "src/newparser.tab.c"
    break;

  case 35: /* SUBSECTION_BODY_TAIL: SUBSUBSECTION_SEQUENCE  */
#line 183 "src/newparser.y"
                                                        { (yyval.node) = newASTNode("SUBSECTION_BODY_TAIL", NULL, 1, (yyvsp[0].node)); }
#line 1564 "src/newparser.tab.c"
    break;

  case 36: /* SUBSECTION_BODY_TAIL: %empty  */
#line 184 "src/newparser.y"
                                                        { ASTNode *epsilonNode = newASTNode("EPSILON", NULL, 0);
                                                          (yyval.node) = newASTNode("SUBSECTION_BODY_TAIL", NULL, 1, epsilonNode); }
#line 1571 "src/newparser.tab.c"
    break;

  case 37: /* SUBSUBSECTION_SEQUENCE: SUBSUBSECTION_NT SUBSUBSECTION_SEQUENCE_TAIL  */
#line 188 "src/newparser.y"
                                                                                { (yyval.node) = newASTNode("SUBSUBSECTION_SEQUENCE", NULL, 2, (yyvsp[-1].node), (yyvsp[0].node)); }
#line 1577 "src/newparser.tab.c"
    break;

  case 38: /* SUBSUBSECTION_SEQUENCE_TAIL: SUBSUBSECTION_SEQUENCE  */
#line 191 "src/newparser.y"
                                                            { (yyval.node) = newASTNode("SUBSUBSECTION_SEQUENCE_TAIL", NULL, 1, (yyvsp[0].node)); }
#line 1583 "src/newparser.tab.c"
    break;

  case 39: /* SUBSUBSECTION_SEQUENCE_TAIL: %empty  */
#line 192 "src/newparser.y"
                                                            { ASTNode *epsilonNode = newASTNode("EPSILON", NULL, 0);
                                                              (yyval.node) = newASTNode("SUBSUBSECTION_SEQUENCE_TAIL", NULL, 1, epsilonNode); }
#line 1590 "src/newparser.tab.c"
    break;

  case 40: /* SUBSUBSECTION_NT: SUBSUBSECTION_HEADER SUBSUBSECTION_BODY  */
#line 196 "src/newparser.y"
                                                                    { (yyval.node) = newASTNode("SUBSUBSECTION_NT", NULL, 2, (yyvsp[-1].node), (yyvsp[0].node)); }
#line 1596 "src/newparser.tab.c"
    break;

  case 41: /* SUBSUBSECTION_HEADER: SUBSUBSECTION OPEN_BRACE TEXT CLOSE_BRACE NEWLINE  */
#line 199 "src/newparser.y"
                                                                                { ASTNode *subsubsectionNode = newASTNode("SUBSUBSECTION", NULL, 0);
                                                                                  ASTNode *openBraceNode = newASTNode("OPEN_BRACE", NULL, 0);
                                                                                  ASTNode *textNode = newASTNode("TEXT", strdup((yyvsp[-2].str)), 0);
                                                                                  ASTNode *closeBraceNode = newASTNode("CLOSE_BRACE", NULL, 0);
                                                                                  ASTNode *newlineNode = newASTNode("NEWLINE", strdup((yyvsp[0].str)), 0);
                                                                                  (yyval.node) = newASTNode("SUBSUBSECTION_HEADER", NULL, 5, subsubsectionNode,
                                                                                                  openBraceNode, textNode, closeBraceNode, newlineNode); }
#line 1608 "src/newparser.tab.c"
    break;

  case 42: /* SUBSUBSECTION_BODY: %empty  */
#line 208 "src/newparser.y"
                                            { ASTNode *epsilonNode = newASTNode("EPSILON", NULL, 0);
                                              (yyval.node) = newASTNode("SUBSUBSECTION_BODY", NULL, 1, epsilonNode); }
#line 1615 "src/newparser.tab.c"
    break;

  case 43: /* SUBSUBSECTION_BODY: SUBSUBSECTION_CONTENT  */
#line 210 "src/newparser.y"
                                            { (yyval.node) = newASTNode("SUBSUBSECTION_BODY", NULL, 1, (yyvsp[0].node)); }
#line 1621 "src/newparser.tab.c"
    break;

  case 44: /* SECTION_CONTENT: CONTENT_BLOCK SECTION_CONTENT_TAIL  */
#line 213 "src/newparser.y"
                                                            { (yyval.node) = newASTNode("SECTION_CONTENT", NULL, 2, (yyvsp[-1].node), (yyvsp[0].node)); }
#line 1627 "src/newparser.tab.c"
    break;

  case 45: /* SECTION_CONTENT_TAIL: SECTION_CONTENT  */
#line 216 "src/newparser.y"
                                                { (yyval.node) = newASTNode("SECTION_CONTENT_TAIL", NULL, 1, (yyvsp[0].node)); }
#line 1633 "src/newparser.tab.c"
    break;

  case 46: /* SECTION_CONTENT_TAIL: %empty  */
#line 217 "src/newparser.y"
                                                { ASTNode *epsilonNode = newASTNode("EPSILON", NULL, 0);
                                                  (yyval.node) = newASTNode("SECTION_CONTENT_TAIL", NULL, 1, epsilonNode); }
#line 1640 "src/newparser.tab.c"
    break;

  case 47: /* SUBSECTION_CONTENT: CONTENT_BLOCK SUBSECTION_CONTENT_TAIL  */
#line 221 "src/newparser.y"
                                                                    { (yyval.node) = newASTNode("SUBSECTION_CONTENT", NULL, 2, (yyvsp[-1].node), (yyvsp[0].node)); }
#line 1646 "src/newparser.tab.c"
    break;

  case 48: /* SUBSECTION_CONTENT_TAIL: SUBSECTION_CONTENT  */
#line 224 "src/newparser.y"
                                                    { (yyval.node) = newASTNode("SUBSECTION_CONTENT_TAIL", NULL, 1, (yyvsp[0].node)); }
#line 1652 "src/newparser.tab.c"
    break;

  case 49: /* SUBSECTION_CONTENT_TAIL: %empty  */
#line 225 "src/newparser.y"
                                                    { ASTNode *epsilonNode = newASTNode("EPSILON", NULL, 0);
                                                      (yyval.node) = newASTNode("SUBSECTION_CONTENT_TAIL", NULL, 1, epsilonNode); }
#line 1659 "src/newparser.tab.c"
    break;

  case 50: /* SUBSUBSECTION_CONTENT: CONTENT_BLOCK SUBSUBSECTION_CONTENT_TAIL  */
#line 229 "src/newparser.y"
                                                                        { (yyval.node) = newASTNode("SUBSUBSECTION_CONTENT", NULL, 2, (yyvsp[-1].node), (yyvsp[0].node)); }
#line 1665 "src/newparser.tab.c"
    break;

  case 51: /* SUBSUBSECTION_CONTENT_TAIL: SUBSUBSECTION_CONTENT  */
#line 232 "src/newparser.y"
                                                            { (yyval.node) = newASTNode("SUBSUBSECTION_CONTENT_TAIL", NULL, 1, (yyvsp[0].node)); }
#line 1671 "src/newparser.tab.c"
    break;

  case 52: /* SUBSUBSECTION_CONTENT_TAIL: %empty  */
#line 233 "src/newparser.y"
                                                            { ASTNode *epsilonNode = newASTNode("EPSILON", NULL, 0);
                                                              (yyval.node) = newASTNode("SUBSUBSECTION_CONTENT_TAIL", NULL, 1, epsilonNode); }
#line 1678 "src/newparser.tab.c"
    break;

  case 53: /* CONTENT_BLOCK: ITALICS_NT  */
#line 237 "src/newparser.y"
                                    { (yyval.node) = newASTNode("CONTENT_BLOCK", NULL, 1, (yyvsp[0].node)); }
#line 1684 "src/newparser.tab.c"
    break;

  case 54: /* CONTENT_BLOCK: BOLD_NT  */
#line 238 "src/newparser.y"
                                    { (yyval.node) = newASTNode("CONTENT_BLOCK", NULL, 1, (yyvsp[0].node)); }
#line 1690 "src/newparser.tab.c"
    break;

  case 55: /* CONTENT_BLOCK: HRULE_NT  */
#line 239 "src/newparser.y"
                                    { (yyval.node) = newASTNode("CONTENT_BLOCK", NULL, 1, (yyvsp[0].node)); }
#line 1696 "src/newparser.tab.c"
    break;

  case 56: /* CONTENT_BLOCK: HLINE_NT  */
#line 240 "src/newparser.y"
                                    { (yyval.node) = newASTNode("CONTENT_BLOCK", NULL, 1, (yyvsp[0].node)); }
#line 1702 "src/newparser.tab.c"
    break;

  case 57: /* CONTENT_BLOCK: PARAGRAPH_NT  */
#line 241 "src/newparser.y"
                                    { (yyval.node) = newASTNode("CONTENT_BLOCK", NULL, 1, (yyvsp[0].node)); }
#line 1708 "src/newparser.tab.c"
    break;

  case 58: /* CONTENT_BLOCK: CODE_LISTING_NT  */
#line 242 "src/newparser.y"
                                    { (yyval.node) = newASTNode("CONTENT_BLOCK", NULL, 1, (yyvsp[0].node)); }
#line 1714 "src/newparser.tab.c"
    break;

  case 59: /* CONTENT_BLOCK: HREF_NT  */
#line 243 "src/newparser.y"
                                    { (yyval.node) = newASTNode("CONTENT_BLOCK", NULL, 1, (yyvsp[0].node)); }
#line 1720 "src/newparser.tab.c"
    break;

  case 60: /* CONTENT_BLOCK: INCLUDE_GRAPHICS_NT  */
#line 244 "src/newparser.y"
                                    { (yyval.node) = newASTNode("CONTENT_BLOCK", NULL, 1, (yyvsp[0].node)); }
#line 1726 "src/newparser.tab.c"
    break;

  case 61: /* CONTENT_BLOCK: LISTS_NT  */
#line 245 "src/newparser.y"
                                    { (yyval.node) = newASTNode("CONTENT_BLOCK", NULL, 1, (yyvsp[0].node)); }
#line 1732 "src/newparser.tab.c"
    break;

  case 62: /* CONTENT_BLOCK: TABLE_NT  */
#line 246 "src/newparser.y"
                                    { (yyval.node) = newASTNode("CONTENT_BLOCK", NULL, 1, (yyvsp[0].node)); }
#line 1738 "src/newparser.tab.c"
    break;

  case 63: /* CONTENT_BLOCK: TEXT NEWLINE  */
#line 247 "src/newparser.y"
                                    { ASTNode *textNode = newASTNode("TEXT", strdup((yyvsp[-1].str)), 0);
                                      ASTNode *newlineNode = newASTNode("NEWLINE", strdup((yyvsp[0].str)), 0);
                                      (yyval.node) = newASTNode("CONTENT_BLOCK", NULL, 2, textNode, newlineNode); }
#line 1746 "src/newparser.tab.c"
    break;

  case 64: /* ITALICS_NT: ITALICS OPEN_BRACE TEXT CLOSE_BRACE NEWLINE  */
#line 252 "src/newparser.y"
                                                                { ASTNode *italicsNode = newASTNode("ITALICS", NULL, 0);
                                                                  ASTNode *openBraceNode = newASTNode("OPEN_BRACE", NULL, 0);
                                                                  ASTNode *textNode = newASTNode("TEXT", strdup((yyvsp[-2].str)), 0);
                                                                  ASTNode *closeBraceNode = newASTNode("CLOSE_BRACE", NULL, 0);
                                                                  ASTNode *newlineNode = newASTNode("NEWLINE", strdup((yyvsp[0].str)), 0);
                                                                  (yyval.node) = newASTNode("ITALICS_NT", NULL, 5, italicsNode, openBraceNode, 
                                                                                  textNode, closeBraceNode, newlineNode); }
#line 1758 "src/newparser.tab.c"
    break;

  case 65: /* BOLD_NT: BOLD OPEN_BRACE TEXT CLOSE_BRACE NEWLINE  */
#line 261 "src/newparser.y"
                                                            { ASTNode *boldNode = newASTNode("BOLD", NULL, 0);
                                                              ASTNode *openBraceNode = newASTNode("OPEN_BRACE", NULL, 0);
                                                              ASTNode *textNode = newASTNode("TEXT", strdup((yyvsp[-2].str)), 0);
                                                              ASTNode *closeBraceNode = newASTNode("CLOSE_BRACE", NULL, 0);
                                                              ASTNode *newlineNode = newASTNode("NEWLINE", strdup((yyvsp[0].str)), 0);
                                                              (yyval.node) = newASTNode("BOLD_NT", NULL, 5, boldNode, openBraceNode, 
                                                                              textNode, closeBraceNode, newlineNode); }
#line 1770 "src/newparser.tab.c"
    break;

  case 66: /* HRULE_NT: HRULE NEWLINE  */
#line 270 "src/newparser.y"
                                { ASTNode *hruleNode = newASTNode("HRULE", NULL, 0);
                                  ASTNode *newlineNode = newASTNode("NEWLINE", strdup((yyvsp[0].str)), 0);
                                  (yyval.node) = newASTNode("HRULE_NT", NULL, 2, hruleNode, newlineNode); }
#line 1778 "src/newparser.tab.c"
    break;

  case 67: /* HLINE_NT: HLINE NEWLINE  */
#line 275 "src/newparser.y"
                                { ASTNode *hlineNode = newASTNode("HLINE", NULL, 0);
                                  ASTNode *newlineNode = newASTNode("NEWLINE", strdup((yyvsp[0].str)), 0);
                                  (yyval.node) = newASTNode("HLINE_NT", NULL, 2, hlineNode, newlineNode); }
#line 1786 "src/newparser.tab.c"
    break;

  case 68: /* PARAGRAPH_NT: PARAGRAPH NEWLINE  */
#line 280 "src/newparser.y"
                                        { ASTNode *paragraphNode = newASTNode("PARAGRAPH", NULL, 0);
                                          ASTNode *newlineNode = newASTNode("NEWLINE", strdup((yyvsp[0].str)), 0);
                                          (yyval.node) = newASTNode("PARAGRAPH_NT", NULL, 2, paragraphNode, newlineNode); }
#line 1794 "src/newparser.tab.c"
    break;

  case 69: /* CODE_LISTING_NT: BEGIN_VERBATIM NEWLINE TEXT_CONTENT_NT END_VERBATIM NEWLINE  */
#line 285 "src/newparser.y"
                                                                                        { ASTNode *beginVerbatimNode = newASTNode("BEGIN_VERBATIM", NULL, 0);
                                                                                          ASTNode *newline1Node = newASTNode("NEWLINE", strdup((yyvsp[-3].str)), 0);
                                                                                          ASTNode *endVerbatimNode = newASTNode("END_VERBATIM", NULL, 0);
                                                                                          ASTNode *newline2Node = newASTNode("NEWLINE", strdup((yyvsp[0].str)), 0);
                                                                                          (yyval.node) = newASTNode("CODE_LISTING_NT", NULL, 5, beginVerbatimNode, 
                                                                                                          newline1Node, (yyvsp[-2].node), endVerbatimNode, newline2Node); }
#line 1805 "src/newparser.tab.c"
    break;

  case 70: /* TEXT_CONTENT_NT: TEXT NEWLINE TEXT_CONTENT_NT_TAIL  */
#line 293 "src/newparser.y"
                                                            { ASTNode *textNode = newASTNode("TEXT", strdup((yyvsp[-2].str)), 0);
                                                              ASTNode *newlineNode = newASTNode("NEWLINE", strdup((yyvsp[-1].str)), 0);
                                                              (yyval.node) = newASTNode("TEXT_CONTENT_NT", NULL, 3, textNode, newlineNode, (yyvsp[0].node)); }
#line 1813 "src/newparser.tab.c"
    break;

  case 71: /* TEXT_CONTENT_NT_TAIL: TEXT_CONTENT_NT  */
#line 298 "src/newparser.y"
                                                { (yyval.node) = newASTNode("TEXT_CONTENT_NT_TAIL", NULL, 1, (yyvsp[0].node)); }
#line 1819 "src/newparser.tab.c"
    break;

  case 72: /* TEXT_CONTENT_NT_TAIL: %empty  */
#line 299 "src/newparser.y"
                                                { ASTNode *epsilonNode = newASTNode("EPSILON", NULL, 0);
                                                  (yyval.node) = newASTNode("TEXT_CONTENT_NT_TAIL", NULL, 1, epsilonNode); }
#line 1826 "src/newparser.tab.c"
    break;

  case 73: /* HREF_NT: HREF OPEN_BRACE TEXT CLOSE_BRACE OPEN_BRACE TEXT CLOSE_BRACE NEWLINE  */
#line 303 "src/newparser.y"
                                                                                        { ASTNode *hrefNode = newASTNode("HREF", NULL, 0);
                                                                                          ASTNode *openBrace1Node = newASTNode("OPEN_BRACE", NULL, 0);
                                                                                          ASTNode *text1Node = newASTNode("TEXT", strdup((yyvsp[-5].str)), 0);
                                                                                          ASTNode *closeBrace1Node = newASTNode("CLOSE_BRACE", NULL, 0);
                                                                                          ASTNode *openBrace2Node = newASTNode("OPEN_BRACE", NULL, 0);
                                                                                          ASTNode *text2Node = newASTNode("TEXT", strdup((yyvsp[-2].str)), 0);
                                                                                          ASTNode *closeBrace2Node = newASTNode("CLOSE_BRACE", NULL, 0);
                                                                                          ASTNode *newlineNode = newASTNode("NEWLINE", strdup((yyvsp[0].str)), 0);
                                                                                          (yyval.node) = newASTNode("HREF_NT", NULL, 8, hrefNode, openBrace1Node, 
                                                                                                          text1Node, closeBrace1Node, openBrace2Node, 
                                                                                                          text2Node, closeBrace2Node, newlineNode); }
#line 1842 "src/newparser.tab.c"
    break;

  case 74: /* INCLUDE_GRAPHICS_NT: INCLUDE_GRAPHICS IMG_OPTIONS_NT INCLUDE_GRAPHICS_NT_TAIL  */
#line 316 "src/newparser.y"
                                                                                        { ASTNode *includeGraphicsNode = newASTNode("INCLUDE_GRAPHICS", NULL, 0);
                                                                                          (yyval.node) = newASTNode("INCLUDE_GRAPHICS_NT", NULL, 3, includeGraphicsNode, (yyvsp[-1].node), (yyvsp[0].node)); }
#line 1849 "src/newparser.tab.c"
    break;

  case 75: /* IMG_OPTIONS_NT: IMG_OPTIONS  */
#line 320 "src/newparser.y"
                                    { ASTNode *imgOptionsNode = newASTNode("IMG_OPTIONS", strdup((yyvsp[0].str)), 0); 
                                      (yyval.node) = newASTNode("IMG_OPTIONS_NT", NULL, 1, imgOptionsNode); }
#line 1856 "src/newparser.tab.c"
    break;

  case 76: /* IMG_OPTIONS_NT: %empty  */
#line 322 "src/newparser.y"
                                    { ASTNode *epsilonNode = newASTNode("EPSILON", NULL, 0);
                                      (yyval.node) = newASTNode("IMG_OPTIONS_NT", NULL, 1, epsilonNode); }
#line 1863 "src/newparser.tab.c"
    break;

  case 77: /* INCLUDE_GRAPHICS_NT_TAIL: OPEN_BRACE IMG_PATH CLOSE_BRACE NEWLINE  */
#line 326 "src/newparser.y"
                                                                                        { ASTNode *openBraceNode = newASTNode("OPEN_BRACE", NULL, 0);
                                                                                          ASTNode *imgPathNode = newASTNode("IMG_PATH", strdup((yyvsp[-2].str)), 0);
                                                                                          ASTNode *closeBraceNode = newASTNode("CLOSE_BRACE", NULL, 0);
                                                                                          ASTNode *newlineNode = newASTNode("NEWLINE", strdup((yyvsp[0].str)), 0);
                                                                                          (yyval.node) = newASTNode("INCLUDE_GRAPHICS_NT_TAIL", NULL, 4, 
                                                                                                          openBraceNode, imgPathNode, closeBraceNode,  newlineNode); }
#line 1874 "src/newparser.tab.c"
    break;

  case 78: /* LISTS_NT: ORDERED_LISTS_NT  */
#line 334 "src/newparser.y"
                                    { (yyval.node) = newASTNode("LISTS_NT", NULL, 1, (yyvsp[0].node)); }
#line 1880 "src/newparser.tab.c"
    break;

  case 79: /* LISTS_NT: UNORDERED_LISTS_NT  */
#line 335 "src/newparser.y"
                                    { (yyval.node) = newASTNode("LISTS_NT", NULL, 1, (yyvsp[0].node)); }
#line 1886 "src/newparser.tab.c"
    break;

  case 80: /* ORDERED_LISTS_NT: BEGIN_ENUMERATE NEWLINE ITEMS_OPT_NESTED_LISTS_SEQUENCE END_ENUMERATE NEWLINE  */
#line 338 "src/newparser.y"
                                                                                                        { ASTNode *beginEnumerateNode = newASTNode("BEGIN_ENUMERATE", NULL, 0);
                                                                                                  ASTNode *newline1Node = newASTNode("NEWLINE", strdup((yyvsp[-3].str)), 0);
                                                                                                  ASTNode *endEnumerateNode = newASTNode("END_ENUMERATE", NULL, 0);
                                                                                                  ASTNode *newline2Node = newASTNode("NEWLINE", strdup((yyvsp[0].str)), 0);
                                                                                                  (yyval.node) = newASTNode("ORDERED_LISTS_NT", NULL, 5, beginEnumerateNode, 
                                                                                                                  newline1Node, (yyvsp[-2].node), endEnumerateNode, newline2Node); }
#line 1897 "src/newparser.tab.c"
    break;

  case 81: /* ITEMS_OPT_NESTED_LISTS_SEQUENCE: ITEM_OPT_NESTED_LISTS_NT  */
#line 346 "src/newparser.y"
                                                                    { (yyval.node) = newASTNode("ITEMS_OPT_NESTED_LISTS_SEQUENCE", NULL, 1, (yyvsp[0].node)); }
#line 1903 "src/newparser.tab.c"
    break;

  case 82: /* ITEM_OPT_NESTED_LISTS_NT: ITEM TEXT NEWLINE NESTED_LISTS_NT ITEMS_OPT_NESTED_LISTS_TAIL  */
#line 349 "src/newparser.y"
                                                                                                { ASTNode *itemNode = newASTNode("ITEM", NULL, 0);
                                                                                                  ASTNode *textNode = newASTNode("TEXT", strdup((yyvsp[-3].str)), 0);
                                                                                                  ASTNode *newlineNode = newASTNode("NEWLINE", strdup((yyvsp[-2].str)), 0);
                                                                                                  (yyval.node) = newASTNode("ITEM_OPT_NESTED_LISTS_NT", NULL, 5, itemNode,
                                                                                                                  textNode, newlineNode, (yyvsp[-1].node), (yyvsp[0].node)); }
#line 1913 "src/newparser.tab.c"
    break;

  case 83: /* ITEMS_OPT_NESTED_LISTS_TAIL: ITEM_OPT_NESTED_LISTS_NT  */
#line 356 "src/newparser.y"
                                                                { (yyval.node) = newASTNode("ITEMS_OPT_NESTED_LISTS_TAIL", NULL, 1, (yyvsp[0].node)); }
#line 1919 "src/newparser.tab.c"
    break;

  case 84: /* ITEMS_OPT_NESTED_LISTS_TAIL: %empty  */
#line 357 "src/newparser.y"
                                                                { ASTNode *epsilonNode = newASTNode("EPSILON", NULL, 0);
                                                                  (yyval.node) = newASTNode("ITEMS_OPT_NESTED_LISTS_TAIL", NULL, 1, epsilonNode); }
#line 1926 "src/newparser.tab.c"
    break;

  case 85: /* UNORDERED_LISTS_NT: BEGIN_ITEMIZE NEWLINE ITEMS_OPT_NESTED_LISTS_SEQUENCE END_ITEMIZE NEWLINE  */
#line 361 "src/newparser.y"
                                                                                                        { ASTNode *beginItemizeNode = newASTNode("BEGIN_ITEMIZE", NULL, 0);
                                                                                                  ASTNode *newline1Node = newASTNode("NEWLINE", strdup((yyvsp[-3].str)), 0);
                                                                                                  ASTNode *endItemizeNode = newASTNode("END_ITEMIZE", NULL, 0);
                                                                                                  ASTNode *newline2Node = newASTNode("NEWLINE", strdup((yyvsp[0].str)), 0);
                                                                                                  (yyval.node) = newASTNode("UNORDERED_LISTS_NT", NULL, 5, beginItemizeNode, 
                                                                                                                  newline1Node, (yyvsp[-2].node), endItemizeNode, newline2Node); }
#line 1937 "src/newparser.tab.c"
    break;

  case 86: /* NESTED_LISTS_NT: ORDERED_LISTS_NT  */
#line 369 "src/newparser.y"
                                            { (yyval.node) = newASTNode("NESTED_LISTS_NT", NULL, 1, (yyvsp[0].node)); }
#line 1943 "src/newparser.tab.c"
    break;

  case 87: /* NESTED_LISTS_NT: UNORDERED_LISTS_NT  */
#line 370 "src/newparser.y"
                                            { (yyval.node) = newASTNode("NESTED_LISTS_NT", NULL, 1, (yyvsp[0].node)); }
#line 1949 "src/newparser.tab.c"
    break;

  case 88: /* NESTED_LISTS_NT: %empty  */
#line 371 "src/newparser.y"
                                            { ASTNode *epsilonNode = newASTNode("EPSILON", NULL, 0);
                                              (yyval.node) = newASTNode("NESTED_LISTS_NT", NULL, 1, epsilonNode); }
#line 1956 "src/newparser.tab.c"
    break;

  case 89: /* TABLE_NT: BEGIN_TABULAR OPEN_BRACE COLUMN_SPEC CLOSE_BRACE NEWLINE HLINE_NT TABLE_ROWS_NT END_TABULAR NEWLINE  */
#line 375 "src/newparser.y"
                                                                                                                        { ASTNode *beginTabularNode = newASTNode("BEGIN_TABULAR", NULL, 0);
                                                                                                                          ASTNode *openBraceNode = newASTNode("OPEN_BRACE", NULL, 0);
                                                                                                                          ASTNode *columnSpecNode = newASTNode("COLUMN_SPEC", strdup((yyvsp[-6].str)), 0);
                                                                                                                          ASTNode *closeBraceNode = newASTNode("CLOSE_BRACE", NULL, 0);
                                                                                                                          ASTNode *newline1Node = newASTNode("NEWLINE", strdup((yyvsp[-4].str)), 0);
                                                                                                                          ASTNode *endTabularNode = newASTNode("END_TABULAR", NULL, 0);
                                                                                                                          ASTNode *newline2Node = newASTNode("NEWLINE", strdup((yyvsp[0].str)), 0);
                                                                                                                          (yyval.node) = newASTNode("TABLE_NT", NULL, 9, beginTabularNode, openBraceNode, 
                                                                                                                                          columnSpecNode, closeBraceNode, newline1Node, (yyvsp[-3].node), (yyvsp[-2].node), 
                                                                                                                                          endTabularNode, newline2Node); }
#line 1971 "src/newparser.tab.c"
    break;

  case 90: /* TABLE_ROWS_NT: TABLE_ROW_NT ROW_SEPARATOR NEWLINE HLINE_NT TABLE_ROWS_NT_TAIL  */
#line 387 "src/newparser.y"
                                                                                        { ASTNode *rowSepNode = newASTNode("ROW_SEPARATOR", NULL, 0);
                                                                                          ASTNode *newlineNode = newASTNode("NEWLINE", strdup((yyvsp[-2].str)), 0);
                                                                                          (yyval.node) = newASTNode("TABLE_ROWS_NT", NULL, 5, (yyvsp[-4].node), rowSepNode, newlineNode, (yyvsp[-1].node), (yyvsp[0].node)); }
#line 1979 "src/newparser.tab.c"
    break;

  case 91: /* TABLE_ROWS_NT_TAIL: TABLE_ROWS_NT  */
#line 392 "src/newparser.y"
                                            { (yyval.node) = newASTNode("TABLE_ROW_NT_TAIL", NULL, 1, (yyvsp[0].node)); }
#line 1985 "src/newparser.tab.c"
    break;

  case 92: /* TABLE_ROWS_NT_TAIL: %empty  */
#line 393 "src/newparser.y"
                                            { ASTNode *epsilonNode = newASTNode("EPSILON", NULL, 0);
                                              (yyval.node) =newASTNode("TABLE_ROW_NT_TAIL", NULL, 1, epsilonNode); }
#line 1992 "src/newparser.tab.c"
    break;

  case 93: /* TABLE_ROW_NT: TEXT TABLE_ROW_NT_TAIL  */
#line 397 "src/newparser.y"
                                                { ASTNode *textNode = newASTNode("TEXT", strdup((yyvsp[-1].str)), 0);
                                                  (yyval.node) = newASTNode("TABLE_ROW_NT", NULL, 2, textNode, (yyvsp[0].node)); }
#line 1999 "src/newparser.tab.c"
    break;

  case 94: /* TABLE_ROW_NT_TAIL: COLUMN_SEPARATOR TABLE_ROW_NT  */
#line 401 "src/newparser.y"
                                                            { ASTNode *colSepNode = newASTNode("COLUMN_SEPARATOR", NULL, 0);
                                                              (yyval.node) = newASTNode("TABLE_ROW_NT_TAIL", NULL, 2, colSepNode, (yyvsp[0].node)); }
#line 2006 "src/newparser.tab.c"
    break;

  case 95: /* TABLE_ROW_NT_TAIL: %empty  */
#line 403 "src/newparser.y"
                                                            { ASTNode *epsilonNode = newASTNode("EPSILON", NULL, 0); 
                                                              (yyval.node) = newASTNode("TABLE_ROW_NT_TAIL", NULL, 1, epsilonNode); }
#line 2013 "src/newparser.tab.c"
    break;


#line 2017 "src/newparser.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
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

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 410 "src/newparser.y"


