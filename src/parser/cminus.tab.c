/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "./parser/cminus.y"

/* includes, C defs */

#include <stdio.h>
#include <stdlib.h>
<<<<<<< HEAD
#include "tp2.h"
=======
#include "pretty_print.h"
>>>>>>> 187d73f305fca1a9c5cd561075ffa6ec03ad02be
#include "ast.h"

int yylex();

<<<<<<< HEAD:src/parser/cminus.tab.c
#line 81 "./parser/cminus.tab.c"
=======
<<<<<<< HEAD
#line 81 "./cminus.tab.c"
=======
#line 81 "cminus.tab.c"
>>>>>>> 187d73f305fca1a9c5cd561075ffa6ec03ad02be
>>>>>>> af294345b4bd5864fbb259ce64663e3b3559b41e:cminus.tab.c

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

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_PARSER_CMINUS_TAB_H_INCLUDED
# define YY_YY_PARSER_CMINUS_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    NUM = 258,
    ID = 259,
    ELSE = 260,
    IF = 261,
    INT = 262,
    RETURN = 263,
    VOID = 264,
    WHILE = 265,
    EQ = 266,
    NEQ = 267,
    LT = 268,
    GT = 269,
    LTEQ = 270,
    GTEQ = 271,
    ERROR = 272,
    CONST = 273,
    ENUM = 274,
    AND = 275,
    OR = 276,
    INC = 277,
    DEC = 278
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
<<<<<<< HEAD:src/parser/cminus.tab.c
#line 51 "./parser/cminus.y"

    char *id;
    int num;
    struct decl *decl;
    struct stmt *stmt;
    struct expr *expr;
    struct type *type;
    struct param_list *param_list;
    struct id_list *id_list;

#line 168 "./parser/cminus.tab.c"
=======
<<<<<<< HEAD
#line 51 "./cminus.y"
=======
#line 51 "cminus.y"
>>>>>>> 187d73f305fca1a9c5cd561075ffa6ec03ad02be

  char *id;
  int num;
  struct expr *expr;
  struct param_list *param_list;
  struct type *type;
  struct stmt *stmt;
  struct decl *decl;
  struct id_list *id_list;

<<<<<<< HEAD
#line 168 "./cminus.tab.c"
=======
#line 168 "cminus.tab.c"
>>>>>>> 187d73f305fca1a9c5cd561075ffa6ec03ad02be
>>>>>>> af294345b4bd5864fbb259ce64663e3b3559b41e:cminus.tab.c

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_CMINUS_TAB_H_INCLUDED  */



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
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


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
#define YYFINAL  15
/* YYLAST -- Last index in YYTABLE.  */
<<<<<<< HEAD:src/parser/cminus.tab.c
#define YYLAST   148
=======
<<<<<<< HEAD
#define YYLAST   151
=======
#define YYLAST   154
>>>>>>> 187d73f305fca1a9c5cd561075ffa6ec03ad02be
>>>>>>> af294345b4bd5864fbb259ce64663e3b3559b41e:cminus.tab.c

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  38
/* YYNNTS -- Number of nonterminals.  */
<<<<<<< HEAD:src/parser/cminus.tab.c
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  82
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  138
=======
#define YYNNTS  36
/* YYNRULES -- Number of rules.  */
<<<<<<< HEAD
#define YYNRULES  79
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  134
=======
#define YYNRULES  81
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  137
>>>>>>> 187d73f305fca1a9c5cd561075ffa6ec03ad02be
>>>>>>> af294345b4bd5864fbb259ce64663e3b3559b41e:cminus.tab.c

#define YYUNDEFTOK  2
#define YYMAXUTOK   278


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    37,     2,     2,     2,     2,     2,     2,
      30,    31,    35,    33,    32,    34,     2,    36,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    24,
       2,    27,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    25,     2,    26,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    28,     2,    29,     2,     2,     2,     2,
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
      15,    16,    17,    18,    19,    20,    21,    22,    23
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
<<<<<<< HEAD
       0,    66,    66,    72,    73,    80,    81,    82,    83,    87,
<<<<<<< HEAD:src/parser/cminus.tab.c
      90,    96,   103,   106,   110,   117,   123,   126,   132,   133,
     139,   143,   146,   149,   154,   158,   161,   167,   173,   177,
     181,   185,   191,   195,   201,   202,   203,   204,   205,   209,
     212,   218,   221,   227,   232,   235,   241,   244,   248,   251,
     257,   262,   267,   271,   272,   273,   274,   275,   276,   280,
     281,   285,   286,   289,   295,   296,   299,   302,   307,   314,
     315,   316,   320,   323,   326,   327,   331,   337,   338,   344,
     345,   350,   355
=======
      90,    96,   102,   105,   109,   116,   122,   125,   131,   132,
     138,   142,   145,   148,   154,   160,   164,   168,   172,   178,
     182,   188,   189,   190,   191,   192,   196,   199,   205,   208,
     214,   219,   222,   228,   231,   235,   238,   244,   249,   254,
     258,   259,   260,   261,   262,   263,   267,   268,   272,   273,
     276,   282,   283,   286,   289,   294,   298,   299,   300,   304,
     307,   310,   311,   315,   321,   322,   328,   329,   334,   339
=======
       0,    66,    66,    71,    72,    79,    80,    81,    82,    86,
      89,    97,   105,   110,   111,   115,   116,   120,   124,   125,
     129,   130,   134,   135,   139,   140,   144,   148,   149,   150,
     151,   155,   156,   160,   161,   162,   163,   164,   168,   169,
     173,   174,   178,   181,   182,   186,   187,   191,   192,   196,
     197,   198,   201,   201,   201,   201,   201,   201,   204,   204,
     208,   209,   210,   214,   215,   216,   217,   221,   224,   224,
     224,   228,   229,   230,   231,   235,   239,   240,   244,   245,
     248,   253
