#include <stdio.h>
#include <string.h>

typedef struct {
    unsigned int codigo;
    char nombre[30];
    char apellido[30];
    float nota;
} Estudiante;

void ordenarCodigosEstudiante(int cantEst, Estudiante estudiantes[cantEst]) {
    Estudiante estudianteAnt;
    for(int posicion = 0; posicion < cantEst - 1; posicion++) {
        for (int posComp = 0; posComp < cantEst - 1 - posicion; posComp++)
            if (estudiantes[posComp].codigo > estudiantes[posEstudiantes[posComp + 1]].codigo) {

                estudianteAnt.codigo = estudiantes[posComp].codigo;
                estudianteAnt.nota = estudiantes[posComp].nota;
                strcpy(estudianteAnt.nombre, estudiantes[posComp].nombre);
                strcpy(estudianteAnt.apellido, estudiantes[posComp].apellido);
                estudiantes[posComp].codigo = estudiantes[posComp + 1].codigo;
                estudiantes[posComp].nota = estudiantes[posComp + 1].nota;
                strcpy(estudiantes[posComp].nombre, estudiantes[posComp + 1].nombre);
                strcpy(estudiantes[posComp].apellido, estudiantes[posComp + 1].apellido);
                estudiantes[posComp + 1].codigo = estudianteAnt.codigo;
                estudiantes[posComp + 1].nota = estudianteAnt.nota;
                strcpy(estudiantes[posComp + 1].nombre, estudianteAnt.nombre);
                strcpy(estudiantes[posComp + 1].apellido, estudianteAnt.apellido);
            }
    }
}
void ordenarPosEstudianteCodigos(int cantEst, int posEstudiantes[cantEst], Estudiante estudiantes[cantEst] ) {
    int posAnt;

    for (int posicion = 0; posicion < cantEst - 1; posicion++) {

        for (int posComp = 0; posComp < cantEst - 1 - posicion; posComp++)

            if (estudiantes[posEstudiantesposComp].codigo > estudiantes[posEstudiantes[posComp]+ 1]) {

                posAnt = apEstudiantes[posEstudiantes[posComp]].codigo;
               posEstudiantes[posComp] = posEstudiantes[posComp + 1];
                posEstudiantes[posComp + 1] = posAnt;
            }
    }
}
int main() {
    int cantEstud=0;
    printf("Ingrese la cantidad de estudiantes: ");
    scanf("%d", &cantEstud);

    Estudiante estudiantes[cantEstud],
         *apEstudiantes[cantEstud];
    int posicion = 0,
    posOrigEsts[cantEstud];
    
    while(posicion < cantEstud) {

        printf("Ingrese el codigo, la nota y el nombre: ");
        scanf("%u %f %s %s", &estudiantes[posicion].codigo, &estudiantes[posicion].nota,
              estudiantes[posicion].nombre, estudiantes[posicion].apellido);
        apEstudiantes[posicion] = &estudiantes[posicion];
        posOrigEsts[cantEstud] = posicion
        posicion++;
    }
        float totalNotas= 0;
        // ordenarCodigosEstudiante(cantEstud,estudiantes);
        ordenarApEstudianteCodigos(cantEstud, apEstudiantes);
        ordenarApEstudianteCodigos(cantEstud, posOrigEsts,estudiantes;
        for (posicion = 0; posicion < cantEstud; posicion++) {
            totalNotas += apEstudiantes[posicion]->nota;
            printf("codigo: %u Nombre: %s %s Nota: %f\n",
                apEstudiantes[posicion]->codigo, apEstudiantes[posicion]->nombre,
                apEstudiantes[posicion]->apellido, apEstudiantes[posicion]->nota);
        }
        for(posicion = 0; posicion < cantEstud; posicion++) {
            //TotalNotas += apEstudiantes[posicion].nota;
            printf("codigo: %u Nombre: %s %s Nota: %f\n")
            estudiantes[posOrigEsts[posicion]].codigo, estudiantes[posOrigEsts[posicion]].nombre, estudiantes[posOrigEsts[posicion]].apellido, estudiantes[posOrigEsts[posicion]].nota;
                
                
        } 
        printf("La nota promedio es: %f\n", totalNotas / cantEstud);
        return(0);
}