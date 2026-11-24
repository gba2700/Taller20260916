#include <stdio.h>

int main(int argc, char * argv[])

{
    if (argc != 2)
      return(-1);
    int despArgv = 0;

    while(argv[1] != 0)
     {
        char * argvDesplazada = argv[1] + despArgv++;
        if ( !((*argvDesplazada >= '0') && (*argvDesplazada <= '9')))
          return(-1);

       int limsup = *argvDesplazada - '0';
       printf("%d\n",limsup);


    }


    
    int Alejandro = 1;

    while(Alejandro != *argv[1])
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
  }