#include "header.h"

int iterative_fibo(int n)
{
    int u0 = 0, u1 = 0, un = 0;
    for (int i = 0; i < n - 1; i++)
    {
        un = u0 + u1;
        u0 = u1;
        u1 = un;
    }
    return un;
}
