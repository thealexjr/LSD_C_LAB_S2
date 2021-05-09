#include "header.h"


list occure(int x, list L)
{
    list ls = L;
    if (ls != NULL)
    {
        while (ls != NULL)
        {
            if (ls->value == x)
                return ls;
            ls = ls->next;
        }
    }
    return NULL;
}
void remove_duplicated(list *L)
{
    list l = NULL;
    for (list ls = *L; ls != NULL; ls = ls->next)
    {
        if (occure(ls->value, l) == NULL)
        {
            addcell(ls->value, &l);
        }
    }
    *L = l;
    return;
}
