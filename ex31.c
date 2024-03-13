#include <stdio.h>

int prova2()
{
    printf("ciaoo\n");
    
}

int prova()
{
    printf("2\n");
    prova2();
}
int somma(int a,int b)
{
    return a + b;
}

int main()
{
    int num1;
    int num2;
    int ris;
    printf("inserisci due numeri\n");
    scanf("%d %d", &num1, &num2);

    ris = somma(num1, num2);
    printf("%d\n", ris);
}

