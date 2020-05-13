/*FERNANDO YAHIR GUTIERREZ SANTOYO      1917844             PRACTICA#11

 pedir matricula, nombre(s), apellido, segundo apellido, 
fecha de nacimiento, escuela donde estudia, el grado, carrera y genero e imprimir*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct fecha{
	unsigned int dia, mes,anio;
};
struct alumno{
	long matricula;
	char nombre[40], genero[10], escuela[100], apellido[40], segundo_apellido[40], carrera[50];
	int grado;
	struct fecha fechaingreso;
};
int main(){
	struct alumno estudiante[10];
	for(int i=0; i<10; i++){
		printf("Estudiante %d\nNombre: ",i+1); fflush(stdin);//1
		gets(estudiante[i].nombre);
		printf("Apellido: ",i+1); fflush(stdin);//2
		gets(estudiante[i].apellido);
		printf("Segundo apellido (opcional): ",i+1); fflush(stdin);//3
		gets(estudiante[i].segundo_apellido);
		do{//4
			printf("Matricula: ");
			scanf("%ld",&estudiante[i].matricula);
		}while(estudiante[i].matricula<0);
		printf("Escuela: ");fflush(stdin);//5
		gets(estudiante[i].escuela);
		printf("Carrera: ");fflush(stdin);//6
		gets(estudiante[i].carrera);
		printf("Genero: ");fflush(stdin);//7
		gets(estudiante[i].genero);
		printf("Grado: ");//8
		scanf("%d",&estudiante[i].grado);
		do{//9
			printf("Ingrese dia de nacimiento: ");
			scanf("%d",&estudiante[i].fechaingreso.dia);
		}while(estudiante[i].fechaingreso.dia<0 || 31<estudiante[i].fechaingreso.dia);
		do{
			printf("Ingrese mes de nacimiento: ");
			scanf("%d",&estudiante[i].fechaingreso.mes);
		}while(estudiante[i].fechaingreso.mes<0 || 12<estudiante[i].fechaingreso.mes);
		do{
			printf("Ingrese anio de nacimiento: ");
			scanf("%i",&estudiante[i].fechaingreso.anio);
		}while(estudiante[i].fechaingreso.anio<1900 || 2010<estudiante[i].fechaingreso.anio);
		puts("\n");
	}
	for(int i=0; i<10; i++){
		printf("Estudiante %d\n ",i+1);
		printf("%ld\t%s %s %s\n",estudiante[i].matricula,estudiante[i].nombre,estudiante[i].apellido,estudiante[i].segundo_apellido);
		printf("Escuela: %s\t Carrera: %s\t Grado: %s\n",estudiante[i].escuela,estudiante[i].carrera,estudiante[i].grado);
		printf("Genero: %s\t\t Fecha de nacimiento: %d/%d/%i.",estudiante[i].genero,estudiante[i].fechaingreso.dia,estudiante[i].fechaingreso.mes,estudiante[i].fechaingreso.anio);
		puts("\n");
	}
	puts("\n\n\n\n");
	system("pause");
	return 0;
}
