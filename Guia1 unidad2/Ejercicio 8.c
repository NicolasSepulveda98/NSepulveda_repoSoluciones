#include <stdio.h>

void intercambio (int N, int M, int matriz [N][M]){
	
	int i,j;
	
	for (i=0; i< N; i++){ 
		for (j=0; j< N; j++){
			printf("%d", matriz[N][M]);
		}
	}
}
void imprimir_matriz(int N, int M, int matriz[N][M]){
	
	int i,j;
	
	for(i=0; i<N;i++){
		for (j=0; j<M; j++){
			printf("%d ",matriz[i][j]);
		}
		printf("\n");
	}
}

void llenar_matriz(int N, int M, int matriz[N][M]){
	int i,j;
	int numero;
	for(i=0; i<N; i++){
		for(j=0; j<M; j++){
			printf("Ingrese numero: ");
			scanf("%d",&numero);
			
			matriz[i][j]=numero;	
		}
	}
}

int main()
{
	int N, M;
	
	printf("Ingrese el valor de n: ");
	scanf("%d",&N);
	printf("Ingrese el valor de m: ");
	scanf("%d",&M);
	
	int matriz [N][M];
	
	llenar_matriz(N, M, matriz);
	imprimir_matriz(N, M, matriz);
	intercambio(N, M, matriz);
	return 0;
}

