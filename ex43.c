#include <stdio.h>
int main()
{
    int a;
    int b;
    printf("inserisci un numero intero\n");
    scanf("%d", &a);
    
    while(a != 0)
        if(a < 0)
        {
            printf("%d e negativo\n", a);
            printf("inserisci un altro numero\n");
            scanf("%d", &a);
        }
        else if(a > 0)
        {
            printf("%d e positivo\n", a);
            printf("inserisci un altro numero\n");
            scanf("%d", &a);
        }
   
}