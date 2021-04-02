#include <header.h>


int palindrome_opt(char *word)
{
    list L1 = convert(word);
    list L2 = convertInv(word);
    int l = 0;
    while (l < (strlen(word)) / 2 + 1)
    {
        if (L1->value != L2->value)
            return 0;
        L1 = L1->next;
        L2 = L2->next;
        l++;
    }
    return 1;
}
