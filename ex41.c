#include <stdio.h>

int main()
{
    char lettere[10];
    int b = 0;
    printf("inserisci una parola\n");
    scanf("%s", lettere);

    while(lettere[b] != '\0')
    {
        b++;
    }
    printf("%d\n", b);
}