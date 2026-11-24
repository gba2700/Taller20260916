#include <stdio.h>

int main(int argc, char * argv[])
{
    if (argc != 2)
      return(-1);

    int Alejandro = 1;

    while(Alejandro!=100)
    {
      int Juan = Alejandro / 7 ;
    
      int vez = 0 ;
      int antMul = 0 ;
    
      while ( Juan != vez) 
      {
        antMul += 7;
        ++vez;
      }

      if (antMul == Alejandro)
       printf("%d\n",Alejandro); 

      ++Alejandro;
    }
  }