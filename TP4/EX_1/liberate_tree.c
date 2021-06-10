#include "header.h"

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
