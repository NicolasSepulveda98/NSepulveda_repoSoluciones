// Abrir el programa 
// Luego introducir las librerias
// Crear el int main y un procedimiento
// Pedir, leer y guardar e imprimir valores para la determinacion de estos
// Crear un ciclo este caso While
// Llamar al procedimiento
// Cerrar el programa 

#include <stdio.h>
#include <stdlib.h> 
void
	descomponer(int variable){
	int suma;
	int b=0;
	int conts=0;
	
	while (suma>10 || conts==0){		
		suma=0;
		
		while(variable>10){
		
		b = variable%10;
		variable = variable/10;
		suma= suma + b;
			
			
		printf ("Los digitos son: %d \n", b);
		printf ("La suma es: %d\n" , suma);
		printf ("La variable es: %d\n", variable);
	}
 
	suma=variable+suma;
	variable=b;
	conts=1;
	}
		printf ("La raiz del numero ingresado es: %d\n", suma);
}



int main(){
	
	int variable=0;
		printf("Ingrese un numero: ");
		scanf("%d", &variable);
		
	    descomponer(variable);
	return 0;
}
