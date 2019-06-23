/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "y1.y" /* yacc.c:339  */

#include <stdio.h>

#line 70 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    INTEGER = 258,
    CONSTANTE = 259,
    OPERADOR = 260,
    PROGRAM_ = 261,
    IDENTIFICADOR = 262,
    PONTO_VIRGULA = 263,
    BEGIN_ = 264,
    ATRIBUICAO = 265,
    END = 266,
    DOIS_PONTOS = 267,
    VIRGULA = 268,
    BOOLEAN = 269,
    CHAR = 270,
    DO = 271,
    ELSE = 272,
    FALSE_ = 273,
    ENDIF = 274,
    ENDWHILE = 275,
    EXIT = 276,
    IF = 277,
    PROCEDURE = 278,
    REFERENCE = 279,
    REPEAT = 280,
    RETURN = 281,
    READ = 282,
    THEN = 283,
    TRUE_ = 284,
    TYPE = 285,
    UNTIL = 286,
    VALUE = 287,
    WRITE = 288,
    WHILE = 289,
    NOT = 290,
    SAMUEL = 291,
    ABRE_PARENTESES = 292,
    FECHA_PARENTESES = 293,
    UMINUS = 294
  };
#endif
/* Tokens.  */
#define INTEGER 258
#define CONSTANTE 259
#define OPERADOR 260
#define PROGRAM_ 261
#define IDENTIFICADOR 262
#define PONTO_VIRGULA 263
#define BEGIN_ 264
#define ATRIBUICAO 265
#define END 266
#define DOIS_PONTOS 267
#define VIRGULA 268
#define BOOLEAN 269
#define CHAR 270
#define DO 271
#define ELSE 272
#define FALSE_ 273
#define ENDIF 274
#define ENDWHILE 275
#define EXIT 276
#define IF 277
#define PROCEDURE 278
#define REFERENCE 279
#define REPEAT 280
#define RETURN 281
#define READ 282
#define THEN 283
#define TRUE_ 284
#define TYPE 285
#define UNTIL 286
#define VALUE 287
#define WRITE 288
#define WHILE 289
#define NOT 290
#define SAMUEL 291
#define ABRE_PARENTESES 292
#define FECHA_PARENTESES 293
#define UMINUS 294

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 4 "y1.y" /* yacc.c:355  */

 double real;
 int integer;
 

#line 194 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 211 "y.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   166

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  40
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  76
/* YYNRULES -- Number of rules.  */
#define YYNRULES  114
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  187

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   294

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
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
      35,    36,    37,    38,    39
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    55,    55,    56,    56,    58,    58,    59,    60,    63,
      63,    63,    63,    63,    64,    66,    66,    66,    66,    68,
      69,    71,    72,    73,    75,    77,    78,    79,    80,    82,
      83,    84,    86,    88,    90,    92,    94,    96,    98,   100,
     101,   103,   105,   106,   108,   109,   110,   111,   113,   115,
     116,   118,   120,   120,   121,   121,   121,   121,   124,   125,
     127,   129,   130,   132,   132,   133,   133,   134,   134,   135,
     135,   136,   136,   137,   137,   138,   138,   139,   139,   140,
     140,   141,   141,   143,   145,   145,   145,   145,   145,   145,
     147,   149,   150,   153,   155,   157,   159,   161,   163,   164,
     166,   168,   169,   171,   172,   174,   176,   177,   178,   178,
     179,   180,   181,   189,   194
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INTEGER", "CONSTANTE", "OPERADOR",
  "PROGRAM_", "IDENTIFICADOR", "PONTO_VIRGULA", "BEGIN_", "ATRIBUICAO",
  "END", "DOIS_PONTOS", "VIRGULA", "BOOLEAN", "CHAR", "DO", "ELSE",
  "FALSE_", "ENDIF", "ENDWHILE", "EXIT", "IF", "PROCEDURE", "REFERENCE",
  "REPEAT", "RETURN", "READ", "THEN", "TRUE_", "TYPE", "UNTIL", "VALUE",
  "WRITE", "WHILE", "NOT", "SAMUEL", "ABRE_PARENTESES", "FECHA_PARENTESES",
  "UMINUS", "$accept", "lines", "$@1", "line", "programa", "$@2", "$@3",
  "$@4", "$@5", "block", "$@6", "$@7", "$@8", "declaracoes", "declaracao",
  "decl_de_var", "tipo", "M0", "M1", "M2", "def_de_tipo", "nome_do_tipo",
  "definicao_de_tipo", "limites", "tipo_definido", "decl_de_proc",
  "proc_cab", "proc_corpo", "emit_return", "lista_de_parametros",
  "tipo_retornado", "parametro", "modo", "nome_do_proc", "lista_comandos",
  "$@9", "$@10", "$@11", "$@12", "lista_ids", "vazio",
  "espec_de_parametros", "comando", "$@13", "$@14", "$@15", "$@16", "$@17",
  "$@18", "$@19", "$@20", "$@21", "$@22", "comando_atribuicao",
  "comando_while", "$@23", "$@24", "$@25", "$@26", "$@27",
  "comando_repeat", "comando_if", "comando_read", "comando_write",
  "comando_return", "comando_exit", "rotulo", "variavel",
  "chamada_ou_indexacao", "chamada_de_proc", "indices", "variavel2",
  "expr", "$@28", "inteiro", "identificador", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294
};
# endif

