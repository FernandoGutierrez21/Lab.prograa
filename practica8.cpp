/*Arreglos 1 dimension		PRACTICA 8

1917844
dado un numero n>10, mostrar los n numeros y si son primos o no */
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

bool esprimo(int i);
int main(){
	int n, p;
	printf("Ingrese un numero: "); 
	scanf("%d",&n);
	for(int i=0; i<=n; i++){
		if (esprimo(i)){
			printf("%i Es primo\n",i);
		}else{
			printf("%i No es primo\n",i);
		}
	}
	
}

bool esprimo(int i){
	bool p=true;
	int d=2;
	if(i<2){
		p=false;
	}else{
		while(p && d<=sqrt(i)){
			if(i%d == 0){
				p=false;
			}
			d+=1;
		}
	}
	return p;
}

