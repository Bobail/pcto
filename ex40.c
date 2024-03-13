#include <stdio.h>

int main()
{
    char lettere[10];
    int b = 0;
    printf("inserisci una parola\n");
    scanf("%s", lettere);

    while(b<10)
    {
        printf("%c\n", lettere[b]);
        b++;
    }
}