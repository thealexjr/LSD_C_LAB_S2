#include "header.h"


int tree_size(B_tree T){
    if (T==NULL)
        return 0;
    if (T->left==NULL && T->right==NULL)
        return 1;
    if (T->left==NULL)
        return 1+tree_size(T->right);
    if (T->right==NULL)
        return 1+tree_size(T->left);
    return 1+tree_size(T->left)+tree_size(T->right);
}
