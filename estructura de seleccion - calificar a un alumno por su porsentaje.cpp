#include <stdio.h>

int main(){
	
	int calif;
	
	printf("Escribe tu calificacion\n");
	scanf("%i",&calif);
	
	switch(calif){
	
		case 1: printf("Muy mal, espero que a la proxima almenos saques mas que un %i",calif); break;
		case 2: printf("Bueno, mejor que un uno pero hay que mejorar ese %i",calif); break;
		case 3: printf("que mal, aun tienes que mejorar, no puedes quedarte con un %i",calif); break;
		case 4: printf("Muy mal, mejora tu calificacion de %i",calif); break;
		case 5: printf("Por poco pero no, has fallado por sacarte este %i",calif); break;
		case 6: printf("Muy bien sacaste %i y pansaste, pero aun asi, necesitas mejorar",calif); break;
		case 7: printf("Muy bien sacaste %i",calif); break;
		case 8: printf("Muy bien sacaste %i buen alumno",calif); break;
		case 9: printf("Muy bien sacaste %i casi perfecto",calif); break;
		case 10: printf("Pero que muy bien! sacaste %i! eres el mejor alumno!",calif); break;	
		default: printf("No es una opcion valida\n"); break;
		
		
	}	
	
	return 0;
}
