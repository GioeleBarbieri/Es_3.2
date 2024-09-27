#include <stdio.h>

int main(void)
{
    int num;
    printf("inserisci un numero: ");
    scanf("%d",&num);
    if ( num >= 0)
    {
        printf("il numero e' positivo");
    }
    else
    {
        printf ("il numero e' negativo");
    }
    return 0;
}
