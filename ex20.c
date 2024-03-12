#include<stdio.h>

int main()
{
    float a;
    
    printf("inserisci una temperatura in Celsius\n");
    scanf("%f", &a);

    float b = a * 9 / 5 + 32;
    float c = a + 271.15;
    if(a < -273.15)
    {
        printf("errore\n");
    }
    else
    {
        printf("la temperatura in Fahremheit e %.2f, in Kelvin e %.2f\n", b, c);
    }
}