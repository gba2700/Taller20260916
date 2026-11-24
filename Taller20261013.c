#include <stdio.h>

unsigned int factorialR(unsigned int *p){
    unsigned int pfact=1;

    while (*p>1)
        if(*p<((unsigned int) 0b11111111111111111111111111111111/pfact))
            pfact *= (*p)--;
    else
        return(0);

return pfact;

}

unsigned int factorialV(unsigned int p){
    unsigned int pfact=1;
    while (p > 1)
        if( p <((unsigned int) 0b11111111111111111111111111111111/pfact))
            pfact *= p--;
    else
        return(0);

    return pfact;
}

int main()
{
    unsigned int valor1=0,
                valor2=0,
                 m=0,
                 n=0;
    
    printf("ingrese los valores para calcular su combinatorial: ");
    scanf ("%u %u", &valor1, &valor2);

    if(valor1 > valor2){
        m = valor1;
        n = valor2;
    }
    else{
         m = valor2;
         n = valor1;
    }

    unsigned int m_n = m - n;

    printf("m = %u, n = %u, m - n = %u\n", m, n, m_n);

    printf("Felicidades Te esforzaste al maximo, el combinatorialR es: %u\n",
            factorialR(&m) / (factorialR(&n) * factorialR(&m_n)));

    printf("Felicidades Te esforzaste al maximo, el combinatorialV es: %u\n",
            factorialV(m) / (factorialV(n) * factorialV(m_n)));

            printf("m = %u, n = %u\n", m, n);


    return (0);
}