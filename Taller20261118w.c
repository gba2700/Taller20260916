#include <stdio.h>
#include <string.h>

typedef struct
{
    unsigned int codigo;
    char nombre[30];
    char apellido[30];
    float nota;
}estudiante;
int main()
{
    int cantestud = 0;
    printf("ingrese la cantidad de estudiantes:");
    scanf("%d", &cantestud);

    estudiante estudiantes[cantestud],
    *apestestest[cantestud];

    int posicion = 0,
    posOriEsts[cantestud];
int cantestud = 0;
    printf("ingrese la cantidad de estudiantes:");
    scanf("%d", &cantestud);

    Estudiante estudiantes[cantestud];
    int posOriEsts[cantestud];
    fread(estudiantes,sizeof(Estudiante),cantestud,archivo);
    fread(posOriEsts,sizeof(int),cantestud,archivo);
    fread(&notaPromedio,sizeof(float),1,archivo);
    fclose(archivo);

    

    while (posicion < cantestud)
    {
        printf("ingrese el codigo, la nota, el nombre y el apellido: ");
        scanf("%u %f %s %s",
              &estudiantes[posicion].codigo,
              &estudiantes[posicion].nota,
              estudiantes[posicion].nombre,
              estudiantes[posicion].apellido);

        apestestest[posicion] = &estudiantes[posicion];
        posOriEsts[cantestud] = posicion;
        posicion++;
    }
 
    float totalnotas = 0;
    ordenarcodigoPosestudiantes(cantestud,posOriEsts, estudiantes);

FILE *archivo =fopen("estudiantes.dat", "wb");

fwrite(&cantestud,sizeof(estudiante),cantestud, archivo);
fwrite(estudiantes, sizeof(estudiante), cantestud, archivo);
fwrite(posOriEsts,sizeof(int),cantestud, archivo);
fclose(archivo); 
printf("\nestudiantes en el orden de ingreso:\n");

    for (posicion = 0; posicion < cantestud; posicion++)
    {
        totalnotas += estudiantes[posicion].nota;
        printf("codigo:%u nombre %s %s nota: %f\n",
               estudiantes[posicion].codigo,
               estudiantes[posicion].nombre,
               estudiantes[posicion].apellido,
               estudiantes[posicion].nota);


    }

     for (posicion = 0; posicion < cantestud; posicion++)
    {
        totalnotas += estudiantes[posicion].nota;
        printf("codigo:%u nombre %s %s nota: %f\n",
               apestestest[posicion]->codigo,
               apestestest[posicion]->nombre,
              apestestest[posicion]->apellido,
              apestestest[posicion]->nota);
        }
         for (posicion = 0; posicion < cantestud; posicion++)
    {
        totalnotas += estudiantes[posicion].nota;
        printf("codigo:%u nombre %s %s nota: %f\n", estudiantes[posOriEsts[posicion]].codigo, estudiantes[posOriEsts[posicion]].nombre, estudiantes[posOriEsts[posicion]].apellido, estudiantes[posOriEsts[posicion]].nota);
        }

        float notaPromedio = totalnotas / cantestud;
        fwrite(&notaPromedio, sizeof(float), 1, archivo);
        fclose(archivo);
        printf("La nota promedio es: %f\n", totalnotas / cantestud);

    return 0;
}