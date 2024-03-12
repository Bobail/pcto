#include<stdio.h>

int main()
{
    int a;
    
    printf("inserisci un anno\n");
    scanf("%d", &a);

    if(a%100 == 0)
    {
        printf("non e un anno bisestile\n");
    }
    else if(a%4 == 0)
    {
        printf("e un anno bisestile\n");
    }
    else 
    {
        printf("non e un anno bisestile\n");
    }
}