#include <stdio.h>
     


int quadrante(int num1, int num2)
{
    if(num1 > 0)
    {
        if(num2 > 0)
        {
            printf("sta al primo quadrante\n");
        }
        else
        {
            printf("sta al quarto quadrante\n");
        }
    }
    else
    {
        if(num2 > 0)
        {
            printf("sta al secondo quadrante\n");
        }
        else
        {
            printf("sta al terzo quadrante\n");
        }
    }
}



int main()
{
    int x;
    int y;
    printf("inserisci due coordinate\n x.     y.\n");
    scanf("%d %d", &x, &y);
    while(x == 0 || y == 0)
    {
        if(x == 0 && y == 0)
        {
            printf("Sta al (0;0)\n");
        }
        else if(x == 0)
        {
            printf("Sta al asse x\n");
        }
        else if(y == 0)
        {
            printf("Sta al asse y\n");
        }   
        printf("inserisci altri due coordinate\n x.     y.\n");
        scanf("%d %d", &x, &y);
    }
    
    while(x != 0 && y != 0)
    {
        int quadrante1 = quadrante(x, y);
        printf("inserisci altri due coordinate\n x.     y.\n");
        scanf("%d %d", &x, &y);
    }
}