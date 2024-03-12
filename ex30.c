#include<stdio.h>

int main()
{
    int pezzi;
    int sconto;
    
    printf("Quanti pezzi vuoi prendere?\n");
    scanf("%d", &pezzi);
    sconto = 0;
    
    
    if(pezzi < 1)
    {
        printf("vuoi comprare o no?\n");
    }
    else 
    {
        while(pezzi > 1)
        {
            int pezzi_aggiunti;
            printf("Ci sono altri?\n");
            scanf("%d", &pezzi_aggiunti);
            pezzi = pezzi + pezzi_aggiunti;
            int costo_tot = pezzi * 5;
            if(pezzi > 50)
            {
                printf("costo totale e %d\n", costo_tot / 100 * 85);
            }
            else if(pezzi > 30)
            {
                printf("costo totale e %d\n", costo_tot / 100 * 90);
            }
            else
            {
                printf("costo totale e %d\n", costo_tot);
            }
            
        }
    }
}
