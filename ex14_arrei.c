#include <stdio.h>

int main()
{
int numeri[5]={7, 14, 44, 99, -31}; // nelle quadre numero di valori // primo arrei
printf("%d\n", numeri[2]); // le posizioni sono 0, 1, 2, 3, 4, 5 -> quindi per stampare uno dei 5 numeri dell'arrei devo mettere la sua posizione. es: voglio stampare 44, la sua posizione è 2 -> numero[2]

int i=0;

while (i<5)
{
    printf("%d\n", numeri[i]);
    i=i+1;
}

int num2[100];
int b=0;
while(b<100)
{
    printf("inserisci nome: \n");
    scanf("%a", &num2[b]);
    b=b+1;
}

}


/////////// char nome[5]={'s','a','e','r','\0'};
/// int i=o
// while (nome[i]!='\0')
//{
    //printf("%c", nome[i])
    // i=i+1
//}
// printf("%s", nome);

// char nome2[]="ciao fratm";
// char nomeutente[50];
// scanf("%s", nomeutente)    -> & non ci va
///scanf("%[^\n]s", ...)   // per inserire spazi




