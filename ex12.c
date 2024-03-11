#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;
    printf("inserisce la data di nascita\n");
    scanf("%d %d %d", &a, &b, &c);
    printf("la tua data di nascita e %d %d %d\n", a, b, c);
    if(2024 - c >= 18)
    {
        printf("tu sei un maggiorene\n");
    }
    else
    {
        printf("tu sei un minolene\n");

    }
 
}