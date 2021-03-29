#include "header.h"


int main()
{
    int T[5] = {3, 7, 9, 4, 7};
    t_list L = create_node(0);
    add_node(&L, 1);
    add_node(&L, 2);
    add_node(&L, 3);
    add_node(&L, 4);
    print_list(L);
    t_list A = array_to_list(T, 5);
    print_list(A);
    remove_node(3, &L);
    print_list(L);
    return 0;
}
