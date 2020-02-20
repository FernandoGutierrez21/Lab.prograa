/*PRACTICA #3   
If anidados. Obtener un caracter usando getchara entero 
para saber sobre su codigo ASCII e imprimir si el caracter ingresado
es numerico, letra(mayuscula o munuscula) o un simbolo.
1917844
13-02-2020*/
#include<stdio.h>
#include"stdlib.h"
int main()
{
	char f;
	printf("Ingrese caracter: ");
	f = getchar();
	int s=(int) f;
	if (48<=f && f<=57){
			printf("Es un numero\n\n");
	}else{
		if(65<=f && f<=90){
				printf("Es mayuscula\n\n");
		}else{
			if(97<=f && f<=122){
				printf("Es minuscula\n\n");
			}
			else{
				printf("Es un simbolo\n\n");
			}	
		}		
	} 
	system("pause");
	return 0;
}
