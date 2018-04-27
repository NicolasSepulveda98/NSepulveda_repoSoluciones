// Abrir el programa
// Determinar una funcion, con determinantes int y un retorno al a la variable que necesitamos, dentro de otra funcion
// Determinar variables de tipo int
// Determinar un ciclo for
// Pedir, guardar e imprimir valores del algortimo indicado
// Imprimir el resultado total
// Cerrar el programa con retorno 0 

#include <stdio.h>
#include <math.h>

int  valor_final ()
{
	int e, pago=0, pago_del_anterior;
	pago_del_anterior =10;
	for (e= 0; e < 20; e++){
		pago= pago + pago_del_anterior;
		printf ("Debera pagar en el mes correspondiente el total de %d: %i \n", e+1, pago_del_anterior);
		pago_del_anterior = pago_del_anterior*2;
	}
	return pago;
}
	
	int main ()
	{
		int total;
		total = valor_final ();
		printf("El valor final de pago es: %d \n", total);
		
	return 0;
}

