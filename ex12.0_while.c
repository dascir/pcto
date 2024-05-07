#include <stdio.h>


int main()
{
    int a=0;
  while(a<100)
  {
        printf("%d\n", a+1);
        a=a+1; // adesso la variabile sarà la precedente a aumentata di 1 - si può scrivere anche a++ oppure a+=1
  }
}