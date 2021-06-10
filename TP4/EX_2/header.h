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
void insertAbrIterative(int , B_tree *);
int max_depth(B_tree *);
int search(int , B_tree );
int tree_size(B_tree );

#endif
