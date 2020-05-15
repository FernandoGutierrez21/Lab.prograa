/*FERNANDO YAHIR GUTIERREZ SANTOYO FERNANDO YAHIR     1917844
PRACTICA 12*/

#include<stdio.h>
#include<stdlib.h>

int fibbonacci(int n);
int main(){
	int n;
	printf("Ingrese el numero de digitos que quiere que se impriman del codigo fibbonacci: ");
	scanf("%d",&n);
	printf("%d\n\n\n\n\n",fibbonacci(n));
	system("pause");
	return 0;
}
//Recursion es una funcion que se llama a sí misma
int fibbonacci(int n){
	if(n==0){
		return 0;
	}else if(n==1){
		return 1;
	}else
		return (fibbonacci(n-1)+fibbonacci(n-2));
}
