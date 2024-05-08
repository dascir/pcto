#include <stdio.h> // modulo si scrive con % e indica il resto della divisione - es: 5%2 = 1  -- come si completa???? :(((


int main()
{
    int numero, divisore, resto, ndivisori;
    printf("CALCOLATORE DI NUMERI PRIMI\n");
    printf("inserire un numero: ");
    scanf("%d", &numero);
    divisore=numero-1;
    resto=numero%divisore;
    ndivisori=0;

    while(divisore>1&&numero>1)
    {
        //int c=0; // numero di divisori di a
        resto=numero%divisore;
        if(resto==0)
        {
            ndivisori=ndivisori+1;
        }
        else
        {
            ndivisori=ndivisori;
        }
        divisore=divisore-1;    
    }
    if (ndivisori==0)
         {
           printf("%d è un numero primo\n", numero);
         }
    else
        {
            printf("%d non è un numero primo\n", numero);
        }
}
