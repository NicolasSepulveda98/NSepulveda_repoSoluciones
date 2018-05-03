// Algoritmo narrado
// Se abre el programa
// Se crea una funcion con float
// se identifican variables, y constantes de algunas variables
// Luego se crea una funcion para sacar valores predeterminados
// Se cierra la funcion
// se abre un un int main
// se expresa la funcion ocupada
// se cierra con retorna 0 
#include <stdio.h>

float infeccion(){
	float gente =100000;
	float probabilidad= 0.01;
	float valor_entregado;
	
	valor_entregado= ((1/gente)*probabilidad);
	printf("La probabilidad de infeccion es: %f", valor_entregado);
	
	return 0;
	}

int main (){
	infeccion();
	return 0;
}

