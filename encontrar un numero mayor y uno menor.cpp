#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv) {
    
    int x;
    float arreglo[x];
    float totalnum = 0; 
    int mayor;
    int menor;
    
    printf ("Programa que determina el numero menor y mayor\n\n");
    
    printf ("Ingrese los numeros a evaluar\n");
    scanf("%f",&totalnum);
    
    for (x=0; x < totalnum; x=x+1){
        printf("Numero %d: ", x+1);
        scanf("%f", &arreglo[x]);
    }
    mayor=arreglo[0];
    menor=mayor;
    
    for (x=1 ;x< totalnum ;x=x+1){
        if(arreglo[x]>mayor){
            mayor=arreglo[x];
        }
        if(arreglo[x]<menor){
            menor=arreglo[x];
        }
    }

    printf("\nEl numero %d es el mayor de todos los numeros.", mayor); 
    printf("\nEl numero %d es el menor de todos los numeros.", menor);
    
    return 0;
}
