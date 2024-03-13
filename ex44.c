#include <stdio.h>

int main()
{
    char lettere[10];
    char stop[] = "stop";
    int b = 0;
    int i = 0;
    printf("inserisci una parola\n");
    scanf("%s", lettere);
    while(b < 10)
    {
        printf("%c\n", lettere[b]);
        b++;
    }
        b = 0;

    int equalstart = 0;
    while(lettere[i] != '\0' && stop[i] != '\0')
    {
        if(lettere[i] == stop[i])
        {
            equalstart = 1;
        }   
        i++;
    }
    while(equalstart == 0)
    {
        printf("inserisci un'altra parola\n");
        scanf("%s", lettere);
        while(b < 10)
        {
            printf("%c\n", lettere[b]);
            b++;
        }
        b = 0;
        if(lettere[i] == stop[i])
        {
            equalstart = 1;
        }   
        i++;
    }



   

       
}