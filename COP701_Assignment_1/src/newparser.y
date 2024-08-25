%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ast.h"
#include "routines.c"
extern int yylex();     
void yyerror(const char *s);
ASTNode *latexASTRoot;
%}


%union {
    ASTNode *node;
    char *str;
}


/* declare tokens */

%debug

%token <node> DOCUMENT_CLASS USEPACKAGE GRAPHICX HYPERREF TITLE DATE 
%token <node> BEGIN_DOC END_DOC SECTION SUBSECTION SUBSUBSECTION ITALICS BOLD HRULE
%token <node> HLINE PARAGRAPH BEGIN_VERBATIM END_VERBATIM HREF INCLUDE_GRAPHICS 
%token <node> BEGIN_ENUMERATE END_ENUMERATE BEGIN_ITEMIZE END_ITEMIZE
%token <node> ITEM BEGIN_TABULAR END_TABULAR ROW_SEPARATOR COLUMN_SEPARATOR 
%token <node> OPEN_BRACE CLOSE_BRACE 
%token <str> IMG_OPTIONS IMG_PATH TEXT NEWLINE COLUMN_SPEC


%type <node> START PACKAGES PACKAGE_GRAPHICX PACKAGE_HYPERREF TITLE_NT DATE_NT DOC_CONTENT DOC_CONTENT_TAIL
%type <node> STANDALONE_CONTENT STANDALONE_CONTENT_TAIL SECTION_SEQUENCE SECTION_SEQUENCE_TAIL
%type <node> SECTION_NT SECTION_HEADER SECTION_BODY SECTION_BODY_TAIL
%type <node> SUBSECTION_SEQUENCE SUBSECTION_SEQUENCE_TAIL SUBSECTION_NT
%type <node> SUBSECTION_HEADER SUBSECTION_BODY SUBSECTION_BODY_TAIL
%type <node> SUBSUBSECTION_SEQUENCE SUBSUBSECTION_SEQUENCE_TAIL SUBSUBSECTION_NT
%type <node> SUBSUBSECTION_HEADER SUBSUBSECTION_BODY SECTION_CONTENT
%type <node> SECTION_CONTENT_TAIL SUBSECTION_CONTENT SUBSECTION_CONTENT_TAIL
%type <node> SUBSUBSECTION_CONTENT SUBSUBSECTION_CONTENT_TAIL CONTENT_BLOCK
%type <node> ITALICS_NT BOLD_NT HRULE_NT HLINE_NT PARAGRAPH_NT
%type <node> CODE_LISTING_NT TEXT_CONTENT_NT TEXT_CONTENT_NT_TAIL
%type <node> HREF_NT INCLUDE_GRAPHICS_NT INCLUDE_GRAPHICS_NT_TAIL IMG_OPTIONS_NT LISTS_NT ORDERED_LISTS_NT
%type <node> UNORDERED_LISTS_NT NESTED_LISTS_NT
%type <node> TABLE_NT TABLE_ROWS_NT TABLE_ROWS_NT_TAIL TABLE_ROW_NT
%type <node> TABLE_ROW_NT_TAIL ITEMS_OPT_NESTED_LISTS_SEQUENCE ITEM_OPT_NESTED_LISTS_NT ITEMS_OPT_NESTED_LISTS_TAIL



%%


START: DOCUMENT_CLASS NEWLINE PACKAGES NEWLINE TITLE_NT NEWLINE DATE_NT                           
       NEWLINE BEGIN_DOC NEWLINE DOC_CONTENT END_DOC                            { ASTNode *documentClassNode = newASTNode("DOCUMENT_CLASS", NULL, 0);
                                                                                  ASTNode *newline1Node = newASTNode("NEWLINE", strdup($2), 0);
                                                                                  ASTNode *newline2Node = newASTNode("NEWLINE", strdup($4), 0);
                                                                                  ASTNode *newline3Node = newASTNode("NEWLINE", strdup($6), 0);
                                                                                  ASTNode *newline4Node = newASTNode("NEWLINE", strdup($8), 0);
                                                                                  ASTNode *beginDocNode = newASTNode("BEGIN_DOC", NULL, 0);
                                                                                  ASTNode *newline5Node = newASTNode("NEWLINE", strdup($10), 0);
                                                                                  ASTNode *endDocNode = newASTNode("END_DOC", NULL, 0);
                                                                                  $$ = newASTNode("Start", NULL, 12, documentClassNode, newline1Node, $3,
                                                                                  newline2Node, $5, newline3Node, $7, newline4Node, beginDocNode, newline5Node, $11,
                                                                                  endDocNode); 
                                                                                  latexASTRoot = $$; }                    
    ;

