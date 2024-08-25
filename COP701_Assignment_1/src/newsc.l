%{
#include <stdio.h>
#include "ast.h"
#include "newparser.tab.h"
%}



%%

\\documentclass\{article\}          { return DOCUMENT_CLASS; }
\\usepackage                        { return USEPACKAGE; }
"graphicx"                          { return GRAPHICX; }
"hyperref"                          { return HYPERREF; }
\\title                             { return TITLE; }
\\date                              { return DATE; }
\\begin\{document\}                 { return BEGIN_DOC; }
\\end\{document\}                   { return END_DOC; }
\\section                           { return SECTION; }
\\subsection                        { return SUBSECTION; }
\\subsubsection                     { return SUBSUBSECTION; }
\\textit                            { return ITALICS; }
\\textbf                            { return BOLD; }
\\hrule                             { return HRULE; }
\\hline                             { return HLINE; }
\\par                               { return PARAGRAPH; }
\\begin\{verbatim\}                 { return BEGIN_VERBATIM; }
\\end\{verbatim\}                   { return END_VERBATIM; }
\\href                              { return HREF; }
\\includegraphics                   { return INCLUDE_GRAPHICS; }                     
(\[width=((0\.[1-9])|(1\.0))\\textwidth\])                              { yylval.str = strdup(yytext);
                                                                          return IMG_OPTIONS; }
\.\/[a-zA-Z][a-zA-Z0-9]*\/[a-zA-Z][a-zA-Z0-9]*\.jpg                          { yylval.str = strdup(yytext);
                                                                          return IMG_PATH; }
\\begin\{enumerate\}                { return BEGIN_ENUMERATE; }
\\end\{enumerate\}                  { return END_ENUMERATE; }
\\begin\{itemize\}                  { return BEGIN_ITEMIZE; }
\\end\{itemize\}                    { return END_ITEMIZE; }
\\item" "                           { return ITEM; }
\\begin\{tabular\}                  { return BEGIN_TABULAR; }
\\end\{tabular\}                    { return END_TABULAR; }
[|c]+\|                             { yylval.str = strdup(yytext);
                                      return COLUMN_SPEC; }
\\\\                                { return ROW_SEPARATOR; }
"&"                                 { return COLUMN_SEPARATOR; }
"{"                                 { return OPEN_BRACE; }
"}"                                 { return CLOSE_BRACE; }
"\n"+                               { yylval.str = strdup(yytext);
                                      return NEWLINE; }
[ \t]+                              { /* Ignore whitespace */ }
"%"[^\n]*                           { /* Ignore comments */ }
[^\\{}%\n&]*                        { yylval.str = strdup(yytext);
                                      return TEXT; }

%%