>>>>>>> 187d73f305fca1a9c5cd561075ffa6ec03ad02be
>>>>>>> af294345b4bd5864fbb259ce64663e3b3559b41e:cminus.tab.c
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUM", "ID", "ELSE", "IF", "INT",
  "RETURN", "VOID", "WHILE", "EQ", "NEQ", "LT", "GT", "LTEQ", "GTEQ",
  "ERROR", "CONST", "ENUM", "AND", "OR", "INC", "DEC", "';'", "'['", "']'",
  "'='", "'{'", "'}'", "'('", "')'", "','", "'+'", "'-'", "'*'", "'/'",
  "'!'", "$accept", "program", "declaration-list", "declaration",
  "var-declaration", "const-declaration", "enum-declaration",
  "fun-declaration", "type-specifier", "params", "param-list", "param",
  "id-list", "id", "compound-stmt", "local-declarations", "statement-list",
  "statement", "expression-stmt", "selection-stmt", "iteration-stmt",
  "return-stmt", "expression", "var", "simple-expression", "relop",
  "logop", "additive-expression", "term", "unary-expression", "unary_op",
  "factor", "call", "args", "args-list", "type_NUM", "type_ID", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,    59,    91,    93,    61,   123,   125,
      40,    41,    44,    43,    45,    42,    47,    33
};
# endif

<<<<<<< HEAD:src/parser/cminus.tab.c
#define YYPACT_NINF (-114)
=======
<<<<<<< HEAD
#define YYPACT_NINF (-78)
=======
#define YYPACT_NINF (-121)
>>>>>>> 187d73f305fca1a9c5cd561075ffa6ec03ad02be
>>>>>>> af294345b4bd5864fbb259ce64663e3b3559b41e:cminus.tab.c

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-20)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
<<<<<<< HEAD:src/parser/cminus.tab.c
       5,    -9,  -114,    16,    46,     5,  -114,  -114,  -114,  -114,
    -114,    16,    16,  -114,     1,  -114,  -114,    32,    41,    16,
      48,  -114,    73,    35,    73,   -10,  -114,  -114,  -114,  -114,
      52,  -114,    50,    16,    57,    62,  -114,    81,     3,    16,
      83,    78,    80,    45,  -114,  -114,    87,  -114,  -114,    86,
    -114,  -114,  -114,  -114,  -114,     5,  -114,  -114,  -114,    16,
      37,    11,    84,    76,    85,  -114,  -114,  -114,  -114,    79,
    -114,  -114,  -114,  -114,  -114,  -114,  -114,   104,   102,    43,
     111,    49,  -114,     0,  -114,  -114,  -114,     9,    79,  -114,
     106,    79,   100,  -114,    79,  -114,  -114,    79,  -114,  -114,
    -114,  -114,  -114,  -114,    79,    79,    79,     0,     0,  -114,
    -114,    79,    79,   101,  -114,   103,  -114,  -114,    53,    49,
      49,    53,  -114,  -114,   107,  -114,   105,   108,    67,    67,
    -114,  -114,    79,   130,  -114,  -114,    67,  -114
=======
<<<<<<< HEAD
      72,    -7,   -78,    11,    36,    72,   -78,   -78,   -78,   -78,
     -78,    11,    11,   -78,     1,   -78,   -78,    83,    -8,    81,
      22,   -78,    40,   102,    40,   -78,    11,   -25,   -78,   -78,
     -78,    24,    26,    30,    60,    46,    74,    13,    81,    92,
      93,   -78,    96,   -78,   101,   -78,   -78,   -78,   -78,   -78,
     -78,    72,   -78,   -78,   -78,    11,    10,    59,    97,    41,
      98,   -78,   -78,   -78,   -78,    63,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   105,    99,     2,    90,    79,   -78,    38,
     -78,   -78,   -78,    47,    63,   -78,   106,    63,   100,   -78,
      63,   -78,   -78,    63,   -78,   -78,   -78,   -78,   -78,   -78,
      63,    63,    63,    38,    38,   -78,   -78,    63,    63,   103,
     -78,   104,   -78,   -78,    84,    79,    79,    84,   -78,   -78,
     107,   -78,   108,   109,    52,    52,   -78,   -78,    63,   127,
     -78,   -78,    52,   -78
=======
      59,    22,  -121,    -1,    37,    59,  -121,  -121,  -121,  -121,
    -121,    -1,    -1,  -121,     1,  -121,  -121,    82,    24,    -1,
      20,  -121,    55,    12,    55,    79,  -121,  -121,  -121,    61,
    -121,    33,    -1,    43,    63,  -121,    73,     0,    -1,    88,
      99,    97,    75,  -121,  -121,   102,  -121,  -121,   101,  -121,
    -121,  -121,  -121,  -121,    59,  -121,  -121,  -121,    -1,    10,
      86,    98,    39,   100,  -121,  -121,  -121,  -121,    23,  -121,
    -121,  -121,  -121,  -121,  -121,  -121,   104,   103,    94,    89,
      81,  -121,    19,  -121,  -121,  -121,    54,    23,  -121,   108,
      23,   105,  -121,    23,  -121,  -121,    23,  -121,  -121,  -121,
    -121,  -121,  -121,    23,    23,    23,    19,    19,  -121,  -121,
      23,    23,   106,  -121,   107,  -121,  -121,    85,    81,    81,
      85,  -121,  -121,   109,  -121,   110,   111,    49,    49,  -121,
    -121,    23,   128,  -121,  -121,    49,  -121
>>>>>>> 187d73f305fca1a9c5cd561075ffa6ec03ad02be
>>>>>>> af294345b4bd5864fbb259ce64663e3b3559b41e:cminus.tab.c
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
<<<<<<< HEAD
       0,    16,    17,     0,     0,     2,     3,     5,     7,     8,
<<<<<<< HEAD:src/parser/cminus.tab.c
       6,     0,     0,    82,     0,     1,     4,     0,     0,     0,
       0,     9,     0,     0,     0,     0,    25,    26,    12,    81,
       0,    16,    17,     0,     0,    18,    21,     0,     0,     0,
       0,    22,     0,     0,    11,    13,     0,    24,    10,     0,
      31,    15,    20,    14,    23,    33,    28,    29,    30,     0,
       0,     0,     0,     0,     0,    71,    70,    40,    27,     0,
      69,    35,    32,    34,    36,    37,    38,     0,    74,    47,
      52,    61,    67,     0,    64,    75,    72,    48,     0,    44,
       0,     0,     0,    39,     0,    59,    60,     0,    57,    58,
      54,    55,    53,    56,     0,     0,     0,     0,     0,    74,
      68,     0,    78,     0,    45,     0,    73,    46,    51,    62,
      63,    50,    65,    66,     0,    79,     0,    77,     0,     0,
      49,    76,     0,    41,    43,    80,     0,    42
