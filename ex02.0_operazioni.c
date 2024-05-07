#include <stdio.h>

int main()
{
  int a = 2;
  int b = 5;
  float c = 5.4576918568201;
  float d = 8.65259036;
  double e = 29.562917657486392;
  double f = 68876.850125205761;
  int differenza = a-b;

  printf("somma: %d\n", a+b);
  printf("diff.: %d\n", differenza);
  printf("divisione: %f\n", b/c);
  printf("moltiplicaz.: %.12lf\n", e*f);
  printf("somma: %.15lf\n", e+d);
}