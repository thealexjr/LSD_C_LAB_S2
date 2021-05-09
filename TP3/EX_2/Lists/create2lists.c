#include "header.h"


void create2lists(list *L1, list *L2, unsigned a, unsigned b)
{

    for (int i = 0; i < a; i++)
    {
        addcell(rand(), L1);
    }

    for (int j = 0; j < b; j++)
    {
        addcell(rand(), L2);
    }
    return;
}
