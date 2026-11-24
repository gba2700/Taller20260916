#include <stdio.h>
//#include <string.h>

typedef struct 
{
    unsigned int codigo;
    char nombre[30];
    char apellido[30];
    float nota;
} Estudiante;

void ordenarPosEstudianteCodigos(int cantEst, int posEstudiantes[cantEst], Estudiante estudiantes[cantEst]) 
{
    int posAnt;

    for (int posicion = 0; posicion < cantEst - 1; posicion++) 
    {

        for (int posComp = 0; posComp < cantEst - 1 - posicion; posComp++)

            if (estudiantes[posEstudiantes[posComp]].codigo > estudiantes[posEstudiantes[posComp+ 1]].codigo)
            {
            posAnt = estudiantes[posEstudiantes[posComp]].codigo;
            posEstudiantes[posComp] = posEstudiantes[posComp + 1];
            posEstudiantes[posComp + 1] = posAnt;
            }
    }
}
int main() {
    int cantEstud=0;
    printf("Ingrese la cantidad de estudiantes: ");
    scanf("%d", &cantEstud);

    Estudiante estudiantes[cantEstud];
    int posicion = 0,
        posOrigEsts[cantEstud];
    
    while(posicion < cantEstud) {

        printf("Ingrese el codigo, la nota y el nombre: ");
        scanf("%u %f %s %s", &estudiantes[posicion].codigo, &estudiantes[posicion].nota, estudiantes[posicion].nombre, estudiantes[posicion].apellido);

        posOrigEsts[posicion] = posicion;
        posicion++;
    }
        float totalNotas= 0;
        ordenarPosEstudianteCodigos(cantEstud, posOrigEsts, estudiantes);
        FILE*archivo =fopen("estudiantes.dat", "w");

        fwrite(estudiantes, sizeof(Estudiante), cantEstud, archivo);
        fwrite(posOrigEsts,sizeof(int), cantEstud, archivo);
        fclose(archivo);

        printf("\nEstudiantes en el orden de ingreso:\n");

        for(posicion = 0; posicion < cantEstud; posicion++) 
        {
            totalNotas += estudiantes[posicion].nota;
            printf("codigo: %u Nombre: %s %s Nota: %f\n",
                estudiantes[posicion].codigo, estudiantes[posicion].nombre,
                estudiantes[posicion].apellido, estudiantes[posicion].nota);
        }
        for(posicion = 0; posicion < cantEstud; posicion++) {
            printf("codigo: %u Nombre: %s %s Nota: %f\n",
                estudiantes[posOrigEsts[posicion]].codigo, estudiantes[posOrigEsts[posicion]].nombre, estudiantes[posOrigEsts[posicion]].apellido, estudiantes[posOrigEsts[posicion]].nota);
        }
        printf("La nota promedio es: %f\n", totalNotas / cantEstud);
        return(0);
}