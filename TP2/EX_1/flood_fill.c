include "header.h"
  
  
void flood_fill(char **c, t_point p, t_point d, char x)
{
    if ((p.dim1 >= d.dim1) || (p.dim2 >= d.dim2) || (p.dim1 < 0) || (p.dim2 < 0))
        return;
    if (c[p.dim1][p.dim2] == x)
    {
        c[p.dim1][p.dim2] = 'a';
        t_point right;
        right.dim1 = p.dim1 + 1;
        right.dim2 = p.dim2;
        t_point down;
        down.dim1 = p.dim1; 
        down.dim2 = p.dim2 - 1;
        t_point left;
        left.dim1 = p.dim1 - 1;
        left.dim2 = p.dim2;
        t_point up;
        up.dim1 = p.dim1;
        right.dim2 = p.dim2 + 1;
        flood_fill(c, right, d, x);
        flood_fill(c, down, d, x);
        flood_fill(c, left, d, x);
        flood_fill(c, up, d, x);
    }
}
