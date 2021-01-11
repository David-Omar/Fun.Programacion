#include <stdio.h>

int main(){
	
	int numero1;
	int numero2;
	
	printf("escriba un numero\n");
	scanf("%i", &numero1);
	
	printf("escriba otro numero\n");
	scanf("%i", &numero2);
	
	if (numero1>numero2)
	{
	    printf("el numero mayor es %i\n",numero1);	
	}
	if (numero1<numero2)
	{
		printf("el numero mayor es %i\n",numero2);
	}	
	
	return 0;
}
