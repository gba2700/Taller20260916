#include <stdio.h>

int main(int argc, char * argv[]){
   //char primerY2doNombres[13] = "JOSE GABRIEL";
int posicion = 1;

     printf("la cantidad de cadenas es %d y el nombre es ", argc);

   while(posicion < argc){
     printf("%s ", argv[posicion++] );
   
    }
    printf("\n");
     return(0);
}
