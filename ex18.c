#include<stdio.h>

int main()
{
    int a;
    int b;
    printf("inserisci la tua eta per sapere se puoi prendere la patente\n");
    scanf("%d", &a);
    printf("In tuo stato quanti anni puo prendere la patente?\n");
    scanf("%d", &b);

    if(a > b)
    {
        printf("Puoi prendere la patente\n");
    }
    else
    {
        printf("devi aspettare ancora %d anni per prendere la patente\n", b - a);
    }
}