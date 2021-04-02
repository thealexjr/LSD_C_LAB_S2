#ifndef HEADER
#define HEADER

#include <stdio.h>
#include <stdlib.h>

struct cell
{
    int value;
    struct cell *next;
};
typedef struct cell cell;
typedef cell *list;

void addcell(int, list *);
list convert(char *);
list convertInv(char *);
int palindrome(char *);
int palindrome_opt(char *);


#endif
