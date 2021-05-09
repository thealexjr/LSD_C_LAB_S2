#include "header.h"


void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void sort_list(list *L)
{
    int swapped, i;
    list ptr1;
    list lptr = NULL;

    if (L == NULL)
        return;
    do
    {
        swapped = 0;
        ptr1 = *L;
        while (ptr1->next != lptr)
        {
            if (ptr1->value > ptr1->next->value)
            {
                swap(&(ptr1->value), &(ptr1->next->value));
                swapped = 1;
            }
            ptr1 = ptr1->next;
        }
        lptr = ptr1;
    } while (swapped);
}
