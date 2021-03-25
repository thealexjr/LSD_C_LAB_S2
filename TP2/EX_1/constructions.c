#include "header"

char **constructor(t_point p)
{
    char **arr = (char **)malloc(p.dim1 * sizeof(char *));
    for (int i = 0; i < p.dim1; i++)
    {
        arr[i] = (char *)malloc(p.dim2 * sizeof(char));
    }
    return arr;
}

char **constructor_scanner(t_point p, char **c)
{

    for (int i = 0; i < p.dim1; i++)
    {
        for (int j = 0; j < p.dim2; j++)
        {
            scanf(" %c", &c[i][j]);
        }
    }
    return c;
}
