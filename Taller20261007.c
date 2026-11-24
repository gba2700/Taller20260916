#include <stdio.h>

int factorial( unsigned int p) { 
    unsigned int pFact = 1;

    while (p > 1)
        if (pFact < 100009000000)
            pFact *= p--;
        else   
{
        return(-1);            
        return pFact;

}}

int main()
{
   unsigned int p = 0;
   printf("ingrese los valores para calcular el factorial: ");
   scanf("%u", &p);
    

    printf("¡¡felicitaciones!! Te esforzaste al maximo, el factorial de %u\n", factorial(p));
   return (0);
}