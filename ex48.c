#include <stdio.h>
#include <stdlib.h>

int rand()
{

}


int main()
{
    printf("Il gioco si gioca sulla una serie dei numeri che generano casualmente, devi indovinare quel numero assegnato\n");
    int numero = rand();
    int numero_inserito;
    printf("%d\n", numero);
    scanf("%d", &numero_inserito);
    int punto = 0;
    while(numero == numero_inserito)
    {
        punto++;
        printf("hai ricevuto un punto!\n");
        printf("Un altro!\n %d\n\n", numero);
        printf("%d\n", numero);
        scanf("%d", &numero_inserito);
    }
    while(numero != numero_inserito)
    {
        printf("peccato!\n quesat. volta non hai ricevuto nessuno punto\n");
        printf("Ora un altro!\n %d\n\n", numero);
        printf("%d\n", numero);
        scanf("%d", &numero_inserito);
    }
}