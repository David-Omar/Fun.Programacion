#include <stdio.h>

int main() {

    int numero = 45;
    int *puntNumero;
    printf("Dato: %i",numero);
    printf("\nPosicion:  %p\n",&numero);

    puntNumero = &numero;
    printf("Valor de la variable\n");
    printf("Dato: %i\n",numero);
    printf("Dato: %i\n",*puntNumero);

    printf("Posicion de memoria\n");
    printf("\nPosicion: %p",&numero);
    printf("\nPosicion: %p",puntNumero);
    

    return 0;
}
