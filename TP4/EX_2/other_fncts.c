#include "header.h"

B_tree makeBtree(int x, B_tree T_1, B_tree T_2)
{
    B_tree T = (B_tree)malloc(sizeof(node));
    T->value = x;
    T->left = T_1;
    T->right = T_2;
    return T;
}

void getLeft(B_tree L, B_tree *T)
{
    if (*T == NULL)
        exit(EXIT_FAILURE);
    else
        (*T)->left = L;
}

void getRight(B_tree R, B_tree *T)
{
    if (*T == NULL)
        exit(EXIT_FAILURE);
    else
        (*T)->right = R;
}

void liberateTree(B_tree *T)
{
    B_tree temp = *T;
    if (temp == NULL)
        return;
    if (temp->left != NULL)
        liberateTree(&temp->left);
    if (temp->right != NULL)
        liberateTree(&temp->right);
    free(temp);
    *T = NULL;
}

int max(int x, int y)
{
    if(x>y)
        return x;
    return y;
}
