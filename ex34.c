#include <stdio.h>

char esercizio1()
{
    char lettera;
    char vocali_min[] = {'a', 'e', 'i', 'o', 'u', '\0'};
    char vocali_max[] = {'A', 'E', 'I', 'O', 'U', '\0'};
    char a = vocali_min[0];
    char b = vocali_max[0];
    printf("inserisci un alfabeto\n");
    scanf("%c", &lettera);
    int i = 0;
    if(lettera >= 'A' && lettera <= 'Z' || lettera >= 'a' && lettera <= 'z')
    {
        while(lettera[i] != '\0' && )
        {
           
            if(lettera == a)
            {
                printf("hai inserito una vocale min\n");
            }
            else if(lettera == b)
            {
                printf("hai inserito una vocale mai\n");
            }
            else 
            {
                printf("hai inserito un consonante\n");
            }
            i++
        }


    }
    else
    {
        printf("non e un alfabeto\n");
    }
}

int main()
{
    esercizio1();
}