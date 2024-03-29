/* A Bison parser, made by GNU Bison 2.6.1.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.6.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         _mesa_glsl_parse
#define yylex           _mesa_glsl_lex
#define yyerror         _mesa_glsl_error
#define yylval          _mesa_glsl_lval
#define yychar          _mesa_glsl_char
#define yydebug         _mesa_glsl_debug
#define yynerrs         _mesa_glsl_nerrs
#define yylloc          _mesa_glsl_lloc

/* Copy the first part of user declarations.  */
/* Line 336 of yacc.c  */
#line 1 "glsl_parser.yy"

/*
 * Copyright © 2008, 2009 Intel Corporation
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice (including the next
 * paragraph) shall be included in all copies or substantial portions of the
 * Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
    
#include "ast.h"
#include "glsl_parser_extras.h"
#include "glsl_types.h"
#include "main/context.h"

#define YYLEX_PARAM state->scanner

#undef yyerror

static void yyerror(YYLTYPE *loc, _mesa_glsl_parse_state *st, const char *msg)
{
   _mesa_glsl_error(loc, st, "%s", msg);
}

/* Line 336 of yacc.c  */
#line 119 "glsl_parser.cpp"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "glsl_parser.h".  */
#ifndef _MESA_GLSL_SRC_GLSL_GLSL_PARSER_H
# define _MESA_GLSL_SRC_GLSL_GLSL_PARSER_H
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int _mesa_glsl_debug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     ATTRIBUTE = 258,
     CONST_TOK = 259,
     BOOL_TOK = 260,
     FLOAT_TOK = 261,
     INT_TOK = 262,
     UINT_TOK = 263,
     BREAK = 264,
     CONTINUE = 265,
     DO = 266,
     ELSE = 267,
     FOR = 268,
     IF = 269,
     DISCARD = 270,
     RETURN = 271,
     SWITCH = 272,
     CASE = 273,
     DEFAULT = 274,
     BVEC2 = 275,
     BVEC3 = 276,
     BVEC4 = 277,
     IVEC2 = 278,
     IVEC3 = 279,
     IVEC4 = 280,
     UVEC2 = 281,
     UVEC3 = 282,
     UVEC4 = 283,
     VEC2 = 284,
     VEC3 = 285,
     VEC4 = 286,
     CENTROID = 287,
     IN_TOK = 288,
     OUT_TOK = 289,
     INOUT_TOK = 290,
     UNIFORM = 291,
     VARYING = 292,
     NOPERSPECTIVE = 293,
     FLAT = 294,
     SMOOTH = 295,
     MAT2X2 = 296,
     MAT2X3 = 297,
     MAT2X4 = 298,
     MAT3X2 = 299,
     MAT3X3 = 300,
     MAT3X4 = 301,
     MAT4X2 = 302,
     MAT4X3 = 303,
     MAT4X4 = 304,
     SAMPLER1D = 305,
     SAMPLER2D = 306,
     SAMPLER3D = 307,
     SAMPLERCUBE = 308,
     SAMPLER1DSHADOW = 309,
     SAMPLER2DSHADOW = 310,
     SAMPLERCUBESHADOW = 311,
     SAMPLER1DARRAY = 312,
     SAMPLER2DARRAY = 313,
     SAMPLER1DARRAYSHADOW = 314,
     SAMPLER2DARRAYSHADOW = 315,
     SAMPLERCUBEARRAY = 316,
     SAMPLERCUBEARRAYSHADOW = 317,
     ISAMPLER1D = 318,
     ISAMPLER2D = 319,
     ISAMPLER3D = 320,
     ISAMPLERCUBE = 321,
     ISAMPLER1DARRAY = 322,
     ISAMPLER2DARRAY = 323,
     ISAMPLERCUBEARRAY = 324,
     USAMPLER1D = 325,
     USAMPLER2D = 326,
     USAMPLER3D = 327,
     USAMPLERCUBE = 328,
     USAMPLER1DARRAY = 329,
     USAMPLER2DARRAY = 330,
     USAMPLERCUBEARRAY = 331,
     SAMPLER2DRECT = 332,
     ISAMPLER2DRECT = 333,
     USAMPLER2DRECT = 334,
     SAMPLER2DRECTSHADOW = 335,
     SAMPLERBUFFER = 336,
     ISAMPLERBUFFER = 337,
     USAMPLERBUFFER = 338,
     SAMPLEREXTERNALOES = 339,
     STRUCT = 340,
     VOID_TOK = 341,
     WHILE = 342,
     IDENTIFIER = 343,
     TYPE_IDENTIFIER = 344,
     NEW_IDENTIFIER = 345,
     FLOATCONSTANT = 346,
     INTCONSTANT = 347,
     UINTCONSTANT = 348,
     BOOLCONSTANT = 349,
     FIELD_SELECTION = 350,
     LEFT_OP = 351,
     RIGHT_OP = 352,
     INC_OP = 353,
     DEC_OP = 354,
     LE_OP = 355,
     GE_OP = 356,
     EQ_OP = 357,
     NE_OP = 358,
     AND_OP = 359,
     OR_OP = 360,
     XOR_OP = 361,
     MUL_ASSIGN = 362,
     DIV_ASSIGN = 363,
     ADD_ASSIGN = 364,
     MOD_ASSIGN = 365,
     LEFT_ASSIGN = 366,
     RIGHT_ASSIGN = 367,
     AND_ASSIGN = 368,
     XOR_ASSIGN = 369,
     OR_ASSIGN = 370,
     SUB_ASSIGN = 371,
     INVARIANT = 372,
     LOWP = 373,
     MEDIUMP = 374,
     HIGHP = 375,
     SUPERP = 376,
     PRECISION = 377,
     VERSION_TOK = 378,
     EXTENSION = 379,
     LINE = 380,
     COLON = 381,
     EOL = 382,
     INTERFACE = 383,
     OUTPUT = 384,
     PRAGMA_DEBUG_ON = 385,
     PRAGMA_DEBUG_OFF = 386,
     PRAGMA_OPTIMIZE_ON = 387,
     PRAGMA_OPTIMIZE_OFF = 388,
     PRAGMA_INVARIANT_ALL = 389,
     LAYOUT_TOK = 390,
     ASM = 391,
     CLASS = 392,
     UNION = 393,
     ENUM = 394,
     TYPEDEF = 395,
     TEMPLATE = 396,
     THIS = 397,
     PACKED_TOK = 398,
     GOTO = 399,
     INLINE_TOK = 400,
     NOINLINE = 401,
     VOLATILE = 402,
     PUBLIC_TOK = 403,
     STATIC = 404,
     EXTERN = 405,
     EXTERNAL = 406,
     LONG_TOK = 407,
     SHORT_TOK = 408,
     DOUBLE_TOK = 409,
     HALF = 410,
     FIXED_TOK = 411,
     UNSIGNED = 412,
     INPUT_TOK = 413,
     OUPTUT = 414,
     HVEC2 = 415,
     HVEC3 = 416,
     HVEC4 = 417,
     DVEC2 = 418,
     DVEC3 = 419,
     DVEC4 = 420,
     FVEC2 = 421,
     FVEC3 = 422,
     FVEC4 = 423,
     SAMPLER3DRECT = 424,
     SIZEOF = 425,
     CAST = 426,
     NAMESPACE = 427,
     USING = 428,
     COHERENT = 429,
     RESTRICT = 430,
     READONLY = 431,
     WRITEONLY = 432,
     RESOURCE = 433,
     ATOMIC_UINT = 434,
     PATCH = 435,
     SAMPLE = 436,
     SUBROUTINE = 437,
     SAMPLER2DMS = 438,
     ISAMPLER2DMS = 439,
     USAMPLER2DMS = 440,
     SAMPLER2DMSARRAY = 441,
     ISAMPLER2DMSARRAY = 442,
     USAMPLER2DMSARRAY = 443,
     ERROR_TOK = 444,
     COMMON = 445,
     PARTITION = 446,
     ACTIVE = 447,
     FILTER = 448,
     IMAGE1D = 449,
     IMAGE2D = 450,
     IMAGE3D = 451,
     IMAGECUBE = 452,
     IMAGE1DARRAY = 453,
     IMAGE2DARRAY = 454,
     IIMAGE1D = 455,
     IIMAGE2D = 456,
     IIMAGE3D = 457,
     IIMAGECUBE = 458,
     IIMAGE1DARRAY = 459,
     IIMAGE2DARRAY = 460,
     UIMAGE1D = 461,
     UIMAGE2D = 462,
     UIMAGE3D = 463,
     UIMAGECUBE = 464,
     UIMAGE1DARRAY = 465,
     UIMAGE2DARRAY = 466,
     IMAGE1DSHADOW = 467,
     IMAGE2DSHADOW = 468,
     IMAGEBUFFER = 469,
     IIMAGEBUFFER = 470,
     UIMAGEBUFFER = 471,
     IMAGE1DARRAYSHADOW = 472,
     IMAGE2DARRAYSHADOW = 473,
     ROW_MAJOR = 474
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 350 of yacc.c  */
#line 59 "glsl_parser.yy"

   int n;
   float real;
   const char *identifier;

   struct ast_type_qualifier type_qualifier;

   ast_node *node;
   ast_type_specifier *type_specifier;
   ast_fully_specified_type *fully_specified_type;
   ast_function *function;
   ast_parameter_declarator *parameter_declarator;
   ast_function_definition *function_definition;
   ast_compound_statement *compound_statement;
   ast_expression *expression;
   ast_declarator_list *declarator_list;
   ast_struct_specifier *struct_specifier;
   ast_declaration *declaration;
   ast_switch_body *switch_body;
   ast_case_label *case_label;
   ast_case_label_list *case_label_list;
   ast_case_statement *case_statement;
   ast_case_statement_list *case_statement_list;
   ast_uniform_block *uniform_block;

   struct {
      ast_node *cond;
      ast_expression *rest;
   } for_rest_statement;

   struct {
      ast_node *then_statement;
      ast_node *else_statement;
   } selection_rest_statement;


/* Line 350 of yacc.c  */
#line 418 "glsl_parser.cpp"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} YYLTYPE;
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int _mesa_glsl_parse (void *YYPARSE_PARAM);
#else
int _mesa_glsl_parse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int _mesa_glsl_parse (struct _mesa_glsl_parse_state *state);
#else
int _mesa_glsl_parse ();
#endif
#endif /* ! YYPARSE_PARAM */

#endif /* !_MESA_GLSL_SRC_GLSL_GLSL_PARSER_H  */

/* Copy the second part of user declarations.  */

