#ifndef HEADER
#define HEADER


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct array
{
    int lengh;
    int *head;
} array;

array rand_fill_array(int );
void print_array(array );
void swap(int *, int *);
void sort_array(array *);
array merge_arrays(array , array );
int occure(int , array );
array remove_duplicated(array );

#endif