=======
       6,     0,     0,    79,     0,     1,     4,     0,     0,     0,
       0,     9,     0,     0,     0,    16,     0,     0,    21,    12,
      78,     0,    17,     0,    18,     0,    22,     0,     0,     0,
       0,    11,     0,    13,     0,    20,    10,    28,    15,    23,
      14,    30,    25,    26,    27,     0,     0,     0,     0,     0,
       0,    68,    67,    37,    24,     0,    66,    32,    29,    31,
      33,    34,    35,     0,    71,    44,    49,    58,    64,     0,
      61,    72,    69,    45,     0,    41,     0,     0,     0,    36,
       0,    56,    57,     0,    54,    55,    51,    52,    50,    53,
       0,     0,     0,     0,     0,    71,    65,     0,    75,     0,
      42,     0,    70,    43,    48,    59,    60,    47,    62,    63,
       0,    76,     0,    74,     0,     0,    46,    73,     0,    38,
      40,    77,     0,    39
=======
       0,    18,    19,     0,     0,     2,     3,     5,     7,     8,
       6,     0,     0,    81,     0,     1,     4,     0,     0,     0,
       0,     9,     0,     0,     0,     0,    15,    12,    80,     0,
      18,    19,     0,     0,    20,    23,     0,     0,     0,     0,
      24,     0,     0,    11,    13,     0,    16,    10,     0,    30,
      17,    22,    14,    25,    32,    27,    28,    29,     0,     0,
       0,     0,     0,     0,    70,    69,    39,    26,     0,    68,
      34,    31,    33,    35,    36,    37,     0,    73,    46,    51,
      60,    66,     0,    63,    74,    71,    47,     0,    43,     0,
       0,     0,    38,     0,    58,    59,     0,    56,    57,    53,
      54,    52,    55,     0,     0,     0,     0,     0,    73,    67,
       0,    77,     0,    44,     0,    72,    45,    50,    61,    62,
      49,    64,    65,     0,    79,     0,    76,     0,     0,    48,
      75,     0,    40,    42,    78,     0,    41
>>>>>>> 187d73f305fca1a9c5cd561075ffa6ec03ad02be
>>>>>>> af294345b4bd5864fbb259ce64663e3b3559b41e:cminus.tab.c
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
<<<<<<< HEAD:src/parser/cminus.tab.c
    -114,  -114,  -114,   132,    88,    91,    92,  -114,   -22,  -114,
    -114,    95,  -114,   109,    97,  -114,  -114,  -113,  -114,  -114,
    -114,  -114,   -63,    13,  -114,  -114,  -114,   -89,   -12,  -114,
    -114,   -57,  -114,  -114,  -114,    31,    -1
=======
<<<<<<< HEAD
     -78,   -78,   -78,   131,    86,    87,    89,   -78,     3,   -78,
     119,   110,   111,   -78,   -78,   -73,   -78,   -78,   -78,   -78,
     -59,    -6,   -78,   -78,   -78,   -72,    19,   -78,   -78,   -77,
     -78,   -78,   -78,    88,    -2
=======
    -121,  -121,  -121,   129,    90,    91,    92,  -121,  -121,    41,
    -121,  -121,   112,    95,  -121,  -121,  -120,  -121,  -121,  -121,
    -121,   -62,   -15,  -121,  -121,  -121,   -94,    17,  -121,  -121,
      -8,  -121,  -121,  -121,    72,    -2
>>>>>>> 187d73f305fca1a9c5cd561075ffa6ec03ad02be
>>>>>>> af294345b4bd5864fbb259ce64663e3b3559b41e:cminus.tab.c
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
<<<<<<< HEAD:src/parser/cminus.tab.c
      -1,     4,     5,     6,     7,     8,     9,    10,    11,    34,
      35,    36,    25,    26,    71,    55,    60,    72,    73,    74,
      75,    76,    77,    78,    79,   106,    97,    80,    81,    82,
      83,    84,    85,   126,   127,    86,    87
=======
<<<<<<< HEAD
      -1,     4,     5,     6,     7,     8,     9,    10,    26,    33,
      27,    28,    67,    51,    56,    68,    69,    70,    71,    72,
      73,    74,    75,   102,    93,    76,    77,    78,    79,    80,
      81,   122,   123,    82,    83
=======
      -1,     4,     5,     6,     7,     8,     9,    25,    10,    11,
      33,    34,    35,    70,    54,    59,    71,    72,    73,    74,
      75,    76,    77,    78,   105,    96,    79,    80,    81,    82,
      83,    84,   125,   126,    85,    86
>>>>>>> 187d73f305fca1a9c5cd561075ffa6ec03ad02be
>>>>>>> af294345b4bd5864fbb259ce64663e3b3559b41e:cminus.tab.c
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
<<<<<<< HEAD:src/parser/cminus.tab.c
      90,    33,    14,    29,    13,    13,    92,    13,   118,    12,
      17,    18,     1,    20,     2,   133,   134,   121,    27,    38,
      13,    33,    39,   137,     3,   113,   110,    45,   115,    19,
      69,   117,    41,    59,   111,    21,    22,    46,    27,   112,
      29,    13,    31,    62,    32,    63,    15,    64,   124,   125,
     122,   123,    31,    30,     2,    37,    21,    22,    61,    65,
      66,    67,    23,    95,    96,    50,    68,    69,    24,   135,
      29,    13,    28,    62,    70,    63,    29,    64,    40,    29,
      13,   -19,    29,    13,   107,   108,   104,   105,    42,    65,
      66,    67,   119,   120,    43,    50,   109,    69,    65,    66,
      89,    65,    66,    49,    70,    44,    69,    48,    50,    69,
     109,    53,    54,    70,    88,    91,    70,   109,   109,   109,
     109,   109,    98,    99,   100,   101,   102,   103,    93,    94,
     114,   116,   128,   130,   129,   136,   131,    16,    52,    51,
     132,     0,     0,    56,   104,   105,    57,    58,    47