/* Line 353 of yacc.c  */
#line 458 "glsl_parser.cpp"

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
# if defined YYENABLE_NLS && YYENABLE_NLS
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
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
	     && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

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
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2922

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  244
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  106
/* YYNRULES -- Number of rules.  */
#define YYNRULES  330
/* YYNRULES -- Number of states.  */
#define YYNSTATES  493

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   474

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   228,     2,     2,     2,   232,   235,     2,
     220,   221,   230,   226,   225,   227,   224,   231,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   239,   241,
     233,   240,   234,   238,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   222,     2,   223,   236,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   242,   237,   243,   229,     2,     2,     2,
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
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     9,    10,    14,    19,    22,    25,
      28,    31,    34,    35,    38,    40,    42,    44,    50,    52,
      55,    57,    59,    61,    63,    65,    67,    69,    73,    75,
      80,    82,    86,    89,    92,    94,    96,    98,   102,   105,
     108,   111,   113,   116,   120,   123,   125,   127,   129,   132,
     135,   138,   140,   143,   147,   150,   152,   155,   158,   161,
     163,   165,   167,   169,   171,   175,   179,   183,   185,   189,
     193,   195,   199,   203,   205,   209,   213,   217,   221,   223,
     227,   231,   233,   237,   239,   243,   245,   249,   251,   255,
     257,   261,   263,   267,   269,   275,   277,   281,   283,   285,
     287,   289,   291,   293,   295,   297,   299,   301,   303,   305,
     309,   311,   314,   317,   322,   324,   327,   329,   331,   334,
     338,   342,   345,   351,   355,   358,   362,   365,   366,   368,
     370,   372,   374,   376,   380,   386,   393,   401,   410,   416,
     418,   421,   426,   432,   439,   447,   452,   455,   457,   460,
     465,   467,   471,   473,   475,   477,   481,   483,   485,   487,
     489,   491,   493,   495,   497,   499,   502,   504,   507,   510,
     514,   516,   518,   520,   522,   525,   527,   529,   532,   535,
     537,   539,   542,   544,   548,   553,   555,   557,   559,   561,
     563,   565,   567,   569,   571,   573,   575,   577,   579,   581,
     583,   585,   587,   589,   591,   593,   595,   597,   599,   601,
     603,   605,   607,   609,   611,   613,   615,   617,   619,   621,
     623,   625,   627,   629,   631,   633,   635,   637,   639,   641,
     643,   645,   647,   649,   651,   653,   655,   657,   659,   661,
     663,   665,   667,   669,   671,   673,   675,   677,   679,   681,
     683,   685,   687,   693,   698,   700,   703,   707,   709,   713,
     715,   720,   722,   724,   726,   728,   730,   732,   734,   736,
     738,   740,   743,   744,   749,   751,   753,   756,   760,   762,
     765,   767,   770,   776,   780,   782,   784,   789,   795,   798,
     802,   806,   809,   811,   814,   817,   820,   822,   825,   831,
     839,   846,   848,   850,   852,   853,   856,   860,   863,   866,
     869,   873,   876,   878,   880,   882,   884,   887,   889,   892,
     900,   901,   903,   908,   912,   914,   917,   918,   920,   926,
     931
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     245,     0,    -1,    -1,   247,   249,   246,   252,    -1,    -1,
     123,    92,   127,    -1,   123,    92,   250,   127,    -1,   130,
     127,    -1,   131,   127,    -1,   132,   127,    -1,   133,   127,
      -1,   134,   127,    -1,    -1,   249,   251,    -1,    88,    -1,
      89,    -1,    90,    -1,   124,   250,   126,   250,   127,    -1,
     341,    -1,   252,   341,    -1,    88,    -1,    90,    -1,   253,
      -1,    92,    -1,    93,    -1,    91,    -1,    94,    -1,   220,
     284,   221,    -1,   254,    -1,   255,   222,   256,   223,    -1,
     257,    -1,   255,   224,   250,    -1,   255,    98,    -1,   255,
      99,    -1,   284,    -1,   258,    -1,   259,    -1,   255,   224,
     264,    -1,   261,   221,    -1,   260,   221,    -1,   262,    86,
      -1,   262,    -1,   262,   282,    -1,   261,   225,   282,    -1,
     263,   220,    -1,   307,    -1,   253,    -1,    95,    -1,   266,
     221,    -1,   265,   221,    -1,   267,    86,    -1,   267,    -1,
     267,   282,    -1,   266,   225,   282,    -1,   253,   220,    -1,
     255,    -1,    98,   268,    -1,    99,   268,    -1,   269,   268,
      -1,   226,    -1,   227,    -1,   228,    -1,   229,    -1,   268,
      -1,   270,   230,   268,    -1,   270,   231,   268,    -1,   270,
     232,   268,    -1,   270,    -1,   271,   226,   270,    -1,   271,
     227,   270,    -1,   271,    -1,   272,    96,   271,    -1,   272,
      97,   271,    -1,   272,    -1,   273,   233,   272,    -1,   273,
     234,   272,    -1,   273,   100,   272,    -1,   273,   101,   272,
      -1,   273,    -1,   274,   102,   273,    -1,   274,   103,   273,
      -1,   274,    -1,   275,   235,   274,    -1,   275,    -1,   276,
     236,   275,    -1,   276,    -1,   277,   237,   276,    -1,   277,
      -1,   278,   104,   277,    -1,   278,    -1,   279,   106,   278,
      -1,   279,    -1,   280,   105,   279,    -1,   280,    -1,   280,
     238,   284,   239,   282,    -1,   281,    -1,   268,   283,   282,
      -1,   240,    -1,   107,    -1,   108,    -1,   110,    -1,   109,
      -1,   116,    -1,   111,    -1,   112,    -1,   113,    -1,   114,
      -1,   115,    -1,   282,    -1,   284,   225,   282,    -1,   281,
      -1,   287,   241,    -1,   295,   241,    -1,   122,   311,   308,
     241,    -1,   343,    -1,   288,   221,    -1,   290,    -1,   289,
      -1,   290,   292,    -1,   289,   225,   292,    -1,   297,   253,
     220,    -1,   307,   250,    -1,   307,   250,   222,   285,   223,
      -1,   304,   293,   291,    -1,   293,   291,    -1,   304,   293,
     294,    -1,   293,   294,    -1,    -1,    33,    -1,    34,    -1,
      35,    -1,   307,    -1,   296,    -1,   295,   225,   250,    -1,
     295,   225,   250,   222,   223,    -1,   295,   225,   250,   222,
     285,   223,    -1,   295,   225,   250,   222,   223,   240,   317,
      -1,   295,   225,   250,   222,   285,   223,   240,   317,    -1,
     295,   225,   250,   240,   317,    -1,   297,    -1,   297,   250,
      -1,   297,   250,   222,   223,    -1,   297,   250,   222,   285,
     223,    -1,   297,   250,   222,   223,   240,   317,    -1,   297,
     250,   222,   285,   223,   240,   317,    -1,   297,   250,   240,
     317,    -1,   117,   253,    -1,   307,    -1,   305,   307,    -1,
     135,   220,   299,   221,    -1,   301,    -1,   299,   225,   301,
      -1,    92,    -1,    93,    -1,   250,    -1,   250,   240,   300,
      -1,   302,    -1,   219,    -1,   143,    -1,    40,    -1,    39,
      -1,    38,    -1,     4,    -1,   306,    -1,   298,    -1,   298,
     306,    -1,   303,    -1,   303,   306,    -1,   117,   306,    -1,
     117,   303,   306,    -1,   117,    -1,     4,    -1,     3,    -1,
      37,    -1,    32,    37,    -1,    33,    -1,    34,    -1,    32,
      33,    -1,    32,    34,    -1,    36,    -1,   308,    -1,   311,
     308,    -1,   309,    -1,   309,   222,   223,    -1,   309,   222,
     285,   223,    -1,   310,    -1,   312,    -1,    89,    -1,    86,
      -1,     6,    -1,     7,    -1,     8,    -1,     5,    -1,    29,
      -1,    30,    -1,    31,    -1,    20,    -1,    21,    -1,    22,
      -1,    23,    -1,    24,    -1,    25,    -1,    26,    -1,    27,
      -1,    28,    -1,    41,    -1,    42,    -1,    43,    -1,    44,
      -1,    45,    -1,    46,    -1,    47,    -1,    48,    -1,    49,
      -1,    50,    -1,    51,    -1,    77,    -1,    52,    -1,    53,
      -1,    84,    -1,    54,    -1,    55,    -1,    80,    -1,    56,
      -1,    57,    -1,    58,    -1,    59,    -1,    60,    -1,    81,
      -1,    61,    -1,    62,    -1,    63,    -1,    64,    -1,    78,
      -1,    65,    -1,    66,    -1,    67,    -1,    68,    -1,    82,
      -1,    69,    -1,    70,    -1,    71,    -1,    79,    -1,    72,
      -1,    73,    -1,    74,    -1,    75,    -1,    83,    -1,    76,
      -1,   120,    -1,   119,    -1,   118,    -1,    85,   250,   242,
     313,   243,    -1,    85,   242,   313,   243,    -1,   314,    -1,
     313,   314,    -1,   307,   315,   241,    -1,   316,    -1,   315,
     225,   316,    -1,   250,    -1,   250,   222,   285,   223,    -1,
     282,    -1,   286,    -1,   321,    -1,   320,    -1,   318,    -1,
     326,    -1,   327,    -1,   330,    -1,   336,    -1,   340,    -1,
     242,   243,    -1,    -1,   242,   322,   325,   243,    -1,   324,
      -1,   320,    -1,   242,   243,    -1,   242,   325,   243,    -1,
     319,    -1,   325,   319,    -1,   241,    -1,   284,   241,    -1,
      14,   220,   284,   221,   328,    -1,   319,    12,   319,    -1,
     319,    -1,   284,    -1,   297,   250,   240,   317,    -1,    17,
     220,   284,   221,   331,    -1,   242,   243,    -1,   242,   335,
     243,    -1,    18,   284,   239,    -1,    19,   239,    -1,   332,
      -1,   333,   332,    -1,   333,   319,    -1,   334,   319,    -1,
     334,    -1,   335,   334,    -1,    87,   220,   329,   221,   323,
      -1,    11,   319,    87,   220,   284,   221,   241,    -1,    13,
     220,   337,   339,   221,   323,    -1,   326,    -1,   318,    -1,
     329,    -1,    -1,   338,   241,    -1,   338,   241,   284,    -1,
      10,   241,    -1,     9,   241,    -1,    16,   241,    -1,    16,
     284,   241,    -1,    15,   241,    -1,   342,    -1,   286,    -1,
     248,    -1,   349,    -1,   287,   324,    -1,   344,    -1,   298,
     344,    -1,    36,    90,   242,   346,   243,   345,   241,    -1,
      -1,    90,    -1,    90,   222,   285,   223,    -1,    90,   222,
     223,    -1,   348,    -1,   348,   346,    -1,    -1,    36,    -1,
     298,   347,   307,   315,   241,    -1,   347,   307,   315,   241,
      -1,   298,    36,   241,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   252,   252,   251,   263,   265,   269,   276,   277,   278,
     279,   280,   293,   295,   299,   300,   301,   305,   314,   322,
     333,   334,   338,   345,   352,   359,   366,   373,   380,   381,
     387,   391,   398,   404,   413,   417,   421,   422,   431,   432,
     436,   437,   441,   447,   459,   463,   469,   476,   486,   487,
     491,   492,   496,   502,   514,   525,   526,   532,   538,   548,
     549,   550,   551,   555,   556,   562,   568,   577,   578,   584,
     593,   594,   600,   609,   610,   616,   622,   628,   637,   638,
     644,   653,   654,   663,   664,   673,   674,   683,   684,   693,
     694,   703,   704,   713,   714,   723,   724,   733,   734,   735,
     736,   737,   738,   739,   740,   741,   742,   743,   747,   751,
     767,   771,   776,   780,   786,   793,   797,   798,   802,   807,
     815,   829,   839,   854,   861,   866,   877,   890,   893,   898,
     903,   912,   916,   917,   927,   937,   947,   957,   967,   981,
     988,   997,  1006,  1015,  1024,  1033,  1042,  1056,  1063,  1074,
    1081,  1082,  1092,  1093,  1097,  1167,  1213,  1235,  1240,  1248,
    1253,  1258,  1266,  1274,  1275,  1276,  1281,  1282,  1287,  1292,
    1298,  1306,  1311,  1316,  1321,  1327,  1332,  1337,  1342,  1347,
    1355,  1359,  1367,  1368,  1374,  1383,  1389,  1395,  1404,  1405,
    1406,  1407,  1408,  1409,  1410,  1411,  1412,  1413,  1414,  1415,
    1416,  1417,  1418,  1419,  1420,  1421,  1422,  1423,  1424,  1425,
    1426,  1427,  1428,  1429,  1430,  1431,  1432,  1433,  1434,  1435,
    1436,  1437,  1438,  1439,  1440,  1441,  1442,  1443,  1444,  1445,
    1446,  1447,  1448,  1449,  1450,  1451,  1452,  1453,  1454,  1455,
    1456,  1457,  1458,  1459,  1460,  1461,  1462,  1463,  1464,  1468,
    1473,  1478,  1486,  1493,  1502,  1507,  1515,  1530,  1535,  1543,
    1549,  1558,  1562,  1568,  1569,  1573,  1574,  1575,  1576,  1577,
    1578,  1582,  1589,  1588,  1602,  1603,  1607,  1613,  1622,  1632,
    1644,  1650,  1659,  1668,  1673,  1681,  1685,  1703,  1711,  1716,
    1724,  1729,  1737,  1745,  1753,  1761,  1769,  1777,  1785,  1792,
    1799,  1809,  1810,  1814,  1816,  1822,  1827,  1836,  1842,  1848,
    1854,  1860,  1869,  1870,  1871,  1872,  1876,  1890,  1894,  1905,
    1939,  1944,  1950,  1956,  1968,  1973,  1981,  1983,  1987,  2002,
    2019
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ATTRIBUTE", "CONST_TOK", "BOOL_TOK",
  "FLOAT_TOK", "INT_TOK", "UINT_TOK", "BREAK", "CONTINUE", "DO", "ELSE",
  "FOR", "IF", "DISCARD", "RETURN", "SWITCH", "CASE", "DEFAULT", "BVEC2",
  "BVEC3", "BVEC4", "IVEC2", "IVEC3", "IVEC4", "UVEC2", "UVEC3", "UVEC4",
  "VEC2", "VEC3", "VEC4", "CENTROID", "IN_TOK", "OUT_TOK", "INOUT_TOK",
  "UNIFORM", "VARYING", "NOPERSPECTIVE", "FLAT", "SMOOTH", "MAT2X2",
  "MAT2X3", "MAT2X4", "MAT3X2", "MAT3X3", "MAT3X4", "MAT4X2", "MAT4X3",
  "MAT4X4", "SAMPLER1D", "SAMPLER2D", "SAMPLER3D", "SAMPLERCUBE",
  "SAMPLER1DSHADOW", "SAMPLER2DSHADOW", "SAMPLERCUBESHADOW",
  "SAMPLER1DARRAY", "SAMPLER2DARRAY", "SAMPLER1DARRAYSHADOW",
  "SAMPLER2DARRAYSHADOW", "SAMPLERCUBEARRAY", "SAMPLERCUBEARRAYSHADOW",
  "ISAMPLER1D", "ISAMPLER2D", "ISAMPLER3D", "ISAMPLERCUBE",
  "ISAMPLER1DARRAY", "ISAMPLER2DARRAY", "ISAMPLERCUBEARRAY", "USAMPLER1D",
  "USAMPLER2D", "USAMPLER3D", "USAMPLERCUBE", "USAMPLER1DARRAY",
  "USAMPLER2DARRAY", "USAMPLERCUBEARRAY", "SAMPLER2DRECT",
  "ISAMPLER2DRECT", "USAMPLER2DRECT", "SAMPLER2DRECTSHADOW",
  "SAMPLERBUFFER", "ISAMPLERBUFFER", "USAMPLERBUFFER",
  "SAMPLEREXTERNALOES", "STRUCT", "VOID_TOK", "WHILE", "IDENTIFIER",
  "TYPE_IDENTIFIER", "NEW_IDENTIFIER", "FLOATCONSTANT", "INTCONSTANT",
  "UINTCONSTANT", "BOOLCONSTANT", "FIELD_SELECTION", "LEFT_OP", "RIGHT_OP",
  "INC_OP", "DEC_OP", "LE_OP", "GE_OP", "EQ_OP", "NE_OP", "AND_OP",
  "OR_OP", "XOR_OP", "MUL_ASSIGN", "DIV_ASSIGN", "ADD_ASSIGN",
  "MOD_ASSIGN", "LEFT_ASSIGN", "RIGHT_ASSIGN", "AND_ASSIGN", "XOR_ASSIGN",
  "OR_ASSIGN", "SUB_ASSIGN", "INVARIANT", "LOWP", "MEDIUMP", "HIGHP",
  "SUPERP", "PRECISION", "VERSION_TOK", "EXTENSION", "LINE", "COLON",
  "EOL", "INTERFACE", "OUTPUT", "PRAGMA_DEBUG_ON", "PRAGMA_DEBUG_OFF",
  "PRAGMA_OPTIMIZE_ON", "PRAGMA_OPTIMIZE_OFF", "PRAGMA_INVARIANT_ALL",
  "LAYOUT_TOK", "ASM", "CLASS", "UNION", "ENUM", "TYPEDEF", "TEMPLATE",
  "THIS", "PACKED_TOK", "GOTO", "INLINE_TOK", "NOINLINE", "VOLATILE",
  "PUBLIC_TOK", "STATIC", "EXTERN", "EXTERNAL", "LONG_TOK", "SHORT_TOK",
  "DOUBLE_TOK", "HALF", "FIXED_TOK", "UNSIGNED", "INPUT_TOK", "OUPTUT",
  "HVEC2", "HVEC3", "HVEC4", "DVEC2", "DVEC3", "DVEC4", "FVEC2", "FVEC3",
  "FVEC4", "SAMPLER3DRECT", "SIZEOF", "CAST", "NAMESPACE", "USING",
  "COHERENT", "RESTRICT", "READONLY", "WRITEONLY", "RESOURCE",
  "ATOMIC_UINT", "PATCH", "SAMPLE", "SUBROUTINE", "SAMPLER2DMS",
  "ISAMPLER2DMS", "USAMPLER2DMS", "SAMPLER2DMSARRAY", "ISAMPLER2DMSARRAY",
  "USAMPLER2DMSARRAY", "ERROR_TOK", "COMMON", "PARTITION", "ACTIVE",
  "FILTER", "IMAGE1D", "IMAGE2D", "IMAGE3D", "IMAGECUBE", "IMAGE1DARRAY",
  "IMAGE2DARRAY", "IIMAGE1D", "IIMAGE2D", "IIMAGE3D", "IIMAGECUBE",
  "IIMAGE1DARRAY", "IIMAGE2DARRAY", "UIMAGE1D", "UIMAGE2D", "UIMAGE3D",
  "UIMAGECUBE", "UIMAGE1DARRAY", "UIMAGE2DARRAY", "IMAGE1DSHADOW",
  "IMAGE2DSHADOW", "IMAGEBUFFER", "IIMAGEBUFFER", "UIMAGEBUFFER",
  "IMAGE1DARRAYSHADOW", "IMAGE2DARRAYSHADOW", "ROW_MAJOR", "'('", "')'",
  "'['", "']'", "'.'", "','", "'+'", "'-'", "'!'", "'~'", "'*'", "'/'",
  "'%'", "'<'", "'>'", "'&'", "'^'", "'|'", "'?'", "':'", "'='", "';'",
  "'{'", "'}'", "$accept", "translation_unit", "$@1", "version_statement",
  "pragma_statement", "extension_statement_list", "any_identifier",
  "extension_statement", "external_declaration_list",
  "variable_identifier", "primary_expression", "postfix_expression",
  "integer_expression", "function_call", "function_call_or_method",
  "function_call_generic", "function_call_header_no_parameters",
  "function_call_header_with_parameters", "function_call_header",
  "function_identifier", "method_call_generic",
  "method_call_header_no_parameters", "method_call_header_with_parameters",
  "method_call_header", "unary_expression", "unary_operator",
  "multiplicative_expression", "additive_expression", "shift_expression",
  "relational_expression", "equality_expression", "and_expression",
  "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_xor_expression",
  "logical_or_expression", "conditional_expression",
  "assignment_expression", "assignment_operator", "expression",
  "constant_expression", "declaration", "function_prototype",
  "function_declarator", "function_header_with_parameters",
  "function_header", "parameter_declarator", "parameter_declaration",
  "parameter_qualifier", "parameter_type_specifier",
  "init_declarator_list", "single_declaration", "fully_specified_type",
  "layout_qualifier", "layout_qualifier_id_list", "integer_constant",
  "layout_qualifier_id", "uniform_block_layout_qualifier",
  "interpolation_qualifier", "parameter_type_qualifier", "type_qualifier",
  "storage_qualifier", "type_specifier", "type_specifier_no_prec",
  "type_specifier_nonarray", "basic_type_specifier_nonarray",
  "precision_qualifier", "struct_specifier", "struct_declaration_list",
  "struct_declaration", "struct_declarator_list", "struct_declarator",
  "initializer", "declaration_statement", "statement", "simple_statement",
  "compound_statement", "$@2", "statement_no_new_scope",
  "compound_statement_no_new_scope", "statement_list",
  "expression_statement", "selection_statement",
  "selection_rest_statement", "condition", "switch_statement",
  "switch_body", "case_label", "case_label_list", "case_statement",
  "case_statement_list", "iteration_statement", "for_init_statement",
  "conditionopt", "for_rest_statement", "jump_statement",
  "external_declaration", "function_definition", "uniform_block",
  "basic_uniform_block", "instance_name_opt", "member_list", "uniformopt",
  "member_declaration", "layout_defaults", YY_NULL
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   474,
      40,    41,    91,    93,    46,    44,    43,    45,    33,   126,
      42,    47,    37,    60,    62,    38,    94,   124,    63,    58,
      61,    59,   123,   125
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   244,   246,   245,   247,   247,   247,   248,   248,   248,
     248,   248,   249,   249,   250,   250,   250,   251,   252,   252,
     253,   253,   254,   254,   254,   254,   254,   254,   255,   255,
     255,   255,   255,   255,   256,   257,   258,   258,   259,   259,
     260,   260,   261,   261,   262,   263,   263,   263,   264,   264,
     265,   265,   266,   266,   267,   268,   268,   268,   268,   269,
     269,   269,   269,   270,   270,   270,   270,   271,   271,   271,
     272,   272,   272,   273,   273,   273,   273,   273,   274,   274,
     274,   275,   275,   276,   276,   277,   277,   278,   278,   279,
     279,   280,   280,   281,   281,   282,   282,   283,   283,   283,
     283,   283,   283,   283,   283,   283,   283,   283,   284,   284,
     285,   286,   286,   286,   286,   287,   288,   288,   289,   289,
     290,   291,   291,   292,   292,   292,   292,   293,   293,   293,
     293,   294,   295,   295,   295,   295,   295,   295,   295,   296,
     296,   296,   296,   296,   296,   296,   296,   297,   297,   298,
     299,   299,   300,   300,   301,   301,   301,   302,   302,   303,
     303,   303,   304,   305,   305,   305,   305,   305,   305,   305,
     305,   306,   306,   306,   306,   306,   306,   306,   306,   306,
     307,   307,   308,   308,   308,   309,   309,   309,   310,   310,
     310,   310,   310,   310,   310,   310,   310,   310,   310,   310,
     310,   310,   310,   310,   310,   310,   310,   310,   310,   310,
     310,   310,   310,   310,   310,   310,   310,   310,   310,   310,
     310,   310,   310,   310,   310,   310,   310,   310,   310,   310,
     310,   310,   310,   310,   310,   310,   310,   310,   310,   310,
     310,   310,   310,   310,   310,   310,   310,   310,   310,   311,
     311,   311,   312,   312,   313,   313,   314,   315,   315,   316,
     316,   317,   318,   319,   319,   320,   320,   320,   320,   320,
     320,   321,   322,   321,   323,   323,   324,   324,   325,   325,
     326,   326,   327,   328,   328,   329,   329,   330,   331,   331,
     332,   332,   333,   333,   334,   334,   335,   335,   336,   336,
     336,   337,   337,   338,   338,   339,   339,   340,   340,   340,
     340,   340,   341,   341,   341,   341,   342,   343,   343,   344,
     345,   345,   345,   345,   346,   346,   347,   347,   348,   348,
     349
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     4,     0,     3,     4,     2,     2,     2,
       2,     2,     0,     2,     1,     1,     1,     5,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     3,     1,     4,
       1,     3,     2,     2,     1,     1,     1,     3,     2,     2,
       2,     1,     2,     3,     2,     1,     1,     1,     2,     2,
       2,     1,     2,     3,     2,     1,     2,     2,     2,     1,
       1,     1,     1,     1,     3,     3,     3,     1,     3,     3,
       1,     3,     3,     1,     3,     3,     3,     3,     1,     3,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     5,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     2,     2,     4,     1,     2,     1,     1,     2,     3,
       3,     2,     5,     3,     2,     3,     2,     0,     1,     1,
       1,     1,     1,     3,     5,     6,     7,     8,     5,     1,
       2,     4,     5,     6,     7,     4,     2,     1,     2,     4,
       1,     3,     1,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     2,     2,     3,
       1,     1,     1,     1,     2,     1,     1,     2,     2,     1,
       1,     2,     1,     3,     4,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     5,     4,     1,     2,     3,     1,     3,     1,
       4,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     0,     4,     1,     1,     2,     3,     1,     2,
       1,     2,     5,     3,     1,     1,     4,     5,     2,     3,
       3,     2,     1,     2,     2,     2,     1,     2,     5,     7,
       6,     1,     1,     1,     0,     2,     3,     2,     2,     2,
       3,     2,     1,     1,     1,     1,     2,     1,     2,     7,
       0,     1,     4,     3,     1,     2,     0,     1,     5,     4,
       3
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       4,     0,     0,    12,     0,     1,     2,    14,    15,    16,
       5,     0,     0,     0,    13,     6,     0,   172,   171,   192,
     189,   190,   191,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   193,   194,   195,     0,   175,   176,   179,   173,
     161,   160,   159,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   217,   218,   220,   221,   223,   224,
     225,   226,   227,   229,   230,   231,   232,   234,   235,   236,
     237,   239,   240,   241,   243,   244,   245,   246,   248,   216,
     233,   242,   222,   228,   238,   247,   219,     0,   188,   187,
     170,   251,   250,   249,     0,     0,     0,     0,     0,     0,
       0,   314,     3,   313,     0,     0,   117,   127,     0,   132,
     139,   164,   166,     0,   163,   147,   180,   182,   185,     0,
     186,    18,   312,   114,   317,   315,     0,   177,   178,   174,
       0,     0,     0,   179,    20,    21,   146,     0,   168,     0,
       7,     8,     9,    10,    11,     0,    19,   111,     0,   316,
     115,   127,   162,   128,   129,   130,   118,     0,   127,     0,
     112,    14,    16,   140,     0,   179,   165,   318,   167,   148,
       0,   181,     0,   326,     0,     0,   254,     0,   169,     0,
     158,   157,   154,     0,   150,   156,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    25,    23,    24,    26,    47,
       0,     0,     0,    59,    60,    61,    62,   280,   272,   276,
      22,    28,    55,    30,    35,    36,     0,     0,    41,     0,
      63,     0,    67,    70,    73,    78,    81,    83,    85,    87,
      89,    91,    93,    95,   108,     0,   262,     0,   164,   147,
     265,   278,   264,   263,     0,   266,   267,   268,   269,   270,
     119,   124,   126,   131,     0,   133,     0,     0,   120,   330,
     183,    63,   110,     0,    45,    17,   327,   326,     0,     0,
     326,   259,     0,   257,   253,   255,     0,   113,     0,   149,
       0,   308,   307,     0,     0,     0,   311,   309,     0,     0,
       0,    56,    57,     0,   271,     0,    32,    33,     0,     0,
      39,    38,     0,   188,    42,    44,    98,    99,   101,   100,
     103,   104,   105,   106,   107,   102,    97,     0,    58,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     281,   277,   279,   121,   123,   125,     0,     0,   141,     0,
     261,   145,   184,     0,   320,     0,   325,     0,     0,   256,
     252,   152,   153,   155,   151,     0,   302,   301,   304,     0,
     310,     0,   170,   285,     0,   164,     0,    27,     0,     0,
      34,    31,     0,    37,     0,     0,    51,    43,    96,    64,
      65,    66,    68,    69,    71,    72,    76,    77,    74,    75,
      79,    80,    82,    84,    86,    88,    90,    92,     0,   109,
       0,   134,     0,   138,     0,   142,     0,   321,     0,     0,
       0,   258,     0,   303,     0,     0,     0,     0,     0,     0,
     273,    29,    54,    49,    48,     0,   188,    52,     0,     0,
       0,   135,   143,     0,     0,     0,   319,   329,   260,     0,
     305,     0,   284,   282,     0,   287,     0,   275,   298,   274,
      53,    94,   122,   136,     0,   144,   328,   323,     0,     0,
     306,   300,     0,     0,     0,   288,   292,     0,   296,     0,
     286,   137,   322,   299,   283,     0,   291,   294,   293,   295,
     289,   297,   290
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    13,     3,   101,     6,   271,    14,   102,   210,
     211,   212,   379,   213,   214,   215,   216,   217,   218,   219,
     383,   384,   385,   386,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   317,
     235,   263,   236,   237,   105,   106,   107,   251,   156,   157,
     252,   108,   109,   110,   238,   183,   363,   184,   185,   112,
     158,   113,   114,   264,   116,   117,   118,   119,   120,   175,
     176,   272,   273,   351,   240,   241,   242,   243,   295,   458,
     459,   244,   245,   246,   453,   376,   247,   455,   476,   477,
     478,   479,   248,   368,   424,   425,   249,   121,   122,   123,
     124,   418,   268,   269,   270,   125
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -386
static const yytype_int16 yypact[] =
{
     -62,   -14,    80,  -386,   -36,  -386,   -34,  -386,  -386,  -386,
    -386,   -31,   139,  2715,  -386,  -386,   -25,  -386,  -386,  -386,
    -386,  -386,  -386,  -386,  -386,  -386,  -386,  -386,  -386,  -386,
    -386,  -386,  -386,  -386,  -386,    76,  -386,  -386,    38,  -386,
    -386,  -386,  -386,  -386,  -386,  -386,  -386,  -386,  -386,  -386,
    -386,  -386,  -386,  -386,  -386,  -386,  -386,  -386,  -386,  -386,
    -386,  -386,  -386,  -386,  -386,  -386,  -386,  -386,  -386,  -386,
    -386,  -386,  -386,  -386,  -386,  -386,  -386,  -386,  -386,  -386,
    -386,  -386,  -386,  -386,  -386,  -386,  -386,   -71,  -386,  -386,
     289,  -386,  -386,  -386,   115,     3,    13,    18,    21,    24,
     -67,  -386,  2715,  -386,  -154,   -65,   -66,     5,  -170,  -386,
     158,   309,   316,  1787,  -386,  -386,  -386,   -48,  -386,  2833,
    -386,  -386,  -386,  -386,  -386,  -386,   139,  -386,  -386,  -386,
     -81,  1787,   -72,  -386,  -386,  -386,  -386,   316,  -386,  2833,
    -386,  -386,  -386,  -386,  -386,   -61,  -386,  -386,   466,  -386,
    -386,    29,  -386,  -386,  -386,  -386,  -386,  1787,   219,   139,
    -386,   -33,    -8,  -172,     0,   -75,  -386,  -386,  -386,  -386,
    1066,  -386,    62,     1,   139,   569,  -386,  1787,  -386,    -3,
    -386,  -386,    15,  -146,  -386,  -386,     2,    16,  1429,    39,
      50,    33,  1309,    53,    56,  -386,  -386,  -386,  -386,  -386,
    2365,  2365,  2365,  -386,  -386,  -386,  -386,  -386,    36,  -386,
      61,  -386,   -57,  -386,  -386,  -386,    63,  -122,  2481,    68,
      69,  2365,    37,   -12,   121,   -79,   147,    59,    60,    66,
     196,   199,   -92,  -386,  -386,  -169,  -386,    65,   353,    87,
    -386,  -386,  -386,  -386,   707,  -386,  -386,  -386,  -386,  -386,
    -386,  -386,  -386,   139,  1787,  -164,  1549,  2365,  -386,  -386,
    -386,  -386,  -386,    85,  -386,  -386,  -386,   275,    71,  1787,
     -30,    93,  -160,  -386,  -386,  -386,   810,  -386,   131,  -386,
     -61,  -386,  -386,   229,  1896,  2365,  -386,  -386,  -158,  2365,
    2016,  -386,  -386,  -119,  -386,  1429,  -386,  -386,  2365,   158,
    -386,  -386,  2365,    96,  -386,  -386,  -386,  -386,  -386,  -386,
    -386,  -386,  -386,  -386,  -386,  -386,  -386,  2365,  -386,  2365,
    2365,  2365,  2365,  2365,  2365,  2365,  2365,  2365,  2365,  2365,
    2365,  2365,  2365,  2365,  2365,  2365,  2365,  2365,  2365,  2365,
    -386,  -386,  -386,   102,  -386,  -386,  2133,  2365,    99,   110,
    -386,  -386,  -386,  1787,   254,   139,  -386,  2365,   139,  -386,
    -386,  -386,  -386,  -386,  -386,   127,  -386,  -386,  2016,   -94,
    -386,   -83,   298,   126,   139,   316,   133,  -386,   948,   136,
     126,  -386,   140,  -386,   141,   -53,  2597,  -386,  -386,  -386,
    -386,  -386,    37,    37,   -12,   -12,   121,   121,   121,   121,
     -79,   -79,   147,    59,    60,    66,   196,   199,  -179,  -386,
    2365,   123,   138,  -386,  2365,   124,   139,   144,   128,  -155,
     145,  -386,  2365,  -386,   129,   146,  1429,   132,   135,  1669,
    -386,  -386,  -386,  -386,  -386,  2365,   150,  -386,  2365,   153,
    2365,   142,  -386,  2365,  -148,  2249,  -386,  -386,  -386,   -52,
    2365,  1669,   361,  -386,   -11,  -386,  2365,  -386,  -386,  -386,
    -386,  -386,  -386,  -386,  2365,  -386,  -386,  -386,   155,   143,
     126,  -386,  1429,  2365,   149,  -386,  -386,  1189,  1429,    -7,
    -386,  -386,  -386,  -386,  -386,  -141,  -386,  -386,  -386,  -386,
    -386,  1429,  -386
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -386,  -386,  -386,  -386,  -386,  -386,    -2,  -386,  -386,   -74,
    -386,  -386,  -386,  -386,  -386,  -386,  -386,  -386,  -386,  -386,
    -386,  -386,  -386,  -386,  -127,  -386,   -58,   -63,  -212,   -32,
      48,    58,    47,    57,    64,    46,  -386,  -135,  -198,  -386,
    -178,  -224,    32,    35,  -386,  -386,  -386,   148,   242,   236,
     151,  -386,  -386,  -243,   -10,  -386,  -386,   116,  -386,   -85,
    -386,  -386,   -86,   -13,   -70,  -386,  -386,   301,  -386,   220,
    -144,  -321,    40,  -317,   117,  -187,  -385,  -386,  -386,   -47,
     295,   108,   122,  -386,  -386,    41,  -386,  -386,   -69,  -386,
     -68,  -386,  -386,  -386,  -386,  -386,  -386,   305,  -386,  -386,
     -88,  -386,   152,   154,  -386,  -386
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -325
static const yytype_int16 yytable[] =
{
     115,   283,    11,   111,   138,   137,   266,   473,   474,   152,
      16,   473,   474,   337,   288,   130,   136,     7,     8,     9,
     304,   326,   327,   167,   293,   166,   168,     7,     8,     9,
     413,   275,   349,   152,   419,   262,   164,   266,   153,   154,
     155,   296,   297,   261,   457,   103,   339,   374,   104,   171,
     256,   178,     7,     8,     9,   159,   339,   342,   346,   350,
     438,     1,   153,   154,   155,   358,   457,   339,   257,   179,
     358,   160,   340,   291,   292,   279,   347,   358,     4,   280,
       5,   359,   180,   370,   339,   132,   447,   147,   148,   115,
      12,    10,   111,   466,   318,   444,    15,   442,   492,   301,
     169,   126,   377,   302,   387,   100,   339,   369,   163,   127,
     128,   371,   373,   129,   396,   397,   398,   399,   174,   388,
     380,   262,   412,   463,   172,   374,   465,   426,   130,   261,
     140,   339,   275,   420,   103,   239,   100,   104,   427,   480,
     141,   409,   339,   182,   253,   142,   338,   481,   143,   350,
     167,   144,   166,   145,   328,   329,   150,   255,   181,   151,
     408,   173,   174,   267,   174,   298,   259,   299,   434,   469,
     177,   131,   435,   339,   170,   239,   306,   307,   308,   309,
     310,   311,   312,   313,   314,   315,   439,   -20,   437,   265,
     373,   342,   389,   390,   391,   261,   261,   261,   261,   261,
     261,   261,   261,   261,   261,   261,   261,   261,   261,   261,
     261,   262,   -21,  -324,   322,   323,   350,   324,   325,   261,
     258,   468,   262,   361,   362,   382,  -116,     7,     8,     9,
     261,   239,   475,    91,    92,    93,   490,   460,   277,   452,
     461,   253,   350,   281,   449,   350,   161,     8,   162,   330,
     331,   343,   153,   154,   155,   278,   355,   282,   350,   284,
     267,   394,   395,   174,   392,   393,   350,   319,   320,   321,
     285,   239,   470,   289,   286,   262,   290,   239,   182,   294,
     375,   -46,   239,   261,   300,   484,   138,   137,   305,   166,
     487,   489,    17,    18,   332,   485,   333,   381,   400,   401,
     335,    17,    18,   334,   489,   336,   147,   -45,   352,   316,
     262,   266,    17,    18,   354,   357,   365,   -40,   261,    17,
      18,    35,    36,    37,   410,   133,    39,    40,    41,    42,
      35,    36,    37,   415,   133,    39,    40,    41,    42,   414,
     416,    35,    36,    37,   417,   165,    39,   422,    35,    36,
      37,   339,   133,    39,   429,   239,    17,    18,   375,   431,
     432,   441,   433,   440,   443,   239,   445,   451,   448,   446,
     450,   -50,   428,   472,   454,   456,   462,   134,   482,   135,
     402,   404,   464,   407,   483,    35,    36,    37,   486,    38,
      39,   403,   405,   250,   254,   139,   364,   276,   421,   149,
     406,   366,   344,   378,   471,   345,   367,   146,   488,   423,
       0,   491,     0,   239,     0,     0,   239,     0,     0,     0,
       0,   353,   356,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   239,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   239,
       0,     0,     0,     0,   239,   239,     0,     0,     0,    17,
      18,    19,    20,    21,    22,   186,   187,   188,   239,   189,
     190,   191,   192,   193,     0,     0,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,     0,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,   194,   134,    89,   135,   195,   196,   197,
     198,   199,     0,     0,   200,   201,     0,     0,     0,     0,
       0,     0,     0,     0,    19,    20,    21,    22,     0,     0,
       0,     0,     0,    90,    91,    92,    93,     0,    94,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,   100,     0,     0,     0,     0,     0,     0,     0,     0,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,     0,     0,    89,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   202,    91,    92,    93,
       0,     0,   203,   204,   205,   206,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   207,   208,   209,
      17,    18,    19,    20,    21,    22,   186,   187,   188,     0,
     189,   190,   191,   192,   193,     0,     0,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,     0,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,   194,   134,    89,   135,   195,   196,
     197,   198,   199,     0,     0,   200,   201,     0,     0,     0,
       0,     0,   274,     0,     0,    19,    20,    21,    22,     0,
       0,     0,     0,     0,    90,    91,    92,    93,     0,    94,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,   100,     0,     0,     0,     0,     0,     0,     0,
       0,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,     0,     0,    89,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   202,    91,    92,
      93,     0,     0,   203,   204,   205,   206,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   207,   208,
     341,    17,    18,    19,    20,    21,    22,   186,   187,   188,
       0,   189,   190,   191,   192,   193,     0,     0,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,     0,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,   194,   134,    89,   135,   195,
     196,   197,   198,   199,     0,     0,   200,   201,     0,     0,
       0,     0,     0,   360,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    90,    91,    92,    93,     0,
      94,    19,    20,    21,    22,     0,     0,     0,     0,     0,
       0,     0,     0,   100,     0,     0,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,     0,   134,    89,   135,   195,   196,   197,
     198,   199,     0,     0,   200,   201,     0,     0,   202,     0,
       0,     0,     0,     0,   203,   204,   205,   206,     0,     0,
       0,     0,     0,     0,    91,    92,    93,     0,     0,   207,
     208,   430,    17,    18,    19,    20,    21,    22,   186,   187,
     188,     0,   189,   190,   191,   192,   193,   473,   474,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,     0,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,   194,   134,    89,   135,
     195,   196,   197,   198,   199,     0,   202,   200,   201,   260,
       0,     0,   203,   204,   205,   206,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    90,    91,    92,    93,
       0,    94,     0,     0,    19,    20,    21,    22,     0,     0,
       0,     0,     0,     0,   100,     0,     0,     0,     0,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,     0,   134,    89,   135,
     195,   196,   197,   198,   199,     0,     0,   200,   201,   202,
       0,     0,     0,     0,     0,   203,   204,   205,   206,     0,
       0,     0,     0,     0,     0,     0,     0,    91,    92,    93,
     207,   208,    17,    18,    19,    20,    21,    22,   186,   187,
     188,     0,   189,   190,   191,   192,   193,     0,     0,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,     0,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,   194,   134,    89,   135,
     195,   196,   197,   198,   199,     0,     0,   200,   201,   202,
       0,     0,     0,     0,     0,   203,   204,   205,   206,     0,
       0,     0,     0,     0,     0,     0,    90,    91,    92,    93,
     287,    94,     0,     0,    19,    20,    21,    22,     0,     0,
       0,     0,     0,     0,   100,     0,     0,     0,     0,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,     0,   134,    89,   135,
     195,   196,   197,   198,   199,     0,     0,   200,   201,   202,
       0,     0,     0,     0,     0,   203,   204,   205,   206,     0,
       0,     0,     0,     0,     0,     0,     0,    91,    92,    93,
     207,   208,    17,    18,    19,    20,    21,    22,   186,   187,
     188,     0,   189,   190,   191,   192,   193,     0,     0,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,     0,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,   194,   134,    89,   135,
     195,   196,   197,   198,   199,     0,     0,   200,   201,   202,
       0,     0,   348,     0,     0,   203,   204,   205,   206,     0,
       0,     0,     0,     0,     0,     0,    90,    91,    92,    93,
       0,    94,    19,    20,    21,    22,     0,     0,     0,     0,
       0,     0,     0,     0,   100,     0,     0,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,     0,     0,    89,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   202,
       0,     0,     0,     0,     0,   203,   204,   205,   206,    17,
      18,    19,    20,    21,    22,    91,    92,    93,     0,     0,
     207,   148,     0,     0,     0,     0,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,     0,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,     0,   134,    89,   135,   195,   196,   197,
     198,   199,     0,     0,   200,   201,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    90,    91,    92,    93,     0,    94,    17,
      18,    19,    20,    21,    22,     0,     0,     0,     0,     0,
       0,   100,     0,     0,     0,     0,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,     0,   133,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,     0,   134,    89,   135,   195,   196,   197,
     198,   199,     0,     0,   200,   201,   202,     0,     0,     0,
       0,     0,   203,   204,   205,   206,     0,     0,     0,     0,
       0,     0,     0,   372,    91,    92,    93,   207,    19,    20,
      21,    22,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   100,     0,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
       0,   134,    89,   135,   195,   196,   197,   198,   199,     0,
       0,   200,   201,     0,     0,     0,   202,     0,     0,     0,
       0,     0,   203,   204,   205,   206,     0,     0,     0,     0,
       0,    91,    92,    93,    19,    20,    21,    22,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,     0,   134,    89,   135,
     195,   196,   197,   198,   199,     0,     0,   200,   201,     0,
       0,     0,     0,   202,     0,     0,   411,     0,     0,   203,
     204,   205,   206,     0,     0,     0,     0,    91,    92,    93,
      19,    20,    21,    22,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,     0,   134,    89,   135,   195,   196,   197,   198,
     199,     0,     0,   200,   201,     0,     0,     0,     0,   202,
       0,     0,   467,     0,     0,   203,   204,   205,   206,     0,
       0,     0,     0,    91,    92,    93,    19,    20,    21,    22,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,   303,     0,   134,
      89,   135,   195,   196,   197,   198,   199,     0,     0,   200,
     201,     0,     0,     0,     0,   202,     0,     0,     0,     0,
       0,   203,   204,   205,   206,     0,     0,     0,     0,    91,
      92,    93,    19,    20,    21,    22,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,   436,     0,   134,    89,   135,   195,   196,
     197,   198,   199,     0,     0,   200,   201,     0,     0,     0,
       0,   202,     0,     0,     0,     0,     0,   203,   204,   205,
     206,     0,     0,     0,     0,    91,    92,    93,    17,    18,
      19,    20,    21,    22,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
       0,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,     0,     0,    89,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   202,     0,     0,
       0,     0,     0,   203,   204,   205,   206,     0,     0,     0,
       0,     0,    90,    91,    92,    93,     0,    94,    19,    20,
      21,    22,     0,     0,     0,    95,    96,    97,    98,    99,
     100,     0,     0,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
       0,     0,    89
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-386))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      13,   188,     4,    13,    90,    90,    36,    18,    19,     4,
      12,    18,    19,   105,   192,    90,    90,    88,    89,    90,
     218,   100,   101,   111,   202,   111,   112,    88,    89,    90,
     347,   175,   256,     4,   355,   170,   110,    36,    33,    34,
      35,    98,    99,   170,   429,    13,   225,   290,    13,   119,
     222,   137,    88,    89,    90,   225,   225,   244,   222,   257,
     239,   123,    33,    34,    35,   225,   451,   225,   240,   139,
     225,   241,   241,   200,   201,   221,   240,   225,    92,   225,
       0,   241,   143,   241,   225,    87,   241,   241,   242,   102,
     124,   127,   102,   241,   221,   416,   127,   414,   239,   221,
     113,   126,   221,   225,   302,   135,   225,   285,   110,    33,
      34,   289,   290,    37,   326,   327,   328,   329,   131,   317,
     298,   256,   346,   440,   126,   368,   443,   221,    90,   256,
     127,   225,   276,   357,   102,   148,   135,   102,   221,   456,
     127,   339,   225,   145,   157,   127,   238,   464,   127,   347,
     238,   127,   238,   220,   233,   234,   221,   159,   219,   225,
     338,   242,   175,   173,   177,   222,   241,   224,   221,   221,
     242,   242,   225,   225,   222,   188,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   410,   220,   386,   127,
     368,   378,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   346,   220,   243,   226,   227,   414,    96,    97,   346,
     220,   445,   357,    92,    93,   299,   221,    88,    89,    90,
     357,   244,   243,   118,   119,   120,   243,   435,   241,   426,
     438,   254,   440,   241,   422,   443,    88,    89,    90,   102,
     103,   253,    33,    34,    35,   240,   269,   241,   456,   220,
     270,   324,   325,   276,   322,   323,   464,   230,   231,   232,
     220,   284,   450,   220,   241,   410,   220,   290,   280,   243,
     290,   220,   295,   410,   221,   472,   372,   372,   220,   375,
     477,   478,     3,     4,   235,   473,   236,   299,   330,   331,
     104,     3,     4,   237,   491,   106,   241,   220,   223,   240,
     445,    36,     3,     4,   243,   222,    87,   221,   445,     3,
       4,    32,    33,    34,   222,    36,    37,    38,    39,    40,
      32,    33,    34,   223,    36,    37,    38,    39,    40,   240,
     353,    32,    33,    34,    90,    36,    37,   220,    32,    33,
      34,   225,    36,    37,   221,   368,     3,     4,   368,   223,
     220,   223,   221,   240,   240,   378,   222,   221,   223,   241,
     241,   221,   374,    12,   242,   240,   223,    88,   223,    90,
     332,   334,   240,   337,   241,    32,    33,    34,   239,    36,
      37,   333,   335,   151,   158,    94,   280,   177,   358,   104,
     336,   284,   254,   295,   451,   254,   284,   102,   477,   368,
      -1,   479,    -1,   426,    -1,    -1,   429,    -1,    -1,    -1,
      -1,   267,   270,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   451,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   472,
      -1,    -1,    -1,    -1,   477,   478,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    11,   491,    13,
      14,    15,    16,    17,    -1,    -1,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    -1,    -1,    98,    99,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    -1,   117,   118,   119,   120,    -1,   122,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,   135,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    -1,    -1,    89,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   220,   118,   119,   120,
      -1,    -1,   226,   227,   228,   229,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   241,   242,   243,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    -1,
      13,    14,    15,    16,    17,    -1,    -1,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    -1,    -1,    98,    99,    -1,    -1,    -1,
      -1,    -1,   243,    -1,    -1,     5,     6,     7,     8,    -1,
      -1,    -1,    -1,    -1,   117,   118,   119,   120,    -1,   122,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,   135,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    -1,    -1,    89,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   220,   118,   119,
     120,    -1,    -1,   226,   227,   228,   229,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   241,   242,
     243,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      -1,    13,    14,    15,    16,    17,    -1,    -1,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    -1,    -1,    98,    99,    -1,    -1,
      -1,    -1,    -1,   243,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   117,   118,   119,   120,    -1,
     122,     5,     6,     7,     8,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   135,    -1,    -1,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    -1,    88,    89,    90,    91,    92,    93,
      94,    95,    -1,    -1,    98,    99,    -1,    -1,   220,    -1,
      -1,    -1,    -1,    -1,   226,   227,   228,   229,    -1,    -1,
      -1,    -1,    -1,    -1,   118,   119,   120,    -1,    -1,   241,
     242,   243,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    -1,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    -1,   220,    98,    99,   223,
      -1,    -1,   226,   227,   228,   229,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   117,   118,   119,   120,
      -1,   122,    -1,    -1,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    -1,    -1,   135,    -1,    -1,    -1,    -1,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    -1,    88,    89,    90,
      91,    92,    93,    94,    95,    -1,    -1,    98,    99,   220,
      -1,    -1,    -1,    -1,    -1,   226,   227,   228,   229,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   118,   119,   120,
     241,   242,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    -1,    13,    14,    15,    16,    17,    -1,    -1,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    -1,    -1,    98,    99,   220,
      -1,    -1,    -1,    -1,    -1,   226,   227,   228,   229,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   117,   118,   119,   120,
     241,   122,    -1,    -1,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    -1,    -1,   135,    -1,    -1,    -1,    -1,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    -1,    88,    89,    90,
      91,    92,    93,    94,    95,    -1,    -1,    98,    99,   220,
      -1,    -1,    -1,    -1,    -1,   226,   227,   228,   229,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   118,   119,   120,
     241,   242,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    -1,    13,    14,    15,    16,    17,    -1,    -1,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    -1,    -1,    98,    99,   220,
      -1,    -1,   223,    -1,    -1,   226,   227,   228,   229,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   117,   118,   119,   120,
      -1,   122,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   135,    -1,    -1,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    -1,    -1,    89,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   220,
      -1,    -1,    -1,    -1,    -1,   226,   227,   228,   229,     3,
       4,     5,     6,     7,     8,   118,   119,   120,    -1,    -1,
     241,   242,    -1,    -1,    -1,    -1,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    -1,    88,    89,    90,    91,    92,    93,
      94,    95,    -1,    -1,    98,    99,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   117,   118,   119,   120,    -1,   122,     3,
       4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,    -1,
      -1,   135,    -1,    -1,    -1,    -1,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    -1,    88,    89,    90,    91,    92,    93,
      94,    95,    -1,    -1,    98,    99,   220,    -1,    -1,    -1,
      -1,    -1,   226,   227,   228,   229,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   117,   118,   119,   120,   241,     5,     6,
       7,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   135,    -1,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      -1,    88,    89,    90,    91,    92,    93,    94,    95,    -1,
      -1,    98,    99,    -1,    -1,    -1,   220,    -1,    -1,    -1,
      -1,    -1,   226,   227,   228,   229,    -1,    -1,    -1,    -1,
      -1,   118,   119,   120,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    -1,    88,    89,    90,
      91,    92,    93,    94,    95,    -1,    -1,    98,    99,    -1,
      -1,    -1,    -1,   220,    -1,    -1,   223,    -1,    -1,   226,
     227,   228,   229,    -1,    -1,    -1,    -1,   118,   119,   120,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    -1,    88,    89,    90,    91,    92,    93,    94,
      95,    -1,    -1,    98,    99,    -1,    -1,    -1,    -1,   220,
      -1,    -1,   223,    -1,    -1,   226,   227,   228,   229,    -1,
      -1,    -1,    -1,   118,   119,   120,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    -1,    88,
      89,    90,    91,    92,    93,    94,    95,    -1,    -1,    98,
      99,    -1,    -1,    -1,    -1,   220,    -1,    -1,    -1,    -1,
      -1,   226,   227,   228,   229,    -1,    -1,    -1,    -1,   118,
     119,   120,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    -1,    88,    89,    90,    91,    92,
      93,    94,    95,    -1,    -1,    98,    99,    -1,    -1,    -1,
      -1,   220,    -1,    -1,    -1,    -1,    -1,   226,   227,   228,
     229,    -1,    -1,    -1,    -1,   118,   119,   120,     3,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      -1,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    -1,    -1,    89,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   220,    -1,    -1,
      -1,    -1,    -1,   226,   227,   228,   229,    -1,    -1,    -1,
      -1,    -1,   117,   118,   119,   120,    -1,   122,     5,     6,
       7,     8,    -1,    -1,    -1,   130,   131,   132,   133,   134,
     135,    -1,    -1,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      -1,    -1,    89
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   123,   245,   247,    92,     0,   249,    88,    89,    90,
     127,   250,   124,   246,   251,   127,   250,     3,     4,     5,
       6,     7,     8,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    89,
     117,   118,   119,   120,   122,   130,   131,   132,   133,   134,
     135,   248,   252,   286,   287,   288,   289,   290,   295,   296,
     297,   298,   303,   305,   306,   307,   308,   309,   310,   311,
     312,   341,   342,   343,   344,   349,   126,    33,    34,    37,
      90,   242,   250,    36,    88,    90,   253,   303,   306,   311,
     127,   127,   127,   127,   127,   220,   341,   241,   242,   324,
     221,   225,     4,    33,    34,    35,   292,   293,   304,   225,
     241,    88,    90,   250,   253,    36,   306,   344,   306,   307,
     222,   308,   250,   242,   307,   313,   314,   242,   306,   308,
     143,   219,   250,   299,   301,   302,     9,    10,    11,    13,
      14,    15,    16,    17,    87,    91,    92,    93,    94,    95,
      98,    99,   220,   226,   227,   228,   229,   241,   242,   243,
     253,   254,   255,   257,   258,   259,   260,   261,   262,   263,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,   279,   280,   281,   282,   284,   286,   287,   298,   307,
     318,   319,   320,   321,   325,   326,   327,   330,   336,   340,
     292,   291,   294,   307,   293,   250,   222,   240,   220,   241,
     223,   268,   281,   285,   307,   127,    36,   298,   346,   347,
     348,   250,   315,   316,   243,   314,   313,   241,   240,   221,
     225,   241,   241,   319,   220,   220,   241,   241,   284,   220,
     220,   268,   268,   284,   243,   322,    98,    99,   222,   224,
     221,   221,   225,    86,   282,   220,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   240,   283,   268,   230,
     231,   232,   226,   227,    96,    97,   100,   101,   233,   234,
     102,   103,   235,   236,   237,   104,   106,   105,   238,   225,
     241,   243,   319,   250,   291,   294,   222,   240,   223,   285,
     282,   317,   223,   347,   243,   307,   346,   222,   225,   241,
     243,    92,    93,   300,   301,    87,   318,   326,   337,   284,
     241,   284,   117,   284,   297,   298,   329,   221,   325,   256,
     284,   250,   253,   264,   265,   266,   267,   282,   282,   268,
     268,   268,   270,   270,   271,   271,   272,   272,   272,   272,
     273,   273,   274,   275,   276,   277,   278,   279,   284,   282,
     222,   223,   285,   317,   240,   223,   307,    90,   345,   315,
     285,   316,   220,   329,   338,   339,   221,   221,   250,   221,
     243,   223,   220,   221,   221,   225,    86,   282,   239,   285,
     240,   223,   317,   240,   315,   222,   241,   241,   223,   284,
     241,   221,   319,   328,   242,   331,   240,   320,   323,   324,
     282,   282,   223,   317,   240,   317,   241,   223,   285,   221,
     284,   323,    12,    18,    19,   243,   332,   333,   334,   335,
     317,   317,   223,   241,   319,   284,   239,   319,   332,   319,
     243,   334,   239
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
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

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
      yyerror (&yylloc, state, YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (YYID (N))                                                     \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (YYID (0))
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])



