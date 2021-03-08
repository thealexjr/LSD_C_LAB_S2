#include "header.h"
#define N 100

// compare function is required by qsort to sort array
// qsort is used to check the result of your get_third_largest function
int compare(const void * a, const void * b)
{
    return (*(int*)b - *(int*)a);
}

int main()
{
    int tab[N];

    // fill up the table
    rand_fill_table(tab, N);

    // print the table
    print_table(tab, N);

    // find the third largest element in an array
    int res = get_third_largest(tab, N);

    // test and print the result
    qsort(tab, N, sizeof(int), compare);
    if (res == tab[N - 4])
        printf("result is correct, The third largest element in the tab array is : %d\n", res);
    else
        printf("Something is wrong with your function, %d is not the answer\n", res);

    return 0;
}