#define YYPACT_NINF -140

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-140)))

#define YYTABLE_NINF -106

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       8,    11,  -140,  -140,    57,  -140,  -140,  -140,  -140,  -140,
    -140,  -140,  -140,    14,  -140,  -140,    23,  -140,  -140,    -3,
    -140,     4,    20,    10,    43,  -140,    19,  -140,  -140,  -140,
      44,    38,  -140,  -140,  -140,  -140,  -140,    59,  -140,  -140,
    -140,  -140,  -140,  -140,    55,    31,  -140,    58,  -140,    74,
    -140,  -140,    75,    45,  -140,    46,  -140,    47,  -140,  -140,
    -140,   -11,  -140,  -140,  -140,    52,  -140,    85,  -140,  -140,
    -140,  -140,     6,  -140,    73,  -140,  -140,    83,  -140,    66,
      70,    68,    60,    71,    77,    83,    83,  -140,  -140,    61,
      84,   -11,  -140,  -140,  -140,  -140,    89,    91,  -140,  -140,
      93,  -140,    12,    67,    69,  -140,    76,  -140,  -140,     5,
    -140,    83,  -140,     5,  -140,     5,  -140,    83,  -140,  -140,
    -140,    69,    95,  -140,    97,    73,    85,  -140,   101,  -140,
       5,     5,  -140,     5,  -140,  -140,  -140,     5,     5,  -140,
      81,   107,  -140,  -140,  -140,  -140,    52,  -140,  -140,  -140,
    -140,  -140,  -140,  -140,  -140,    82,    79,  -140,  -140,   109,
    -140,  -140,     5,  -140,  -140,  -140,     5,    52,  -140,     5,
      99,  -140,  -140,    96,  -140,  -140,   102,  -140,  -140,  -140,
    -140,  -140,   103,  -140,  -140,   100,  -140
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     2,     1,     0,     8,     9,     4,     7,    60,
      10,    31,    60,    60,    20,    60,    60,    29,    12,    25,
      36,    26,    27,     0,     0,    21,     0,    22,    28,    23,
      60,     0,    47,    15,    33,    60,    19,     0,    60,    37,
      40,    41,    60,    13,     0,     0,    58,    24,    60,     0,
      16,    60,     0,    15,    51,    60,    52,     0,    30,    59,
      60,     0,    62,    38,    17,    63,    52,     0,    32,    39,
      50,    49,     0,    42,     0,    60,    53,     0,    84,     0,
       0,     0,     0,     0,     0,     0,     0,    55,   113,     0,
       0,     0,    61,    25,    26,    27,     0,     0,   114,    64,
       0,    99,     0,     0,    98,    66,     0,    60,    68,     0,
      70,     0,    72,     0,    74,     0,    76,     0,    78,   102,
      80,   101,     0,    97,     0,     0,     0,    43,     0,    18,
       0,     0,   100,     0,    85,    52,   110,     0,     0,   111,
       0,     0,    93,    94,    95,    96,    63,    60,    34,    35,
      48,    83,   104,   103,    60,     0,     0,   106,    60,     0,
      82,    56,     0,    60,   112,    52,     0,    63,    86,     0,
      60,   106,    57,     0,    90,    91,     0,    87,    60,    60,
      52,    52,     0,    88,    92,     0,    89
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -140,   119,  -140,  -140,  -140,  -140,  -140,  -140,  -140,    72,
    -140,  -140,  -140,    86,  -140,  -140,   -70,   -13,   -47,  -140,
    -140,  -140,  -140,  -140,  -140,  -140,  -140,  -140,    78,  -140,
    -140,    35,  -140,  -140,   -65,  -140,  -140,  -140,  -140,  -140,
      -6,  -140,  -139,  -140,  -140,  -140,  -140,  -140,  -140,  -140,
    -140,  -140,  -140,  -140,  -140,  -140,  -140,  -140,  -140,  -140,
    -140,  -140,  -140,  -140,  -140,  -140,  -140,   -72,    42,  -140,
    -140,  -140,   -97,  -140,     2,   -71
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     7,     8,     9,    12,    15,    33,    43,
      44,    56,    75,    13,    24,    25,    26,   138,    57,    10,
      27,    35,    68,    89,    28,    29,    30,    39,    40,    72,
      31,    73,    74,    55,    64,    65,    66,   124,   167,    47,
      17,    63,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    99,   105,   106,   154,   173,   179,   185,
     108,   110,   112,   114,   116,   118,   122,   139,   101,   120,
     102,   103,   140,   141,    90,   104
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      16,    87,    18,    11,    96,   100,    14,   160,    -2,   136,
      32,     3,    98,    70,   121,   123,   143,    34,   144,    91,
     -44,    71,    45,   -11,    41,   131,    19,   -45,   172,    49,
      20,    37,    14,   151,   152,    53,   153,    21,    22,   142,
     156,   157,   137,   -46,    92,    58,   145,    32,    19,    62,
     132,    36,    20,    23,    41,   148,    38,    -5,     5,    21,
      22,    42,    97,     6,    50,   168,    46,    51,   -60,   171,
     155,    52,   174,   -77,   -69,    23,    93,   -67,   -75,   -71,
      20,    54,    59,    61,    67,   -73,   -65,    94,    95,    88,
      98,   107,   109,   113,   135,   111,   126,   115,   117,   125,
     170,   128,   129,   130,   133,   147,  -105,   146,   150,   158,
     134,   159,   177,   163,   166,   182,   183,   164,   175,   178,
     186,     4,   184,   176,    48,    60,   127,   119,   149,     0,
       0,     0,     0,     0,   161,     0,     0,     0,    69,     0,
       0,   162,     0,     0,     0,   165,     0,     0,     0,     0,
     169,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    58,   180,   181
};

