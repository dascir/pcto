#include <stdio.h>

int main()
{
    int eta;
    scanf("%d", &eta);
    
    if(eta<18)
    {
        printf("l'utente è minorenne\n");
    }
    else if(eta>130)
    {
        printf("come fai ad essere vivo/a? insegnami\n");
    }
    else if(eta==69)
    {
        printf("damn...\n");
    }
    else if(eta==33)
    {
        printf("gli anni di cristo\n");
    }
    else
    {
        printf("l'utente è maggiorenne\n");
    }
}