/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
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
# define YYLEX yylex (&yylval, &yylloc, YYLEX_PARAM)
#else
# define YYLEX yylex (&yylval, &yylloc, scanner)
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
		  Type, Value, Location, state); \
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, struct _mesa_glsl_parse_state *state)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp, state)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
    struct _mesa_glsl_parse_state *state;
#endif
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
  YYUSE (yylocationp);
  YYUSE (state);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, struct _mesa_glsl_parse_state *state)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, yylocationp, state)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
    struct _mesa_glsl_parse_state *state;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp, state);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
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
yy_reduce_print (YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule, struct _mesa_glsl_parse_state *state)
#else
static void
yy_reduce_print (yyvsp, yylsp, yyrule, state)
    YYSTYPE *yyvsp;
    YYLTYPE *yylsp;
    int yyrule;
    struct _mesa_glsl_parse_state *state;
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
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       , &(yylsp[(yyi + 1) - (yynrhs)])		       , state);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, yylsp, Rule, state); \
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  YYSIZE_T yysize1;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
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
                yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
                if (! (yysize <= yysize1
                       && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                  return 2;
                yysize = yysize1;
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

  yysize1 = yysize + yystrlen (yyformat);
  if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
    return 2;
  yysize = yysize1;

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

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, struct _mesa_glsl_parse_state *state)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, yylocationp, state)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    YYLTYPE *yylocationp;
    struct _mesa_glsl_parse_state *state;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (state);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}




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
yyparse (struct _mesa_glsl_parse_state *state)
#else
int
yyparse (state)
    struct _mesa_glsl_parse_state *state;
