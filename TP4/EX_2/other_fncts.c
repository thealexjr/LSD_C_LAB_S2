#include "header.h"

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
