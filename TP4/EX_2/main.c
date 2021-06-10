#include "header.h"

int main()
{
    B_tree T1 = NULL;
    B_tree T2 = NULL;
    T1 = makeBtree(1, NULL, NULL);
    T2 = makeBtree(5, NULL, NULL);
    getRight(T2, &T1);
    B_tree T3 = makeBtree(4, T1, T2);
    B_tree T = makeBtree(6, T3, T2);
    printf("%d", max_depth(T));
    printf("\n%d", search(T));
    printf("\n%d", tree_size(T));
    liberateTree(&T);
    liberateTree(&T1);
    liberateTree(&T2);
    return 0;
}
