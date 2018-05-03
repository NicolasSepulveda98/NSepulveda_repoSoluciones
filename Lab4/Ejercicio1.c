// Algoritmo narrado
// Abrimos el programa
// Iniciar funcion 
// Definir variable  y como se llamara numero contrario
// Luego pedir, guardar y leer valores 
// iniciar un int main
// Para pedir los numeros que queremos ejercer en funcion
// cerramos programa con retorna 0

#include <stdio.h>


void numero_contrario (int n){	
	
	
	printf("%d", (n%10));
	n= (n/10);
	printf("%d", (n%10));
	n= (n/10);
	printf("%d", (n%10));
	
	
	
	}	
	
int main () {
	int numero;
	printf ("Ingrese numeros de tres digitos: ");
	scanf("%d", &numero);
	
	numero_contrario (numero);
	
	return 0;
}

