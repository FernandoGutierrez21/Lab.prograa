/*FERNANDO YAHIR GUTIERREZ SANTOYO      1917844             PRACTICA#10

 pedir matricula, nombre(s), apellido, segundo apellido, 
fecha de nacimiento, escuela donde estudia, el grado, carrera y genero e imprimir*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char estudiantes[10][9][100];
	char nombre[40];
	int dia[10],mes[10],anio[10];
	for(int i=0; i<10; i++){
		int j=1;
		//pidiendo la matricula
		do{
			printf("%d.Matricula del estudiante %d: ",j,i+1);//1
			scanf("%ld",&estudiantes[i][j][100]);
		}while(estudiantes[i][j][100]<0); j++;
		
		//pidiendo el nombre
		printf("%d.Nombre: ",j); fflush(stdin);//2
		gets(estudiantes[i][j]); j++;
		
		//pidiendo el primer apellido
		printf("%d.Primer apellido: ",j); fflush(stdin);//3
		gets(estudiantes[i][j]); j++;
		
		
		//pidiendo el segundo apellido
		printf("%d.Segundo apellido(opcional): ",j); fflush(stdin);//4
		gets(estudiantes[i][j]); j++;
		
		//pidiendo fecha
		if(i>=0){
			do{
				printf("Ingrese su dia de nacimiento: ");
				scanf("%d", &dia[i]);
			}while(dia[i]<0 || dia[i]>31);
			do{
				printf("Ingrese su mes de nacimiento: ");
				scanf("%d", &mes[i]);
			}while(mes[i]<0 || mes[i]>12);
			do{
				printf("Ingrese su anio de nacimiento en formato aa: "); fflush(stdin);
				scanf("%d", &anio[i]);
			}while(anio[i]<0 || 100<anio[i]);
		} j++;
		
		//pidiendo la escuela en la que estudia
		printf("%d.Escuela: ",j); fflush(stdin);
		gets(estudiantes[i][j]); j++;
		
		//pidiendo el grado en el que esta
		printf("%d.Grado: ", j);
		scanf("%d",&estudiantes[i][j][100]); j++;
		
		//pidiendo la carrera que estudia
		printf("%d.Carrera: ",j);fflush(stdin);
		gets(estudiantes[i][j]); j++;
		
		//pidiendo el genero
		printf("%d.Genero: ",j);fflush(stdin);
		gets(estudiantes[i][j]); puts("\n");
	}
	
	for(int i=0; i<10; i++){
		int j=1;
		//matricula
		printf("%ld\n",estudiantes[i][j][100]);j++;
		//nombre
		printf("%s\n",estudiantes[i][j]);j++;
		//primer apellido
		printf("%s\n",estudiantes[i][j]);j++;
		//segundo apellido
		printf("%s\n",estudiantes[i][j]);j++;
		//fecha
		if(i>=0){
			printf("%d/%d/%d\n",dia[i],mes[i],anio[i]);
		} j++;
		//escuela en la que estudia
		printf("%s\n",estudiantes[i][j]);j++;
		//grado en el que esta
		printf("%d\n",estudiantes[i][j][100]);j++;
		//carrera que estudia
		printf("%s\n",estudiantes[i][j]);j++;
		//genero
		printf("%s\n\n",estudiantes[i][j]);	
	}
	
	system("pause");
	return 0;
}


