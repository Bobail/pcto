#include <stdio.h>

int prova2()
{
    printf("ciaoo\n");
    
}

int prova()
{
    printf("2\n");
    prova2();
}

int main()
{
    printf("1\n");
    prova();
    printf("3\n");
    prova2();
    prova();
}
