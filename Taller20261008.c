
#include <stdio.h>

unsigned int factorial(unsigned int *p){
    unsigned int pfact=1;
    while (*p>1)
        if(*p<((unsigned int)0b11111111111111111111111111111111/pfact))
            pfact *= *p--;
    else{
        printf("el factorial es demasiado grande para calcularlo\n");
return(0);
}

return pfact;

}

int main()
{
    unsigned int valor1=0,
                valor2=0,
                 m=0,
                 n=0;
printf("ingrese los valores para calcular su combinatorial: ");
scanf ("%u %u", &valor1, &valor2);

if(valor1>valor2)
{
    m=valor1;
    n=valor2;
}
unsigned int m_n= m - n;
else{
m=valor2;
n=valor1;
}
printf("m= %u , n=%u\n", m,n);



unsigned int m_n=m-n;
unsigned int rescomb= factorial(&m)/(factorial(&n)*factorial(&m_n));

printf("m_n= %u\n",m_n);
printf("el combinatorial es: %u\n" ,
rescomb);

printf("m= %u , n=%u\n", m,n);

return (0);
}