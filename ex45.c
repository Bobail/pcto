#include <stdio.h>

int squrt(double q)

{
    if(q > 1)
    {
        double p = q;
        double r = (p + (q / p)) / 2;
        while((p - r) >= 0.00001)
        {
            p = r;
            r = (p + (q / p)) / 2;
        }
        return r;
    }
    else if(q == 0 && q == 1)
    {
        return q;
    }

}


int main()
{
    int a;
    int b;
    int c;
    printf("inserisci i tre numeri di equazione di secondo grado in\n a.     b.     c.\n");
    scanf("%d %d %d", &a, &b, &c);
    int delta = b * b - 4 * (float)a * c;

    if(delta > 0)
    {
        int x1 = (-b + squrt(delta)) / 2 / a;
        int x2 = (-b - squrt(delta)) / 2 / a;
        printf("la soluzione e %d e %d", x1, x2);
    }
    else if(delta == 0)
    {
        int x = -b / a / 2;
        printf("la soluzione e %d", x);
    }
    else 
    {
        printf("L'equazione non ammatte soluzioni reali");
    }

}