#include "header.h"



void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void sort_array(array *A)
{
    for (int i = 0; i < A->lengh; i++)
    {
        for (int j = 0; j < A->lengh - i; j++)
        {
            if (A->head[j] > A->head[j + 1])
                swap(&A->head[j], &A->head[j + 1]);
        }
    }
}
