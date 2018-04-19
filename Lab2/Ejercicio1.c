// Abrir programa
// Determinar variables tipo int
// Pide y guarda valores
// Se establece un ciclo, for para determinar divisores
// Se determina un condicional, if para establecer par
// Se establece si es primo
// Determinar un for guardando el for y el if anteriores, dentro de el
// Determinar una variable donde determine cuantos primos hay dentro del numero
// Imprimir la cantidad de primos
// Cerrar programa con return 0


#include <stdio.h>

int main()
{
	int divisores=0;
	int n;
	int a;
	int e;
	int conts=0;
		
	printf("Ingrese un número menor 1000000:\n");
	scanf("%d", &n);
	
	for (e=2; e<=n; e++){ 
	divisores=0;
	for (a=1; a <= n; a++){
		if (e %a == 0){
			divisores ++;
		}
	}
	if (divisores == 2){
		printf("Numero primo encontrado : %d \n",e);
		conts++;
	}}
	printf("La cantidad de numeros primos es:%d",conts);
	
	return 0;
}

