#include <stdio.h>

int main()
{
  int a; //numeri interi - se metto decimali li arrotonda per difetto
  float b = 9.5; //numeri con virgola max 6 decimali
  double c = 4.685326808965; //numeri con la virgola max 15 decimali
  
  a = 25;
  printf("a: %d\n", a); //indicazione intero = %d
  printf("a: %c\n", a);
  printf("b: %f\n", b); // indicazione float = %f
  printf("c: %f\n", c);
  printf("c: %lf\n", c); // indicazione double = %lf - per determinare il numero di decimali (n) = %.(n)lf
  
  printf("a: %d\n b: %f\n", a, b);

}