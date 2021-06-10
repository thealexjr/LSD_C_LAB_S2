#include "header.h"


int search(int x, B_tree T)
{
    if (T=NULL)
        return 0;
    if (T->value ==x)
        return 1;
    if (T->value>x)
        return search(x,T->left);
    if (T->value<x)
        return search(x,T->right);    
}