PACKAGES: PACKAGE_GRAPHICX NEWLINE PACKAGE_HYPERREF         { ASTNode *newlineNode = newASTNode("NEWLINE", strdup($2), 0);
                                                              $$ = newASTNode("PACKAGES", NULL, 3, $1, newlineNode, $3); }
    |   PACKAGE_HYPERREF NEWLINE PACKAGE_GRAPHICX           { ASTNode *newlineNode = newASTNode("NEWLINE", strdup($2), 0);
                                                              $$ = newASTNode("PACKAGES", NULL, 3, $1, newlineNode, $3); }
    ;

PACKAGE_GRAPHICX: USEPACKAGE OPEN_BRACE GRAPHICX CLOSE_BRACE            { ASTNode *usepackageNode = newASTNode("USEPACKAGE", NULL, 0);
                                                                          ASTNode *openBraceNode = newASTNode("OPEN_BRACE", NULL, 0);
                                                                          ASTNode *graphicxNode = newASTNode("GRAPHICX", NULL, 0);
                                                                          ASTNode *closeBraceNode = newASTNode("CLOSE_BRACE", NULL, 0);
                                                                          $$ = newASTNode("PACKAGE_GRAPHICX", NULL, 4, usepackageNode,
                                                                                          openBraceNode, graphicxNode, closeBraceNode); }
    ;

PACKAGE_HYPERREF: USEPACKAGE OPEN_BRACE HYPERREF CLOSE_BRACE            { ASTNode *usepackageNode = newASTNode("USEPACKAGE", NULL, 0);
                                                                          ASTNode *openBraceNode = newASTNode("OPEN_BRACE", NULL, 0);
                                                                          ASTNode *hyperrefNode = newASTNode("HYPERREF", NULL, 0);
                                                                          ASTNode *closeBraceNode = newASTNode("CLOSE_BRACE", NULL, 0);
                                                                          $$ = newASTNode("PACKAGE_HYPERREF", NULL, 4, usepackageNode,
                                                                                          openBraceNode, hyperrefNode, closeBraceNode); }
    ;

TITLE_NT: TITLE OPEN_BRACE TEXT CLOSE_BRACE         { ASTNode *titleNode = newASTNode("TITLE", NULL, 0);
                                                      ASTNode *openBraceNode = newASTNode("OPEN_BRACE", NULL, 0);
                                                      ASTNode *textNode = newASTNode("TEXT", strdup($3), 0);
                                                      ASTNode *closeBraceNode = newASTNode("CLOSE_BRACE", NULL, 0);
                                                      $$ = newASTNode("TITLE_NT", NULL, 4, titleNode, openBraceNode, 
                                                                      textNode, closeBraceNode); }
    ;

DATE_NT: DATE OPEN_BRACE TEXT CLOSE_BRACE           { ASTNode *dateNode = newASTNode("DATE", NULL, 0);
                                                      ASTNode *openBraceNode = newASTNode("OPEN_BRACE", NULL, 0);
                                                      ASTNode *textNode = newASTNode("TEXT", strdup($3), 0);
                                                      ASTNode *closeBraceNode = newASTNode("CLOSE_BRACE", NULL, 0);
                                                      $$ = newASTNode("DATE_NT", NULL, 4, dateNode, openBraceNode, 
                                                                      textNode, closeBraceNode); }
    ;

DOC_CONTENT: SECTION_SEQUENCE                       { $$ = newASTNode("DOC_CONTENT", NULL, 1, $1); }
    |   STANDALONE_CONTENT DOC_CONTENT_TAIL         { $$ = newASTNode("DOC_CONTENT", NULL, 2, $1, $2); }         
    |   /* EPSILON */                               { ASTNode *epsilonNode = newASTNode("EPSILON", NULL, 0);
                                                      $$ = newASTNode("DOC_CONTENT", NULL, 1, epsilonNode); }    
    ;

DOC_CONTENT_TAIL: SECTION_SEQUENCE                  { $$ = newASTNode("DOC_CONTENT_TAIL", NULL, 1, $1); }
    |   /* EPSILON */                               { ASTNode *epsilonNode = newASTNode("EPSILON", NULL, 0);
                                                      $$ = newASTNode("DOC_CONTENT_TAIL", NULL, 1, epsilonNode); }    
    ;


