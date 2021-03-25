#include "header.h"


t_list array_to_list(int (*T)[], int n)
{
    t_list l = NULL;
    if (n == 0)
        return l;
    for (int i = 0; i < n; i++)
    {
        add_node(l, (*T)[i]);
    }
    return l;
}
