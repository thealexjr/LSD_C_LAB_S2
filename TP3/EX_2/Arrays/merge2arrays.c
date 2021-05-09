#include "header.h"



array merge_arrays(array A1, array A2)
{
    array T;
    T.lengh = A1.lengh + A2.lengh;
    T.head = (int *)malloc(T.lengh * sizeof(int));
    for (int i = 0; i < A1.lengh; i++)
        T.head[i] = A1.head[i];
    for (int i = 0; i < A2.lengh; i++)
        T.head[A1.lengh + i] = A2.head[i];
    return T;
}
