#include "header.h"


int main()
{

    array A = rand_fill_array(5);
    array B = rand_fill_array(4);
    print_array(A);
    print_array(B);
    sort_array(&A);
    print_array(A);
    array C = merge_arrays(A, B);
    print_array(C);
    remove_duplicated(C);
    print_array(C);
}