#endif
#endif
{
/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Location data for the lookahead symbol.  */
YYLTYPE yylloc;

    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.
       `yyls': related to locations.

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

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;
  yylsp = yyls;

#if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  /* Initialize the default location before parsing starts.  */
  yylloc.first_line   = yylloc.last_line   = 1;
  yylloc.first_column = yylloc.last_column = 1;
#endif

/* User initialization code.  */
/* Line 1572 of yacc.c  */
#line 48 "glsl_parser.yy"
{
   yylloc.first_line = 1;
   yylloc.first_column = 1;
   yylloc.last_line = 1;
   yylloc.last_column = 1;
   yylloc.source = 0;
}
/* Line 1572 of yacc.c  */
#line 2639 "glsl_parser.cpp"
  yylsp[0] = yylloc;
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
	YYLTYPE *yyls1 = yyls;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yyls1, yysize * sizeof (*yylsp),
		    &yystacksize);

	yyls = yyls1;
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
	YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
  *++yyvsp = yylval;
  *++yylsp = yylloc;
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

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
/* Line 1787 of yacc.c  */
#line 252 "glsl_parser.yy"
    {
	   _mesa_glsl_initialize_types(state);
	}
    break;

  case 3:
/* Line 1787 of yacc.c  */
#line 256 "glsl_parser.yy"
    {
	   delete state->symbols;
	   state->symbols = new(ralloc_parent(state)) glsl_symbol_table;
	   _mesa_glsl_initialize_types(state);
	}
    break;

  case 5:
/* Line 1787 of yacc.c  */
#line 266 "glsl_parser.yy"
    {
           state->process_version_directive(&(yylsp[(2) - (3)]), (yyvsp[(2) - (3)].n), NULL);
	}
    break;

  case 6:
/* Line 1787 of yacc.c  */
#line 270 "glsl_parser.yy"
    {
           state->process_version_directive(&(yylsp[(2) - (4)]), (yyvsp[(2) - (4)].n), (yyvsp[(3) - (4)].identifier));
        }
    break;

  case 11:
/* Line 1787 of yacc.c  */
#line 281 "glsl_parser.yy"
    {
	   if (!state->is_version(120, 100)) {
	      _mesa_glsl_warning(& (yylsp[(1) - (2)]), state,
				 "pragma `invariant(all)' not supported in %s "
                                 "(GLSL ES 1.00 or GLSL 1.20 required).",
				 state->get_version_string());
	   } else {
	      state->all_invariant = true;
	   }
	}
    break;

  case 17:
/* Line 1787 of yacc.c  */
#line 306 "glsl_parser.yy"
    {
	   if (!_mesa_glsl_process_extension((yyvsp[(2) - (5)].identifier), & (yylsp[(2) - (5)]), (yyvsp[(4) - (5)].identifier), & (yylsp[(4) - (5)]), state)) {
	      YYERROR;
	   }
	}
    break;

  case 18:
/* Line 1787 of yacc.c  */
#line 315 "glsl_parser.yy"
    {
	   /* FINISHME: The NULL test is required because pragmas are set to
	    * FINISHME: NULL. (See production rule for external_declaration.)
	    */
	   if ((yyvsp[(1) - (1)].node) != NULL)
	      state->translation_unit.push_tail(& (yyvsp[(1) - (1)].node)->link);
	}
    break;

  case 19:
/* Line 1787 of yacc.c  */
#line 323 "glsl_parser.yy"
    {
	   /* FINISHME: The NULL test is required because pragmas are set to
	    * FINISHME: NULL. (See production rule for external_declaration.)
	    */
	   if ((yyvsp[(2) - (2)].node) != NULL)
	      state->translation_unit.push_tail(& (yyvsp[(2) - (2)].node)->link);
	}
    break;

  case 22:
/* Line 1787 of yacc.c  */
#line 339 "glsl_parser.yy"
    {
	   void *ctx = state;
	   (yyval.expression) = new(ctx) ast_expression(ast_identifier, NULL, NULL, NULL);
	   (yyval.expression)->set_location(yylloc);
	   (yyval.expression)->primary_expression.identifier = (yyvsp[(1) - (1)].identifier);
	}
    break;

  case 23:
/* Line 1787 of yacc.c  */
#line 346 "glsl_parser.yy"
    {
	   void *ctx = state;
	   (yyval.expression) = new(ctx) ast_expression(ast_int_constant, NULL, NULL, NULL);
	   (yyval.expression)->set_location(yylloc);
	   (yyval.expression)->primary_expression.int_constant = (yyvsp[(1) - (1)].n);
	}
    break;

  case 24:
/* Line 1787 of yacc.c  */
#line 353 "glsl_parser.yy"
    {
	   void *ctx = state;
	   (yyval.expression) = new(ctx) ast_expression(ast_uint_constant, NULL, NULL, NULL);
	   (yyval.expression)->set_location(yylloc);
	   (yyval.expression)->primary_expression.uint_constant = (yyvsp[(1) - (1)].n);
	}
    break;

  case 25:
/* Line 1787 of yacc.c  */
#line 360 "glsl_parser.yy"
    {
	   void *ctx = state;
	   (yyval.expression) = new(ctx) ast_expression(ast_float_constant, NULL, NULL, NULL);
	   (yyval.expression)->set_location(yylloc);
	   (yyval.expression)->primary_expression.float_constant = (yyvsp[(1) - (1)].real);
	}
    break;

  case 26:
/* Line 1787 of yacc.c  */
#line 367 "glsl_parser.yy"
    {
	   void *ctx = state;
	   (yyval.expression) = new(ctx) ast_expression(ast_bool_constant, NULL, NULL, NULL);
	   (yyval.expression)->set_location(yylloc);
	   (yyval.expression)->primary_expression.bool_constant = (yyvsp[(1) - (1)].n);
	}
    break;

  case 27:
/* Line 1787 of yacc.c  */
#line 374 "glsl_parser.yy"
    {
	   (yyval.expression) = (yyvsp[(2) - (3)].expression);
	}
    break;

  case 29:
/* Line 1787 of yacc.c  */
#line 382 "glsl_parser.yy"
    {
	   void *ctx = state;
	   (yyval.expression) = new(ctx) ast_expression(ast_array_index, (yyvsp[(1) - (4)].expression), (yyvsp[(3) - (4)].expression), NULL);
	   (yyval.expression)->set_location(yylloc);
	}
    break;

  case 30:
/* Line 1787 of yacc.c  */
#line 388 "glsl_parser.yy"
    {
	   (yyval.expression) = (yyvsp[(1) - (1)].expression);
	}
    break;

  case 31:
/* Line 1787 of yacc.c  */
#line 392 "glsl_parser.yy"
    {
	   void *ctx = state;
	   (yyval.expression) = new(ctx) ast_expression(ast_field_selection, (yyvsp[(1) - (3)].expression), NULL, NULL);
	   (yyval.expression)->set_location(yylloc);
	   (yyval.expression)->primary_expression.identifier = (yyvsp[(3) - (3)].identifier);
	}
    break;

  case 32:
/* Line 1787 of yacc.c  */
#line 399 "glsl_parser.yy"
    {
	   void *ctx = state;
	   (yyval.expression) = new(ctx) ast_expression(ast_post_inc, (yyvsp[(1) - (2)].expression), NULL, NULL);
	   (yyval.expression)->set_location(yylloc);
	}
    break;

  case 33:
/* Line 1787 of yacc.c  */
#line 405 "glsl_parser.yy"
    {
	   void *ctx = state;
	   (yyval.expression) = new(ctx) ast_expression(ast_post_dec, (yyvsp[(1) - (2)].expression), NULL, NULL);
	   (yyval.expression)->set_location(yylloc);
	}
    break;

  case 37:
/* Line 1787 of yacc.c  */
#line 423 "glsl_parser.yy"
    {
	   void *ctx = state;
	   (yyval.expression) = new(ctx) ast_expression(ast_field_selection, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression), NULL);
	   (yyval.expression)->set_location(yylloc);
	}
    break;

  case 42:
/* Line 1787 of yacc.c  */
#line 442 "glsl_parser.yy"
    {
	   (yyval.expression) = (yyvsp[(1) - (2)].expression);
	   (yyval.expression)->set_location(yylloc);
	   (yyval.expression)->expressions.push_tail(& (yyvsp[(2) - (2)].expression)->link);
	}
    break;

  case 43:
