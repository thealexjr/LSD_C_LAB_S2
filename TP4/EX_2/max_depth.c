#include "header.h"

int max_depth(B_tree *T)
{
    if(T=NULL)
        return 0;
    return 1+max(max_depth(T->left) , max_depth(T->right));
}
