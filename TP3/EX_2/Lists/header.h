#ifndef HEADER
#define HEADER


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct cell
{
    int value;
    struct cell *next;
};
typedef struct cell cell;
typedef cell *list;

void addcell(int , list *);
void print_list(list );
void create2lists(list *, list *, unsigned , unsigned );
list merge_lists(list , list );
void swap(int *, int *);
void sort_list(list *);
list occure(int , list );
void remove_duplicated(list *);





#endif