/* Line 1787 of yacc.c  */
#line 448 "glsl_parser.yy"
    {
	   (yyval.expression) = (yyvsp[(1) - (3)].expression);
	   (yyval.expression)->set_location(yylloc);
	   (yyval.expression)->expressions.push_tail(& (yyvsp[(3) - (3)].expression)->link);
	}
    break;

  case 45:
/* Line 1787 of yacc.c  */
#line 464 "glsl_parser.yy"
    {
	   void *ctx = state;
	   (yyval.expression) = new(ctx) ast_function_expression((yyvsp[(1) - (1)].type_specifier));
	   (yyval.expression)->set_location(yylloc);
   	}
    break;

  case 46:
/* Line 1787 of yacc.c  */
#line 470 "glsl_parser.yy"
    {
	   void *ctx = state;
	   ast_expression *callee = new(ctx) ast_expression((yyvsp[(1) - (1)].identifier));
	   (yyval.expression) = new(ctx) ast_function_expression(callee);
	   (yyval.expression)->set_location(yylloc);
   	}
    break;

  case 47:
/* Line 1787 of yacc.c  */
#line 477 "glsl_parser.yy"
    {
	   void *ctx = state;
	   ast_expression *callee = new(ctx) ast_expression((yyvsp[(1) - (1)].identifier));
	   (yyval.expression) = new(ctx) ast_function_expression(callee);
	   (yyval.expression)->set_location(yylloc);
   	}
    break;

  case 52:
/* Line 1787 of yacc.c  */
#line 497 "glsl_parser.yy"
    {
	   (yyval.expression) = (yyvsp[(1) - (2)].expression);
	   (yyval.expression)->set_location(yylloc);
	   (yyval.expression)->expressions.push_tail(& (yyvsp[(2) - (2)].expression)->link);
	}
    break;

  case 53:
/* Line 1787 of yacc.c  */
#line 503 "glsl_parser.yy"
    {
	   (yyval.expression) = (yyvsp[(1) - (3)].expression);
	   (yyval.expression)->set_location(yylloc);
	   (yyval.expression)->expressions.push_tail(& (yyvsp[(3) - (3)].expression)->link);
	}
    break;

  case 54:
/* Line 1787 of yacc.c  */
#line 515 "glsl_parser.yy"
    {
	   void *ctx = state;
	   ast_expression *callee = new(ctx) ast_expression((yyvsp[(1) - (2)].identifier));
	   (yyval.expression) = new(ctx) ast_function_expression(callee);
	   (yyval.expression)->set_location(yylloc);
   	}
    break;

  case 56:
/* Line 1787 of yacc.c  */
#line 527 "glsl_parser.yy"
    {
	   void *ctx = state;
	   (yyval.expression) = new(ctx) ast_expression(ast_pre_inc, (yyvsp[(2) - (2)].expression), NULL, NULL);
	   (yyval.expression)->set_location(yylloc);
	}
    break;

  case 57:
/* Line 1787 of yacc.c  */
#line 533 "glsl_parser.yy"
    {
	   void *ctx = state;
	   (yyval.expression) = new(ctx) ast_expression(ast_pre_dec, (yyvsp[(2) - (2)].expression), NULL, NULL);
	   (yyval.expression)->set_location(yylloc);
	}
    break;

  case 58:
/* Line 1787 of yacc.c  */
#line 539 "glsl_parser.yy"
    {
	   void *ctx = state;
	   (yyval.expression) = new(ctx) ast_expression((yyvsp[(1) - (2)].n), (yyvsp[(2) - (2)].expression), NULL, NULL);
	   (yyval.expression)->set_location(yylloc);
	}
    break;

  case 59:
/* Line 1787 of yacc.c  */
#line 548 "glsl_parser.yy"
    { (yyval.n) = ast_plus; }
    break;

  case 60:
/* Line 1787 of yacc.c  */
#line 549 "glsl_parser.yy"
    { (yyval.n) = ast_neg; }
    break;

  case 61:
/* Line 1787 of yacc.c  */
#line 550 "glsl_parser.yy"
    { (yyval.n) = ast_logic_not; }
    break;

  case 62:
/* Line 1787 of yacc.c  */
#line 551 "glsl_parser.yy"
    { (yyval.n) = ast_bit_not; }
    break;

  case 64:
/* Line 1787 of yacc.c  */
#line 557 "glsl_parser.yy"
    {
	   void *ctx = state;
	   (yyval.expression) = new(ctx) ast_expression_bin(ast_mul, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression));
	   (yyval.expression)->set_location(yylloc);
	}
    break;

  case 65:
/* Line 1787 of yacc.c  */
#line 563 "glsl_parser.yy"
    {
	   void *ctx = state;
	   (yyval.expression) = new(ctx) ast_expression_bin(ast_div, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression));
	   (yyval.expression)->set_location(yylloc);
	}
    break;

  case 66:
/* Line 1787 of yacc.c  */
#line 569 "glsl_parser.yy"
    {
	   void *ctx = state;
	   (yyval.expression) = new(ctx) ast_expression_bin(ast_mod, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression));
	   (yyval.expression)->set_location(yylloc);
	}
    break;

  case 68:
/* Line 1787 of yacc.c  */
#line 579 "glsl_parser.yy"
    {
	   void *ctx = state;
	   (yyval.expression) = new(ctx) ast_expression_bin(ast_add, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression));
	   (yyval.expression)->set_location(yylloc);
	}
    break;

  case 69:
/* Line 1787 of yacc.c  */
#line 585 "glsl_parser.yy"
    {
	   void *ctx = state;
	   (yyval.expression) = new(ctx) ast_expression_bin(ast_sub, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression));
	   (yyval.expression)->set_location(yylloc);
	}
    break;

  case 71:
/* Line 1787 of yacc.c  */
#line 595 "glsl_parser.yy"
    {
	   void *ctx = state;
	   (yyval.expression) = new(ctx) ast_expression_bin(ast_lshift, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression));
	   (yyval.expression)->set_location(yylloc);
	}
    break;

  case 72:
/* Line 1787 of yacc.c  */
#line 601 "glsl_parser.yy"
    {
	   void *ctx = state;
	   (yyval.expression) = new(ctx) ast_expression_bin(ast_rshift, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression));
	   (yyval.expression)->set_location(yylloc);
	}
    break;

  case 74:
/* Line 1787 of yacc.c  */
#line 611 "glsl_parser.yy"
    {
	   void *ctx = state;
	   (yyval.expression) = new(ctx) ast_expression_bin(ast_less, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression));
	   (yyval.expression)->set_location(yylloc);
	}
    break;

  case 75:
/* Line 1787 of yacc.c  */
#line 617 "glsl_parser.yy"
    {
	   void *ctx = state;
	   (yyval.expression) = new(ctx) ast_expression_bin(ast_greater, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression));
	   (yyval.expression)->set_location(yylloc);
	}
    break;

  case 76:
/* Line 1787 of yacc.c  */
#line 623 "glsl_parser.yy"
    {
	   void *ctx = state;
	   (yyval.expression) = new(ctx) ast_expression_bin(ast_lequal, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression));
	   (yyval.expression)->set_location(yylloc);
	}
    break;

  case 77:
/* Line 1787 of yacc.c  */
#line 629 "glsl_parser.yy"
    {
	   void *ctx = state;
	   (yyval.expression) = new(ctx) ast_expression_bin(ast_gequal, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression));
	   (yyval.expression)->set_location(yylloc);
	}
    break;

  case 79:
/* Line 1787 of yacc.c  */
#line 639 "glsl_parser.yy"
    {
	   void *ctx = state;
	   (yyval.expression) = new(ctx) ast_expression_bin(ast_equal, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression));
	   (yyval.expression)->set_location(yylloc);
	}
    break;

  case 80:
/* Line 1787 of yacc.c  */
#line 645 "glsl_parser.yy"
    {
	   void *ctx = state;
	   (yyval.expression) = new(ctx) ast_expression_bin(ast_nequal, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression));
	   (yyval.expression)->set_location(yylloc);
	}
    break;

  case 82:
/* Line 1787 of yacc.c  */
#line 655 "glsl_parser.yy"
    {
	   void *ctx = state;
	   (yyval.expression) = new(ctx) ast_expression_bin(ast_bit_and, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression));
	   (yyval.expression)->set_location(yylloc);
	}
    break;

  case 84:
/* Line 1787 of yacc.c  */
#line 665 "glsl_parser.yy"
    {
	   void *ctx = state;
	   (yyval.expression) = new(ctx) ast_expression_bin(ast_bit_xor, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression));
	   (yyval.expression)->set_location(yylloc);
	}
    break;

  case 86:
/* Line 1787 of yacc.c  */
#line 675 "glsl_parser.yy"
    {
	   void *ctx = state;
	   (yyval.expression) = new(ctx) ast_expression_bin(ast_bit_or, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression));
	   (yyval.expression)->set_location(yylloc);
	}
    break;

  case 88:
/* Line 1787 of yacc.c  */
#line 685 "glsl_parser.yy"
    {
	   void *ctx = state;
	   (yyval.expression) = new(ctx) ast_expression_bin(ast_logic_and, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression));
	   (yyval.expression)->set_location(yylloc);
	}
    break;

  case 90:
/* Line 1787 of yacc.c  */
#line 695 "glsl_parser.yy"
    {
	   void *ctx = state;
	   (yyval.expression) = new(ctx) ast_expression_bin(ast_logic_xor, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression));
	   (yyval.expression)->set_location(yylloc);
	}
    break;

  case 92:
/* Line 1787 of yacc.c  */
#line 705 "glsl_parser.yy"
    {
	   void *ctx = state;
	   (yyval.expression) = new(ctx) ast_expression_bin(ast_logic_or, (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression));
	   (yyval.expression)->set_location(yylloc);
	}
    break;

  case 94:
/* Line 1787 of yacc.c  */
#line 715 "glsl_parser.yy"
    {
	   void *ctx = state;
	   (yyval.expression) = new(ctx) ast_expression(ast_conditional, (yyvsp[(1) - (5)].expression), (yyvsp[(3) - (5)].expression), (yyvsp[(5) - (5)].expression));
	   (yyval.expression)->set_location(yylloc);
	}
    break;

  case 96:
/* Line 1787 of yacc.c  */
#line 725 "glsl_parser.yy"
    {
	   void *ctx = state;
	   (yyval.expression) = new(ctx) ast_expression((yyvsp[(2) - (3)].n), (yyvsp[(1) - (3)].expression), (yyvsp[(3) - (3)].expression), NULL);
	   (yyval.expression)->set_location(yylloc);
	}
    break;

  case 97:
/* Line 1787 of yacc.c  */
#line 733 "glsl_parser.yy"
    { (yyval.n) = ast_assign; }
    break;

  case 98:
/* Line 1787 of yacc.c  */
#line 734 "glsl_parser.yy"
    { (yyval.n) = ast_mul_assign; }
    break;

  case 99:
/* Line 1787 of yacc.c  */
#line 735 "glsl_parser.yy"
    { (yyval.n) = ast_div_assign; }
    break;

  case 100:
/* Line 1787 of yacc.c  */
#line 736 "glsl_parser.yy"
    { (yyval.n) = ast_mod_assign; }
    break;

  case 101:
/* Line 1787 of yacc.c  */
#line 737 "glsl_parser.yy"
    { (yyval.n) = ast_add_assign; }
    break;

  case 102:
/* Line 1787 of yacc.c  */
#line 738 "glsl_parser.yy"
    { (yyval.n) = ast_sub_assign; }
    break;

  case 103:
/* Line 1787 of yacc.c  */
#line 739 "glsl_parser.yy"
    { (yyval.n) = ast_ls_assign; }
    break;

  case 104:
/* Line 1787 of yacc.c  */
#line 740 "glsl_parser.yy"
    { (yyval.n) = ast_rs_assign; }
    break;

  case 105:
/* Line 1787 of yacc.c  */
#line 741 "glsl_parser.yy"
    { (yyval.n) = ast_and_assign; }
    break;

  case 106:
/* Line 1787 of yacc.c  */
#line 742 "glsl_parser.yy"
    { (yyval.n) = ast_xor_assign; }
    break;

  case 107:
/* Line 1787 of yacc.c  */
#line 743 "glsl_parser.yy"
    { (yyval.n) = ast_or_assign; }
    break;

  case 108:
/* Line 1787 of yacc.c  */
#line 748 "glsl_parser.yy"
    {
	   (yyval.expression) = (yyvsp[(1) - (1)].expression);
	}
    break;

  case 109:
/* Line 1787 of yacc.c  */
#line 752 "glsl_parser.yy"
    {
	   void *ctx = state;
	   if ((yyvsp[(1) - (3)].expression)->oper != ast_sequence) {
	      (yyval.expression) = new(ctx) ast_expression(ast_sequence, NULL, NULL, NULL);
	      (yyval.expression)->set_location(yylloc);
	      (yyval.expression)->expressions.push_tail(& (yyvsp[(1) - (3)].expression)->link);
	   } else {
	      (yyval.expression) = (yyvsp[(1) - (3)].expression);
	   }

	   (yyval.expression)->expressions.push_tail(& (yyvsp[(3) - (3)].expression)->link);
	}
    break;

  case 111:
/* Line 1787 of yacc.c  */
#line 772 "glsl_parser.yy"
    {
	   state->symbols->pop_scope();
	   (yyval.node) = (yyvsp[(1) - (2)].function);
	}
    break;

  case 112:
/* Line 1787 of yacc.c  */
#line 777 "glsl_parser.yy"
    {
	   (yyval.node) = (yyvsp[(1) - (2)].declarator_list);
	}
    break;

  case 113:
/* Line 1787 of yacc.c  */
#line 781 "glsl_parser.yy"
    {
	   (yyvsp[(3) - (4)].type_specifier)->precision = (yyvsp[(2) - (4)].n);
	   (yyvsp[(3) - (4)].type_specifier)->is_precision_statement = true;
	   (yyval.node) = (yyvsp[(3) - (4)].type_specifier);
	}
    break;

  case 114:
/* Line 1787 of yacc.c  */
#line 787 "glsl_parser.yy"
    {
	   (yyval.node) = (yyvsp[(1) - (1)].node);
	}
    break;

  case 118:
/* Line 1787 of yacc.c  */
#line 803 "glsl_parser.yy"
    {
	   (yyval.function) = (yyvsp[(1) - (2)].function);
	   (yyval.function)->parameters.push_tail(& (yyvsp[(2) - (2)].parameter_declarator)->link);
	}
    break;

  case 119:
/* Line 1787 of yacc.c  */
#line 808 "glsl_parser.yy"
    {
	   (yyval.function) = (yyvsp[(1) - (3)].function);
	   (yyval.function)->parameters.push_tail(& (yyvsp[(3) - (3)].parameter_declarator)->link);
	}
    break;

  case 120:
/* Line 1787 of yacc.c  */
#line 816 "glsl_parser.yy"
    {
	   void *ctx = state;
	   (yyval.function) = new(ctx) ast_function();
	   (yyval.function)->set_location(yylloc);
	   (yyval.function)->return_type = (yyvsp[(1) - (3)].fully_specified_type);
	   (yyval.function)->identifier = (yyvsp[(2) - (3)].identifier);

	   state->symbols->add_function(new(state) ir_function((yyvsp[(2) - (3)].identifier)));
	   state->symbols->push_scope();
	}
    break;

  case 121:
/* Line 1787 of yacc.c  */
#line 830 "glsl_parser.yy"
    {
	   void *ctx = state;
	   (yyval.parameter_declarator) = new(ctx) ast_parameter_declarator();
	   (yyval.parameter_declarator)->set_location(yylloc);
	   (yyval.parameter_declarator)->type = new(ctx) ast_fully_specified_type();
	   (yyval.parameter_declarator)->type->set_location(yylloc);
	   (yyval.parameter_declarator)->type->specifier = (yyvsp[(1) - (2)].type_specifier);
	   (yyval.parameter_declarator)->identifier = (yyvsp[(2) - (2)].identifier);
	}
    break;

  case 122:
/* Line 1787 of yacc.c  */
#line 840 "glsl_parser.yy"
    {
	   void *ctx = state;
	   (yyval.parameter_declarator) = new(ctx) ast_parameter_declarator();
	   (yyval.parameter_declarator)->set_location(yylloc);
	   (yyval.parameter_declarator)->type = new(ctx) ast_fully_specified_type();
	   (yyval.parameter_declarator)->type->set_location(yylloc);
	   (yyval.parameter_declarator)->type->specifier = (yyvsp[(1) - (5)].type_specifier);
	   (yyval.parameter_declarator)->identifier = (yyvsp[(2) - (5)].identifier);
	   (yyval.parameter_declarator)->is_array = true;
	   (yyval.parameter_declarator)->array_size = (yyvsp[(4) - (5)].expression);
	}
    break;

  case 123:
/* Line 1787 of yacc.c  */
#line 855 "glsl_parser.yy"
    {
	   (yyvsp[(1) - (3)].type_qualifier).flags.i |= (yyvsp[(2) - (3)].type_qualifier).flags.i;

	   (yyval.parameter_declarator) = (yyvsp[(3) - (3)].parameter_declarator);
	   (yyval.parameter_declarator)->type->qualifier = (yyvsp[(1) - (3)].type_qualifier);
	}
    break;

  case 124:
/* Line 1787 of yacc.c  */
#line 862 "glsl_parser.yy"
    {
	   (yyval.parameter_declarator) = (yyvsp[(2) - (2)].parameter_declarator);
	   (yyval.parameter_declarator)->type->qualifier = (yyvsp[(1) - (2)].type_qualifier);
	}
    break;

  case 125:
/* Line 1787 of yacc.c  */
#line 867 "glsl_parser.yy"
    {
	   void *ctx = state;
	   (yyvsp[(1) - (3)].type_qualifier).flags.i |= (yyvsp[(2) - (3)].type_qualifier).flags.i;

	   (yyval.parameter_declarator) = new(ctx) ast_parameter_declarator();
	   (yyval.parameter_declarator)->set_location(yylloc);
	   (yyval.parameter_declarator)->type = new(ctx) ast_fully_specified_type();
	   (yyval.parameter_declarator)->type->qualifier = (yyvsp[(1) - (3)].type_qualifier);
	   (yyval.parameter_declarator)->type->specifier = (yyvsp[(3) - (3)].type_specifier);
	}
    break;

  case 126:
/* Line 1787 of yacc.c  */
#line 878 "glsl_parser.yy"
    {
	   void *ctx = state;
	   (yyval.parameter_declarator) = new(ctx) ast_parameter_declarator();
	   (yyval.parameter_declarator)->set_location(yylloc);
	   (yyval.parameter_declarator)->type = new(ctx) ast_fully_specified_type();
	   (yyval.parameter_declarator)->type->qualifier = (yyvsp[(1) - (2)].type_qualifier);
	   (yyval.parameter_declarator)->type->specifier = (yyvsp[(2) - (2)].type_specifier);
	}
    break;

  case 127:
/* Line 1787 of yacc.c  */
#line 890 "glsl_parser.yy"
    {
	   memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
	}
    break;

  case 128:
/* Line 1787 of yacc.c  */
#line 894 "glsl_parser.yy"
    {
	   memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
	   (yyval.type_qualifier).flags.q.in = 1;
	}
    break;

  case 129:
/* Line 1787 of yacc.c  */
#line 899 "glsl_parser.yy"
    {
	   memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
	   (yyval.type_qualifier).flags.q.out = 1;
	}
    break;

  case 130:
/* Line 1787 of yacc.c  */
#line 904 "glsl_parser.yy"
    {
	   memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
	   (yyval.type_qualifier).flags.q.in = 1;
	   (yyval.type_qualifier).flags.q.out = 1;
	}
    break;

  case 133:
