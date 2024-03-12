#include<stdio.h>

int main()
{
    int numero;
    int somma;
    int divisori;
    float media;
    
    numero = 0;
    divisori = 0;
    somma = 0;
    while(numero >= 0)
    {
        printf("inserisci un numero intero positivo\n");
        scanf("%d", &numero);
        divisori++;
        somma = numero + somma;
        media = (float)somma / divisori;
        if(numero >= 0)
        {
        printf("%f\n", media);
        }
    }
    
    return 0;
}
