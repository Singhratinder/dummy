#include "ast.h"
#include <stdlib.h> 
#include <stdarg.h>
#include <string.h>
#include <stdio.h>

ASTNode *newASTNode(const char *type, const char *val, int numChildren, ...) {
    ASTNode *node = (ASTNode *)malloc(sizeof(ASTNode));
    node->nodeType = strdup(type);           // Copy the type string
    node->value = val ? strdup(val) : NULL;  // Copy the value string if it exists, otherwise set it to NULL
    node->childCount = numChildren;          // Number of children

    if (numChildren > 0) {
        node->children = (ASTNode **)malloc(numChildren * sizeof(ASTNode *));
        va_list args;                        // Start processing the variable arguments
        va_start(args, numChildren);
        for (int i = 0; i < numChildren; ++i) {
            node->children[i] = va_arg(args, ASTNode *);  // Get the ith child node from the arguments
        }
        va_end(args);                        // End processing of variable arguments
    } else {
        node->children = NULL;               // If no children, set children pointer to NULL
    }

    return node;                             // Return the pointer to the new AST node
}



// Function to create a new node in the Markdown AST
ASTNode* createMarkdownNode(const char* type, const char* val, int numChildren, ASTNode** markdownChildren) {
    ASTNode *node = (ASTNode *)malloc(sizeof(ASTNode));
    node->nodeType = strdup(type);           // Copy the type string
    node->value = val ? strdup(val) : NULL;  // Copy the value string if it exists, otherwise set it to NULL
    node->childCount = numChildren;          // Number of children
    node->children = markdownChildren;
    
    return node;
}


// Recursive function to print the AST
void printAST(ASTNode *node, int indentLevel, FILE* file) {
    if (node == NULL) return;

    // Print indentation
    for (int i = 0; i < indentLevel; i++) {
        fprintf(file, "  ");
    }

    // Print the current node
    fprintf(file, "Node Type: %s", node->nodeType);
    if (node->value != NULL) {
        fprintf(file, ", Value: %s", node->value);
    }
    fprintf(file, "\n");

    // Recursively print each child
    for (int i = 0; i < node->childCount; i++) {
        printAST(node->children[i], indentLevel + 1, file);
    }
}





