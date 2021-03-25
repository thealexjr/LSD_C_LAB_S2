#ifndef HEADER
#define HEADER



#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
typedef struct node node;
typedef node *t_list;

t_list create_node(int);
void add_node(t_list, int);
t_list array_to_list(int (*T)[], int n);
void print_list(t_list);
unsigned size(t_list);
void remove_node(unsigned, t_list *);


#endif
