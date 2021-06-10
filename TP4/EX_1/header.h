#ifndef HEADER
#define HEADER

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int value;
    struct node *right;
    struct node *left;
};
typedef struct node node;
typedef struct node *B_tree;

B_tree makeBtree(int , B_tree , B_tree );
void getLeft(B_tree , B_tree *);
void getRight(B_tree , B_tree *);
void liberateTree(B_tree *);
int max(int , int );
int treeDepth(B_tree );
int diametre(B_tree );
int leaf_sum(B_tree );


#endif
