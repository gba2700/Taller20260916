#include <stdio.h>
#include <string.h>

typedef struct
{
    unsigned int codigo;
    char nombre[30];
    char apellido[30];
    float nota;
} estudiante;

void ordenarcodigoestudiantes(int cantEst, int posEstudiantes[cantEst], estudiante *apestudiantes[])
{
    estudiante *AP;
    for (int posicion = 0; posicion < cantEst - 1; posicion++)
    {
        for (int poscomp = 0; poscomp < cantEst - 1 - posicion; poscomp++)
        {
            if (apestudiantes[poscomp]->codigo > apestudiantes[poscomp + 1]->codigo)
            {
                AP = apestudiantes[posEstudiantes[poscomp]];
                apestudiantes[poscomp] = apestudiantes[poscomp + 1];
                apestudiantes[poscomp + 1] = AP;
            }
        }
    }
}

int main()
{
    int cantestud = 0;
    printf("ingrese la cantidad de estudiantes:");
    scanf("%d", &cantestud);

    estudiante estudiantes[cantestud],
    *apestestest[cantestud];
    int posOrigEsts[cantestud]; 

    int posicion = 0;
    while (posicion < cantestud)
    {
        printf("ingrese el codigo, la nota, el nombre y el apellido: ");
        scanf("%u %f %s %s",
              &estudiantes[posicion].codigo,
              &estudiantes[posicion].nota,
              estudiantes[posicion].nombre,
              estudiantes[posicion].apellido);

        apestestest[posicion] = &estudiantes[posicion];
        posOrigEsts[posicion] = posicion; 
        posicion++;
    }

    float totalnotas = 0;
    // OrdenarCodigosEstudiante(cantestud, estudiantes);

    FILE *archivo = fopen("estudiantes2.dat", "wb");

    fwrite(&cantestud, sizeof(int), 1, archivo);

    for(posicion = 0; posicion < cantestud; posicion++)
    fwrite(&estudiantes[posicion], sizeof(estudiante), 1, archivo);
 
    for (posicion = 0; posicion < cantestud; posicion++)
    fwrite(&posOrigEsts[posicion], sizeof(int), 1, archivo);

    printf("\nestudiantes en el orden de ingreso\n");

    for (posicion = 0; posicion < cantestud; posicion++)
    {
        totalnotas += estudiantes[posicion].nota;
        printf("codigo:%u nombre %s %s nota: %f\n",
               estudiantes[posOrigEsts[posicion]].codigo,
               estudiantes[posOrigEsts[posicion]].nombre,
               estudiantes[posOrigEsts[posicion]].apellido,
               estudiantes[posOrigEsts[posicion]].nota);
    }
    float notapromedio = totalnotas / cantestud;
    fwrite(&notapromedio, sizeof(float), 1, archivo);
    fclose(archivo);
    printf("promedio: %f\n", totalnotas / cantestud);

    return 0;
}