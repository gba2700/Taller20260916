#include <stdio.h>

unsigned int combinatorialConbaseEnProductoria(unsigned int m, unsigned int n) {

    if  (n < (m/2))
        n = m-n;

        unsigned int i= m-n;
        unsigned int combinatorialConbaseEnProductoria = 1 + (m -1) * (i != 0);
        i = (i != 0) * i--;

        while ( i > 1)

        if(!(( n + 1 ) > ((unsigned int)-1)/ combinatorialConbaseEnProductoria)) //4.294.967.295
        combinatorialConbaseEnProductoria = (combinatorialConbaseEnProductoria* (n + i)) / (m - n - i-- + 1);

        else(
            printf("no es posible calcular el combinatorial solicitado. Se desbordan las capacidades de representación\n"))

        return 0;
        
unsigned int factorialR(unsigned int *p) {
    unsigned int pFact = 1;

    while (*p > 1)
        if (*p < ((unsigned int) 0b11111111111111111111111111111111) / pFact) //4.294.967.295
            pFact *= (*p)--;
        else
            return(0);

    return pFact;
}

// Función factorial pasando el parámetro por valor
unsigned int factorialV(unsigned int p) {
    unsigned int pFact = 1;

    while (p > 1)
        if (p < ((unsigned int) 0b11111111111111111111111111111111) / pFact) // 4.294.967.295
            pFact *= p--;
        else
            return(0);

    return pFact;
}

int main()
{
    unsigned int valor1 = 0,
                 valor2 = 0,
                 m = 0,
                 n = 0;

    printf("Ingrese los valores para calcular el combinatorial: ");
    scanf("%u %u", &valor1, &valor2);

    if (valor1 > valor2) {
        m = valor1;
        n = valor2;
    }
    else {
        m = valor2;
        n = valor1;
    }

    unsigned int m_n = m - n;

    printf("m = %u, n = %u\n, m - n = %u", m, n, m_n);

    printf("¡¡Felicitaciones!! Te esforzaste al máximo, el combinatorial es: %u\n",
        factorialR(&m)/(factorialR(&n) * factorialR(&m_n)));

    printf("¡¡Felicitaciones!! Te esforzaste al máximo, el combinatorial es: %u\n",
        combinatorialConbaseEnProductoria(m,n);

    printf("m = %u, n = %u\n", m, n);

    return 0;
}

    }