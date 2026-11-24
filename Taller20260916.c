#include <stdio.h>

int main(){
    char inicio ='0';

    while(inicio != '9' +2) {

        printf("su caracter es %c su codigo es %d su binario es %b su hexadecimal es %x su dirección es %p\n", inicio, inicio, inicio, inicio, &inicio);
        inicio++;
    }

    printf("%c\n", inicio);
    return(0);
}