#ifndef HEADER
#define HEADER

#include <stdio.h>
#include <stdlib.h>

struct t_point
{
    int dim1;
    int dim2;
};
typedef struct t_point t_point;
void scanner(t_point);
char **constructor(t_point);
char **constructor_scanner(t_point, char **);
t_point position();
void flood_fill(char **, t_point, t_point, char);

#endif