/* Line 1787 of yacc.c  */
#line 918 "glsl_parser.yy"
    {
	   void *ctx = state;
	   ast_declaration *decl = new(ctx) ast_declaration((yyvsp[(3) - (3)].identifier), false, NULL, NULL);
	   decl->set_location(yylloc);

	   (yyval.declarator_list) = (yyvsp[(1) - (3)].declarator_list);
	   (yyval.declarator_list)->declarations.push_tail(&decl->link);
	   state->symbols->add_variable(new(state) ir_variable(NULL, (yyvsp[(3) - (3)].identifier), ir_var_auto));
	}
    break;

  case 134:
/* Line 1787 of yacc.c  */
#line 928 "glsl_parser.yy"
    {
	   void *ctx = state;
	   ast_declaration *decl = new(ctx) ast_declaration((yyvsp[(3) - (5)].identifier), true, NULL, NULL);
	   decl->set_location(yylloc);

	   (yyval.declarator_list) = (yyvsp[(1) - (5)].declarator_list);
	   (yyval.declarator_list)->declarations.push_tail(&decl->link);
	   state->symbols->add_variable(new(state) ir_variable(NULL, (yyvsp[(3) - (5)].identifier), ir_var_auto));
	}
    break;

  case 135:
/* Line 1787 of yacc.c  */
#line 938 "glsl_parser.yy"
    {
	   void *ctx = state;
	   ast_declaration *decl = new(ctx) ast_declaration((yyvsp[(3) - (6)].identifier), true, (yyvsp[(5) - (6)].expression), NULL);
	   decl->set_location(yylloc);

	   (yyval.declarator_list) = (yyvsp[(1) - (6)].declarator_list);
	   (yyval.declarator_list)->declarations.push_tail(&decl->link);
	   state->symbols->add_variable(new(state) ir_variable(NULL, (yyvsp[(3) - (6)].identifier), ir_var_auto));
	}
    break;

  case 136:
/* Line 1787 of yacc.c  */
#line 948 "glsl_parser.yy"
    {
	   void *ctx = state;
	   ast_declaration *decl = new(ctx) ast_declaration((yyvsp[(3) - (7)].identifier), true, NULL, (yyvsp[(7) - (7)].expression));
	   decl->set_location(yylloc);

	   (yyval.declarator_list) = (yyvsp[(1) - (7)].declarator_list);
	   (yyval.declarator_list)->declarations.push_tail(&decl->link);
	   state->symbols->add_variable(new(state) ir_variable(NULL, (yyvsp[(3) - (7)].identifier), ir_var_auto));
	}
    break;

  case 137:
/* Line 1787 of yacc.c  */
#line 958 "glsl_parser.yy"
    {
	   void *ctx = state;
	   ast_declaration *decl = new(ctx) ast_declaration((yyvsp[(3) - (8)].identifier), true, (yyvsp[(5) - (8)].expression), (yyvsp[(8) - (8)].expression));
	   decl->set_location(yylloc);

	   (yyval.declarator_list) = (yyvsp[(1) - (8)].declarator_list);
	   (yyval.declarator_list)->declarations.push_tail(&decl->link);
	   state->symbols->add_variable(new(state) ir_variable(NULL, (yyvsp[(3) - (8)].identifier), ir_var_auto));
	}
    break;

  case 138:
/* Line 1787 of yacc.c  */
#line 968 "glsl_parser.yy"
    {
	   void *ctx = state;
	   ast_declaration *decl = new(ctx) ast_declaration((yyvsp[(3) - (5)].identifier), false, NULL, (yyvsp[(5) - (5)].expression));
	   decl->set_location(yylloc);

	   (yyval.declarator_list) = (yyvsp[(1) - (5)].declarator_list);
	   (yyval.declarator_list)->declarations.push_tail(&decl->link);
	   state->symbols->add_variable(new(state) ir_variable(NULL, (yyvsp[(3) - (5)].identifier), ir_var_auto));
	}
    break;

  case 139:
/* Line 1787 of yacc.c  */
#line 982 "glsl_parser.yy"
    {
	   void *ctx = state;
	   /* Empty declaration list is valid. */
	   (yyval.declarator_list) = new(ctx) ast_declarator_list((yyvsp[(1) - (1)].fully_specified_type));
	   (yyval.declarator_list)->set_location(yylloc);
	}
    break;

  case 140:
/* Line 1787 of yacc.c  */
#line 989 "glsl_parser.yy"
    {
	   void *ctx = state;
	   ast_declaration *decl = new(ctx) ast_declaration((yyvsp[(2) - (2)].identifier), false, NULL, NULL);

	   (yyval.declarator_list) = new(ctx) ast_declarator_list((yyvsp[(1) - (2)].fully_specified_type));
	   (yyval.declarator_list)->set_location(yylloc);
	   (yyval.declarator_list)->declarations.push_tail(&decl->link);
	}
    break;

  case 141:
/* Line 1787 of yacc.c  */
#line 998 "glsl_parser.yy"
    {
	   void *ctx = state;
	   ast_declaration *decl = new(ctx) ast_declaration((yyvsp[(2) - (4)].identifier), true, NULL, NULL);

	   (yyval.declarator_list) = new(ctx) ast_declarator_list((yyvsp[(1) - (4)].fully_specified_type));
	   (yyval.declarator_list)->set_location(yylloc);
	   (yyval.declarator_list)->declarations.push_tail(&decl->link);
	}
    break;

  case 142:
/* Line 1787 of yacc.c  */
#line 1007 "glsl_parser.yy"
    {
	   void *ctx = state;
	   ast_declaration *decl = new(ctx) ast_declaration((yyvsp[(2) - (5)].identifier), true, (yyvsp[(4) - (5)].expression), NULL);

	   (yyval.declarator_list) = new(ctx) ast_declarator_list((yyvsp[(1) - (5)].fully_specified_type));
	   (yyval.declarator_list)->set_location(yylloc);
	   (yyval.declarator_list)->declarations.push_tail(&decl->link);
	}
    break;

  case 143:
/* Line 1787 of yacc.c  */
#line 1016 "glsl_parser.yy"
    {
	   void *ctx = state;
	   ast_declaration *decl = new(ctx) ast_declaration((yyvsp[(2) - (6)].identifier), true, NULL, (yyvsp[(6) - (6)].expression));

	   (yyval.declarator_list) = new(ctx) ast_declarator_list((yyvsp[(1) - (6)].fully_specified_type));
	   (yyval.declarator_list)->set_location(yylloc);
	   (yyval.declarator_list)->declarations.push_tail(&decl->link);
	}
    break;

  case 144:
/* Line 1787 of yacc.c  */
#line 1025 "glsl_parser.yy"
    {
	   void *ctx = state;
	   ast_declaration *decl = new(ctx) ast_declaration((yyvsp[(2) - (7)].identifier), true, (yyvsp[(4) - (7)].expression), (yyvsp[(7) - (7)].expression));

	   (yyval.declarator_list) = new(ctx) ast_declarator_list((yyvsp[(1) - (7)].fully_specified_type));
	   (yyval.declarator_list)->set_location(yylloc);
	   (yyval.declarator_list)->declarations.push_tail(&decl->link);
	}
    break;

  case 145:
/* Line 1787 of yacc.c  */
#line 1034 "glsl_parser.yy"
    {
	   void *ctx = state;
	   ast_declaration *decl = new(ctx) ast_declaration((yyvsp[(2) - (4)].identifier), false, NULL, (yyvsp[(4) - (4)].expression));

	   (yyval.declarator_list) = new(ctx) ast_declarator_list((yyvsp[(1) - (4)].fully_specified_type));
	   (yyval.declarator_list)->set_location(yylloc);
	   (yyval.declarator_list)->declarations.push_tail(&decl->link);
	}
    break;

  case 146:
/* Line 1787 of yacc.c  */
#line 1043 "glsl_parser.yy"
    {
	   void *ctx = state;
	   ast_declaration *decl = new(ctx) ast_declaration((yyvsp[(2) - (2)].identifier), false, NULL, NULL);

	   (yyval.declarator_list) = new(ctx) ast_declarator_list(NULL);
	   (yyval.declarator_list)->set_location(yylloc);
	   (yyval.declarator_list)->invariant = true;

	   (yyval.declarator_list)->declarations.push_tail(&decl->link);
	}
    break;

  case 147:
/* Line 1787 of yacc.c  */
#line 1057 "glsl_parser.yy"
    {
	   void *ctx = state;
	   (yyval.fully_specified_type) = new(ctx) ast_fully_specified_type();
	   (yyval.fully_specified_type)->set_location(yylloc);
	   (yyval.fully_specified_type)->specifier = (yyvsp[(1) - (1)].type_specifier);
	}
    break;

  case 148:
/* Line 1787 of yacc.c  */
#line 1064 "glsl_parser.yy"
    {
	   void *ctx = state;
	   (yyval.fully_specified_type) = new(ctx) ast_fully_specified_type();
	   (yyval.fully_specified_type)->set_location(yylloc);
	   (yyval.fully_specified_type)->qualifier = (yyvsp[(1) - (2)].type_qualifier);
	   (yyval.fully_specified_type)->specifier = (yyvsp[(2) - (2)].type_specifier);
	}
    break;

  case 149:
/* Line 1787 of yacc.c  */
#line 1075 "glsl_parser.yy"
    {
	  (yyval.type_qualifier) = (yyvsp[(3) - (4)].type_qualifier);
	}
    break;

  case 151:
/* Line 1787 of yacc.c  */
#line 1083 "glsl_parser.yy"
    {
	   (yyval.type_qualifier) = (yyvsp[(1) - (3)].type_qualifier);
	   if (!(yyval.type_qualifier).merge_qualifier(& (yylsp[(3) - (3)]), state, (yyvsp[(3) - (3)].type_qualifier))) {
	      YYERROR;
	   }
	}
    break;

  case 152:
/* Line 1787 of yacc.c  */
#line 1092 "glsl_parser.yy"
    { (yyval.n) = (yyvsp[(1) - (1)].n); }
    break;

  case 153:
/* Line 1787 of yacc.c  */
#line 1093 "glsl_parser.yy"
    { (yyval.n) = (yyvsp[(1) - (1)].n); }
    break;

  case 154:
/* Line 1787 of yacc.c  */
#line 1098 "glsl_parser.yy"
    {
	   memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));

	   /* Layout qualifiers for ARB_fragment_coord_conventions. */
	   if (!(yyval.type_qualifier).flags.i && state->ARB_fragment_coord_conventions_enable) {
	      if (strcmp((yyvsp[(1) - (1)].identifier), "origin_upper_left") == 0) {
		 (yyval.type_qualifier).flags.q.origin_upper_left = 1;
	      } else if (strcmp((yyvsp[(1) - (1)].identifier), "pixel_center_integer") == 0) {
		 (yyval.type_qualifier).flags.q.pixel_center_integer = 1;
	      }

	      if ((yyval.type_qualifier).flags.i && state->ARB_fragment_coord_conventions_warn) {
		 _mesa_glsl_warning(& (yylsp[(1) - (1)]), state,
				    "GL_ARB_fragment_coord_conventions layout "
				    "identifier `%s' used\n", (yyvsp[(1) - (1)].identifier));
	      }
	   }

	   /* Layout qualifiers for AMD/ARB_conservative_depth. */
	   if (!(yyval.type_qualifier).flags.i &&
	       (state->AMD_conservative_depth_enable ||
	        state->ARB_conservative_depth_enable)) {
	      if (strcmp((yyvsp[(1) - (1)].identifier), "depth_any") == 0) {
	         (yyval.type_qualifier).flags.q.depth_any = 1;
	      } else if (strcmp((yyvsp[(1) - (1)].identifier), "depth_greater") == 0) {
	         (yyval.type_qualifier).flags.q.depth_greater = 1;
	      } else if (strcmp((yyvsp[(1) - (1)].identifier), "depth_less") == 0) {
	         (yyval.type_qualifier).flags.q.depth_less = 1;
	      } else if (strcmp((yyvsp[(1) - (1)].identifier), "depth_unchanged") == 0) {
	         (yyval.type_qualifier).flags.q.depth_unchanged = 1;
	      }
	
	      if ((yyval.type_qualifier).flags.i && state->AMD_conservative_depth_warn) {
	         _mesa_glsl_warning(& (yylsp[(1) - (1)]), state,
	                            "GL_AMD_conservative_depth "
	                            "layout qualifier `%s' is used\n", (yyvsp[(1) - (1)].identifier));
	      }
	      if ((yyval.type_qualifier).flags.i && state->ARB_conservative_depth_warn) {
	         _mesa_glsl_warning(& (yylsp[(1) - (1)]), state,
	                            "GL_ARB_conservative_depth "
	                            "layout qualifier `%s' is used\n", (yyvsp[(1) - (1)].identifier));
	      }
	   }

	   /* See also uniform_block_layout_qualifier. */
	   if (!(yyval.type_qualifier).flags.i && state->ARB_uniform_buffer_object_enable) {
	      if (strcmp((yyvsp[(1) - (1)].identifier), "std140") == 0) {
	         (yyval.type_qualifier).flags.q.std140 = 1;
	      } else if (strcmp((yyvsp[(1) - (1)].identifier), "shared") == 0) {
	         (yyval.type_qualifier).flags.q.shared = 1;
	      } else if (strcmp((yyvsp[(1) - (1)].identifier), "column_major") == 0) {
	         (yyval.type_qualifier).flags.q.column_major = 1;
	      } else if (strcmp((yyvsp[(1) - (1)].identifier), "row_major") == 0) {
	         (yyval.type_qualifier).flags.q.row_major = 1;
	      }

	      if ((yyval.type_qualifier).flags.i && state->ARB_uniform_buffer_object_warn) {
	         _mesa_glsl_warning(& (yylsp[(1) - (1)]), state,
	                            "#version 140 / GL_ARB_uniform_buffer_object "
	                            "layout qualifier `%s' is used\n", (yyvsp[(1) - (1)].identifier));
	      }
	   }

	   if (!(yyval.type_qualifier).flags.i) {
	      _mesa_glsl_error(& (yylsp[(1) - (1)]), state, "unrecognized layout identifier "
			       "`%s'\n", (yyvsp[(1) - (1)].identifier));
	      YYERROR;
	   }
	}
    break;

  case 155:
/* Line 1787 of yacc.c  */
#line 1168 "glsl_parser.yy"
    {
	   memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));

	   if (state->ARB_explicit_attrib_location_enable) {
	      /* FINISHME: Handle 'index' once GL_ARB_blend_func_exteneded and
	       * FINISHME: GLSL 1.30 (or later) are supported.
	       */
	      if (strcmp("location", (yyvsp[(1) - (3)].identifier)) == 0) {
		 (yyval.type_qualifier).flags.q.explicit_location = 1;

		 if ((yyvsp[(3) - (3)].n) >= 0) {
		    (yyval.type_qualifier).location = (yyvsp[(3) - (3)].n);
		 } else {
		    _mesa_glsl_error(& (yylsp[(3) - (3)]), state,
				     "invalid location %d specified\n", (yyvsp[(3) - (3)].n));
		    YYERROR;
		 }
	      }

	      if (strcmp("index", (yyvsp[(1) - (3)].identifier)) == 0) {
		 (yyval.type_qualifier).flags.q.explicit_index = 1;

		 if ((yyvsp[(3) - (3)].n) >= 0) {
		    (yyval.type_qualifier).index = (yyvsp[(3) - (3)].n);
		 } else {
		    _mesa_glsl_error(& (yylsp[(3) - (3)]), state,
		                     "invalid index %d specified\n", (yyvsp[(3) - (3)].n));
                    YYERROR;
                 }
              }
	   }

	   /* If the identifier didn't match any known layout identifiers,
	    * emit an error.
	    */
	   if (!(yyval.type_qualifier).flags.i) {
	      _mesa_glsl_error(& (yylsp[(1) - (3)]), state, "unrecognized layout identifier "
			       "`%s'\n", (yyvsp[(1) - (3)].identifier));
	      YYERROR;
	   } else if (state->ARB_explicit_attrib_location_warn) {
	      _mesa_glsl_warning(& (yylsp[(1) - (3)]), state,
				 "GL_ARB_explicit_attrib_location layout "
				 "identifier `%s' used\n", (yyvsp[(1) - (3)].identifier));
	   }
	}
    break;

  case 156:
/* Line 1787 of yacc.c  */
#line 1214 "glsl_parser.yy"
    {
	   (yyval.type_qualifier) = (yyvsp[(1) - (1)].type_qualifier);
	   /* Layout qualifiers for ARB_uniform_buffer_object. */
	   if (!state->ARB_uniform_buffer_object_enable) {
	      _mesa_glsl_error(& (yylsp[(1) - (1)]), state,
			       "#version 140 / GL_ARB_uniform_buffer_object "
			       "layout qualifier `%s' is used\n", (yyvsp[(1) - (1)].type_qualifier));
	   } else if (state->ARB_uniform_buffer_object_warn) {
	      _mesa_glsl_warning(& (yylsp[(1) - (1)]), state,
				 "#version 140 / GL_ARB_uniform_buffer_object "
				 "layout qualifier `%s' is used\n", (yyvsp[(1) - (1)].type_qualifier));
	   }
	}
    break;

  case 157:
/* Line 1787 of yacc.c  */
#line 1236 "glsl_parser.yy"
    {
	   memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
	   (yyval.type_qualifier).flags.q.row_major = 1;
	}
    break;

  case 158:
/* Line 1787 of yacc.c  */
#line 1241 "glsl_parser.yy"
    {
	   memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
	   (yyval.type_qualifier).flags.q.packed = 1;
	}
    break;

  case 159:
/* Line 1787 of yacc.c  */
#line 1249 "glsl_parser.yy"
    {
	   memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
	   (yyval.type_qualifier).flags.q.smooth = 1;
	}
    break;

  case 160:
/* Line 1787 of yacc.c  */
#line 1254 "glsl_parser.yy"
    {
	   memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
	   (yyval.type_qualifier).flags.q.flat = 1;
	}
    break;

  case 161:
/* Line 1787 of yacc.c  */
#line 1259 "glsl_parser.yy"
    {
	   memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
	   (yyval.type_qualifier).flags.q.noperspective = 1;
	}
    break;

  case 162:
/* Line 1787 of yacc.c  */
#line 1267 "glsl_parser.yy"
    {
	   memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
	   (yyval.type_qualifier).flags.q.constant = 1;
	}
    break;

  case 165:
/* Line 1787 of yacc.c  */
#line 1277 "glsl_parser.yy"
    {
	   (yyval.type_qualifier) = (yyvsp[(1) - (2)].type_qualifier);
	   (yyval.type_qualifier).flags.i |= (yyvsp[(2) - (2)].type_qualifier).flags.i;
	}
    break;

  case 167:
/* Line 1787 of yacc.c  */
#line 1283 "glsl_parser.yy"
    {
	   (yyval.type_qualifier) = (yyvsp[(1) - (2)].type_qualifier);
	   (yyval.type_qualifier).flags.i |= (yyvsp[(2) - (2)].type_qualifier).flags.i;
	}
    break;

  case 168:
/* Line 1787 of yacc.c  */
#line 1288 "glsl_parser.yy"
    {
	   (yyval.type_qualifier) = (yyvsp[(2) - (2)].type_qualifier);
	   (yyval.type_qualifier).flags.q.invariant = 1;
	}
    break;

  case 169:
