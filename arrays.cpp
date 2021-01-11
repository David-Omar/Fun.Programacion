#include <stdio.h>

int main() {

    int x[5];

    int total = 0;

    for (int i = 0; i < 5; i++){
        printf("\nDato %d: ",(i+1));
        scanf("%d",&x[i]);
        total += x[i];
    }

    float promedio = total/5;

    printf("\n\nEl promedio de los valores es: %.2f",promedio);
    
    return 0;
}
