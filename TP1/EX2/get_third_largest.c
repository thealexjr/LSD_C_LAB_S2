#include "header.h"

/*
** Hint: for finding the largest third element in the array you don't need
** to sort the whole array, only three variables is needed for this purpose
** and the algorithm comlexity will be O(n).
*/
int     get_third_largest(int *tab, int size)
{
    int A[3] = {0, 0, 0};
    for (int i = 0; i < 3; i++)
    {
        int im = 0, max = 0;
        for (int j = 0; j < size; j++)
        {
            if (tab[j] > max)
            {
                A[i] = tab[j];
                max = tab[j];
                im = j;
            }
        }
        tab[im] = 0;
    }
    return A[2];
}
