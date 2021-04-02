#include "header.h"

int main(int argc, char **argv)
{
    printf("%d \n", argc);
    for (int i = 0; i < argc; i++)
    {
        for (int j = 0; argv[i][j] != '\0'; j++)
        {
            printf("%c ", argv[i][j]);
        }
        printf("\n");
    }
    int a = palindrome(argv[1]);
    if (a == 1)
        printf("it is a palindrome");
    else
        printf("it is not a palindrome");
    printf("");
    return 0;
}
