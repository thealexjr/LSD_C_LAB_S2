#include "header.h"



int occure(int x, array A)
{
    for (int i = 0; i < A.lengh; i++)
    {
        if (A.head[i] == x)
            return 1;
    }
    return 0;
}

array remove_duplicated(array A)
{
    array T;
    T.lengh = A.lengh;
    T.head = (int *)malloc(T.lengh * sizeof(int));
    int i = 0;
    for (int j = 0; j < A.lengh; j++)
    {
        if (occure(A.head[j], T) == 0)
        {
            T.head[i] = A.head[j];
            i++;
        }
    }
    array B;
    B.lengh = i;
    B.head = (int *)malloc(i * sizeof(int));
    for (int j = 0; j < i; j++)
    {
        B.head[j] = T.head[j];
    }
    return B;
}
