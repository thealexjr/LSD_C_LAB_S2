  
#include "header.h"


t_list create_node(int x)
{
    node *l = (node *)malloc(sizeof(node));
    l->data = x;
    l->next = NULL;
    return l;
}
