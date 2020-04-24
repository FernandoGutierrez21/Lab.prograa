#include<stdio.h>
#include<stdlib.h>

int main(){
	int vec[3][3]; int escalar;
	for(int i=0; i<3;i++){
		for(int j=0; j<3;j++){
			printf("Ingrese un numero entero: ");
			scanf("%i",&vec[i][j]);
		}
	}
	printf("Ingrese un numero que hara multiplicar toda la matriz: ");
	scanf("%i",&escalar);
	for(int i=0; i<3;i++){
		for(int j=0; j<3;j++){
			vec[i][j]*=escalar;
			printf("\t%i",vec[i][j]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
