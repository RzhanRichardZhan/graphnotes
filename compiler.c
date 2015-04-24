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
*/
