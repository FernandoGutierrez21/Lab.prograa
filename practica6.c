/*pedir numero mayores a ceros   PRACTICA 5
1917844*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i; float suma=0, num, prom=0, n;
	printf("Ingrese un número: "); 
	scanf("%f",&n);
	i=0;
	do{
		//fflush(stdin);
		if(n>0){
			printf("Digite un numero: "); 
			scanf("%f",&num);
			suma+= num;
			i++;
		}
		i++;
	}while(i<=1000 && n>=0 && num>=0);
	prom=suma/i;
	printf("La suma de sus numeros es: %.2f\n",suma);
	printf("con el promedio: %.2f\n\n\n\n\n",prom);
	system("pause");
	return 0;
}
