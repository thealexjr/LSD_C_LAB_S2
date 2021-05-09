#include "header.h"



void print_array(array A)
{
    if (A.head == NULL)
    {
        printf("[]");
        return;
    }
    printf("[");
    for (int i = 0; i < A.lengh - 1; i++)
    {
        printf("%d, ", A.head[i]);
    }
    printf("%d]\n", A.head[A.lengh - 1]);
}
