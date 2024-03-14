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
    else if(q == 0 || q == 1)
    {
        return q;
    }

}


int main()
{
    double a;
    double b;
    double c;
    printf("inserisci i tre numeri di equazione di secondo grado in\n a.     b.     c.\n");
    scanf("%.3f %.3f %.3f", &a, &b, &c);
    double delta = b * b - (4 * (float)a * c);
    printf("%f\n", delta);

    if(delta > 0)
    {
        double x1 = (-b + squrt(delta)) / 2 / a;
        double x2 = (-b - squrt(delta)) / 2 / a;
        printf("la soluzione e %.3f e %.3f", x1, x2);
    }
    else if(delta == 0)
    {
        float x = -b / a / 2;
        printf("la soluzione e %f", x);
    }
    else 
    {
        printf("L'equazione non ammatte soluzioni reali");
    }

}