// Function to traverse the LaTeX AST and create the Markdown AST
ASTNode* convertLaTeXToMarkdown(ASTNode* latexNode) {
    if (!latexNode) {
        return NULL;
    }


    // Recursive case: traverse children and convert
    int childCount = latexNode->childCount;
    ASTNode** markdownChildren = (ASTNode **)malloc(childCount * sizeof(ASTNode *));

    char *value = latexNode->value;

    for (int i = 0; i < childCount; ++i) {
        markdownChildren[i] = convertLaTeXToMarkdown(latexNode->children[i]);
    }

    // Handle specific LaTeX node types and map them to Markdown equivalents

    if (strcmp(latexNode->nodeType, "DOC_CONTENT")==0) {
        return createMarkdownNode("DOC_CONTENT", value, childCount, markdownChildren);
    }

    if (strcmp(latexNode->nodeType, "DOC_CONTENT_TAIL")==0) {
        return createMarkdownNode("DOC_CONTENT_TAIL", value, childCount, markdownChildren);
    }

    else if (strcmp(latexNode->nodeType, "STANDALONE_CONTENT")==0) {
        return createMarkdownNode("STANDALONE_CONTENT", value, childCount, markdownChildren);
    } 

    else if (strcmp(latexNode->nodeType, "STANDALONE_CONTENT_TAIL")==0) {
        return createMarkdownNode("STANDALONE_CONTENT_TAIL", value, childCount, markdownChildren);
    }

    else if (strcmp(latexNode->nodeType, "SECTION_SEQUENCE")==0) {
        return createMarkdownNode("HEADING1_SEQUENCE", value, childCount, markdownChildren);
    } 

    else if (strcmp(latexNode->nodeType, "SECTION_SEQUENCE_TAIL")==0) {
        return createMarkdownNode("HEADING1_SEQUENCE_TAIL", value, childCount, markdownChildren);
    } 

    else if (strcmp(latexNode->nodeType, "SECTION_NT")==0) {
        return createMarkdownNode("HEADING1_NT", value, childCount, markdownChildren);
    }

    else if (strcmp(latexNode->nodeType, "SECTION_HEADER")==0) {
        return createMarkdownNode("HEADING1_HEADER", value, childCount, markdownChildren);
    } 

    else if (strcmp(latexNode->nodeType, "SECTION_BODY")==0) {
        return createMarkdownNode("HEADING1_BODY", value, childCount, markdownChildren);
    } 

    else if (strcmp(latexNode->nodeType, "SECTION_BODY_TAIL")==0) {
        return createMarkdownNode("HEADING1_BODY_TAIL", value, childCount, markdownChildren);
    } 

    else if (strcmp(latexNode->nodeType, "SUBSECTION_SEQUENCE")==0) {
        return createMarkdownNode("HEADING2_SEQUENCE", value, childCount, markdownChildren);
    } 

    else if (strcmp(latexNode->nodeType, "SUBSECTION_SEQUENCE_TAIL")==0) {
        return createMarkdownNode("HEADING2_SEQUENCE_TAIL", value, childCount, markdownChildren);
    } 

    else if (strcmp(latexNode->nodeType, "SUBSECTION_NT")==0) {
        return createMarkdownNode("HEADING2_NT", value, childCount, markdownChildren);
    }

    else if (strcmp(latexNode->nodeType, "SUBSECTION_HEADER")==0) {
        return createMarkdownNode("HEADING2_HEADER", value, childCount, markdownChildren);
    } 

    else if (strcmp(latexNode->nodeType, "SUBSECTION_BODY")==0) {
        return createMarkdownNode("HEADING2_BODY", value, childCount, markdownChildren);
    } 

    else if (strcmp(latexNode->nodeType, "SUBSECTION_BODY_TAIL")==0) {
        return createMarkdownNode("HEADING2_BODY_TAIL", value, childCount, markdownChildren);
    } 

    else if (strcmp(latexNode->nodeType, "SUBSUBSECTION_SEQUENCE")==0) {
        return createMarkdownNode("HEADING3_SEQUENCE", value, childCount, markdownChildren);
    } 

    else if (strcmp(latexNode->nodeType, "SUBSUBSECTION_SEQUENCE_TAIL")==0) {
        return createMarkdownNode("HEADING3_SEQUENCE_TAIL", value, childCount, markdownChildren);
    } 

    else if (strcmp(latexNode->nodeType, "SUBSUBSECTION_NT")==0) {
        return createMarkdownNode("HEADING3_NT", value, childCount, markdownChildren);
    }

    else if (strcmp(latexNode->nodeType, "SUBSUBSECTION_HEADER")==0) {
        return createMarkdownNode("HEADING3_HEADER", value, childCount, markdownChildren);
    } 

    else if (strcmp(latexNode->nodeType, "SUBSUBSECTION_BODY")==0) {
        return createMarkdownNode("HEADING3_BODY", value, childCount, markdownChildren);
    } 

    else if (strcmp(latexNode->nodeType, "SECTION_CONTENT")==0) {
        return createMarkdownNode("HEADING1_CONTENT", value, childCount, markdownChildren);
    } 

    else if (strcmp(latexNode->nodeType, "SECTION_CONTENT_TAIL")==0) {
        return createMarkdownNode("HEADING1_CONTENT_TAIL", value, childCount, markdownChildren);
    } 

    else if (strcmp(latexNode->nodeType, "SUBSECTION_CONTENT")==0) {
        return createMarkdownNode("HEADING2_CONTENT", value, childCount, markdownChildren);
    } 

    else if (strcmp(latexNode->nodeType, "SUBSECTION_CONTENT_TAIL")==0) {
        return createMarkdownNode("HEADING2_CONTENT_TAIL", value, childCount, markdownChildren);
    }

    else if (strcmp(latexNode->nodeType, "SUBSUBSECTION_CONTENT")==0) {
        return createMarkdownNode("HEADING3_CONTENT", value, childCount, markdownChildren);
    } 

    else if (strcmp(latexNode->nodeType, "SUBSUBSECTION_CONTENT_TAIL")==0) {
        return createMarkdownNode("HEADING3_CONTENT_TAIL", value, childCount, markdownChildren);
    }

    else if (strcmp(latexNode->nodeType, "CONTENT_BLOCK")==0) {
        return createMarkdownNode("CONTENT_BLOCK", value, childCount, markdownChildren);
    }

    else if (strcmp(latexNode->nodeType, "ITALICS_NT")==0) {
        return createMarkdownNode("ITALICS_NT", value, childCount, markdownChildren);
    }

    else if (strcmp(latexNode->nodeType, "BOLD_NT")==0) {
        return createMarkdownNode("BOLD_NT", value, childCount, markdownChildren);
    }

    else if (strcmp(latexNode->nodeType, "HRULE_NT")==0) {
        return createMarkdownNode("HRULE_NT", value, childCount, markdownChildren);
    }

    else if (strcmp(latexNode->nodeType, "HLINE_NT")==0) {
        return createMarkdownNode("HLINE_NT", value, childCount, markdownChildren);
    }

    else if (strcmp(latexNode->nodeType, "PARAGRAPH_NT")==0) {
        return createMarkdownNode("PARAGRAPH_NT", value, childCount, markdownChildren);
    }

    else if (strcmp(latexNode->nodeType, "CODE_LISTING_NT")==0) {
        return createMarkdownNode("FENCED_CODE_BLOCK_NT", value, childCount, markdownChildren);
    }

    else if (strcmp(latexNode->nodeType, "TEXT_CONTENT_NT")==0) {
        return createMarkdownNode("TEXT_CONTENT_NT", value, childCount, markdownChildren);
    }

    else if (strcmp(latexNode->nodeType, "TEXT_CONTENT_NT_TAIL")==0) {
        return createMarkdownNode("TEXT_CONTENT_NT_TAIL", value, childCount, markdownChildren);
    }

    else if (strcmp(latexNode->nodeType, "HREF_NT")==0) {
        return createMarkdownNode("HREF_NT", value, childCount, markdownChildren);
    }

    else if (strcmp(latexNode->nodeType, "INCLUDE_GRAPHICS_NT")==0) {
        return createMarkdownNode("IMAGE_NT", value, childCount, markdownChildren);
    }

    else if (strcmp(latexNode->nodeType, "INCLUDE_GRAPHICS_NT_TAIL")==0) {
        return createMarkdownNode("IMAGE_NT_TAIL", value, childCount, markdownChildren);
    }

    else if (strcmp(latexNode->nodeType, "IMG_OPTIONS_NT")==0) {
        return createMarkdownNode("IMG_OPTIONS_NT", value, childCount, markdownChildren);
    }

    else if (strcmp(latexNode->nodeType, "LISTS_NT")==0) {
        return createMarkdownNode("LISTS_NT", value, childCount, markdownChildren);
    }

    else if (strcmp(latexNode->nodeType, "ORDERED_LISTS_NT")==0) {
        return createMarkdownNode("ORDERED_LISTS_NT", value, childCount, markdownChildren);
    }

    else if (strcmp(latexNode->nodeType, "UNORDERED_LISTS_NT")==0) {
        return createMarkdownNode("UNORDERED_LISTS_NT", value, childCount, markdownChildren);
    }

    else if (strcmp(latexNode->nodeType, "NESTED_LISTS_NT")==0) {
        return createMarkdownNode("NESTED_LISTS_NT", value, childCount, markdownChildren);
    }

    else if (strcmp(latexNode->nodeType, "ITEMS_OPT_NESTED_LISTS_SEQUENCE")==0) {
        return createMarkdownNode("ITEMS_OPT_NESTED_LISTS_SEQUENCE", value, childCount, markdownChildren);
    }

    else if (strcmp(latexNode->nodeType, "ITEM_OPT_NESTED_LISTS_NT")==0) {
        return createMarkdownNode("ITEM_OPT_NESTED_LISTS_NT", value, childCount, markdownChildren);
    }

    else if (strcmp(latexNode->nodeType, "ITEMS_OPT_NESTED_LISTS_TAIL")==0) {
        return createMarkdownNode("ITEMS_OPT_NESTED_LISTS_TAIL", value, childCount, markdownChildren);
    }

    else if (strcmp(latexNode->nodeType, "TABLE_NT")==0) {
        return createMarkdownNode("TABLE_NT", value, childCount, markdownChildren);
    }

    else if (strcmp(latexNode->nodeType, "TABLE_ROWS_NT")==0) {
        return createMarkdownNode("TABLE_ROWS_NT", value, childCount, markdownChildren);
    }

    else if (strcmp(latexNode->nodeType, "TABLE_ROWS_NT_TAIL")==0) {
        return createMarkdownNode("TABLE_ROWS_NT_TAIL", value, childCount, markdownChildren);
    }

    else if (strcmp(latexNode->nodeType, "TABLE_ROW_NT")==0) {
        return createMarkdownNode("TABLE_ROW_NT", value, childCount, markdownChildren);
    }

    else if (strcmp(latexNode->nodeType, "TABLE_ROW_NT_TAIL")==0) {
        return createMarkdownNode("TABLE_ROW_NT_TAIL", value, childCount, markdownChildren);
    }

    else if (strcmp(latexNode->nodeType, "SECTION")==0) {
        return createMarkdownNode("HEADING1", "# ", childCount, markdownChildren);
    }

    else if (strcmp(latexNode->nodeType, "SUBSECTION")==0) {
        return createMarkdownNode("HEADING2", "## ", childCount, markdownChildren);
    }

    else if (strcmp(latexNode->nodeType, "SUBSUBSECTION")==0) {
        return createMarkdownNode("HEADING3", "### ", childCount, markdownChildren);
    }

    else if (strcmp(latexNode->nodeType, "ITALICS")==0) {
        return createMarkdownNode("ITALICS", value, childCount, markdownChildren);
    }

    else if (strcmp(latexNode->nodeType, "BOLD")==0) {
        return createMarkdownNode("BOLD", value, childCount, markdownChildren);
    }

    else if (strcmp(latexNode->nodeType, "HRULE")==0) {
        return createMarkdownNode("HRULE", "___", childCount, markdownChildren);
    }

    else if (strcmp(latexNode->nodeType, "HLINE")==0) {
        return createMarkdownNode("HLINE", value, childCount, markdownChildren);
    }

    else if (strcmp(latexNode->nodeType, "PARAGRAPH")==0) {
        return createMarkdownNode("PARAGRAPH", "\n", childCount, markdownChildren);
    }

    else if (strcmp(latexNode->nodeType, "BEGIN_VERBATIM")==0) {
        return createMarkdownNode("BEGIN_FENCED_CODE_BLOCK", "```", childCount, markdownChildren);
    }

    else if (strcmp(latexNode->nodeType, "END_VERBATIM")==0) {
        return createMarkdownNode("END_FENCED_CODE_BLOCK", "```", childCount, markdownChildren);
    }

    else if (strcmp(latexNode->nodeType, "HREF")==0) {
        return createMarkdownNode("HREF", value, childCount, markdownChildren);
    }

    else if (strcmp(latexNode->nodeType, "INCLUDE_GRAPHICS")==0) {
        return createMarkdownNode("IMAGE", value, childCount, markdownChildren);
    }

    else if (strcmp(latexNode->nodeType, "BEGIN_ENUMERATE")==0) {
        return createMarkdownNode("BEGIN_ORDERED_LIST", value, childCount, markdownChildren);
    }

    else if (strcmp(latexNode->nodeType, "END_ENUMERATE")==0) {
        return createMarkdownNode("END_ORDERED_LIST", value, childCount, markdownChildren);
    }

    else if (strcmp(latexNode->nodeType, "BEGIN_ITEMIZE")==0) {
        return createMarkdownNode("BEGIN_UNORDERED_LIST", value, childCount, markdownChildren);
    }

    else if (strcmp(latexNode->nodeType, "END_ITEMIZE")==0) {
        return createMarkdownNode("END_UNORDERED_LIST", value, childCount, markdownChildren);
    }

    else if (strcmp(latexNode->nodeType, "ITEM")==0) {
        return createMarkdownNode("ITEM", value, childCount, markdownChildren);
    }

    else if (strcmp(latexNode->nodeType, "BEGIN_TABULAR")==0) {
        return createMarkdownNode("BEGIN_TABLE", value, childCount, markdownChildren);
    }

    else if (strcmp(latexNode->nodeType, "END_TABULAR")==0) {
        return createMarkdownNode("END_TABLE", value, childCount, markdownChildren);
    }

    else if (strcmp(latexNode->nodeType, "ROW_SEPARATOR")==0) {
        return createMarkdownNode("ROW_SEPARATOR", "|\n", childCount, markdownChildren);
    }

    else if (strcmp(latexNode->nodeType, "COLUMN_SEPARATOR")==0) {
        return createMarkdownNode("COLUMN_SEPARATOR", value, childCount, markdownChildren);
    }

    else if (strcmp(latexNode->nodeType, "OPEN_BRACE")==0) {
        return createMarkdownNode("OPEN_BRACE", value, childCount, markdownChildren);
    }

    else if (strcmp(latexNode->nodeType, "CLOSE_BRACE")==0) {
        return createMarkdownNode("CLOSE_BRACE", value, childCount, markdownChildren);
    }

    else if (strcmp(latexNode->nodeType, "IMG_OPTIONS")==0) {
        return createMarkdownNode("IMG_OPTIONS", value, childCount, markdownChildren);
    }

    else if (strcmp(latexNode->nodeType, "IMG_PATH")==0) {
        return createMarkdownNode("IMG_PATH", value, childCount, markdownChildren);
    }

    else if (strcmp(latexNode->nodeType, "TEXT")==0) {
        return createMarkdownNode("TEXT", value, childCount, markdownChildren);
    }

    else if (strcmp(latexNode->nodeType, "NEWLINE")==0) {
        return createMarkdownNode("NEWLINE", value, childCount, markdownChildren);
    }

    else if (strcmp(latexNode->nodeType, "COLUMN_SPEC")==0) {
        return createMarkdownNode("COLUMN_SPEC", value, childCount, markdownChildren);
    }

    else if (strcmp(latexNode->nodeType, "EPSILON")==0) {
        return createMarkdownNode("EPSILON", value, childCount, markdownChildren);
    }

    
    return NULL;  // Default case, should not reach here if all node types are handled
}



