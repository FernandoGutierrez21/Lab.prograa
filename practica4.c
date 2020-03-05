/*PRACTICA 4: CALCULADORA BASICA CON SWITCH
1917844*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	float a, b, r=0;
	char d;
	printf("\nIngrese dos numeros: "); scanf("%f %f", &a, &b);
	printf("\nPresione el signo de suma,resta, multiplicacion o division: "); scanf("%s", &d);
	switch (d){
		case '+': r=a+b; break;
		case '-': r=a-b; break;
		case '*': r=a*b; break;
		case '/': r=a/b; break;
		default: printf("\nEl signo que ingreso esta incorrecto\n");
	}
	printf("\el resultado es: %.2f",r);
	system("pause");
	return 0;
}
