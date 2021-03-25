  
#include"header.h"


t_list create_node(int x)
{
    t_liste l = (t_list)malloc(sizeof(node));
    l->data = x;
    l->next = NULL;
    return l;
}
