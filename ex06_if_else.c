#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    if(a<b)
    {
        printf("a è maggore di b\n");
    }
    else if(a==b)
    {
        printf("a è uguale a b\n");
    }
    else
    {
        printf("a è minore di b\n");
    }
}