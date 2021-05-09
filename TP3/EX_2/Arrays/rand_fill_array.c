#include "header.h"



array rand_fill_array(int n)
{
    array A;
    A.lengh = n;
    A.head = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
        A.head[i] = rand();
    return A;
}
