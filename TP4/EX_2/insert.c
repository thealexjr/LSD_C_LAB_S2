#include "header.h"
 
void insertAbrIterative(int x, B_tree *T)
{
    if (*T == NULL)
    {
        *T = makeBtree(x, NULL, NULL);
        return;
    }
    B_tree temp = *T;
    while (temp != NULL)
    {
        if (x == (*T)->value)
            return;
        if (x < temp->value && temp->left == NULL)
        {
            getLeft(makeBtree(x, NULL, NULL), &temp);
            return;
        }
        if (x > temp->value && temp->right == NULL)
        {
            getRight(makeBtree(x, NULL, NULL), &temp);
            return;
        }
        if (x < temp->value)
            temp = temp->left;
        temp = temp->right;
    }
}
