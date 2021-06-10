#include "header.h"

int max(int x, int y)
{
    if (x < y)
        return y;
    return x;
}

int treeDepth(B_tree T)
{
    if (T == NULL)
        return 0;
    return 1 + max(treeDepth(T->right), treeDepth(T->left));
}
