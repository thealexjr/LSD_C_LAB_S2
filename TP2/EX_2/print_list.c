#include "header.h"


void print_list(t_list l)
{
    if (l == NULL)
        printf("[ ]");
    else
    {
        printf("[");
        t_list temp = l;
        while (temp->next != NULL)
        {
            printf("%d , ", temp->data);
            temp = temp->next;
        }
        if (temp != NULL)
            printf("%d", temp->data);
        printf("]\n");
    }
}