=======
<<<<<<< HEAD
      86,    14,   106,    11,    37,    13,    88,    38,    11,    17,
      18,    12,    20,    30,    13,    13,    58,    13,    59,    24,
      60,   114,    91,    92,    36,   109,   118,   119,   111,    19,
     117,   113,    61,    62,    63,    44,    15,    43,    47,    64,
      65,    30,    13,    30,    30,    13,    29,    66,   120,   121,
      39,   129,   130,    57,    55,    30,    13,   -19,    58,   133,
      59,    40,    60,    61,    62,    85,    30,    13,    65,   131,
      41,    65,   107,   105,    61,    62,    63,   108,    66,     1,
      47,     2,    65,    21,    22,    61,    62,   105,    25,    66,
       2,     3,    38,    65,   105,   105,   105,   105,   105,    42,
      66,    94,    95,    96,    97,    98,    99,    21,    22,    25,
      31,    32,    35,    23,   103,   104,    46,   100,   101,   115,
     116,    47,    49,   100,   101,    50,    90,    84,    87,    89,
     110,   112,   132,   126,   124,   125,    16,    52,    53,   127,
      54,   128,    34,     0,     0,     0,     0,     0,    45,     0,
       0,    48
=======
      89,    14,   117,    13,    13,    13,    91,   132,   133,    17,
      18,   120,    20,    28,    13,   136,    61,    26,    62,    30,
      63,    31,    28,    13,    44,   112,    28,    13,   114,    19,
      40,   116,    64,    65,    66,    45,    46,    15,    49,    67,
      12,    68,    28,    13,    27,    64,    65,    69,   123,   124,
      68,    24,    28,    13,    68,    61,    60,    62,    28,    63,
      69,    64,    65,    88,    32,   -21,     1,   108,     2,   134,
      68,    64,    65,    66,   109,    41,    69,    49,     3,   110,
      68,   108,    30,    32,     2,   111,    69,    39,   108,   108,
     108,   108,   108,    42,    29,    58,    36,    43,   121,   122,
      97,    98,    99,   100,   101,   102,    21,    22,    37,    38,
      21,    22,    47,    23,    94,    95,   106,   107,   103,   104,
     118,   119,   103,   104,    48,    49,    52,    53,    92,    87,
      93,    90,   113,   135,    16,   129,    50,   115,   127,   128,
       0,   131,   130,     0,    55,    56,    57,     0,     0,     0,
       0,     0,     0,     0,    51
>>>>>>> 187d73f305fca1a9c5cd561075ffa6ec03ad02be
>>>>>>> af294345b4bd5864fbb259ce64663e3b3559b41e:cminus.tab.c
};