STANDALONE_CONTENT: CONTENT_BLOCK STANDALONE_CONTENT_TAIL           { $$ = newASTNode("STANDALONE_CONTENT", NULL, 2, $1, $2); }
    ;

STANDALONE_CONTENT_TAIL: STANDALONE_CONTENT         { $$ = newASTNode("STANDALONE_CONTENT_TAIL", NULL, 1, $1); }         
    |   /* EPSILON */                               { ASTNode *epsilonNode = newASTNode("EPSILON", NULL, 0);
                                                      $$ = newASTNode("STANDALONE_CONTENT_TAIL", NULL, 1, epsilonNode); }
    ;

SECTION_SEQUENCE: SECTION_NT SECTION_SEQUENCE_TAIL          { $$ = newASTNode("SECTION_SEQUENCE", NULL, 2, $1, $2); }
    ;

SECTION_SEQUENCE_TAIL: SECTION_SEQUENCE         { $$ = newASTNode("SECTION_SEQUENCE_TAIL", NULL, 1, $1); }         
    |   /* EPSILON */                           { ASTNode *epsilonNode = newASTNode("EPSILON", NULL, 0);
                                                  $$ = newASTNode("SECTION_SEQUENCE_TAIL", NULL, 1, epsilonNode); }
    ;

SECTION_NT: SECTION_HEADER SECTION_BODY         { $$ = newASTNode("SECTION_NT", NULL, 2, $1, $2); }  
    ;

SECTION_HEADER: SECTION OPEN_BRACE TEXT CLOSE_BRACE NEWLINE         { ASTNode *sectionNode = newASTNode("SECTION", NULL, 0);
                                                                      ASTNode *openBraceNode = newASTNode("OPEN_BRACE", NULL, 0);
                                                                      ASTNode *textNode = newASTNode("TEXT", strdup($3), 0);
                                                                      ASTNode *closeBraceNode = newASTNode("CLOSE_BRACE", NULL, 0);
                                                                      ASTNode *newlineNode = newASTNode("NEWLINE", strdup($5), 0);
                                                                      $$ = newASTNode("SECTION_HEADER", NULL, 5, sectionNode,
                                                                                      openBraceNode, textNode, closeBraceNode, newlineNode); }
    ;

SECTION_BODY: /* EPSILON */                         { ASTNode *epsilonNode = newASTNode("EPSILON", NULL, 0);
                                                      $$ = newASTNode("SECTION_BODY", NULL, 1, epsilonNode); }        
    |   SECTION_CONTENT SECTION_BODY_TAIL           { $$ = newASTNode("SECTION_BODY", NULL, 2, $1, $2); }                       
    |   SUBSECTION_SEQUENCE                         { $$ = newASTNode("SECTION_BODY", NULL, 1, $1); }
    ;

SECTION_BODY_TAIL: SUBSECTION_SEQUENCE          { $$ = newASTNode("SECTION_BODY_TAIL", NULL, 1, $1); }                    
    |   /* EPSILON */                           { ASTNode *epsilonNode = newASTNode("EPSILON", NULL, 0);
                                                  $$ = newASTNode("SECTION_BODY_TAIL", NULL, 1, epsilonNode); }         
    ;

SUBSECTION_SEQUENCE: SUBSECTION_NT SUBSECTION_SEQUENCE_TAIL         { $$ = newASTNode("SUBSECTION_SEQUENCE", NULL, 2, $1, $2); }         
    ;

SUBSECTION_SEQUENCE_TAIL: SUBSECTION_SEQUENCE           { $$ = newASTNode("SUBSECTION_SEQUENCE_TAIL", NULL, 1, $1); }
    |   /* EPSILON */                                   { ASTNode *epsilonNode = newASTNode("EPSILON", NULL, 0);
                                                          $$ = newASTNode("SUBSECTION_SEQUENCE_TAIL", NULL, 1, epsilonNode); }                
    ;

SUBSECTION_NT: SUBSECTION_HEADER SUBSECTION_BODY            { $$ = newASTNode("SUBSECTION_NT", NULL, 2, $1, $2); }
    ;

