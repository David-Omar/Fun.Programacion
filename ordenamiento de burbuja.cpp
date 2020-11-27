#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    
	int x, y, cantidad, aux;
    int ciclos=0;
    
    printf("Programa que implementa el método de ordenamiento burbuja.  ");
    printf("\n¿que cantidad de numeros pondra?");
    scanf("%d", &cantidad);
    
    int num[cantidad];
    
    for (y=0; y<cantidad; y=y+1){
        printf("Ingrese el valor de la posicion [%i]: ",y);
        scanf("%d", &num[y]);
    }

    for(x=0; x<cantidad; x=x+1){
        for(y=0; y<cantidad; y=y+1){
            if(num[y]>num[y+1]){
                aux=num[y];
                num[y]=num[y+1];
                num[y+1]=aux;
            }
        }
        ciclos=ciclos+1;
    }
    
    for(x=0; x<cantidad; x=x+1){
        printf ("\n- %d ", num[x]);
    }

    cantidad=cantidad-1;
    for(x=cantidad; x>=0; x=x-1){
        printf ("\n- %d ", num[x]);
    }
    
    return 0;
}

