#include "header.h"


list merge_lists(list L1, list L2)
{
    list L = NULL;
    list temp = L1;
    while (temp != NULL)
    {
        addcell(temp->value, &L);
        temp = temp->next;
    }
    temp = L2;
    while (temp != NULL) 
    { 
        addcell(temp->value, &L);
        temp = temp->next;
    }
    return L;
}
