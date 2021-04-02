#include <header.h>

list convert(char *word)
{

    list L = NULL;
    for (int j = 0; j < strlen(word); j++)
    {
        addcell(word[j], &L);
    }
    return L;
}

list convertInv(char *word)
{

    list L = NULL;
    for (int j = strlen(word) - 1; j >= 0; j--)
    {
        addcell(word[j], &L);
    }
    return L;
}