static const yytype_int16 yycheck[] =
{
<<<<<<< HEAD:src/parser/cminus.tab.c
      63,    23,     3,     3,     4,     4,    69,     4,    97,    18,
      11,    12,     7,    14,     9,   128,   129,   106,    19,    29,
       4,    43,    32,   136,    19,    88,    83,    24,    91,    28,
      30,    94,    33,    55,    25,    24,    25,    38,    39,    30,
       3,     4,     7,     6,     9,     8,     0,    10,   111,   112,
     107,   108,     7,    22,     9,    24,    24,    25,    59,    22,
      23,    24,    30,    20,    21,    28,    29,    30,    27,   132,
       3,     4,    24,     6,    37,     8,     3,    10,    26,     3,
       4,    31,     3,     4,    35,    36,    33,    34,    31,    22,
      23,    24,   104,   105,    32,    28,    83,    30,    22,    23,
      24,    22,    23,    25,    37,    24,    30,    24,    28,    30,
      97,    24,    26,    37,    30,    30,    37,   104,   105,   106,
     107,   108,    11,    12,    13,    14,    15,    16,    24,    27,
      24,    31,    31,    26,    31,     5,    31,     5,    43,    42,
      32,    -1,    -1,    55,    33,    34,    55,    55,    39
=======
<<<<<<< HEAD
      59,     3,    79,     0,    29,     4,    65,    32,     5,    11,
      12,    18,    14,     3,     4,     4,     6,     4,     8,    27,
      10,    93,    20,    21,    26,    84,   103,   104,    87,    28,
     102,    90,    22,    23,    24,    37,     0,    24,    28,    29,
      30,     3,     4,     3,     3,     4,    24,    37,   107,   108,
      26,   124,   125,    55,    51,     3,     4,    31,     6,   132,
       8,    31,    10,    22,    23,    24,     3,     4,    30,   128,
      24,    30,    25,    79,    22,    23,    24,    30,    37,     7,
      28,     9,    30,    24,    25,    22,    23,    93,     7,    37,
       9,    19,    32,    30,   100,   101,   102,   103,   104,    25,
      37,    11,    12,    13,    14,    15,    16,    24,    25,     7,
      22,     9,    24,    30,    35,    36,    24,    33,    34,   100,
     101,    28,    26,    33,    34,    24,    27,    30,    30,    24,
      24,    31,     5,    26,    31,    31,     5,    51,    51,    31,
      51,    32,    23,    -1,    -1,    -1,    -1,    -1,    38,    -1,
      -1,    40
=======
      62,     3,    96,     4,     4,     4,    68,   127,   128,    11,
      12,   105,    14,     3,     4,   135,     6,    19,     8,     7,
      10,     9,     3,     4,    24,    87,     3,     4,    90,    28,
      32,    93,    22,    23,    24,    37,    38,     0,    28,    29,
      18,    31,     3,     4,    24,    22,    23,    37,   110,   111,
      31,    27,     3,     4,    31,     6,    58,     8,     3,    10,
      37,    22,    23,    24,    23,    32,     7,    82,     9,   131,
      31,    22,    23,    24,    82,    32,    37,    28,    19,    25,
      31,    96,     7,    42,     9,    31,    37,    26,   103,   104,
     105,   106,   107,    30,    22,    54,    24,    24,   106,   107,
      11,    12,    13,    14,    15,    16,    24,    25,    29,    30,
      24,    25,    24,    31,    20,    21,    35,    36,    33,    34,
     103,   104,    33,    34,    25,    28,    24,    26,    24,    31,
      27,    31,    24,     5,     5,    26,    41,    32,    32,    32,
      -1,    30,    32,    -1,    54,    54,    54,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42
>>>>>>> 187d73f305fca1a9c5cd561075ffa6ec03ad02be
>>>>>>> af294345b4bd5864fbb259ce64663e3b3559b41e:cminus.tab.c
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     7,     9,    19,    39,    40,    41,    42,    43,    44,
<<<<<<< HEAD:src/parser/cminus.tab.c
      45,    46,    18,     4,    74,     0,    41,    74,    74,    28,
      74,    24,    25,    30,    27,    50,    51,    74,    24,     3,
      73,     7,     9,    46,    47,    48,    49,    73,    29,    32,
      26,    74,    31,    32,    24,    24,    74,    51,    24,    25,
      28,    52,    49,    24,    26,    53,    42,    43,    44,    46,
      54,    74,     6,     8,    10,    22,    23,    24,    29,    30,
      37,    52,    55,    56,    57,    58,    59,    60,    61,    62,
      65,    66,    67,    68,    69,    70,    73,    74,    30,    24,
      60,    30,    60,    24,    27,    20,    21,    64,    11,    12,
      13,    14,    15,    16,    33,    34,    63,    35,    36,    61,
      69,    25,    30,    60,    24,    60,    31,    60,    65,    66,
      66,    65,    69,    69,    60,    60,    71,    72,    31,    31,
      26,    31,    32,    55,    55,    60,     5,    55
=======
<<<<<<< HEAD
      45,    46,    18,     4,    72,     0,    41,    72,    72,    28,
      72,    24,    25,    30,    27,     7,    46,    48,    49,    24,
       3,    71,     9,    47,    48,    71,    72,    29,    32,    26,
      31,    24,    25,    24,    72,    49,    24,    28,    50,    26,
      24,    51,    42,    43,    44,    46,    52,    72,     6,     8,
      10,    22,    23,    24,    29,    30,    37,    50,    53,    54,
      55,    56,    57,    58,    59,    60,    63,    64,    65,    66,
      67,    68,    71,    72,    30,    24,    58,    30,    58,    24,
      27,    20,    21,    62,    11,    12,    13,    14,    15,    16,
      33,    34,    61,    35,    36,    59,    67,    25,    30,    58,
      24,    58,    31,    58,    63,    64,    64,    63,    67,    67,
      58,    58,    69,    70,    31,    31,    26,    31,    32,    53,
      53,    58,     5,    53
=======
      46,    47,    18,     4,    73,     0,    41,    73,    73,    28,
      73,    24,    25,    31,    27,    45,    73,    24,     3,    72,
       7,     9,    47,    48,    49,    50,    72,    29,    30,    26,
      73,    32,    30,    24,    24,    73,    73,    24,    25,    28,
      51,    50,    24,    26,    52,    42,    43,    44,    47,    53,
      73,     6,     8,    10,    22,    23,    24,    29,    31,    37,
      51,    54,    55,    56,    57,    58,    59,    60,    61,    64,
      65,    66,    67,    68,    69,    72,    73,    31,    24,    59,
      31,    59,    24,    27,    20,    21,    63,    11,    12,    13,
      14,    15,    16,    33,    34,    62,    35,    36,    60,    68,
      25,    31,    59,    24,    59,    32,    59,    64,    65,    65,
      64,    68,    68,    59,    59,    70,    71,    32,    32,    26,
      32,    30,    54,    54,    59,     5,    54
>>>>>>> 187d73f305fca1a9c5cd561075ffa6ec03ad02be
>>>>>>> af294345b4bd5864fbb259ce64663e3b3559b41e:cminus.tab.c
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    38,    39,    40,    40,    41,    41,    41,    41,    42,
<<<<<<< HEAD
      42,    43,    44,    44,    44,    45,    46,    46,    47,    47,
<<<<<<< HEAD:src/parser/cminus.tab.c
      48,    48,    49,    49,    50,    50,    51,    52,    53,    53,
      53,    53,    54,    54,    55,    55,    55,    55,    55,    56,
      56,    57,    57,    58,    59,    59,    60,    60,    61,    61,
      62,    62,    62,    63,    63,    63,    63,    63,    63,    64,
      64,    65,    65,    65,    66,    66,    66,    66,    67,    68,
      68,    68,    69,    69,    69,    69,    70,    71,    71,    72,
      72,    73,    74
=======
      48,    48,    49,    49,    50,    51,    51,    51,    51,    52,
      52,    53,    53,    53,    53,    53,    54,    54,    55,    55,
      56,    57,    57,    58,    58,    59,    59,    60,    60,    60,
      61,    61,    61,    61,    61,    61,    62,    62,    63,    63,
      63,    64,    64,    64,    64,    65,    66,    66,    66,    67,
      67,    67,    67,    68,    69,    69,    70,    70,    71,    72
=======
      42,    43,    44,    44,    44,    45,    45,    46,    47,    47,
      48,    48,    49,    49,    50,    50,    51,    52,    52,    52,
      52,    53,    53,    54,    54,    54,    54,    54,    55,    55,
      56,    56,    57,    58,    58,    59,    59,    60,    60,    61,
      61,    61,    62,    62,    62,    62,    62,    62,    63,    63,
      64,    64,    64,    65,    65,    65,    65,    66,    67,    67,
      67,    68,    68,    68,    68,    69,    70,    70,    71,    71,
      72,    73
>>>>>>> 187d73f305fca1a9c5cd561075ffa6ec03ad02be
>>>>>>> af294345b4bd5864fbb259ce64663e3b3559b41e:cminus.tab.c
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     1,     1,     3,
<<<<<<< HEAD
       6,     6,     4,     6,     7,     6,     1,     1,     1,     1,
<<<<<<< HEAD:src/parser/cminus.tab.c
       3,     1,     2,     4,     3,     1,     1,     4,     2,     2,
       2,     0,     2,     0,     1,     1,     1,     1,     1,     2,
       1,     5,     7,     5,     2,     3,     3,     1,     1,     4,
       3,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     3,     1,     3,     3,     1,     2,     1,
       1,     1,     1,     3,     1,     1,     4,     1,     0,     1,
       3,     1,     1
=======
       3,     1,     2,     4,     4,     2,     2,     2,     0,     2,
       0,     1,     1,     1,     1,     1,     2,     1,     5,     7,
       5,     2,     3,     3,     1,     1,     4,     3,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       3,     1,     3,     3,     1,     2,     1,     1,     1,     1,
       3,     1,     1,     4,     1,     0,     1,     3,     1,     1
=======
       6,     6,     4,     6,     7,     1,     3,     6,     1,     1,
       1,     1,     3,     1,     2,     4,     4,     2,     2,     2,
       0,     2,     0,     1,     1,     1,     1,     1,     2,     1,
       5,     7,     5,     2,     3,     3,     1,     1,     4,     3,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     3,     1,     3,     3,     1,     2,     1,     1,
       1,     1,     3,     1,     1,     4,     1,     0,     3,     1,
       1,     1
>>>>>>> 187d73f305fca1a9c5cd561075ffa6ec03ad02be
>>>>>>> af294345b4bd5864fbb259ce64663e3b3559b41e:cminus.tab.c
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
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
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
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

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
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
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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
  case 2:
<<<<<<< HEAD:src/parser/cminus.tab.c
#line 66 "./parser/cminus.y"
=======
<<<<<<< HEAD
#line 66 "./cminus.y"
>>>>>>> af294345b4bd5864fbb259ce64663e3b3559b41e:cminus.tab.c
                          {
  execute((yyvsp[0].decl));
}
#line 1444 "./parser/cminus.tab.c"
    break;

  case 4:
<<<<<<< HEAD:src/parser/cminus.tab.c
#line 73 "./parser/cminus.y"
=======
#line 73 "./cminus.y"
=======
#line 66 "cminus.y"
                          {
  parser_result = (yyvsp[0].decl);
}
#line 1446 "cminus.tab.c"
    break;

  case 4:
#line 72 "cminus.y"
>>>>>>> 187d73f305fca1a9c5cd561075ffa6ec03ad02be
>>>>>>> af294345b4bd5864fbb259ce64663e3b3559b41e:cminus.tab.c
                               {
    (yyvsp[0].decl)->next = (yyvsp[-1].decl);
    (yyval.decl) = (yyvsp[0].decl);
  }
<<<<<<< HEAD:src/parser/cminus.tab.c
#line 1453 "./parser/cminus.tab.c"
=======
<<<<<<< HEAD
#line 1452 "./cminus.tab.c"
>>>>>>> af294345b4bd5864fbb259ce64663e3b3559b41e:cminus.tab.c
    break;

  case 9:
#line 87 "./parser/cminus.y"
                            {
    (yyval.decl) = var_decl_create((yyvsp[-1].id), (yyvsp[-2].type));
  }
#line 1461 "./parser/cminus.tab.c"
    break;

  case 10:
#line 90 "./parser/cminus.y"
                                              {
    (yyval.decl) = array_decl_create( (yyvsp[-4].id), (yyvsp[-5].type), (yyvsp[-2].num));
  }
#line 1469 "./parser/cminus.tab.c"
    break;

  case 11:
#line 96 "./parser/cminus.y"
                                     {
    (yyval.decl) = decl_create((yyvsp[-3].id), type_create(TYPE_INTEGER, 0, 0), expr_create_integer((yyvsp[-1].num)), 0, 0);
    
  }
#line 1478 "./parser/cminus.tab.c"
    break;

  case 12:
#line 103 "./parser/cminus.y"
                           {
    (yyval.decl) = enum_decl_create((yyvsp[-1].id), (yyvsp[-2].id), 0);
  }
#line 1486 "./parser/cminus.tab.c"
    break;

  case 13:
#line 107 "./parser/cminus.y"
  {
    (yyval.decl) = enum_decl_create(0, (yyvsp[-4].id), (yyvsp[-2].id_list));
  }
#line 1494 "./parser/cminus.tab.c"
    break;

  case 14:
#line 111 "./parser/cminus.y"
  {
    (yyval.decl) = enum_decl_create((yyvsp[-1].id), (yyvsp[-5].id), (yyvsp[-3].id_list));
  }
#line 1502 "./parser/cminus.tab.c"
    break;

  case 15:
#line 117 "./parser/cminus.y"
                                                      {
    (yyval.decl) = func_decl_create((yyvsp[-4].id), (yyvsp[-5].type), (yyvsp[-2].param_list), (yyvsp[0].stmt));
  }
#line 1510 "./parser/cminus.tab.c"
    break;

  case 16:
#line 123 "./parser/cminus.y"
      {
    (yyval.type) = type_create(TYPE_INTEGER, 0, 0);
  }
#line 1518 "./parser/cminus.tab.c"
    break;

  case 17:
#line 126 "./parser/cminus.y"
         {
    (yyval.type) = type_create(TYPE_VOID, 0, 0);
  }
#line 1526 "./parser/cminus.tab.c"
    break;

  case 19:
#line 133 "./parser/cminus.y"
         {
    (yyval.param_list) = param_create(0, type_create(TYPE_VOID, 0, 0));
  }
#line 1534 "./parser/cminus.tab.c"
    break;

  case 20:
#line 139 "./parser/cminus.y"
                        {
    (yyvsp[0].param_list)->next = (yyvsp[-2].param_list);
    (yyval.param_list) = (yyvsp[0].param_list);
  }
#line 1543 "./parser/cminus.tab.c"
    break;

  case 22:
#line 146 "./parser/cminus.y"
                         {
    (yyval.param_list) = param_create((yyvsp[0].id), (yyvsp[-1].type));
  }
#line 1551 "./parser/cminus.tab.c"
    break;

  case 23:
#line 149 "./parser/cminus.y"
                                 {
    (yyval.param_list) = param_array_create((yyvsp[-2].id), (yyvsp[-3].type));
  }
#line 1559 "./parser/cminus.tab.c"
    break;

  case 24:
#line 154 "./parser/cminus.y"
                  {
    (yyvsp[0].id_list)->next = (yyvsp[-2].id_list);
    (yyval.id_list) = (yyvsp[0].id_list);
  }
#line 1568 "./parser/cminus.tab.c"
    break;

  case 26:
#line 161 "./parser/cminus.y"
          {
    (yyval.id_list) = id_list_create((yyvsp[0].id), enum_type_create(TYPE_ENUM,0,0));
  }
#line 1576 "./parser/cminus.tab.c"
    break;

  case 27:
#line 167 "./parser/cminus.y"
                                            {
    (yyval.stmt) = compound_stmt_create(STMT_BLOCK, (yyvsp[-2].decl), (yyvsp[-1].stmt));
  }
#line 1584 "./parser/cminus.tab.c"
    break;

  case 28:
#line 173 "./parser/cminus.y"
                                     {
    (yyvsp[0].decl)->next = (yyvsp[-1].decl);
    (yyval.decl) = (yyvsp[0].decl);
  }
#line 1593 "./parser/cminus.tab.c"
    break;

  case 29:
#line 177 "./parser/cminus.y"
                                      {
    (yyvsp[0].decl)->next = (yyvsp[-1].decl);
    (yyval.decl) = (yyvsp[0].decl);
  }
#line 1602 "./parser/cminus.tab.c"
    break;

  case 30:
#line 181 "./parser/cminus.y"
                                      {
    (yyvsp[0].decl)->next = (yyvsp[-1].decl);
    (yyval.decl) = (yyvsp[0].decl);
  }
#line 1611 "./parser/cminus.tab.c"
    break;

  case 31:
#line 185 "./parser/cminus.y"
              {
    (yyval.decl) = 0;
  }
#line 1619 "./parser/cminus.tab.c"
    break;

  case 32:
#line 191 "./parser/cminus.y"
                           {
    (yyvsp[0].stmt)->next = (yyvsp[-1].stmt);
    (yyval.stmt) = (yyvsp[0].stmt);
  }
#line 1628 "./parser/cminus.tab.c"
    break;

  case 33:
#line 195 "./parser/cminus.y"
              {
    (yyval.stmt) = 0;
  }
#line 1636 "./parser/cminus.tab.c"
    break;

  case 39:
#line 209 "./parser/cminus.y"
                 {
    (yyval.stmt) = stmt_create(STMT_EXPR, 0, 0, (yyvsp[-1].expr), 0, 0, 0, 0);
  }
#line 1644 "./parser/cminus.tab.c"
    break;

  case 40:
#line 212 "./parser/cminus.y"
      {
    (yyval.stmt) = stmt_create(STMT_EXPR, 0, 0, expr_create(EXPR_EMPTY, 0, 0), 0, 0, 0, 0);
  }
#line 1652 "./parser/cminus.tab.c"
    break;

  case 41:
#line 218 "./parser/cminus.y"
                                  {
    (yyval.stmt) = stmt_create(STMT_IF_ELSE, 0, 0, (yyvsp[-2].expr), 0, (yyvsp[0].stmt), 0, 0);
  }
#line 1660 "./parser/cminus.tab.c"
    break;

  case 42:
#line 221 "./parser/cminus.y"
                                                 {
    (yyval.stmt) = stmt_create(STMT_IF_ELSE, 0, 0, (yyvsp[-4].expr), 0, (yyvsp[-2].stmt), (yyvsp[0].stmt), 0);
  }
#line 1668 "./parser/cminus.tab.c"
    break;

  case 43:
#line 227 "./parser/cminus.y"
                                     {
    (yyval.stmt) = stmt_create(STMT_WHILE, 0, 0, (yyvsp[-2].expr), 0, (yyvsp[0].stmt), 0, 0);
  }
#line 1676 "./parser/cminus.tab.c"
    break;

  case 44:
#line 232 "./parser/cminus.y"
                        {
    (yyval.stmt) = stmt_create(STMT_RETURN, 0, 0, 0, 0, 0, 0, 0);
  }
#line 1684 "./parser/cminus.tab.c"
    break;

  case 45:
#line 235 "./parser/cminus.y"
                        {
    (yyval.stmt) = stmt_create(STMT_RETURN, 0, 0, (yyvsp[-1].expr), 0, 0, 0, 0);
  }
#line 1692 "./parser/cminus.tab.c"
    break;

  case 46:
#line 241 "./parser/cminus.y"
                     {
    (yyval.expr) = expr_create(EXPR_ASSIGN, (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 1700 "./parser/cminus.tab.c"
    break;

  case 48:
#line 248 "./parser/cminus.y"
           {
    (yyval.expr) = expr_create_var((yyvsp[0].id));
  }
#line 1708 "./parser/cminus.tab.c"
    break;

  case 49:
#line 251 "./parser/cminus.y"
                             {
    (yyval.expr) = expr_create_array((yyvsp[-3].id), (yyvsp[-1].expr));
  }
#line 1716 "./parser/cminus.tab.c"
    break;

  case 50:
#line 257 "./parser/cminus.y"
                                                {
    (yyvsp[-1].expr)->left = (yyvsp[-2].expr);
    (yyvsp[-1].expr)->right = (yyvsp[0].expr);
    (yyval.expr) = (yyvsp[-1].expr);
  }
#line 1726 "./parser/cminus.tab.c"
    break;

  case 51:
#line 262 "./parser/cminus.y"
                                              {
    (yyvsp[-1].expr)->left = (yyvsp[-2].expr);
    (yyvsp[-1].expr)->right = (yyvsp[0].expr);
    (yyval.expr) = (yyvsp[-1].expr);
  }
#line 1736 "./parser/cminus.tab.c"
    break;

  case 53:
#line 271 "./parser/cminus.y"
       { (yyval.expr) = expr_create(EXPR_LTEQ, 0, 0); }
#line 1742 "./parser/cminus.tab.c"
    break;

  case 54:
#line 272 "./parser/cminus.y"
     { (yyval.expr) = expr_create(EXPR_LT, 0, 0); }
#line 1748 "./parser/cminus.tab.c"
    break;

  case 55:
#line 273 "./parser/cminus.y"
     { (yyval.expr) = expr_create(EXPR_GT, 0, 0); }
#line 1754 "./parser/cminus.tab.c"
    break;

  case 56:
#line 274 "./parser/cminus.y"
       { (yyval.expr) = expr_create(EXPR_GTEQ, 0, 0); }
#line 1760 "./parser/cminus.tab.c"
    break;

  case 57:
#line 275 "./parser/cminus.y"
     { (yyval.expr) = expr_create(EXPR_EQ, 0, 0); }
#line 1766 "./parser/cminus.tab.c"
    break;

  case 58:
#line 276 "./parser/cminus.y"
      { (yyval.expr) = expr_create(EXPR_NEQ, 0, 0); }
#line 1772 "./parser/cminus.tab.c"
    break;

  case 59:
#line 280 "./parser/cminus.y"
      { (yyval.expr) = expr_create(EXPR_AND, 0, 0); }
#line 1778 "./parser/cminus.tab.c"
    break;

  case 60:
#line 281 "./parser/cminus.y"
     { (yyval.expr) = expr_create(EXPR_OR, 0, 0); }
#line 1784 "./parser/cminus.tab.c"
    break;

  case 62:
#line 286 "./parser/cminus.y"
                               {
     (yyval.expr) = expr_create(EXPR_ADD, (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 1792 "./parser/cminus.tab.c"
    break;

  case 63:
#line 289 "./parser/cminus.y"
                               {
     (yyval.expr) = expr_create(EXPR_SUB, (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 1800 "./parser/cminus.tab.c"
    break;

  case 65:
#line 296 "./parser/cminus.y"
                  {
    (yyval.expr) = expr_create(EXPR_MUL, (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 1808 "./parser/cminus.tab.c"
    break;

  case 66:
#line 299 "./parser/cminus.y"
                  {
    (yyval.expr) = expr_create(EXPR_DIV, (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 1816 "./parser/cminus.tab.c"
    break;

  case 68:
#line 307 "./parser/cminus.y"
                  {
    (yyvsp[-1].expr)->right = (yyvsp[0].expr);
    (yyval.expr) = (yyvsp[-1].expr);
  }
#line 1825 "./parser/cminus.tab.c"
    break;

  case 69:
#line 314 "./parser/cminus.y"
      { (yyval.expr) = expr_create(EXPR_NOT, 0, 0); }
#line 1831 "./parser/cminus.tab.c"
    break;

  case 70:
#line 315 "./parser/cminus.y"
      { (yyval.expr) = expr_create(EXPR_DEC, 0, 0); }
#line 1837 "./parser/cminus.tab.c"
    break;

  case 71:
#line 316 "./parser/cminus.y"
      { (yyval.expr) = expr_create(EXPR_INC, 0, 0); }
#line 1843 "./parser/cminus.tab.c"
    break;

  case 72:
#line 320 "./parser/cminus.y"
           {
    (yyval.expr) = expr_create_integer((yyvsp[0].num));
  }
#line 1851 "./parser/cminus.tab.c"
    break;

  case 73:
#line 323 "./parser/cminus.y"
                     {
    (yyval.expr) = (yyvsp[-1].expr);
  }
#line 1859 "./parser/cminus.tab.c"
    break;

  case 76:
#line 331 "./parser/cminus.y"
                       {
    (yyval.expr) = expr_create_call((yyvsp[-3].id), (yyvsp[-1].expr));
  }
#line 1867 "./parser/cminus.tab.c"
    break;

  case 78:
#line 338 "./parser/cminus.y"
              {
    (yyval.expr) = 0;
  }
#line 1875 "./parser/cminus.tab.c"
    break;

  case 80:
#line 345 "./parser/cminus.y"
                           {
    (yyval.expr) = expr_create_arg( (yyvsp[-2].expr), (yyvsp[0].expr));
  }
#line 1883 "./parser/cminus.tab.c"
    break;

  case 81:
#line 350 "./parser/cminus.y"
              {
  (yyval.num) = yylval.num;
 }
#line 1891 "./parser/cminus.tab.c"
    break;

  case 82:
#line 355 "./parser/cminus.y"
            {
  (yyval.id) = yylval.id;
}
#line 1899 "./parser/cminus.tab.c"
    break;


<<<<<<< HEAD:src/parser/cminus.tab.c
#line 1903 "./parser/cminus.tab.c"
=======
#line 1893 "./cminus.tab.c"
=======
#line 1455 "cminus.tab.c"
    break;

  case 9:
#line 86 "cminus.y"
                             {
    (yyval.decl) = decl_create((yyvsp[-1].id), (yyvsp[-2].type), 0, 0, 0);
  }
#line 1463 "cminus.tab.c"
    break;

  case 10:
#line 89 "cminus.y"
                                              {
      // $$ = decl_create(
      //   $2, type_create(TYPE_ARRAY, $1, 0), expr_create_integer($4), 0, 0
      // );
    }
#line 1473 "cminus.tab.c"
    break;

  case 11:
#line 97 "cminus.y"
                                     {
    // $$ = decl_create(
    //   $2, type_create(TYPE_INTEGER, 0, 0), expr_create_integer($5), 0, 0
    // );
  }
#line 1483 "cminus.tab.c"
    break;

  case 12:
#line 105 "cminus.y"
                           {
    // $$ = enum_decl_create(
    //   $3, type_create(TYPE_ENUM, $2, 0), 0
    // );
  }
#line 1493 "cminus.tab.c"
    break;

  case 80:
#line 248 "cminus.y"
              {
  (yyval.num) = yylval.num;
 }
#line 1501 "cminus.tab.c"
    break;

  case 81:
#line 253 "cminus.y"
            {
  (yyval.id) = yylval.id;
}
#line 1509 "cminus.tab.c"
    break;


#line 1513 "cminus.tab.c"
>>>>>>> 187d73f305fca1a9c5cd561075ffa6ec03ad02be
>>>>>>> af294345b4bd5864fbb259ce64663e3b3559b41e:cminus.tab.c

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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

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
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
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
                  yystos[+*yyssp], yyvsp);
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
  return yyresult;
}
<<<<<<< HEAD:src/parser/cminus.tab.c
#line 360 "./parser/cminus.y"
=======
<<<<<<< HEAD
#line 344 "./cminus.y"
=======
#line 260 "cminus.y"
>>>>>>> 187d73f305fca1a9c5cd561075ffa6ec03ad02be
>>>>>>> af294345b4bd5864fbb259ce64663e3b3559b41e:cminus.tab.c





