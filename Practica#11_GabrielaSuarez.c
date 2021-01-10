/* Practica#11              Suarez Velasco Gabriela 
Fecha de entrega: 09/01/2021

// Al quitar la diagonal invertida y los asteriscos a partir de include
y al finalizar la ultima llave el codigo se activara.*/

//APUNTADORES
//1.- Código (apuntadores)
/*
Este programa trabaja con aritmética de apuntadores para acceder a los
valores de un arreglo.
*/

//Seccion de librerías que se utilizara a lo largo del código

#include <stdio.h>
//Declaracion de variables
int main () 
{
int arr[] = {5, 4, 3, 2, 1};
int *apArr;

 	//Bloque de instrucciones	 
	apArr = arr;
	printf("int arr[5] = {5, 4, 3, 2, 1};\n");
	printf("apArr = &arr[0]\n");
	int x = *apArr;
	printf("x = *apArr \t -> x = %d\n", x);
	x = *(apArr+1);
	printf("x = *(apArr+1) \t -> x = %d\n", x);
	x = *(apArr+2);
	printf("x = *(apArr+1) \t -> x = %d\n", x);
	return 0;
}

//2.- Código (apuntadores en ciclo for)
/*Este programa genera un arreglo unidimensional de 5 elementos y
accede a cada elemento del arreglo a través de un apuntador
utilizando un ciclo for.*/

/*#include <stdio.h>
//Seccion de librerías
int main ()
{
#define TAMANO 5
int lista[TAMANO] = {10, 8, 5, 8, 7};
int *ap = lista;

	
 	//Bloque de instrucciones
printf("\tLista\n");
for (int indice = 0 ; indice < 5 ; indice++){
printf("\nCalificación del alumno %d es %d", indice+1, *(ap+indice));
}
printf("\n");
return 0;
}


//3.- Código (apuntadores en cadenas)
/*
Este programa muestra el manejo de cadenas en lenguaje C.
*/

//Seccion de librerías
/*#include <stdio.h>

//Declaracion de variables
int main(){
char palabra[20];
int i=0;
	
 	//Bloque de instrucciones
printf("Ingrese una palabra: ");
scanf("%s", palabra);
printf("La palabra ingresada es: %s\n", palabra);
for (i = 0 ; i < 20 ; i++){
printf("%c\n", palabra[i]);
}
return 0;
}

//4.- Código (arreglos multidimensionales con apuntadores)
/* Este programa genera un arreglo de dos dimensiones (arreglo                  
multidimensional) y accede a sus elementos a través de un apuntador utilizando
un ciclo for.*/

//Seccion de librerías
/*#include<stdio.h>

//Declaracion de variables
int main()
{
int matriz[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
int i, cont=0, *ap;
ap=*matriz; //Aqui hubo un pequeño error, para que el programa funcione se le tiene que poner el asterisco antes de la palabra matriz
printf("Imprimir Matriz\n");
for (i=0 ; i<9 ; i++){
if (cont == 3){
printf("\n");
cont = 0;
}
printf("%d\t",*(ap+i));
cont++;
}
printf("\n");
return 0;
}*/
