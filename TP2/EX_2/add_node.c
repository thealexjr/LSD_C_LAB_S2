#include "header.h"


void add_node(t_list *l, int x)
{
    t_list t = create_node(x);
    if ((*l) == NULL)
        *l = t;
    else
    {
        t_list temp = *l;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = t;
    }
    return;
}
