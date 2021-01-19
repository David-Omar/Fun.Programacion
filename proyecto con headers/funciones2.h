#ifndef FUNCIONES2_H
#define FUNCIONES2_H

#ifdef __cplusplus
extern "C" {
#endif

/*int suma(int a, int b);
int resta(int a, int b);
char primer_caracter(char* cadena);
double area_circulo(int radio);*/

    
float PI=3.1415;
int suma(int a, int b){
    return a+b;
}
int resta(int a, int b){
    return a-b;
}

char primer_caracter(char* cadena){
    return cadena[0];
}

double area_circulo(int radio){
    return PI*radio*radio;
}


#ifdef __cplusplus
}
#endif

#endif /* FUNCIONES2_H */

