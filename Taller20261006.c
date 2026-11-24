#include <stdio.h>

int convertirCadenaAEntero(char *cadena)
{
  int despArgv = 0;
  int enteroObtenido = 0;
  char *argvDesplazada = cadena;

  while (*argvDesplazada != '\0')
  {
    // printf("Caracter encontrado %c\n", *argDesplazada);

    if (!((*argvDesplazada >= '0') && (*argvDesplazada <= '9')))
    {
      printf("porfavor incluya dentro del limite superior solo digitos numeros!:\n encontré %c\n", *argvDesplazada);
      return (-1);
    }

    enteroObtenido = enteroObtenido * 10 + (*argvDesplazada - '0');
    // printf("entero acomulado: %d\n", enteroObtenido);
    argvDesplazada = cadena + ++despArgv;
  }
  return enteroObtenido;
}

int main(int argc, char *argv[])
{

  if (argc != 3)
  {
  }
  printf("debe incluir solo un valor adicional:\n%s valor1 valor2\n", argv[0]);
  return (-1);


int valor1 = convertirCadenaAEntero(argv[1]);
int valor2 = convertirCadenaAEntero(argv[2]);
int limsup = 0;
liminf = 0;

if (valor1 < valor2)
{
  liminf = valor1;
  limsup = valor2;
}
else
{
  liminf = valor2;
  limsup = valor1;
}

int Alejandro = liminf;
while (Alejandro <= limsup)
{
  int Juan = Alejandro / 7;

  int vez = 0;
  int antMul = 0;

  while (Juan != vez)
  {
    {
    }
    antMul += 7;
    ++vez;
  }

  if (antMul == Alejandro)
    printf("%d\n", Alejandro);

  ++Alejandro;

  {
    argvDesplazada += despArgv++;
    printf("%c\n", *argvDesplazada);

    if (!((*argvDesplazada >= '0') && (*argvDesplazada <= '9')))
    {
      printf("porfavor incluya dentro del limite superior solo digitos numeros!:\n encontré %c\n", *argvDesplazada);
      return (-1);
    }
    limsup = limsup * 10 + (*argvDesplazada - '0');
    printf("%d\n", limsup);
  }

  int Alejandro = 1;
}

printf("¡¡felicitaciones!! Te esforzaste al maximo, lograste ingresar un limite superior valido\n");
return (0);
}