/* Line 1787 of yacc.c  */
#line 1293 "glsl_parser.yy"
    {
	   (yyval.type_qualifier) = (yyvsp[(2) - (3)].type_qualifier);
	   (yyval.type_qualifier).flags.i |= (yyvsp[(3) - (3)].type_qualifier).flags.i;
	   (yyval.type_qualifier).flags.q.invariant = 1;
	}
    break;

  case 170:
/* Line 1787 of yacc.c  */
#line 1299 "glsl_parser.yy"
    {
	   memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
	   (yyval.type_qualifier).flags.q.invariant = 1;
	}
    break;

  case 171:
/* Line 1787 of yacc.c  */
#line 1307 "glsl_parser.yy"
    {
	   memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
	   (yyval.type_qualifier).flags.q.constant = 1;
	}
    break;

  case 172:
/* Line 1787 of yacc.c  */
#line 1312 "glsl_parser.yy"
    {
	   memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
	   (yyval.type_qualifier).flags.q.attribute = 1;
	}
    break;

  case 173:
/* Line 1787 of yacc.c  */
#line 1317 "glsl_parser.yy"
    {
	   memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
	   (yyval.type_qualifier).flags.q.varying = 1;
	}
    break;

  case 174:
/* Line 1787 of yacc.c  */
#line 1322 "glsl_parser.yy"
    {
	   memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
	   (yyval.type_qualifier).flags.q.centroid = 1;
	   (yyval.type_qualifier).flags.q.varying = 1;
	}
    break;

  case 175:
/* Line 1787 of yacc.c  */
#line 1328 "glsl_parser.yy"
    {
	   memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
	   (yyval.type_qualifier).flags.q.in = 1;
	}
    break;

  case 176:
/* Line 1787 of yacc.c  */
#line 1333 "glsl_parser.yy"
    {
	   memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
	   (yyval.type_qualifier).flags.q.out = 1;
	}
    break;

  case 177:
/* Line 1787 of yacc.c  */
#line 1338 "glsl_parser.yy"
    {
	   memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
	   (yyval.type_qualifier).flags.q.centroid = 1; (yyval.type_qualifier).flags.q.in = 1;
	}
    break;

  case 178:
/* Line 1787 of yacc.c  */
#line 1343 "glsl_parser.yy"
    {
	   memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
	   (yyval.type_qualifier).flags.q.centroid = 1; (yyval.type_qualifier).flags.q.out = 1;
	}
    break;

  case 179:
/* Line 1787 of yacc.c  */
#line 1348 "glsl_parser.yy"
    {
	   memset(& (yyval.type_qualifier), 0, sizeof((yyval.type_qualifier)));
	   (yyval.type_qualifier).flags.q.uniform = 1;
	}
    break;

  case 180:
/* Line 1787 of yacc.c  */
#line 1356 "glsl_parser.yy"
    {
	   (yyval.type_specifier) = (yyvsp[(1) - (1)].type_specifier);
	}
    break;

  case 181:
/* Line 1787 of yacc.c  */
#line 1360 "glsl_parser.yy"
    {
	   (yyval.type_specifier) = (yyvsp[(2) - (2)].type_specifier);
	   (yyval.type_specifier)->precision = (yyvsp[(1) - (2)].n);
	}
    break;

  case 183:
/* Line 1787 of yacc.c  */
#line 1369 "glsl_parser.yy"
    {
	   (yyval.type_specifier) = (yyvsp[(1) - (3)].type_specifier);
	   (yyval.type_specifier)->is_array = true;
	   (yyval.type_specifier)->array_size = NULL;
	}
    break;

  case 184:
/* Line 1787 of yacc.c  */
#line 1375 "glsl_parser.yy"
    {
	   (yyval.type_specifier) = (yyvsp[(1) - (4)].type_specifier);
	   (yyval.type_specifier)->is_array = true;
	   (yyval.type_specifier)->array_size = (yyvsp[(3) - (4)].expression);
	}
    break;

  case 185:
/* Line 1787 of yacc.c  */
#line 1384 "glsl_parser.yy"
    {
	   void *ctx = state;
	   (yyval.type_specifier) = new(ctx) ast_type_specifier((yyvsp[(1) - (1)].identifier));
	   (yyval.type_specifier)->set_location(yylloc);
	}
    break;

  case 186:
/* Line 1787 of yacc.c  */
#line 1390 "glsl_parser.yy"
    {
	   void *ctx = state;
	   (yyval.type_specifier) = new(ctx) ast_type_specifier((yyvsp[(1) - (1)].struct_specifier));
	   (yyval.type_specifier)->set_location(yylloc);
	}
    break;

  case 187:
/* Line 1787 of yacc.c  */
#line 1396 "glsl_parser.yy"
    {
	   void *ctx = state;
	   (yyval.type_specifier) = new(ctx) ast_type_specifier((yyvsp[(1) - (1)].identifier));
	   (yyval.type_specifier)->set_location(yylloc);
	}
    break;

  case 188:
/* Line 1787 of yacc.c  */
#line 1404 "glsl_parser.yy"
    { (yyval.identifier) = "void"; }
    break;

  case 189:
/* Line 1787 of yacc.c  */
#line 1405 "glsl_parser.yy"
    { (yyval.identifier) = "float"; }
    break;

  case 190:
/* Line 1787 of yacc.c  */
#line 1406 "glsl_parser.yy"
    { (yyval.identifier) = "int"; }
    break;

  case 191:
/* Line 1787 of yacc.c  */
#line 1407 "glsl_parser.yy"
    { (yyval.identifier) = "uint"; }
    break;

  case 192:
/* Line 1787 of yacc.c  */
#line 1408 "glsl_parser.yy"
    { (yyval.identifier) = "bool"; }
    break;

  case 193:
/* Line 1787 of yacc.c  */
#line 1409 "glsl_parser.yy"
    { (yyval.identifier) = "vec2"; }
    break;

  case 194:
/* Line 1787 of yacc.c  */
#line 1410 "glsl_parser.yy"
    { (yyval.identifier) = "vec3"; }
    break;

  case 195:
/* Line 1787 of yacc.c  */
#line 1411 "glsl_parser.yy"
    { (yyval.identifier) = "vec4"; }
    break;

  case 196:
/* Line 1787 of yacc.c  */
#line 1412 "glsl_parser.yy"
    { (yyval.identifier) = "bvec2"; }
    break;

  case 197:
/* Line 1787 of yacc.c  */
#line 1413 "glsl_parser.yy"
    { (yyval.identifier) = "bvec3"; }
    break;

  case 198:
/* Line 1787 of yacc.c  */
#line 1414 "glsl_parser.yy"
    { (yyval.identifier) = "bvec4"; }
    break;

  case 199:
/* Line 1787 of yacc.c  */
#line 1415 "glsl_parser.yy"
    { (yyval.identifier) = "ivec2"; }
    break;

  case 200:
/* Line 1787 of yacc.c  */
#line 1416 "glsl_parser.yy"
    { (yyval.identifier) = "ivec3"; }
    break;

  case 201:
/* Line 1787 of yacc.c  */
#line 1417 "glsl_parser.yy"
    { (yyval.identifier) = "ivec4"; }
    break;

  case 202:
/* Line 1787 of yacc.c  */
#line 1418 "glsl_parser.yy"
    { (yyval.identifier) = "uvec2"; }
    break;

  case 203:
/* Line 1787 of yacc.c  */
#line 1419 "glsl_parser.yy"
    { (yyval.identifier) = "uvec3"; }
    break;

  case 204:
/* Line 1787 of yacc.c  */
#line 1420 "glsl_parser.yy"
    { (yyval.identifier) = "uvec4"; }
    break;

  case 205:
/* Line 1787 of yacc.c  */
#line 1421 "glsl_parser.yy"
    { (yyval.identifier) = "mat2"; }
    break;

  case 206:
/* Line 1787 of yacc.c  */
#line 1422 "glsl_parser.yy"
    { (yyval.identifier) = "mat2x3"; }
    break;

  case 207:
/* Line 1787 of yacc.c  */
#line 1423 "glsl_parser.yy"
    { (yyval.identifier) = "mat2x4"; }
    break;

  case 208:
/* Line 1787 of yacc.c  */
#line 1424 "glsl_parser.yy"
    { (yyval.identifier) = "mat3x2"; }
    break;

  case 209:
/* Line 1787 of yacc.c  */
#line 1425 "glsl_parser.yy"
    { (yyval.identifier) = "mat3"; }
    break;

  case 210:
/* Line 1787 of yacc.c  */
#line 1426 "glsl_parser.yy"
    { (yyval.identifier) = "mat3x4"; }
    break;

  case 211:
/* Line 1787 of yacc.c  */
#line 1427 "glsl_parser.yy"
    { (yyval.identifier) = "mat4x2"; }
    break;

  case 212:
/* Line 1787 of yacc.c  */
#line 1428 "glsl_parser.yy"
    { (yyval.identifier) = "mat4x3"; }
    break;

  case 213:
/* Line 1787 of yacc.c  */
#line 1429 "glsl_parser.yy"
    { (yyval.identifier) = "mat4"; }
    break;

  case 214:
/* Line 1787 of yacc.c  */
#line 1430 "glsl_parser.yy"
    { (yyval.identifier) = "sampler1D"; }
    break;

  case 215:
/* Line 1787 of yacc.c  */
#line 1431 "glsl_parser.yy"
    { (yyval.identifier) = "sampler2D"; }
    break;

  case 216:
/* Line 1787 of yacc.c  */
#line 1432 "glsl_parser.yy"
    { (yyval.identifier) = "sampler2DRect"; }
    break;

  case 217:
/* Line 1787 of yacc.c  */
#line 1433 "glsl_parser.yy"
    { (yyval.identifier) = "sampler3D"; }
    break;

  case 218:
/* Line 1787 of yacc.c  */
#line 1434 "glsl_parser.yy"
    { (yyval.identifier) = "samplerCube"; }
    break;

  case 219:
/* Line 1787 of yacc.c  */
#line 1435 "glsl_parser.yy"
    { (yyval.identifier) = "samplerExternalOES"; }
    break;

  case 220:
/* Line 1787 of yacc.c  */
#line 1436 "glsl_parser.yy"
    { (yyval.identifier) = "sampler1DShadow"; }
    break;

  case 221:
/* Line 1787 of yacc.c  */
#line 1437 "glsl_parser.yy"
    { (yyval.identifier) = "sampler2DShadow"; }
    break;

  case 222:
/* Line 1787 of yacc.c  */
#line 1438 "glsl_parser.yy"
    { (yyval.identifier) = "sampler2DRectShadow"; }
    break;

  case 223:
/* Line 1787 of yacc.c  */
#line 1439 "glsl_parser.yy"
    { (yyval.identifier) = "samplerCubeShadow"; }
    break;

  case 224:
/* Line 1787 of yacc.c  */
#line 1440 "glsl_parser.yy"
    { (yyval.identifier) = "sampler1DArray"; }
    break;

  case 225:
/* Line 1787 of yacc.c  */
#line 1441 "glsl_parser.yy"
    { (yyval.identifier) = "sampler2DArray"; }
    break;

  case 226:
/* Line 1787 of yacc.c  */
#line 1442 "glsl_parser.yy"
    { (yyval.identifier) = "sampler1DArrayShadow"; }
    break;

  case 227:
/* Line 1787 of yacc.c  */
#line 1443 "glsl_parser.yy"
    { (yyval.identifier) = "sampler2DArrayShadow"; }
    break;

  case 228:
/* Line 1787 of yacc.c  */
#line 1444 "glsl_parser.yy"
    { (yyval.identifier) = "samplerBuffer"; }
    break;

  case 229:
/* Line 1787 of yacc.c  */
#line 1445 "glsl_parser.yy"
    { (yyval.identifier) = "samplerCubeArray"; }
    break;

  case 230:
/* Line 1787 of yacc.c  */
#line 1446 "glsl_parser.yy"
    { (yyval.identifier) = "samplerCubeArrayShadow"; }
    break;

  case 231:
/* Line 1787 of yacc.c  */
#line 1447 "glsl_parser.yy"
    { (yyval.identifier) = "isampler1D"; }
    break;

  case 232:
/* Line 1787 of yacc.c  */
#line 1448 "glsl_parser.yy"
    { (yyval.identifier) = "isampler2D"; }
    break;

  case 233:
/* Line 1787 of yacc.c  */
#line 1449 "glsl_parser.yy"
    { (yyval.identifier) = "isampler2DRect"; }
    break;

  case 234:
/* Line 1787 of yacc.c  */
#line 1450 "glsl_parser.yy"
    { (yyval.identifier) = "isampler3D"; }
    break;

  case 235:
/* Line 1787 of yacc.c  */
#line 1451 "glsl_parser.yy"
    { (yyval.identifier) = "isamplerCube"; }
    break;

  case 236:
/* Line 1787 of yacc.c  */
#line 1452 "glsl_parser.yy"
    { (yyval.identifier) = "isampler1DArray"; }
    break;

  case 237:
/* Line 1787 of yacc.c  */
#line 1453 "glsl_parser.yy"
    { (yyval.identifier) = "isampler2DArray"; }
    break;

  case 238:
/* Line 1787 of yacc.c  */
#line 1454 "glsl_parser.yy"
    { (yyval.identifier) = "isamplerBuffer"; }
    break;

  case 239:
/* Line 1787 of yacc.c  */
#line 1455 "glsl_parser.yy"
    { (yyval.identifier) = "isamplerCubeArray"; }
    break;

  case 240:
/* Line 1787 of yacc.c  */
#line 1456 "glsl_parser.yy"
    { (yyval.identifier) = "usampler1D"; }
    break;

  case 241:
/* Line 1787 of yacc.c  */
#line 1457 "glsl_parser.yy"
    { (yyval.identifier) = "usampler2D"; }
    break;

  case 242:
/* Line 1787 of yacc.c  */
#line 1458 "glsl_parser.yy"
    { (yyval.identifier) = "usampler2DRect"; }
    break;

  case 243:
/* Line 1787 of yacc.c  */
#line 1459 "glsl_parser.yy"
    { (yyval.identifier) = "usampler3D"; }
    break;

  case 244:
/* Line 1787 of yacc.c  */
#line 1460 "glsl_parser.yy"
    { (yyval.identifier) = "usamplerCube"; }
    break;

  case 245:
/* Line 1787 of yacc.c  */
#line 1461 "glsl_parser.yy"
    { (yyval.identifier) = "usampler1DArray"; }
    break;

  case 246:
/* Line 1787 of yacc.c  */
#line 1462 "glsl_parser.yy"
    { (yyval.identifier) = "usampler2DArray"; }
    break;

  case 247:
/* Line 1787 of yacc.c  */
#line 1463 "glsl_parser.yy"
    { (yyval.identifier) = "usamplerBuffer"; }
    break;

  case 248:
/* Line 1787 of yacc.c  */
#line 1464 "glsl_parser.yy"
    { (yyval.identifier) = "usamplerCubeArray"; }
    break;

  case 249:
/* Line 1787 of yacc.c  */
#line 1468 "glsl_parser.yy"
    {
                     state->check_precision_qualifiers_allowed(&(yylsp[(1) - (1)]));

		     (yyval.n) = ast_precision_high;
		  }
    break;

  case 250:
/* Line 1787 of yacc.c  */
#line 1473 "glsl_parser.yy"
    {
                     state->check_precision_qualifiers_allowed(&(yylsp[(1) - (1)]));

		     (yyval.n) = ast_precision_medium;
		  }
    break;

  case 251:
/* Line 1787 of yacc.c  */
#line 1478 "glsl_parser.yy"
    {
                     state->check_precision_qualifiers_allowed(&(yylsp[(1) - (1)]));

		     (yyval.n) = ast_precision_low;
		  }
    break;

  case 252:
/* Line 1787 of yacc.c  */
#line 1487 "glsl_parser.yy"
    {
	   void *ctx = state;
	   (yyval.struct_specifier) = new(ctx) ast_struct_specifier((yyvsp[(2) - (5)].identifier), (yyvsp[(4) - (5)].declarator_list));
	   (yyval.struct_specifier)->set_location(yylloc);
	   state->symbols->add_type((yyvsp[(2) - (5)].identifier), glsl_type::void_type);
	}
    break;

  case 253:
/* Line 1787 of yacc.c  */
#line 1494 "glsl_parser.yy"
    {
	   void *ctx = state;
	   (yyval.struct_specifier) = new(ctx) ast_struct_specifier(NULL, (yyvsp[(3) - (4)].declarator_list));
	   (yyval.struct_specifier)->set_location(yylloc);
	}
    break;

  case 254:
/* Line 1787 of yacc.c  */
#line 1503 "glsl_parser.yy"
    {
	   (yyval.declarator_list) = (yyvsp[(1) - (1)].declarator_list);
	   (yyvsp[(1) - (1)].declarator_list)->link.self_link();
	}
    break;

  case 255:
/* Line 1787 of yacc.c  */
#line 1508 "glsl_parser.yy"
    {
	   (yyval.declarator_list) = (yyvsp[(1) - (2)].declarator_list);
	   (yyval.declarator_list)->link.insert_before(& (yyvsp[(2) - (2)].declarator_list)->link);
	}
    break;

  case 256:
/* Line 1787 of yacc.c  */
#line 1516 "glsl_parser.yy"
    {
	   void *ctx = state;
	   ast_fully_specified_type *type = new(ctx) ast_fully_specified_type();
	   type->set_location(yylloc);

	   type->specifier = (yyvsp[(1) - (3)].type_specifier);
	   (yyval.declarator_list) = new(ctx) ast_declarator_list(type);
	   (yyval.declarator_list)->set_location(yylloc);

	   (yyval.declarator_list)->declarations.push_degenerate_list_at_head(& (yyvsp[(2) - (3)].declaration)->link);
	}
    break;

  case 257:
/* Line 1787 of yacc.c  */
#line 1531 "glsl_parser.yy"
    {
	   (yyval.declaration) = (yyvsp[(1) - (1)].declaration);
	   (yyvsp[(1) - (1)].declaration)->link.self_link();
	}
    break;

  case 258:
/* Line 1787 of yacc.c  */
#line 1536 "glsl_parser.yy"
    {
	   (yyval.declaration) = (yyvsp[(1) - (3)].declaration);
	   (yyval.declaration)->link.insert_before(& (yyvsp[(3) - (3)].declaration)->link);
	}
    break;

  case 259:
/* Line 1787 of yacc.c  */
#line 1544 "glsl_parser.yy"
    {
	   void *ctx = state;
	   (yyval.declaration) = new(ctx) ast_declaration((yyvsp[(1) - (1)].identifier), false, NULL, NULL);
	   (yyval.declaration)->set_location(yylloc);
	}
    break;

  case 260:
/* Line 1787 of yacc.c  */
#line 1550 "glsl_parser.yy"
    {
	   void *ctx = state;
	   (yyval.declaration) = new(ctx) ast_declaration((yyvsp[(1) - (4)].identifier), true, (yyvsp[(3) - (4)].expression), NULL);
	   (yyval.declaration)->set_location(yylloc);
	}
    break;

  case 263:
/* Line 1787 of yacc.c  */
#line 1568 "glsl_parser.yy"
    { (yyval.node) = (ast_node *) (yyvsp[(1) - (1)].compound_statement); }
    break;

  case 271:
/* Line 1787 of yacc.c  */
#line 1583 "glsl_parser.yy"
    {
	   void *ctx = state;
	   (yyval.compound_statement) = new(ctx) ast_compound_statement(true, NULL);
	   (yyval.compound_statement)->set_location(yylloc);
	}
    break;

  case 272:
