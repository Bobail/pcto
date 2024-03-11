#include <stdio.h>

int main()
{
    int a;
    printf("inserisce l'eta\n");
    scanf("%d", &a);
    if(a > 18)
    {
        printf("sei un maggiorene\n");
    }
    else
    {
        printf("sei un minolene\n");
    }
}