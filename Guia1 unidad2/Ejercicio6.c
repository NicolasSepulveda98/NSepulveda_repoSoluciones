#include <stdio.h>
void temperatura(int N, int M, int tabla[N][M]){
	int i, j;
	
	for(i=0; i<7; i++){
		for(j=0; j<24; j++){
			printf("Ingrese N° de Temperatura [%d][%d]", i+1, j+1);
			scanf("%d",&tabla[i][j]);
		}
	}

	for (i=0; i<7; i++){
		for (j=0; j<24; j++){
			printf("%d", tabla[i][j]);
		}
	}
}
			
int main()
{
	int N;
	int M;
	N=7;
	M=24;
	int tabla[N][M];
	
	temperatura(N, M, tabla);
	
	return 0;
}

