#ifndef AST_H
#define AST_H

typedef struct ASTNode {
    char *nodeType;
    char *value;
    struct ASTNode **children;
    int childCount;
} ASTNode;


#endif
