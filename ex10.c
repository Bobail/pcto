#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;
    int d;
    int e;
    printf("Inserisci tutte l'éta della vostra fila\n");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    printf("La vostra éta sono: %d %d %d %d %d\n", a, b, c, d, e);
    printf("La loro somma é: %d\n", a + b + c + d + e);
}