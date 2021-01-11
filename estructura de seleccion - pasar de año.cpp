#include <stdio.h>

int main(){
	
	int materiasR;
	
	printf("Cuantas materias has reprobado?\n");
	scanf("%i",&materiasR);
	
	if(materiasR>3)
	{
		printf("Lo siento, has reprobado, tienes que repetir el año por deber %i\n",materiasR);	
	}
	else if (materiasR==0)
	{
		printf("¡Felicidades! no debes ninguna materia!");
	}
	else
	{
		printf("Felicidades, has aprovado el año, pero debes %i\n",materiasR);
	}
	
	
	return 0;
}