/* Line 1787 of yacc.c  */
#line 1589 "glsl_parser.yy"
    {
	   state->symbols->push_scope();
	}
    break;

  case 273:
/* Line 1787 of yacc.c  */
#line 1593 "glsl_parser.yy"
    {
	   void *ctx = state;
	   (yyval.compound_statement) = new(ctx) ast_compound_statement(true, (yyvsp[(3) - (4)].node));
	   (yyval.compound_statement)->set_location(yylloc);
	   state->symbols->pop_scope();
	}
    break;

  case 274:
/* Line 1787 of yacc.c  */
#line 1602 "glsl_parser.yy"
    { (yyval.node) = (ast_node *) (yyvsp[(1) - (1)].compound_statement); }
    break;

  case 276:
/* Line 1787 of yacc.c  */
#line 1608 "glsl_parser.yy"
    {
	   void *ctx = state;
	   (yyval.compound_statement) = new(ctx) ast_compound_statement(false, NULL);
	   (yyval.compound_statement)->set_location(yylloc);
	}
    break;

  case 277:
/* Line 1787 of yacc.c  */
#line 1614 "glsl_parser.yy"
    {
	   void *ctx = state;
	   (yyval.compound_statement) = new(ctx) ast_compound_statement(false, (yyvsp[(2) - (3)].node));
	   (yyval.compound_statement)->set_location(yylloc);
	}
    break;

  case 278:
/* Line 1787 of yacc.c  */
#line 1623 "glsl_parser.yy"
    {
	   if ((yyvsp[(1) - (1)].node) == NULL) {
	      _mesa_glsl_error(& (yylsp[(1) - (1)]), state, "<nil> statement\n");
	      assert((yyvsp[(1) - (1)].node) != NULL);
	   }

	   (yyval.node) = (yyvsp[(1) - (1)].node);
	   (yyval.node)->link.self_link();
	}
    break;

  case 279:
/* Line 1787 of yacc.c  */
#line 1633 "glsl_parser.yy"
    {
	   if ((yyvsp[(2) - (2)].node) == NULL) {
	      _mesa_glsl_error(& (yylsp[(2) - (2)]), state, "<nil> statement\n");
	      assert((yyvsp[(2) - (2)].node) != NULL);
	   }
	   (yyval.node) = (yyvsp[(1) - (2)].node);
	   (yyval.node)->link.insert_before(& (yyvsp[(2) - (2)].node)->link);
	}
    break;

  case 280:
/* Line 1787 of yacc.c  */
#line 1645 "glsl_parser.yy"
    {
	   void *ctx = state;
	   (yyval.node) = new(ctx) ast_expression_statement(NULL);
	   (yyval.node)->set_location(yylloc);
	}
    break;

  case 281:
/* Line 1787 of yacc.c  */
#line 1651 "glsl_parser.yy"
    {
	   void *ctx = state;
	   (yyval.node) = new(ctx) ast_expression_statement((yyvsp[(1) - (2)].expression));
	   (yyval.node)->set_location(yylloc);
	}
    break;

  case 282:
/* Line 1787 of yacc.c  */
#line 1660 "glsl_parser.yy"
    {
	   (yyval.node) = new(state) ast_selection_statement((yyvsp[(3) - (5)].expression), (yyvsp[(5) - (5)].selection_rest_statement).then_statement,
						   (yyvsp[(5) - (5)].selection_rest_statement).else_statement);
	   (yyval.node)->set_location(yylloc);
	}
    break;

  case 283:
/* Line 1787 of yacc.c  */
#line 1669 "glsl_parser.yy"
    {
	   (yyval.selection_rest_statement).then_statement = (yyvsp[(1) - (3)].node);
	   (yyval.selection_rest_statement).else_statement = (yyvsp[(3) - (3)].node);
	}
    break;

  case 284:
/* Line 1787 of yacc.c  */
#line 1674 "glsl_parser.yy"
    {
	   (yyval.selection_rest_statement).then_statement = (yyvsp[(1) - (1)].node);
	   (yyval.selection_rest_statement).else_statement = NULL;
	}
    break;

  case 285:
/* Line 1787 of yacc.c  */
#line 1682 "glsl_parser.yy"
    {
	   (yyval.node) = (ast_node *) (yyvsp[(1) - (1)].expression);
	}
    break;

  case 286:
/* Line 1787 of yacc.c  */
#line 1686 "glsl_parser.yy"
    {
	   void *ctx = state;
	   ast_declaration *decl = new(ctx) ast_declaration((yyvsp[(2) - (4)].identifier), false, NULL, (yyvsp[(4) - (4)].expression));
	   ast_declarator_list *declarator = new(ctx) ast_declarator_list((yyvsp[(1) - (4)].fully_specified_type));
	   decl->set_location(yylloc);
	   declarator->set_location(yylloc);

	   declarator->declarations.push_tail(&decl->link);
	   (yyval.node) = declarator;
	}
    break;

  case 287:
/* Line 1787 of yacc.c  */
#line 1704 "glsl_parser.yy"
    {
	   (yyval.node) = new(state) ast_switch_statement((yyvsp[(3) - (5)].expression), (yyvsp[(5) - (5)].switch_body));
	   (yyval.node)->set_location(yylloc);
	}
    break;

  case 288:
/* Line 1787 of yacc.c  */
#line 1712 "glsl_parser.yy"
    {
	   (yyval.switch_body) = new(state) ast_switch_body(NULL);
	   (yyval.switch_body)->set_location(yylloc);
	}
    break;

  case 289:
/* Line 1787 of yacc.c  */
#line 1717 "glsl_parser.yy"
    {
	   (yyval.switch_body) = new(state) ast_switch_body((yyvsp[(2) - (3)].case_statement_list));
	   (yyval.switch_body)->set_location(yylloc);
	}
    break;

  case 290:
/* Line 1787 of yacc.c  */
#line 1725 "glsl_parser.yy"
    {
	   (yyval.case_label) = new(state) ast_case_label((yyvsp[(2) - (3)].expression));
	   (yyval.case_label)->set_location(yylloc);
	}
    break;

  case 291:
/* Line 1787 of yacc.c  */
#line 1730 "glsl_parser.yy"
    {
	   (yyval.case_label) = new(state) ast_case_label(NULL);
	   (yyval.case_label)->set_location(yylloc);
	}
    break;

  case 292:
/* Line 1787 of yacc.c  */
#line 1738 "glsl_parser.yy"
    {
	   ast_case_label_list *labels = new(state) ast_case_label_list();

	   labels->labels.push_tail(& (yyvsp[(1) - (1)].case_label)->link);
	   (yyval.case_label_list) = labels;
	   (yyval.case_label_list)->set_location(yylloc);
	}
    break;

  case 293:
/* Line 1787 of yacc.c  */
#line 1746 "glsl_parser.yy"
    {
	   (yyval.case_label_list) = (yyvsp[(1) - (2)].case_label_list);
	   (yyval.case_label_list)->labels.push_tail(& (yyvsp[(2) - (2)].case_label)->link);
	}
    break;

  case 294:
/* Line 1787 of yacc.c  */
#line 1754 "glsl_parser.yy"
    {
	   ast_case_statement *stmts = new(state) ast_case_statement((yyvsp[(1) - (2)].case_label_list));
	   stmts->set_location(yylloc);

	   stmts->stmts.push_tail(& (yyvsp[(2) - (2)].node)->link);
	   (yyval.case_statement) = stmts;
	}
    break;

  case 295:
/* Line 1787 of yacc.c  */
#line 1762 "glsl_parser.yy"
    {
	   (yyval.case_statement) = (yyvsp[(1) - (2)].case_statement);
	   (yyval.case_statement)->stmts.push_tail(& (yyvsp[(2) - (2)].node)->link);
	}
    break;

  case 296:
/* Line 1787 of yacc.c  */
#line 1770 "glsl_parser.yy"
    {
	   ast_case_statement_list *cases= new(state) ast_case_statement_list();
	   cases->set_location(yylloc);

	   cases->cases.push_tail(& (yyvsp[(1) - (1)].case_statement)->link);
	   (yyval.case_statement_list) = cases;
	}
    break;

  case 297:
/* Line 1787 of yacc.c  */
#line 1778 "glsl_parser.yy"
    {
	   (yyval.case_statement_list) = (yyvsp[(1) - (2)].case_statement_list);
	   (yyval.case_statement_list)->cases.push_tail(& (yyvsp[(2) - (2)].case_statement)->link);
	}
    break;

  case 298:
/* Line 1787 of yacc.c  */
#line 1786 "glsl_parser.yy"
    {
	   void *ctx = state;
	   (yyval.node) = new(ctx) ast_iteration_statement(ast_iteration_statement::ast_while,
	   					    NULL, (yyvsp[(3) - (5)].node), NULL, (yyvsp[(5) - (5)].node));
	   (yyval.node)->set_location(yylloc);
	}
    break;

  case 299:
/* Line 1787 of yacc.c  */
#line 1793 "glsl_parser.yy"
    {
	   void *ctx = state;
	   (yyval.node) = new(ctx) ast_iteration_statement(ast_iteration_statement::ast_do_while,
						    NULL, (yyvsp[(5) - (7)].expression), NULL, (yyvsp[(2) - (7)].node));
	   (yyval.node)->set_location(yylloc);
	}
    break;

  case 300:
/* Line 1787 of yacc.c  */
#line 1800 "glsl_parser.yy"
    {
	   void *ctx = state;
	   (yyval.node) = new(ctx) ast_iteration_statement(ast_iteration_statement::ast_for,
						    (yyvsp[(3) - (6)].node), (yyvsp[(4) - (6)].for_rest_statement).cond, (yyvsp[(4) - (6)].for_rest_statement).rest, (yyvsp[(6) - (6)].node));
	   (yyval.node)->set_location(yylloc);
	}
    break;

  case 304:
/* Line 1787 of yacc.c  */
#line 1816 "glsl_parser.yy"
    {
	   (yyval.node) = NULL;
	}
    break;

  case 305:
/* Line 1787 of yacc.c  */
#line 1823 "glsl_parser.yy"
    {
	   (yyval.for_rest_statement).cond = (yyvsp[(1) - (2)].node);
	   (yyval.for_rest_statement).rest = NULL;
	}
    break;

  case 306:
/* Line 1787 of yacc.c  */
#line 1828 "glsl_parser.yy"
    {
	   (yyval.for_rest_statement).cond = (yyvsp[(1) - (3)].node);
	   (yyval.for_rest_statement).rest = (yyvsp[(3) - (3)].expression);
	}
    break;

  case 307:
/* Line 1787 of yacc.c  */
#line 1837 "glsl_parser.yy"
    {
	   void *ctx = state;
	   (yyval.node) = new(ctx) ast_jump_statement(ast_jump_statement::ast_continue, NULL);
	   (yyval.node)->set_location(yylloc);
	}
    break;

  case 308:
/* Line 1787 of yacc.c  */
#line 1843 "glsl_parser.yy"
    {
	   void *ctx = state;
	   (yyval.node) = new(ctx) ast_jump_statement(ast_jump_statement::ast_break, NULL);
	   (yyval.node)->set_location(yylloc);
	}
    break;

  case 309:
/* Line 1787 of yacc.c  */
#line 1849 "glsl_parser.yy"
    {
	   void *ctx = state;
	   (yyval.node) = new(ctx) ast_jump_statement(ast_jump_statement::ast_return, NULL);
	   (yyval.node)->set_location(yylloc);
	}
    break;

  case 310:
/* Line 1787 of yacc.c  */
#line 1855 "glsl_parser.yy"
    {
	   void *ctx = state;
	   (yyval.node) = new(ctx) ast_jump_statement(ast_jump_statement::ast_return, (yyvsp[(2) - (3)].expression));
	   (yyval.node)->set_location(yylloc);
	}
    break;

  case 311:
/* Line 1787 of yacc.c  */
#line 1861 "glsl_parser.yy"
    {
	   void *ctx = state;
	   (yyval.node) = new(ctx) ast_jump_statement(ast_jump_statement::ast_discard, NULL);
	   (yyval.node)->set_location(yylloc);
	}
    break;

  case 312:
/* Line 1787 of yacc.c  */
#line 1869 "glsl_parser.yy"
    { (yyval.node) = (yyvsp[(1) - (1)].function_definition); }
    break;

  case 313:
/* Line 1787 of yacc.c  */
#line 1870 "glsl_parser.yy"
    { (yyval.node) = (yyvsp[(1) - (1)].node); }
    break;

  case 314:
/* Line 1787 of yacc.c  */
#line 1871 "glsl_parser.yy"
    { (yyval.node) = NULL; }
    break;

  case 315:
/* Line 1787 of yacc.c  */
#line 1872 "glsl_parser.yy"
    { (yyval.node) = NULL; }
    break;

  case 316:
/* Line 1787 of yacc.c  */
#line 1877 "glsl_parser.yy"
    {
	   void *ctx = state;
	   (yyval.function_definition) = new(ctx) ast_function_definition();
	   (yyval.function_definition)->set_location(yylloc);
	   (yyval.function_definition)->prototype = (yyvsp[(1) - (2)].function);
	   (yyval.function_definition)->body = (yyvsp[(2) - (2)].compound_statement);

	   state->symbols->pop_scope();
	}
    break;

  case 317:
/* Line 1787 of yacc.c  */
#line 1891 "glsl_parser.yy"
    {
	   (yyval.node) = (yyvsp[(1) - (1)].uniform_block);
	}
    break;

  case 318:
/* Line 1787 of yacc.c  */
#line 1895 "glsl_parser.yy"
    {
	   ast_uniform_block *block = (yyvsp[(2) - (2)].uniform_block);
	   if (!block->layout.merge_qualifier(& (yylsp[(1) - (2)]), state, (yyvsp[(1) - (2)].type_qualifier))) {
	      YYERROR;
	   }
	   (yyval.node) = block;
	}
    break;

  case 319:
/* Line 1787 of yacc.c  */
#line 1906 "glsl_parser.yy"
    {
	   ast_uniform_block *const block = (yyvsp[(6) - (7)].uniform_block);

	   block->block_name = (yyvsp[(2) - (7)].identifier);
	   block->declarations.push_degenerate_list_at_head(& (yyvsp[(4) - (7)].declarator_list)->link);

	   if (!state->ARB_uniform_buffer_object_enable) {
	      _mesa_glsl_error(& (yylsp[(1) - (7)]), state,
			       "#version 140 / GL_ARB_uniform_buffer_object "
			       "required for defining uniform blocks\n");
	   } else if (state->ARB_uniform_buffer_object_warn) {
	      _mesa_glsl_warning(& (yylsp[(1) - (7)]), state,
				 "#version 140 / GL_ARB_uniform_buffer_object "
				 "required for defining uniform blocks\n");
	   }

	   /* Since block arrays require names, and both features are added in
	    * the same language versions, we don't have to explicitly
	    * version-check both things.
	    */
	   if (block->instance_name != NULL
	       && !(state->language_version == 300 && state->es_shader)) {
	      _mesa_glsl_error(& (yylsp[(1) - (7)]), state,
			       "#version 300 es required for using uniform "
			       "blocks with an instance name\n");
	   }

	   (yyval.uniform_block) = block;
	}
    break;

  case 320:
/* Line 1787 of yacc.c  */
#line 1939 "glsl_parser.yy"
    {
	   (yyval.uniform_block) = new(state) ast_uniform_block(*state->default_uniform_qualifier,
					     NULL,
					     NULL);
	}
    break;

  case 321:
/* Line 1787 of yacc.c  */
#line 1945 "glsl_parser.yy"
    {
	   (yyval.uniform_block) = new(state) ast_uniform_block(*state->default_uniform_qualifier,
					     (yyvsp[(1) - (1)].identifier),
					     NULL);
	}
    break;

  case 322:
/* Line 1787 of yacc.c  */
#line 1951 "glsl_parser.yy"
    {
	   (yyval.uniform_block) = new(state) ast_uniform_block(*state->default_uniform_qualifier,
					     (yyvsp[(1) - (4)].identifier),
					     (yyvsp[(3) - (4)].expression));
	}
    break;

  case 323:
/* Line 1787 of yacc.c  */
#line 1957 "glsl_parser.yy"
    {
	   _mesa_glsl_error(& (yylsp[(1) - (3)]), state,
			    "instance block arrays must be explicitly sized\n");

	   (yyval.uniform_block) = new(state) ast_uniform_block(*state->default_uniform_qualifier,
					     (yyvsp[(1) - (3)].identifier),
					     NULL);
	}
    break;

  case 324:
/* Line 1787 of yacc.c  */
#line 1969 "glsl_parser.yy"
    {
	   (yyval.declarator_list) = (yyvsp[(1) - (1)].declarator_list);
	   (yyvsp[(1) - (1)].declarator_list)->link.self_link();
	}
    break;

  case 325:
/* Line 1787 of yacc.c  */
#line 1974 "glsl_parser.yy"
    {
	   (yyval.declarator_list) = (yyvsp[(1) - (2)].declarator_list);
	   (yyvsp[(2) - (2)].declarator_list)->link.insert_before(& (yyval.declarator_list)->link);
	}
    break;

  case 328:
/* Line 1787 of yacc.c  */
#line 1988 "glsl_parser.yy"
    {
	   void *ctx = state;
	   ast_fully_specified_type *type = new(ctx) ast_fully_specified_type();
	   type->set_location(yylloc);

	   type->qualifier = (yyvsp[(1) - (5)].type_qualifier);
	   type->qualifier.flags.q.uniform = true;
	   type->specifier = (yyvsp[(3) - (5)].type_specifier);
	   (yyval.declarator_list) = new(ctx) ast_declarator_list(type);
	   (yyval.declarator_list)->set_location(yylloc);
	   (yyval.declarator_list)->ubo_qualifiers_valid = true;

	   (yyval.declarator_list)->declarations.push_degenerate_list_at_head(& (yyvsp[(4) - (5)].declaration)->link);
	}
    break;

  case 329:
/* Line 1787 of yacc.c  */
#line 2003 "glsl_parser.yy"
    {
	   void *ctx = state;
	   ast_fully_specified_type *type = new(ctx) ast_fully_specified_type();
	   type->set_location(yylloc);

	   type->qualifier.flags.q.uniform = true;
	   type->specifier = (yyvsp[(2) - (4)].type_specifier);
	   (yyval.declarator_list) = new(ctx) ast_declarator_list(type);
	   (yyval.declarator_list)->set_location(yylloc);
	   (yyval.declarator_list)->ubo_qualifiers_valid = true;

	   (yyval.declarator_list)->declarations.push_degenerate_list_at_head(& (yyvsp[(3) - (4)].declaration)->link);
	}
    break;

  case 330:
/* Line 1787 of yacc.c  */
#line 2020 "glsl_parser.yy"
    {
	   if (!state->default_uniform_qualifier->merge_qualifier(& (yylsp[(1) - (3)]), state,
								  (yyvsp[(1) - (3)].type_qualifier))) {
	      YYERROR;
	   }
	}
    break;


/* Line 1787 of yacc.c  */
#line 5349 "glsl_parser.cpp"
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
  *++yylsp = yyloc;

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
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (&yylloc, state, YY_("syntax error"));
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
        yyerror (&yylloc, state, yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }

  yyerror_range[1] = yylloc;

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
		      yytoken, &yylval, &yylloc, state);
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

  yyerror_range[1] = yylsp[1-yylen];
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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp, yylsp, state);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

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
  yyerror (&yylloc, state, YY_("memory exhausted"));
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
                  yytoken, &yylval, &yylloc, state);
    }
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, yylsp, state);
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