void generateMarkdown(ASTNode* node, FILE* file, char *parentNodeType, char *currentListType, int indentLevel, int currentIndex) {
    if (node == NULL) return;

    if(node->value!=NULL) fprintf(file, "%s", node->value);



    // Determine the node type and handle accordingly
    if (strcmp(node->nodeType, "ITALICS_NT") == 0) {
        fprintf(file, "*");
        generateMarkdown(node->children[2], file, node->nodeType, currentListType, indentLevel, currentIndex);
        fprintf(file, "*");
        generateMarkdown(node->children[4], file, node->nodeType, currentListType, indentLevel, currentIndex);
    } 
    else if (strcmp(node->nodeType, "BOLD_NT") == 0) {
        fprintf(file, "**");
        generateMarkdown(node->children[2], file, node->nodeType, currentListType, indentLevel, currentIndex);
        fprintf(file, "**");
        generateMarkdown(node->children[4], file, node->nodeType, currentListType, indentLevel, currentIndex);
    }

    else if (strcmp(node->nodeType, "HREF_NT") == 0) {
        fprintf(file, "[");
        generateMarkdown(node->children[5], file, node->nodeType, currentListType, indentLevel, currentIndex);
        fprintf(file, "](");
        generateMarkdown(node->children[2], file, node->nodeType, currentListType, indentLevel, currentIndex);
        fprintf(file, ")");
        generateMarkdown(node->children[7], file, node->nodeType, currentListType, indentLevel, currentIndex);
    }

    else if (strcmp(node->nodeType, "IMAGE_NT") == 0) {
        generateMarkdown(node->children[2], file, node->nodeType, currentListType, indentLevel, currentIndex);
    }

    else if (strcmp(node->nodeType, "IMAGE_NT_TAIL") == 0) {
        fprintf(file, "![alt text](");
        generateMarkdown(node->children[1], file, node->nodeType, currentListType, indentLevel, currentIndex);
        fprintf(file, ")");
        generateMarkdown(node->children[3], file, node->nodeType, currentListType, indentLevel, currentIndex);
    }


    else if (strcmp(node->nodeType, "ORDERED_LISTS_NT") == 0) {

        currentListType = "ORDERED_LIST";
        currentIndex = 0;
        generateMarkdown(node->children[2], file, node->nodeType, currentListType, indentLevel, currentIndex+1);
        generateMarkdown(node->children[4], file, node->nodeType, currentListType, indentLevel, currentIndex);
    } 

    else if (strcmp(node->nodeType, "UNORDERED_LISTS_NT") == 0) {
        
        currentListType = "UNORDERED_LIST";
        generateMarkdown(node->children[2], file, node->nodeType, currentListType, indentLevel, currentIndex);
        generateMarkdown(node->children[4], file, node->nodeType, currentListType, indentLevel, currentIndex);

    } 

    else if (strcmp(node->nodeType, "ITEM_OPT_NESTED_LISTS_NT") == 0) {
        if(strcmp(currentListType, "ORDERED_LIST")==0)
        {
            fprintf(file, "%*s%d. ", indentLevel * 4, "", currentIndex);
        }

        else if(strcmp(currentListType, "UNORDERED_LIST")==0) {

            fprintf(file, "%*s- ", indentLevel * 4, "");
        }

        for (int i = 0; i < node->childCount; ++i) {
        generateMarkdown(node->children[i], file, node->nodeType, currentListType, indentLevel, currentIndex+1);
    }
    } 
    else if (strcmp(node->nodeType, "NESTED_LISTS_NT") == 0) {
        // Recursively handle nested list with increased indentation
        generateMarkdown(node->children[0], file, node->nodeType, currentListType, indentLevel + 1, currentIndex);
    }

    else if (strcmp(node->nodeType, "TABLE_NT") == 0) {

        int columnCount = 0;
        char *ptr = node->children[2]->value;
        while(*ptr != '\0')
        {
            if(*ptr == 'c') columnCount++;
            ptr++;
        }
        generateMarkdown(node->children[6]->children[0], file, node->nodeType, currentListType, indentLevel, currentIndex);
        generateMarkdown(node->children[6]->children[1], file, node->nodeType, currentListType, indentLevel, currentIndex);

        // Print separator for header
        for(int i=0; i<columnCount; i++)
        {
            fprintf(file, "|:----");
        }
        fprintf(file, ":|\n");

        generateMarkdown(node->children[6]->children[4], file, node->nodeType, currentListType, indentLevel, currentIndex);
        generateMarkdown(node->children[8], file, node->nodeType, currentListType, indentLevel, currentIndex);

    }

    else if (strcmp(node->nodeType, "TABLE_ROW_NT") == 0) {
        fprintf(file, "|");
        
        for (int i = 0; i < node->childCount; ++i) {
        generateMarkdown(node->children[i], file, node->nodeType, currentListType, indentLevel, currentIndex);
    }

    }

    else if (strcmp(node->nodeType, "TABLE_ROWS_NT") == 0) {
        
        generateMarkdown(node->children[0], file, node->nodeType, currentListType, indentLevel, currentIndex);
        generateMarkdown(node->children[1], file, node->nodeType, currentListType, indentLevel, currentIndex);
        generateMarkdown(node->children[4], file, node->nodeType, currentListType, indentLevel, currentIndex);

    }

    else {
        for (int i = 0; i < node->childCount; ++i) {
        generateMarkdown(node->children[i], file, node->nodeType, currentListType, indentLevel, currentIndex);
    }
    }


}



