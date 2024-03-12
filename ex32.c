#include<stdio.h>

int prova()

{
    int a; 
    printf("inserisci un numero\n");
    scanf("%d", &a);
    if(a > 10)
    {
        printf("il numero %d é maggiore di 10\n", a);

    }
    if(a == 5) 
    {
        printf("il numero %d é ugaule a 5\n", a);

    }
    if(a > 5)
    {
        printf("il numero %d é maggiore di 5\n", a);

    }
    if(a < 5)
    {
        printf("il numero %d é minole di 5\n", a);
    }

}

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
    prova();
}