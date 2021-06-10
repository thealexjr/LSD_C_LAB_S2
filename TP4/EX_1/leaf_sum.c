#include "header.h"

int leaf_sum(B_tree T)
{
    if (T == NULL)
        return 0;
    if (T->left == NULL && T->right == NULL)
        return T->value;
    return (leaf_sum(T->left) + leaf_sum(T->right));
}
