#include<stdio.h>

int main()
{
    float a = 4;
    float b = 4;  
    float c = 4;

    if(c == a == b)
    {
        printf("e un triangolo equilatero\n");
    }
    else if(b == a)
    {
        printf("e un triangolo isoscele\n");
    }
    else if(b == c)
    {
        printf("e un triangolo isoscele\n");
    }
    else if(c == a)
    {
        printf("e un triangolo isoscele\n");
    }
    else
    {
        printf("e un triangolo scaleno\n");
    }
}