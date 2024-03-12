#include<stdio.h>

int main()
{
    float a = 4;
    float b = 5;  
    float c = 8;

    if(a - b == b - c)
    {
        printf("seguono una progressione aritmetica\n");
    }
    else
    {
        printf("non seguono una progressione aritmetica\n");
    }
}