#include <header.h>

void addcell(int x, list *L)
{
    list C = (list)malloc(sizeof(cell));
    C->value = x;
    C->next = NULL;
    if (*L == NULL)
        *L = C;
    else
    {
        list temp = *L;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = C;
    }
    return;
}
