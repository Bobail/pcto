#include<stdio.h>

int main()
{
    float a = 4;
    float b = 5;  
    float c = 8;

    if(c > a + b)
    {
        printf("non possono essere tre lati del triangolo\n");
    }
    else if(b > a + c)
    {
        printf("non possono essere tre lati del triangolo\n");
    }
    else if(a > b + c)
    {
        printf("non possono essere tre lati del triangolo\n");
    }
    else
    {
        printf("possono essere tre lati del triangolo\n");
    }
}