SUBSECTION_HEADER: SUBSECTION OPEN_BRACE TEXT CLOSE_BRACE NEWLINE           { ASTNode *subsectionNode = newASTNode("SUBSECTION", NULL, 0);
                                                                              ASTNode *openBraceNode = newASTNode("OPEN_BRACE", NULL, 0);
                                                                              ASTNode *textNode = newASTNode("TEXT", strdup($3), 0);
                                                                              ASTNode *closeBraceNode = newASTNode("CLOSE_BRACE", NULL, 0);
                                                                              ASTNode *newlineNode = newASTNode("NEWLINE", strdup($5), 0);
                                                                              $$ = newASTNode("SUBSECTION_HEADER", NULL, 5, subsectionNode,
                                                                                                  openBraceNode, textNode, closeBraceNode, newlineNode); }
    ;

SUBSECTION_BODY: /* EPSILON */                          { ASTNode *epsilonNode = newASTNode("EPSILON", NULL, 0);
                                                          $$ = newASTNode("SUBSECTION_BODY", NULL, 1, epsilonNode); }
    |   SUBSECTION_CONTENT SUBSECTION_BODY_TAIL         { $$ = newASTNode("SUBSECTION_BODY", NULL, 2, $1, $2); }                  
    |   SUBSUBSECTION_SEQUENCE                          { $$ = newASTNode("SUBSECTION_BODY", NULL, 1, $1); } 
    ;

SUBSECTION_BODY_TAIL: SUBSUBSECTION_SEQUENCE            { $$ = newASTNode("SUBSECTION_BODY_TAIL", NULL, 1, $1); }
    |   /* EPSILON */                                   { ASTNode *epsilonNode = newASTNode("EPSILON", NULL, 0);
                                                          $$ = newASTNode("SUBSECTION_BODY_TAIL", NULL, 1, epsilonNode); }
    ;

SUBSUBSECTION_SEQUENCE: SUBSUBSECTION_NT SUBSUBSECTION_SEQUENCE_TAIL            { $$ = newASTNode("SUBSUBSECTION_SEQUENCE", NULL, 2, $1, $2); }
    ;

SUBSUBSECTION_SEQUENCE_TAIL: SUBSUBSECTION_SEQUENCE         { $$ = newASTNode("SUBSUBSECTION_SEQUENCE_TAIL", NULL, 1, $1); }
    |   /* EPSILON */                                       { ASTNode *epsilonNode = newASTNode("EPSILON", NULL, 0);
                                                              $$ = newASTNode("SUBSUBSECTION_SEQUENCE_TAIL", NULL, 1, epsilonNode); }
    ;

SUBSUBSECTION_NT: SUBSUBSECTION_HEADER SUBSUBSECTION_BODY           { $$ = newASTNode("SUBSUBSECTION_NT", NULL, 2, $1, $2); }
    ;

SUBSUBSECTION_HEADER: SUBSUBSECTION OPEN_BRACE TEXT CLOSE_BRACE NEWLINE         { ASTNode *subsubsectionNode = newASTNode("SUBSUBSECTION", NULL, 0);
                                                                                  ASTNode *openBraceNode = newASTNode("OPEN_BRACE", NULL, 0);
                                                                                  ASTNode *textNode = newASTNode("TEXT", strdup($3), 0);
                                                                                  ASTNode *closeBraceNode = newASTNode("CLOSE_BRACE", NULL, 0);
                                                                                  ASTNode *newlineNode = newASTNode("NEWLINE", strdup($5), 0);
                                                                                  $$ = newASTNode("SUBSUBSECTION_HEADER", NULL, 5, subsubsectionNode,
                                                                                                  openBraceNode, textNode, closeBraceNode, newlineNode); }         
    ;

SUBSUBSECTION_BODY: /* EPSILON */           { ASTNode *epsilonNode = newASTNode("EPSILON", NULL, 0);
                                              $$ = newASTNode("SUBSUBSECTION_BODY", NULL, 1, epsilonNode); }
    |   SUBSUBSECTION_CONTENT               { $$ = newASTNode("SUBSUBSECTION_BODY", NULL, 1, $1); }
    ;

SECTION_CONTENT: CONTENT_BLOCK SECTION_CONTENT_TAIL         { $$ = newASTNode("SECTION_CONTENT", NULL, 2, $1, $2); }
    ;

