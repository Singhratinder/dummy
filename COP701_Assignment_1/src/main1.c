#include <stdio.h>
#include <stdlib.h>
#include "ast.h"

/* Include the Bison-generated header */
#include "newparser.tab.h"

/* Declare external variables or functions */
extern FILE *yyin;      // Input file for Flex
extern int yyparse();   // Parser function
extern int yydebug;
extern ASTNode *latexASTRoot;
extern ASTNode *newASTNode(const char *type, const char *val, int numChildren, ...);
extern ASTNode* convertLaTeXToMarkdown(ASTNode* latexNode);
extern void printAST(ASTNode *node, int indentLevel, FILE *file);
extern FILE *file;
void generateMarkdown(ASTNode* node, FILE* file, char *parentNodeType, char *currentListType, int indentLevel, int currentIndex);

/* Error handling function */
void yyerror(const char *s) {
    fprintf(stderr, "Error: %s\n", s);
}




int main(int argc, char **argv) {

    yydebug=1;

    if (argc > 1) {
        /* Open the input file */
        yyin = fopen(argv[1], "r");
        if (!yyin) {
            perror(argv[1]);
            return 1;
        }
    }

    /* Run the parser */
    if (yyparse() == 0) {
        printf("Parsing completed successfully.\n");
    } else {
        printf("Parsing failed.\n");
    }

    /* Close the input file */
    if (yyin) {
        fclose(yyin);
    }

    if(latexASTRoot) {
        printf("Latex Abstract Syntax Tree: \n");
        FILE* file = fopen("./output_folder/Latex_AST.txt", "w");
        if (file == NULL) {
        perror("Error opening file");
        return 1;
        }
        printAST(latexASTRoot, 0, file); 
        printf("Latex AST construction successful.\n");
    }
    else {
        printf("Parsing failed.\n");
    }

    ASTNode *markdownASTRoot = convertLaTeXToMarkdown(latexASTRoot->children[10]);



    if(markdownASTRoot) {
        printf("Markdown Abstract Syntax Tree: \n");
        FILE* file = fopen("./output_folder/Markdown_AST.txt", "w");
        if (file == NULL) {
        perror("Error opening file");
        return 1;
        }
        printAST(markdownASTRoot, 0, file); 
        printf("Markdown AST construction successful.\n");
    }
    else {
        printf("Parsing failed.\n");
    }

    

    FILE* file = fopen(argv[2], "w");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }
    // Start traversal from the root node
    generateMarkdown(markdownASTRoot, file, NULL, NULL, 0, 0);

    fclose(file);

    return 0;
}