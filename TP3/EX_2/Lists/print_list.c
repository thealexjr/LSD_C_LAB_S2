#include "header.h"



void print_list(list l)
{
    if (l == NULL)
        printf("[ ]");
    else
    {
        printf("[");
        list temp = l;
        while (temp->next != NULL)
        {
            printf("%d , ", temp->value);
            temp = temp->next;
        }
        if (temp != NULL)
            printf("%d", temp->value);
        printf("]\n");
    }
}
