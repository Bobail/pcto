#include <stdio.h>

int main()
{
    int a;
    printf("inserisce un numero a\n");
    scanf("%d", &a);
    if(a > 10)
    {
        printf("a e maggiore di 10\n");
    }
    else
    {
        printf("a e minole di 10\n");
    }
}