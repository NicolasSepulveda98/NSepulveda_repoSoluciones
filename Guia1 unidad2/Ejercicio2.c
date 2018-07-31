#include <stdio.h>

int main()
{
	int n;
	
	printf("Ingrese el valor de n: ");
	scanf("%d",&n);
	
	int matriz[n][n];
	int i, j;
	
	//INGRESAR
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			matriz[i][j]=0;
			
		}
	}
	
	//IMPRIMIR
	for(i=0; i<n; i++){
		for(j=0;j<n; j++){
			
				if (i==j){
				printf("%d ", matriz[i][j]=1);	
				}
				else {
				printf("%d ", matriz[i][j]=0);
				}
		}
		printf("\n");
	}
	
	return 0;
}

