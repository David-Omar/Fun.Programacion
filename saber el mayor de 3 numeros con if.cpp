#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int a = 40;
    int b = 73;
    int c =24;
    
if (a > b && a >c ){
        printf ("El n�mero mayor de los 3 es: " "%d", a);
    } 
    else if (b > a && b > c){
        printf ("El n�mero mayor de los 3 es: " "%d", b);
    }
    else if (c > a && c > b){
        printf ("El n�mero mayor de los 3 es: " "%d", c);
    }
    else if (a == b && a == c){
        printf ("Todos los n�meros los mismos");
    }

    return 0;
}
