#include <stdio.h>

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
    
    //printf ("los datos ingresados son:\nCodigo: %u Nombre: %s %s Nota: %f\n",
        //codigos, nombres, apellido, notas);
    

    return (0);

}