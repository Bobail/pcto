#include<stdio.h>

int main()
{
    int a;
    int x;
    printf("inserisci un numero\n");
    scanf("%d", &a);

    x = 2;
    if(a == 1)
    {
        printf("1 non e un numero primo\n");
    }
    else
    {
        while (a%x != 0)
        x++;
        {
            if (x >= a)
            {
                printf("e un numero primo\n");
            }
            else
            {
                printf("non e numero primo\n");
            }

        }

        

    }

    return 0;

}