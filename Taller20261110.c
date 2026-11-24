#include <stdio.h>
#include <string.h>

typedef struct
{
    unsigned int codigo;
    char nombre[30];
    char apellido[30];
    float nota;
}estudiante;

void OrdenarCodigosEstudiante(int cantEst, estudiante estudiantes[cantEst])
{
    estudiante estudianteAnt;
    for (int posicion = 0; posicion < cantEst - 1; posicion++)
    {
        for(int poscomp = 0; poscomp < cantEst - 1 - posicion; poscomp++)
        {
            if (estudiantes[poscomp].codigo > estudiantes[poscomp + 1].codigo)
            {
                estudianteAnt.codigo = estudiantes[poscomp].codigo;
                estudianteAnt.nota = estudiantes[poscomp].nota;
                strcpy(estudianteAnt.nombre, estudiantes[poscomp].nombre);
                strcpy(estudianteAnt.apellido, estudiantes[poscomp].apellido);

                estudiantes[poscomp].codigo = estudiantes[poscomp + 1].codigo;
                estudiantes[poscomp].nota = estudiantes[poscomp + 1].nota;
                strcpy(estudiantes[poscomp].nombre, estudiantes[poscomp + 1].nombre);
                strcpy(estudiantes[poscomp].apellido, estudiantes[poscomp + 1].apellido);

                estudiantes[poscomp + 1].codigo = estudianteAnt.codigo;
                estudiantes[poscomp + 1].nota = estudianteAnt.nota;
                strcpy(estudiantes[poscomp + 1].nombre, estudianteAnt.nombre);
                strcpy(estudiantes[poscomp + 1].apellido, estudianteAnt.apellido);
            }
        }
    }
}

void ordenarcodigoestudiantes(int cantEst, estudiante *apestudiantes[])
{
    estudiante *aux;
    for (int posicion = 0; posicion < cantEst - 1; posicion++)
    {
        for (int poscomp = 0; poscomp < cantEst - 1 - posicion; poscomp++)
        {
            if (apestudiantes[poscomp]->codigo > apestudiantes[poscomp + 1]->codigo)
            {
                aux = apestudiantes[poscomp];
                apestudiantes[poscomp] = apestudiantes[poscomp + 1];
                apestudiantes[poscomp + 1] = aux;
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
        posicion++;
    }

    float totalnotas = 0;
    OrdenarCodigosEstudiante(cantestud, estudiantes);

    for (posicion = 0; posicion < cantestud; posicion++)
    {
        totalnotas += estudiantes[posicion].nota;
        printf("codigo:%u nombre %s %s nota: %f\n",
               estudiantes[posicion].codigo,
               estudiantes[posicion].nombre,
               estudiantes[posicion].apellido,
               estudiantes[posicion].nota);
    }
    printf("promedio: %f\n", totalnotas / cantestud);

    return 0;
}