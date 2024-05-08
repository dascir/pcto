#include <stdio.h> // modulo si scrive con % e indica il resto della divisione - es: 5%2 = 1  -- come si completa???? :(((


int main()
{
    int numero, divisore, resto, ndivisori;
    printf("CALCOLATORE DI NUMERI PRIMI\n");
    printf("inserire un numero: ");
    scanf("%d", &numero);
    divisore=numero-1;
    ndivisori=0;

    while(divisore>1)
    {
        resto=numero%divisore;
        if(resto==0)
        {
            ndivisori=ndivisori+1;
        }
        divisore=divisore-1;
        
    }
    if (ndivisori==0&&numero>1)
         {
           printf("%d è un numero primo\n", numero);
         }
    else
        {
            printf("%d non è un numero primo e ha %d divisori oltre a sé stesso e 1\n", numero, ndivisori);
        }
            
}