SECTION_CONTENT_TAIL: SECTION_CONTENT           { $$ = newASTNode("SECTION_CONTENT_TAIL", NULL, 1, $1); }
    |   /* EPSILON */                           { ASTNode *epsilonNode = newASTNode("EPSILON", NULL, 0);
                                                  $$ = newASTNode("SECTION_CONTENT_TAIL", NULL, 1, epsilonNode); }
    ;

SUBSECTION_CONTENT: CONTENT_BLOCK SUBSECTION_CONTENT_TAIL           { $$ = newASTNode("SUBSECTION_CONTENT", NULL, 2, $1, $2); }
    ;

SUBSECTION_CONTENT_TAIL: SUBSECTION_CONTENT         { $$ = newASTNode("SUBSECTION_CONTENT_TAIL", NULL, 1, $1); } 
    |   /* EPSILON */                               { ASTNode *epsilonNode = newASTNode("EPSILON", NULL, 0);
                                                      $$ = newASTNode("SUBSECTION_CONTENT_TAIL", NULL, 1, epsilonNode); }
    ;

SUBSUBSECTION_CONTENT: CONTENT_BLOCK SUBSUBSECTION_CONTENT_TAIL         { $$ = newASTNode("SUBSUBSECTION_CONTENT", NULL, 2, $1, $2); } 
    ;

SUBSUBSECTION_CONTENT_TAIL: SUBSUBSECTION_CONTENT           { $$ = newASTNode("SUBSUBSECTION_CONTENT_TAIL", NULL, 1, $1); }           
    |   /* EPSILON */                                       { ASTNode *epsilonNode = newASTNode("EPSILON", NULL, 0);
                                                              $$ = newASTNode("SUBSUBSECTION_CONTENT_TAIL", NULL, 1, epsilonNode); }
    ;

CONTENT_BLOCK: ITALICS_NT           { $$ = newASTNode("CONTENT_BLOCK", NULL, 1, $1); }
    |   BOLD_NT                     { $$ = newASTNode("CONTENT_BLOCK", NULL, 1, $1); }
    |   HRULE_NT                    { $$ = newASTNode("CONTENT_BLOCK", NULL, 1, $1); }
    |   HLINE_NT                    { $$ = newASTNode("CONTENT_BLOCK", NULL, 1, $1); }
    |   PARAGRAPH_NT                { $$ = newASTNode("CONTENT_BLOCK", NULL, 1, $1); }
    |   CODE_LISTING_NT             { $$ = newASTNode("CONTENT_BLOCK", NULL, 1, $1); }
    |   HREF_NT                     { $$ = newASTNode("CONTENT_BLOCK", NULL, 1, $1); }
    |   INCLUDE_GRAPHICS_NT         { $$ = newASTNode("CONTENT_BLOCK", NULL, 1, $1); }
    |   LISTS_NT                    { $$ = newASTNode("CONTENT_BLOCK", NULL, 1, $1); }
    |   TABLE_NT                    { $$ = newASTNode("CONTENT_BLOCK", NULL, 1, $1); }
    |   TEXT NEWLINE                { ASTNode *textNode = newASTNode("TEXT", strdup($1), 0);
                                      ASTNode *newlineNode = newASTNode("NEWLINE", strdup($2), 0);
                                      $$ = newASTNode("CONTENT_BLOCK", NULL, 2, textNode, newlineNode); }
    ;

ITALICS_NT: ITALICS OPEN_BRACE TEXT CLOSE_BRACE NEWLINE         { ASTNode *italicsNode = newASTNode("ITALICS", NULL, 0);
                                                                  ASTNode *openBraceNode = newASTNode("OPEN_BRACE", NULL, 0);
                                                                  ASTNode *textNode = newASTNode("TEXT", strdup($3), 0);
                                                                  ASTNode *closeBraceNode = newASTNode("CLOSE_BRACE", NULL, 0);
                                                                  ASTNode *newlineNode = newASTNode("NEWLINE", strdup($5), 0);
                                                                  $$ = newASTNode("ITALICS_NT", NULL, 5, italicsNode, openBraceNode, 
                                                                                  textNode, closeBraceNode, newlineNode); }
    ;

BOLD_NT: BOLD OPEN_BRACE TEXT CLOSE_BRACE NEWLINE           { ASTNode *boldNode = newASTNode("BOLD", NULL, 0);
                                                              ASTNode *openBraceNode = newASTNode("OPEN_BRACE", NULL, 0);
                                                              ASTNode *textNode = newASTNode("TEXT", strdup($3), 0);
                                                              ASTNode *closeBraceNode = newASTNode("CLOSE_BRACE", NULL, 0);
                                                              ASTNode *newlineNode = newASTNode("NEWLINE", strdup($5), 0);
                                                              $$ = newASTNode("BOLD_NT", NULL, 5, boldNode, openBraceNode, 
                                                                              textNode, closeBraceNode, newlineNode); }           
    ;

