#include<stdio.h>

int main()
{
    int a = 16;
    int b = 8;
    if(a%b == 0)
    {
        printf("Il numero %d un multicipio di %d\n", a, b);
    }
    else
    {
        printf("il numero %d non é un multicipio di %d\n", a, b);
    }
}