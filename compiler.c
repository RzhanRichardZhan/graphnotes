/*
Source Code -Compiler-> Machine Code
             | Lexer -> Parser -> Semantic Analyzer -> Optimizer -> Code Generator

Lexer - Perform lexical analysis (not syntax, just valid tokens : Keywords, operators, variable name rules, comments ...) and generates a list of tokens from the source code

int
IDENT main
(
)
{
long
IDENT x
=
5
+
6
;
}

Parser - Performs syntax analysis. Knows the structure of the language. Generates a syntax tree from the token list (only syntax, if you declare a double as an int, it will pass through)

Semantic Analyzer - go through the syntax tree to find errors in the meanigs of the words. Creates a symbol table containg all the identifiers from the tree and their values
- returns a list of instructions in the order they need to be performed
- instructions will have links to the symbol table

Optimizer - optimizes (might change instructions)
Goes through the list of instructions and may change/combine them to make the resulting code more efficient

C compiler tools
----------------
lex - creates a lexer if given a definition of all possible tokens
yacc - create a parse and semantic analyzer given the structure of the language (yet another compiler compiler)
flex - bison


source code -> compiler -> image(s)

MDL - Motion Description Language

\-?\.[0-9]+ { yylval.val = atof(yytest);return DOUBLE; }
"//".* { return COMMENT; }
"torus" { return TORUS; }
"sphere" { return SPHERE; }
"box" { return BOX; }
"line" { return LINE; }



*/
SYMTAB *s; //symbol table
struct command op[MAX_COMMANDS]; //the list of commands

//Bison Declarations

%union{
  double val;
  char string[255];
}

%token COMMENT
%token <val> DOUBLE
%token <string> SPHERE TORUS BOX LINE CS MESH TEXTURE
%token <string> STRING
%%

 //Grammar rules

input:
| input command
;

command:
COMMENT {}|
LIGHT STRING DOUBLE DOUBLE DOUBLE DOUBLE DOUBLE DOUBLE

MOVE DOUBLE DOUBLE DOUBLE STRING
{
  lineno++;
  op[lastop].opcode = MOVE;
  op[lastop].op.move.d[0] = $2; //dollar is which parameter
  op[lastop].op.move.p = add_symbol($5,SYM_VALUE,0);
  lastop++;
}
|
