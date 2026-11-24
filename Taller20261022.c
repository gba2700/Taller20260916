#include <stdio.h>
#include <string.h>

void ordenarCodigos(unsigned int *codigos, float *notas, char  nombres[][30], char apellidos[][30])
{
    unsigned int codAnt;
    float notaAnt;
    char nombresAnt[30];
    char apellidoAnt[30];

    for( int posición = 0; posición < 9; posición++)
    {
        for( int posComp = 0; posComp < 9 - posición; posComp++)
            
            if(codigos[posComp] > codigos[posComp + 1])
            {
                codAnt = codigos[posComp];
                notaAnt = notas[posComp];
                strcpy(nombresAnt, nombres[posComp]);
                strcpy(apellidoAnt, apellidos[posComp]);
                codigos[posComp] = codigos[posComp + 1];
                notas[posComp] = notas[posComp + 1];
                strcpy(nombres[posComp], nombres[posComp + 1]);
                strcpy(apellidos[posComp], apellidos [posComp + 1]);
                codigos[posComp +1] = codAnt;
                notas[posComp + 1] = notaAnt;
                strcpy(nombres[posComp + 1], nombresAnt);
                strcpy(apellidos[posComp + 1], apellidoAnt);
                 
            }
    }
}
int main ()
{
    unsigned int codigos [10];
    char nombres[10][30],
        apellido [10][30];
    float notas[10];
    int posición = 0;

    while (posición < 10)
    {
        printf ("Ingrese el codigos, la nota y el nombre: ");
        scanf ("%u %f %s %s", &codigos[posición], &notas[posición], nombres[posición], apellido[posición]);
        posición ++;
    }
    
    float totalNotas = 0;
    ordenarCodigos(codigos, notas, nombres, apellido);
        
    for ( posición = 0; posición < 10; posición++)
    {
        totalNotas += notas[posición];
         printf("Codigo: %u Nombre: %s %s Nota: %f\n", 
            codigos[posición], nombres[posición], apellido[posición], notas[posición]);
    }
            printf("Promedio de notas: %f\n",
                  totalNotas/10);
    return (0);

}