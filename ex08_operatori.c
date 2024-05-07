#include <stdio.h>

int main()
{
    int eta;
    scanf("%d", &eta);
    
    if(eta>17 && eta<21) // &&=and -> 17<eta<21        ----   per mischiare && e || si devono mettere le parentesi => if((eta && eta) || (eta && eta))
    {
        printf("età inutile in america ma non nel resto del mondo\n");
    }
    else if(eta==18 || eta==21) // ||=or
    {
        printf("età in cui si diventa maggiorenni\n");
    }
    else if(eta<14, !eta==0, !eta>13) // !=not
    {
        printf("bgrnijbgre\n");
    }
    else
    {
        printf("numeri dimenticati\n");
    }
}