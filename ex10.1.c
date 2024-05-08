#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c, d, e, f;
    
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    d=a*a;
    e=b*b;
    f=c*c;
    
    if(a+b>c && b+c>a && a+c>b) 
    {
        printf("è un triangolo");
        
        if(a==b && b==c && c==a)
        {
            printf(" equilatero\n");
        }
        else if (a==b || b==c || a==c)
        {
            printf(" isoscele");
        }
        else
        {
            printf(" scaleno");
        }
        
        if (d==e+f||e==f+d||f==e+d)
        {
            printf(" rettangolo\n");
        }
        else
        {
            printf("\n");
        }
    }
    else
    {
        printf("non va bene bro\n");
    }
}
