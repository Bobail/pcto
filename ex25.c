#include<stdio.h>

int main()
{
    int a = 1969;
    int b;
    
    
    printf("inserisci il tuo anno di nascita\n");
    scanf("%d", &b);
    
 
    if(a < b)
    {
        printf("sei nato dopo %d anni della prima volta che l'uomo sale sulla luna\n", b - a);
    }
    else if(a == b)
    {
        printf("sei nato nel stesso anno della prima volta che l'uomo sale sulla luna\n");
    }
    else
    {
        printf("sei nato prima %d anni della prima volta che l'uomo sale sulla luna\n", a - b);
    }
}