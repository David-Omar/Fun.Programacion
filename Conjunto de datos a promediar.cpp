#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    
    int x;
    
    float total = 0;
    float promedio = 0;
    float nelem = 0;
    
    printf ("cuantos datos quiere promediar?");
    scanf("%f",&nelem);
    
    float cantidades[x];
    
    for (x=0; x<nelem ; x=x+1){
        printf("Ingresa la cantidad del dato %d: ", x+1);
        scanf("%f", &cantidades[x]);
        total += cantidades[x];
        promedio = total / nelem;
        printf ("\n");
    }
    
    printf ("El promedio total es: %.2f\n", promedio);
    

    return 0;
}
