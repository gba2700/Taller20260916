#include <stdio.h>
//#include <string.h>

typedef struct
{
    unsigned int codigo;
    char nombre[30];
    char apellido[30];
    float nota;
} Estudiante;

int main()
{
    int cantestud = 0;
    int posicion = 0;
    int notaPromedio;
    float totalnotas = 0;
   
    FILE *archivo = fopen("estudiantes.dat2", "rb");

    Estudiante estudiantes[cantestud];
    int posOriEsts[cantestud];

    for(posicion = 0; posicion < cantestud; posicion++)
        fread(&estudiantes[posicion], sizeof(Estudiante), 1, archivo);

    for(posicion = 0; posicion < cantestud; posicion++)
        fread(&posOriEsts[posicion], sizeof(int), 1, archivo);

    fread(&notaPromedio, sizeof(float), 1, archivo);
    fclose(archivo);
    printf("\nEstudiantes en el orden de ingreso: \n");


    for (posicion = 0; posicion < cantestud; posicion++)
    {
       totalnotas += estudiantes[posicion].nota;
        printf("codigo: %u nombre %s %s nota: %f\n",
               estudiantes[posicion].codigo,
               estudiantes[posicion].nombre,
               estudiantes[posicion].apellido,
               estudiantes[posicion].nota);
    }

    

    printf("\nEstudiantes ordenados por codigo en base en el arreglo de posiciones originales: \n");
     for (posicion = 0; posicion < cantestud; posicion++)
    {
      // totalnotas += estudiantes[posicion].nota;
        printf("codigo: %u nombre %s %s nota: %f\n",
               estudiantes[posOriEsts[posicion]].codigo,
               estudiantes[posOriEsts[posicion]].nombre,
               estudiantes[posOriEsts[posicion]].apellido,
               estudiantes[posOriEsts[posicion]].nota);
    }
    printf("La nota promedio es: %f\n", totalnotas / cantestud);

    return 0;
}