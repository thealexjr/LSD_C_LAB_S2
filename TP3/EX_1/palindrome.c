#include "header.h"

int palindrome(char *word)
{
    list L1 = convert(word);
    list L2 = convertInv(word);
    while (L1 != NULL)
    {
        if (L1->value != L2->value)
            return 0;
        L1 = L1->next;
        L2 = L2->next;
    }
    return 1;
}
