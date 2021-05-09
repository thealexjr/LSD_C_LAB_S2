#include "header.h"


int main()
{
    srand(time(NULL));
    list L1 = NULL;
    list L2 = NULL;
    create2lists(&L1, &L2, 5, 3);
    print_list(L1);
    print_list(L2);
    sort_list(&L1);
    print_list(L1);
    list L = merge_lists(L1, L2);
    print_list(L);
    remove_duplicated(&L);
    print_list(L);
    return 0;
}
