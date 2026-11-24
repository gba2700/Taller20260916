#include <stdio.h>
void ordenarCodigos(unsigned int * codigos){
    unsigned int codAnt;

    for( int posición = 0; posición < 9; posición++)
    {
        for( int posComp = 0; posComp < 9 - posición - 1; posComp++)
            
            if(codigos[posComp] > codigos[posComp + 1]){
                codAnt = codigos[posComp];
                codigos[posComp] = codigos[posComp + 1];
                 codigos[posComp +1] = codAnt;
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
    ordenarCodigos(codigos);
        
    for ( posición = 0; posición < 10; posición++)
    {
        totalNotas += notas[posición];
         printf("\nCodigo: %u Nombre: %s %s Nota: %f\n", 
            codigos[posición], nombres[posición], apellido[posición], notas[posición]);
    }
            printf("Promedio de notas: %f\n", 
                totalNotas/10);
    return (0);

}