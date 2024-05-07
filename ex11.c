#include <stdio.h>

int main()
{
int anno;
printf("SCOPRI QUANTA DIFFERENZA C'E' TRA LA TUA NASCITA E L'ARRIVO SULLA LUNA!\n\n");
printf("inserire anno di nascita: ");
scanf("%d", &anno);

if(anno==1969)
{
    printf("\nsei nato nell'anno in cui l'uomo è arrivato sulla luna!!!!\n");
}
else if(anno==1970)
{
    printf("\nsei nato 1 anno dopo l'anno in cui l'uomo è arrivato sulla luna!!!\n");
}
else if(anno==1968)
{
    printf("\nsei nato 1 anno prima dell'anno in cui l'uomo è arrivato sulla luna!!!\n");
}
else if(anno<1969)
{
    printf("\nsei nato %d anni prima dell'anno in cui l'uomo è arrivato sulla luna!!!\n", 1969-anno);
}
else
{
    printf("\nsei nato %d anni dopo l'anno in cui l'uomo è arrivato sulla luna!!!\n", anno-1969);
}
}