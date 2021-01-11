#include <stdio.h>

int main(){

    int array[2][3]={12,21,35 , 15,12,14};
    int filas,columnas;

    for (filas = 0;filas < 2; filas++){
        for (columnas = 0; columnas < 3; columnas++){
            printf("%i ",array[filas][columnas]);
        }
        printf("\n");
    }
    return 0;
}
