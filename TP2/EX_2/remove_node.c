#include "header.h"


unsigned size(t_list l)
{
    unsigned L = 0;
    if (l != NULL)
    {
        t_list temp = l;
        while (temp != NULL)
        {
            L += 1;
            temp = temp->next;
        }
    }
    return L;
}
void remove_node(unsigned x, t_list *L)
{
    if (*L == NULL)
    {
        return;
    }
    if (x == 0)
    {
        if (*L != NULL)
        {
            t_list temp = *L;
            *L = (*L)->next;
            free(temp);
        }
        return;
    }
    if ((*L)->next == NULL)
    {
        free(*L);
        *L = NULL;
        return;
    }
    if (x < size(*L))
    {
        t_list temp = *L;
        t_list temp_1 = *L;
        int i = 0;
        while (i < x)
        {
            temp_1 = temp;
            temp = temp->next;
            i += 1;
        }
        temp_1->next = temp->next;
        free(temp);
        return;
    }
    return;
}
