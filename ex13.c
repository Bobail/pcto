#include <stdio.h>

int main()
{
    int a;

    printf("inserisci un numero\n");
    scanf("%d", &a);
    if(a > 10)
    {
        printf("il numero %d é minole di 10\n", a);

    }
    else if(a == 5) 
    {
        printf("il numero %d é ugaule a 5\n", a);

    }
    else if(a > 5)
    {
        printf("il numero %d é maggiore di 5\n", a);

    }
    else
    {
        printf("il numero %d é minole di 5\n", a);
    }
}