#include <stdio.h>
#include <stdlib.h>

void recorrer_matriz(int tam1,int tam2,int matriz[tam1][tam2]){
	int i,j;
	
	for (i=0; i<tam1; i++){
		for(j=0; j<tam2; j++){
			printf ("ingrese el valor para la cordenada (%d,%d): ",i,j);
			scanf ("%d",&matriz[i][j]);
			
		}
	}
}

void imprimir_matriz(int tam1,int tam2,int matriz[tam1][tam2]){
	int i,j;
	
	for (i=0; i<tam1; i++){
		for (j=0; j<tam2; j++){
			if(i==j){
				matriz[i][j]=1;
			}
			printf ("%d ",matriz[i][j]);
		}
		printf ("\n");
	}
}

void simetrica(int tam1,int tam2,int matriz[tam1][tam2]){
	int aux;
	int i,j;
	for (i=0; i<tam1; i++){
		for (j=0; j<tam2; j++){
			if (i!=j){
				if (matriz[i][j]== matriz[j][i]){
					aux=0;
				}
				else {
					aux=1;
				}
			}
		}
	}
	if (aux==0){
		printf ("Matriz simetrica\n");
	}
	if (aux==1){
		printf ("Matriz no simetrica\n");
	}
}
int main(){
	int tam1=0;
	int tam2=0;
	printf ("Ingrese Valor del primer tamaño: ");
	scanf ("%d",&tam1);
	printf ("Ingrese Valor del segundo tamaño: ");
	scanf ("%d",&tam2);
	
	int matriz[tam1][tam2];
	
	recorrer_matriz(tam1,tam2,matriz);
	imprimir_matriz(tam1,tam2,matriz);
	
	return 0;
}
