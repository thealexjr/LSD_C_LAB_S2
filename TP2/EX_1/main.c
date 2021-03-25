#include "header.h"

int main()
{
    t_point p, pos;
    char **c;
    printf("enter the dimensions  ");
    scanner(&p);
    c = constructor(p);
    printf("enter the values  ");
    constructor_scanner(p, c);
    for (int i = 0; i < p.dim1; i++)
    {
        for (int j = 0; j < p.dim2; j++)
        {
            printf("%c ", c[i][j]);
        }
        printf("\n");
    }
    printf("enter the wanted position");
    pos = position();
    flood_fill(c, pos, p, 'b');
    printf("\n the result is \n");
    for (int i = 0; i < p.dim1; i++)
    {
        for (int j = 0; j < p.dim2; j++)
        {
            printf("%c ", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
