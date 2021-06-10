#include "header.h"

int diametre(B_tree T)
{
    if (T == NULL)
        return 0;
    if (T->left == NULL || T->right == NULL)
        return treeDepth(T);
    return 1 + treeDepth(T->right) + treeDepth(T->left);
}
