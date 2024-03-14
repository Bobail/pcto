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

double perimetro(double num1, double num2, double num3)
{
    return num1 + num2 + num3;
}
double area(double num4, double num5, double num6)
{
    double semiperimetro = perimetro(num4, num5, num6) / 2;
    return squrt(semiperimetro *(semiperimetro - num4) * (semiperimetro - num5) * (semiperimetro - num6));
}



int main()
{
    double a;
    double b;
    double c;
    printf("inserisci i tre lati in\n a.     b.     c.\n");
    scanf("%lf %lf %lf", &a, &b, &c);

    if(c > a + b || b > a + c || a > b + c)
    {
        printf("non possono essere tre lati del triangolo\n");
    }
    else
    {
        double perimetro1 = perimetro(a, b, c);
        double area1 = area(a, b, c);
        printf("il perimetro di questo triangolo e %.3f\n", perimetro1);
        printf("il area di questo triangolo e %.3f\n", area1);
    }
}