HRULE_NT: HRULE NEWLINE         { ASTNode *hruleNode = newASTNode("HRULE", NULL, 0);
                                  ASTNode *newlineNode = newASTNode("NEWLINE", strdup($2), 0);
                                  $$ = newASTNode("HRULE_NT", NULL, 2, hruleNode, newlineNode); }
    ;

HLINE_NT: HLINE NEWLINE         { ASTNode *hlineNode = newASTNode("HLINE", NULL, 0);
                                  ASTNode *newlineNode = newASTNode("NEWLINE", strdup($2), 0);
                                  $$ = newASTNode("HLINE_NT", NULL, 2, hlineNode, newlineNode); }
    ;

PARAGRAPH_NT: PARAGRAPH NEWLINE         { ASTNode *paragraphNode = newASTNode("PARAGRAPH", NULL, 0);
                                          ASTNode *newlineNode = newASTNode("NEWLINE", strdup($2), 0);
                                          $$ = newASTNode("PARAGRAPH_NT", NULL, 2, paragraphNode, newlineNode); }
    ;

CODE_LISTING_NT: BEGIN_VERBATIM NEWLINE TEXT_CONTENT_NT END_VERBATIM NEWLINE            { ASTNode *beginVerbatimNode = newASTNode("BEGIN_VERBATIM", NULL, 0);
                                                                                          ASTNode *newline1Node = newASTNode("NEWLINE", strdup($2), 0);
                                                                                          ASTNode *endVerbatimNode = newASTNode("END_VERBATIM", NULL, 0);
                                                                                          ASTNode *newline2Node = newASTNode("NEWLINE", strdup($5), 0);
                                                                                          $$ = newASTNode("CODE_LISTING_NT", NULL, 5, beginVerbatimNode, 
                                                                                                          newline1Node, $3, endVerbatimNode, newline2Node); }
    ;

TEXT_CONTENT_NT: TEXT NEWLINE TEXT_CONTENT_NT_TAIL          { ASTNode *textNode = newASTNode("TEXT", strdup($1), 0);
                                                              ASTNode *newlineNode = newASTNode("NEWLINE", strdup($2), 0);
                                                              $$ = newASTNode("TEXT_CONTENT_NT", NULL, 3, textNode, newlineNode, $3); }
    ;

TEXT_CONTENT_NT_TAIL: TEXT_CONTENT_NT           { $$ = newASTNode("TEXT_CONTENT_NT_TAIL", NULL, 1, $1); }
    |   /* EPSILON */                           { ASTNode *epsilonNode = newASTNode("EPSILON", NULL, 0);
                                                  $$ = newASTNode("TEXT_CONTENT_NT_TAIL", NULL, 1, epsilonNode); }
    ;

HREF_NT: HREF OPEN_BRACE TEXT CLOSE_BRACE OPEN_BRACE TEXT CLOSE_BRACE NEWLINE           { ASTNode *hrefNode = newASTNode("HREF", NULL, 0);
                                                                                          ASTNode *openBrace1Node = newASTNode("OPEN_BRACE", NULL, 0);
                                                                                          ASTNode *text1Node = newASTNode("TEXT", strdup($3), 0);
                                                                                          ASTNode *closeBrace1Node = newASTNode("CLOSE_BRACE", NULL, 0);
                                                                                          ASTNode *openBrace2Node = newASTNode("OPEN_BRACE", NULL, 0);
                                                                                          ASTNode *text2Node = newASTNode("TEXT", strdup($6), 0);
                                                                                          ASTNode *closeBrace2Node = newASTNode("CLOSE_BRACE", NULL, 0);
                                                                                          ASTNode *newlineNode = newASTNode("NEWLINE", strdup($8), 0);
                                                                                          $$ = newASTNode("HREF_NT", NULL, 8, hrefNode, openBrace1Node, 
                                                                                                          text1Node, closeBrace1Node, openBrace2Node, 
                                                                                                          text2Node, closeBrace2Node, newlineNode); }
    ;

