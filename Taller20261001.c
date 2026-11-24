#include <stdio.h>

int main(int argc, char * argv[])
{
    if (argc != 2) {
    printf("debe incluir solo un valor adicional:\n%s valorSuperior\n", argv[0]);
      return(-1);
    }
    int despArgv = 0;
    int limsup = 0;
 char * argvDesplazada = argv[1] ;

    while(*argvDesplazada != '\0')
     {
        argvDesplazada += despArgv++;
         printf("%c\n", *argvDesplazada);

        if ( !((*argvDesplazada >= '0') && (*argvDesplazada <= '9'))){
        printf( "porfavor incluya dentro del limite superior solo digitos numeros!:\n encontré %c\n", *argvDesplazada);
          return(-1);
        }
      limsup = limsup*10 + (*argvDesplazada - '0');
       printf("%d\n",limsup);

    }

    int Alejandro = 1;

    while(Alejandro != limsup)
    {
      int Juan = Alejandro / 7;
    
      int vez = 0;
      int antMul = 0;
    
      while (Juan != vez) 
      {
        antMul += 7;
        ++vez;
      }

      if (antMul == Alejandro)
       printf("%d\n",Alejandro); 

      ++Alejandro;
    }
  
  printf("¡¡felicitaciones!! Te esforzaste al maximo, lograste ingresar un limite superior valido\n");
  return(0);
}