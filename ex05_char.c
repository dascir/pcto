#include <stdio.h>

int main()
{
    char lettera = 'a'; // a = 'f', b = 'a', c = 'n', d = 'v', e='c', f='l', g='u', h='o';
    printf("%d\n", lettera+2); // tabella ascii - a=97 -> a+2=99
    printf("%c\n", lettera+2); // %c = stampa carattere
    char a = 'f', b = 'a', c = 'n', d = 'v', e='c', f='l', g='u', h='o';
    printf("%c", d);
    printf("%c", b);
    printf("%c", a);
    printf("%c", a);
    printf("%c", b);
    printf("%c", c);
    printf("%c", e);
    printf("%c", g);
    printf("%c", f);
    printf("%c\n", h);
}