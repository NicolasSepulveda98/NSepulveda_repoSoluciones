// Se abre el programa
// Se determina variables de tipo float
// Se pide valor en kilogramos
// Se guarda el valor
// Tomar la comparacion de dosis, sacando valores
// Imprimir valores de gotas a tomar dependiendo de si es mayor o menor a 1 año
// Terminar programa con return 0 
 

#include <stdio.h>

int main()
{
	float peso;
	float cantidad_diaria;
	float gotas;
	float gotitas_en_menor;
	
	printf("Introduzca el peso de Juanito en Kg: ");
	scanf("%f",&peso);
	cantidad_diaria = peso*0.2;
	gotas= cantidad_diaria * 2500/500;
	gotitas_en_menor = gotas/3;
	printf("Si Juanito tiene menos de un año, se debe administrar la cantidad de gotas: %.1f gotas \n", cantidad_diaria);
	printf("Si Juanito tiene mas de un año, administrar la cantidad de gotas: %.1f gotas\n", gotitas_en_menor);
		
	return 0;
}

