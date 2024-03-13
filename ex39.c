#include <stdio.h>


int main()
{
    int numeri_interi[5];
    int i1 = 0;
    int i2 = 1;
    int c = 1;
    int b = 0;
    int temp;
    printf("inserisci una serie di 5 numeri in ordine a caso\n");
    scanf("%d %d %d %d %d", &numeri_interi[0], &numeri_interi[1], &numeri_interi[2], &numeri_interi[3], &numeri_interi[4] ) ;
    
    while(c > 0)
    {
        c = 0;
        i1 = 0;
        i2 = 1;
        while(i2 < 5)
        {
            if(numeri_interi[i1] > numeri_interi[i2])
            {
                
                temp = numeri_interi[i1]; 
                numeri_interi[i1] = numeri_interi[i2];
                numeri_interi[i2] = temp;
                c++;

            }   
            i2++;
            i1++;
        }
        
    }
    printf("--------------------\n");
    
    while(b<5)
    {
        printf("%d\n", numeri_interi[b]);
        b++;
    }

}
