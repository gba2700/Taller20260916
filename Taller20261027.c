#include <stdio.h>
#include <string.h>













int main()
{
    unsigned int cantFilasA = 0,
               cantFilasB = 0,
               cantColumnasA = 0,
               cantColumnasB = 0;

printf("ingrese los tamanos de las matrices a y b:");

    float a[cantFilasA][cantColumnasA],
          b[cantFilasB][cantColumnasB],
          aMasb[cantFilasA][cantColumnasA],
          aMenosb[cantFilasA][cantColumnasA],
          aPorb[cantFilasA][cantColumnasB];

    int posicionFila = 0,
        posicionColumna = 0;

    while ( posicionFila < cantFilasA )
    {
        while (posicionColumna < cantColumnasA)
        {
            printf("Ingrese el valor a[%d][%d]: ", posicionFila, posicionColumna);
            scanf("%f", &a[posicionFila][posicionColumna]);
            posicionColumna++;
        }
    }
    posicionFila = 0;
         while ( posicionFila < cantFilasB)
    {
        while (posicionColumna < cantColumnasB)
        {
            printf("Ingrese el valor a[%d][%d]: ", posicionFila, posicionColumna);
            scanf("%f", &a[posicionFila][posicionColumna]);
            posicionColumna++;
    
    for (posicionFila = 0; posicionFila < 2; posicionFila ++)
    {
       for (posicionColumna = 0; posicionColumna < 2; posicionColumna++){
            printf (" %4.1f", a[posicionFila][posicionColumna]);
            printf(" \n");
       }
    }

    for (posicionFila = 0; posicionFila < 2; posicionFila ++){
       for (posicionColumna = 0; posicionColumna < 2; posicionColumna++)
            printf (" %4.1f", b[posicionFila][posicionColumna]);
       printf(" \n");
    }

    for (posicionFila = 0; posicionFila < 2; posicionFila ++){
       for (posicionColumna = 0; posicionColumna < 2; posicionColumna++)
          aMasb[posicionFila][posicionColumna] = a[posicionFila][posicionColumna]+
                                                 b[posicionFila][posicionColumna];
    }

    for (posicionFila = 0; posicionFila < 2; posicionFila ++){
       for (posicionColumna = 0; posicionColumna < 2; posicionColumna++)
            printf (" %4.1f", aMenosb[posicionFila][posicionColumna]);
       printf(" \n");
    }

    for (posicionFila = 0; posicionFila < 2; posicionFila ++){
       for (posicionColumna = 0; posicionColumna < 2; posicionColumna++){
            float sumaFC = 0;
            for(int posVect = 0; posVect < 2; posVect++)
                sumaFC += a[posicionFila][posVect] * b[posVect][posicionColumna];
       }
    }

    for (posicionFila = 0; posicionFila < 2; posicionFila ++){
       for (posicionColumna = 0; posicionColumna < 2; posicionColumna++)
            printf (" %4.1f", aMenosb[posicionFila][posicionColumna]);
       printf(" \n");
    }

    for (posicionFila = 0; posicionFila < 2; posicionFila ++){
       for (posicionColumna = 0; posicionColumna < 2; posicionColumna++)
          aPorb[posicionFila][posicionColumna] = a[posicionFila][posicionColumna] *
                                                 b[posicionFila][posicionColumna];
    }

    for (posicionFila = 0; posicionFila < 2; posicionFila ++){
       for (posicionColumna = 0; posicionColumna < 2; posicionColumna++)
            printf (" %4.1f", aPorb[posicionFila][posicionColumna]);
       printf(" \n");
    }


    mostrarMatriz(cantFilasA, cantFilasB, aPorb);
    
    return (0);
}