INCLUDE_GRAPHICS_NT: INCLUDE_GRAPHICS IMG_OPTIONS_NT INCLUDE_GRAPHICS_NT_TAIL           { ASTNode *includeGraphicsNode = newASTNode("INCLUDE_GRAPHICS", NULL, 0);
                                                                                          $$ = newASTNode("INCLUDE_GRAPHICS_NT", NULL, 3, includeGraphicsNode, $2, $3); }      
    ;

IMG_OPTIONS_NT: IMG_OPTIONS         { ASTNode *imgOptionsNode = newASTNode("IMG_OPTIONS", strdup($1), 0); 
                                      $$ = newASTNode("IMG_OPTIONS_NT", NULL, 1, imgOptionsNode); }
    |   /* EPSILON */               { ASTNode *epsilonNode = newASTNode("EPSILON", NULL, 0);
                                      $$ = newASTNode("IMG_OPTIONS_NT", NULL, 1, epsilonNode); }
    ;

INCLUDE_GRAPHICS_NT_TAIL: OPEN_BRACE IMG_PATH CLOSE_BRACE NEWLINE                       { ASTNode *openBraceNode = newASTNode("OPEN_BRACE", NULL, 0);
                                                                                          ASTNode *imgPathNode = newASTNode("IMG_PATH", strdup($2), 0);
                                                                                          ASTNode *closeBraceNode = newASTNode("CLOSE_BRACE", NULL, 0);
                                                                                          ASTNode *newlineNode = newASTNode("NEWLINE", strdup($4), 0);
                                                                                          $$ = newASTNode("INCLUDE_GRAPHICS_NT_TAIL", NULL, 4, 
                                                                                                          openBraceNode, imgPathNode, closeBraceNode,  newlineNode); }                                           
    ;

LISTS_NT: ORDERED_LISTS_NT          { $$ = newASTNode("LISTS_NT", NULL, 1, $1); }
    |   UNORDERED_LISTS_NT          { $$ = newASTNode("LISTS_NT", NULL, 1, $1); }
    ;

ORDERED_LISTS_NT: BEGIN_ENUMERATE NEWLINE ITEMS_OPT_NESTED_LISTS_SEQUENCE END_ENUMERATE NEWLINE         { ASTNode *beginEnumerateNode = newASTNode("BEGIN_ENUMERATE", NULL, 0);
                                                                                                  ASTNode *newline1Node = newASTNode("NEWLINE", strdup($2), 0);
                                                                                                  ASTNode *endEnumerateNode = newASTNode("END_ENUMERATE", NULL, 0);
                                                                                                  ASTNode *newline2Node = newASTNode("NEWLINE", strdup($5), 0);
                                                                                                  $$ = newASTNode("ORDERED_LISTS_NT", NULL, 5, beginEnumerateNode, 
                                                                                                                  newline1Node, $3, endEnumerateNode, newline2Node); }
    ;

ITEMS_OPT_NESTED_LISTS_SEQUENCE: ITEM_OPT_NESTED_LISTS_NT           { $$ = newASTNode("ITEMS_OPT_NESTED_LISTS_SEQUENCE", NULL, 1, $1); } 
    ;

ITEM_OPT_NESTED_LISTS_NT: ITEM TEXT NEWLINE NESTED_LISTS_NT ITEMS_OPT_NESTED_LISTS_TAIL         { ASTNode *itemNode = newASTNode("ITEM", NULL, 0);
                                                                                                  ASTNode *textNode = newASTNode("TEXT", strdup($2), 0);
                                                                                                  ASTNode *newlineNode = newASTNode("NEWLINE", strdup($3), 0);
                                                                                                  $$ = newASTNode("ITEM_OPT_NESTED_LISTS_NT", NULL, 5, itemNode,
                                                                                                                  textNode, newlineNode, $4, $5); }
    ;

ITEMS_OPT_NESTED_LISTS_TAIL: ITEM_OPT_NESTED_LISTS_NT           { $$ = newASTNode("ITEMS_OPT_NESTED_LISTS_TAIL", NULL, 1, $1); }                  
    |   /* EPSILON */                                           { ASTNode *epsilonNode = newASTNode("EPSILON", NULL, 0);
                                                                  $$ = newASTNode("ITEMS_OPT_NESTED_LISTS_TAIL", NULL, 1, epsilonNode); }            
    ;

