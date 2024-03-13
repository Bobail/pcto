#include <stdio.h>

int main()
{
    char lettere[10];
    int b = 10;
    printf("inserisci una parola\n");
    scanf("%s", lettere);

    while(b >= 0)
    {
        printf("%c\n", lettere[b]);
        b--;
    }
}