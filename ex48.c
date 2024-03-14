#include <stdio.h>
#include <stdlib.h>




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
        printf("ora hai %d punti!\n", punto);
        int numero = rand();
        printf("Un altro!\n %d\n\n", numero);
        scanf("%d", &numero_inserito);
        
    }
    while(numero != numero_inserito)
    {
        printf("peccato!\n questa volta non hai ricevuto nessuno punto\n");
        printf("hai %d punti!\n", punto);
        int numero = rand();
        printf("Ora un altro!\n %d\n\n", numero);
        scanf("%d", &numero_inserito);
        
    }
    return 0;
}