static const yytype_int16 yycheck[] =
{
      13,    66,    15,     9,    74,    77,    12,   146,     0,     4,
      16,     0,     7,    24,    85,    86,   113,     7,   115,    13,
      23,    32,    35,     9,    30,    13,     3,    23,   167,    42,
       7,    12,    38,   130,   131,    48,   133,    14,    15,   111,
     137,   138,    37,    23,    38,    51,   117,    53,     3,    55,
      38,     8,     7,    30,    60,   125,    12,     0,     1,    14,
      15,    23,    75,     6,     9,   162,     7,    36,    23,   166,
     135,    13,   169,    21,    22,    30,     3,    25,    26,    27,
       7,     7,     7,    37,    37,    33,    34,    14,    15,     4,
       7,    25,    22,    33,   107,    27,    12,    26,    21,    38,
     165,    12,    11,    10,    37,     8,    37,    12,     7,    28,
      34,     4,    16,    31,     5,   180,   181,    38,    19,    17,
      20,     2,    19,   170,    38,    53,    91,    85,   126,    -1,
      -1,    -1,    -1,    -1,   147,    -1,    -1,    -1,    60,    -1,
      -1,   154,    -1,    -1,    -1,   158,    -1,    -1,    -1,    -1,
     163,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   170,   178,   179
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    41,    42,     0,    41,     1,     6,    43,    44,    45,
      59,    80,    46,    53,    80,    47,    57,    80,    57,     3,
       7,    14,    15,    30,    54,    55,    56,    60,    64,    65,
      66,    70,    80,    48,     7,    61,     8,    12,    12,    67,
      68,    80,    23,    49,    50,    57,     7,    79,    53,    57,
       9,    36,    13,    57,     7,    73,    51,    58,    80,     7,
      49,    37,    80,    81,    74,    75,    76,    37,    62,    68,
      24,    32,    69,    71,    72,    52,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    74,     4,    63,
     114,    13,    38,     3,    14,    15,    56,    57,     7,    93,
     107,   108,   110,   111,   115,    94,    95,    25,   100,    22,
     101,    27,   102,    33,   103,    26,   104,    21,   105,   108,
     109,   115,   106,   115,    77,    38,    12,    71,    12,    11,
      10,    13,    38,    37,    34,    57,     4,    37,    57,   107,
     112,   113,   107,   112,   112,   115,    12,     8,    56,   114,
       7,   112,   112,   112,    96,    74,   112,   112,    28,     4,
      82,    57,    57,    31,    38,    57,     5,    78,   112,    57,
      74,   112,    82,    97,   112,    19,    58,    16,    17,    98,
      57,    57,    74,    74,    19,    99,    20
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    40,    41,    42,    41,    43,    43,    43,    43,    45,
      46,    47,    48,    44,    44,    50,    51,    52,    49,    53,
      53,    54,    54,    54,    55,    56,    56,    56,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      67,    68,    69,    69,    70,    70,    70,    70,    71,    72,
      72,    73,    75,    74,    76,    77,    78,    74,    79,    79,
      80,    81,    81,    83,    82,    84,    82,    85,    82,    86,
      82,    87,    82,    88,    82,    89,    82,    90,    82,    91,
      82,    92,    82,    93,    95,    96,    97,    98,    99,    94,
     100,   101,   101,   102,   103,   104,   105,   106,   107,   107,
     108,   109,   109,   110,   110,   111,   112,   112,   113,   112,
     112,   112,   112,   114,   115
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     0,     3,     0,     0,     1,     1,     0,
       0,     0,     0,     9,     0,     0,     0,     0,     7,     4,
       1,     1,     1,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     6,     1,     4,     3,     1,     2,     5,     5,
       1,     1,     1,     3,     1,     1,     1,     1,     4,     1,
       1,     1,     0,     2,     0,     0,     0,     7,     1,     3,
       0,     3,     1,     0,     2,     0,     2,     0,     2,     0,
       2,     0,     2,     0,     2,     0,     2,     0,     2,     0,
       2,     0,     4,     3,     0,     0,     0,     0,     0,    12,
       6,     6,    10,     2,     2,     2,     2,     1,     1,     1,
       2,     1,     1,     3,     3,     1,     1,     2,     0,     4,
       1,     1,     3,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
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
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

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
      int yyn = yypact[*yyssp];
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
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
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
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
          yyp++;
          yyformat++;
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

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
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
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
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
#line 55 "y1.y" /* yacc.c:1646  */
    {printf("n");}
#line 1434 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 56 "y1.y" /* yacc.c:1646  */
    {printf("LL");}
#line 1440 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 56 "y1.y" /* yacc.c:1646  */
    {printf("LL");}
#line 1446 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 58 "y1.y" /* yacc.c:1646  */
    {printf("q");}
#line 1452 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 60 "y1.y" /* yacc.c:1646  */
    {yyerror();}
#line 1458 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 63 "y1.y" /* yacc.c:1646  */
    {printf("0");}
#line 1464 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 63 "y1.y" /* yacc.c:1646  */
    {printf("0");}
#line 1470 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 63 "y1.y" /* yacc.c:1646  */
    {printf("0");}
#line 1476 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 63 "y1.y" /* yacc.c:1646  */
    {printf("0");}
#line 1482 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 64 "y1.y" /* yacc.c:1646  */
    {printf("0");}
#line 1488 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 66 "y1.y" /* yacc.c:1646  */
    {printf(" BLOCO0 ");}
#line 1494 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 66 "y1.y" /* yacc.c:1646  */
    {printf(" BLOCO1 ");}
#line 1500 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 66 "y1.y" /* yacc.c:1646  */
    {printf(" BLOCO2 ");}
#line 1506 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 66 "y1.y" /* yacc.c:1646  */
    {printf(" BLOCO3 ");}
#line 1512 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 69 "y1.y" /* yacc.c:1646  */
    {printf("1");}
#line 1518 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 120 "y1.y" /* yacc.c:1646  */
    {printf(" LISTA_COMANDOS1_1 ");}
#line 1524 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 120 "y1.y" /* yacc.c:1646  */
    {printf(" LISTA_COMANDOS1_2 ");}
#line 1530 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 121 "y1.y" /* yacc.c:1646  */
    {printf(" LISTA_COMANDOS2_0 ");}
#line 1536 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 121 "y1.y" /* yacc.c:1646  */
    {printf(" LISTA_COMANDOS2_1 ");}
#line 1542 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 121 "y1.y" /* yacc.c:1646  */
    {printf(" LISTA_COMANDOS2_2 ");}
#line 1548 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 121 "y1.y" /* yacc.c:1646  */
    {printf(" LISTA_COMANDOS2_3 ");}
#line 1554 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 132 "y1.y" /* yacc.c:1646  */
    {printf(" COMANDO_A ");}
#line 1560 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 133 "y1.y" /* yacc.c:1646  */
    {printf(" COMANDO_WH ");}
#line 1566 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 134 "y1.y" /* yacc.c:1646  */
    {printf(" COMANDO_R ");}
#line 1572 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 135 "y1.y" /* yacc.c:1646  */
    {printf(" COMANDO_IF ");}
#line 1578 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 136 "y1.y" /* yacc.c:1646  */
    {printf(" COMANDO_REA ");}
#line 1584 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 137 "y1.y" /* yacc.c:1646  */
    {printf(" COMANDO_WR ");}
#line 1590 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 138 "y1.y" /* yacc.c:1646  */
    {printf(" COMANDO_RET ");}
#line 1596 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 139 "y1.y" /* yacc.c:1646  */
    {printf(" COMANDO_EX ");}
#line 1602 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 140 "y1.y" /* yacc.c:1646  */
    {printf(" COMANDO_PR ");}
#line 1608 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 141 "y1.y" /* yacc.c:1646  */
    {printf(" COMANDO_ROT ");}
#line 1614 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 145 "y1.y" /* yacc.c:1646  */
    {printf("A0");}
#line 1620 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 145 "y1.y" /* yacc.c:1646  */
    {printf("A1");}
#line 1626 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 145 "y1.y" /* yacc.c:1646  */
    {printf("A2");}
#line 1632 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 145 "y1.y" /* yacc.c:1646  */
    {printf("A3");}
#line 1638 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 145 "y1.y" /* yacc.c:1646  */
    {printf("A4");}
#line 1644 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 145 "y1.y" /* yacc.c:1646  */
    {printf("A5");}
#line 1650 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 176 "y1.y" /* yacc.c:1646  */
    {printf("EXPR");}
#line 1656 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 178 "y1.y" /* yacc.c:1646  */
    {printf("EXPR-O1");}
#line 1662 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 178 "y1.y" /* yacc.c:1646  */
    {printf("EXPR-O2");}
#line 1668 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 179 "y1.y" /* yacc.c:1646  */
    {printf("EXPR-C");}
#line 1674 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 180 "y1.y" /* yacc.c:1646  */
    {printf("EXPR-V");}
#line 1680 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1684 "y.tab.c" /* yacc.c:1646  */
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

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

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
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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
  return yyresult;
}
#line 197 "y1.y" /* yacc.c:1906  */

int lineno = 0;
main(){
yyparse();
}
yyerror(s)
char *s;
{
printf("calc: %s", s);
printf("line %d\n", lineno);
}