UNORDERED_LISTS_NT: BEGIN_ITEMIZE NEWLINE ITEMS_OPT_NESTED_LISTS_SEQUENCE END_ITEMIZE NEWLINE           { ASTNode *beginItemizeNode = newASTNode("BEGIN_ITEMIZE", NULL, 0);
                                                                                                  ASTNode *newline1Node = newASTNode("NEWLINE", strdup($2), 0);
                                                                                                  ASTNode *endItemizeNode = newASTNode("END_ITEMIZE", NULL, 0);
                                                                                                  ASTNode *newline2Node = newASTNode("NEWLINE", strdup($5), 0);
                                                                                                  $$ = newASTNode("UNORDERED_LISTS_NT", NULL, 5, beginItemizeNode, 
                                                                                                                  newline1Node, $3, endItemizeNode, newline2Node); }
    ;

NESTED_LISTS_NT: ORDERED_LISTS_NT           { $$ = newASTNode("NESTED_LISTS_NT", NULL, 1, $1); }
    |   UNORDERED_LISTS_NT                  { $$ = newASTNode("NESTED_LISTS_NT", NULL, 1, $1); }
    |   /* EPSILON */                       { ASTNode *epsilonNode = newASTNode("EPSILON", NULL, 0);
                                              $$ = newASTNode("NESTED_LISTS_NT", NULL, 1, epsilonNode); }
    ;

TABLE_NT: BEGIN_TABULAR OPEN_BRACE COLUMN_SPEC CLOSE_BRACE NEWLINE HLINE_NT TABLE_ROWS_NT END_TABULAR NEWLINE           { ASTNode *beginTabularNode = newASTNode("BEGIN_TABULAR", NULL, 0);
                                                                                                                          ASTNode *openBraceNode = newASTNode("OPEN_BRACE", NULL, 0);
                                                                                                                          ASTNode *columnSpecNode = newASTNode("COLUMN_SPEC", strdup($3), 0);
                                                                                                                          ASTNode *closeBraceNode = newASTNode("CLOSE_BRACE", NULL, 0);
                                                                                                                          ASTNode *newline1Node = newASTNode("NEWLINE", strdup($5), 0);
                                                                                                                          ASTNode *endTabularNode = newASTNode("END_TABULAR", NULL, 0);
                                                                                                                          ASTNode *newline2Node = newASTNode("NEWLINE", strdup($9), 0);
                                                                                                                          $$ = newASTNode("TABLE_NT", NULL, 9, beginTabularNode, openBraceNode, 
                                                                                                                                          columnSpecNode, closeBraceNode, newline1Node, $6, $7, 
                                                                                                                                          endTabularNode, newline2Node); }
    ;

TABLE_ROWS_NT: TABLE_ROW_NT ROW_SEPARATOR NEWLINE HLINE_NT TABLE_ROWS_NT_TAIL           { ASTNode *rowSepNode = newASTNode("ROW_SEPARATOR", NULL, 0);
                                                                                          ASTNode *newlineNode = newASTNode("NEWLINE", strdup($3), 0);
                                                                                          $$ = newASTNode("TABLE_ROWS_NT", NULL, 5, $1, rowSepNode, newlineNode, $4, $5); }
    ;

TABLE_ROWS_NT_TAIL: TABLE_ROWS_NT           { $$ = newASTNode("TABLE_ROW_NT_TAIL", NULL, 1, $1); }           
    |   /* EPSILON */                       { ASTNode *epsilonNode = newASTNode("EPSILON", NULL, 0);
                                              $$ =newASTNode("TABLE_ROW_NT_TAIL", NULL, 1, epsilonNode); }
    ;

TABLE_ROW_NT: TEXT TABLE_ROW_NT_TAIL            { ASTNode *textNode = newASTNode("TEXT", strdup($1), 0);
                                                  $$ = newASTNode("TABLE_ROW_NT", NULL, 2, textNode, $2); }
    ;
    
TABLE_ROW_NT_TAIL: COLUMN_SEPARATOR TABLE_ROW_NT            { ASTNode *colSepNode = newASTNode("COLUMN_SEPARATOR", NULL, 0);
                                                              $$ = newASTNode("TABLE_ROW_NT_TAIL", NULL, 2, colSepNode, $2); }
    |   /* EPSILON */                                       { ASTNode *epsilonNode = newASTNode("EPSILON", NULL, 0); 
                                                              $$ = newASTNode("TABLE_ROW_NT_TAIL", NULL, 1, epsilonNode); }
    ;

   


%%

