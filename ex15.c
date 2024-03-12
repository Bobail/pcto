#include <stdio.h>

int main()

{
    int a; 
    printf("Questo é un app per calcolare dal minuto ai secondi\n");
    printf("inserisci\n");
    scanf("%d", &a);
    if(a > 10)
    {
        printf("il numero %d é maggiore di 10\n", a);

    }
    if(a == 5) 
    {
        printf("il numero %d é ugaule a 5\n", a);

    }
    if(a > 5)
    {
        printf("il numero %d é maggiore di 5\n", a);

    }
    if(a < 5)
    {
        printf("il numero %d é minole di 5\n", a);
    }

}
