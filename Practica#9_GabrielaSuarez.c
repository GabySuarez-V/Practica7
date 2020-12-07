/* Practica#9                 Suarez Velasco Gabriela 
Fecha de entrega: 06/12/2020

// Al quitar la diagonal invertida y los asteriscos a partir de include
y al finalizar la ultima llave el codigo se activara.

/* 1.-Determinar cuánto ahorrará una persona en un año, si al final de cada mes 
deposita variables cantidades de dinero; además, se requiere saber cuánto lleva 
ahorrado cada mes. 

Mediante la estrectura de control **** el susario podrá saber cual es su total ahorrado
durante un año, y lo que ira ahorrando cada mes*/

#include <stdio.h>
//Declaración de librerias
int main () 
{
	//Declaración de variables
	float ahorro, dep;
	int mes;
	//Proceso
	
	printf("Bienvenido a su cuenta de ahorro \n");
	printf("Ingresa la cantidad de dinero que deposito en en mes 1: \n");
	while (mes <= 11){;
	scanf ("%f", &dep);
	ahorro=ahorro+dep;
	mes=mes+1;
	printf("El ahorro del mes: %d \n", mes , "es: %f", ahorro);
	printf("El ahorro total es : %.2f \n", ahorro);	
		}
	return 0;
}
	

/*2.-Determinar, de N cantidades, cuántas son menores o iguales a cero y cuántas mayores a cero.
Con este prgrama podremos saber que numeros ingresados por el usuario son mayores o menores a cero*/

/*#include <stdio.h>
#include <math.h>
 //Declaración de librerias
int main() {
 
  int num, cont, numero,cero=0,menor=0,mayor=0;
 
  printf ("Hola, ingrese la cantidad de numeros que desee compara: \n");
  scanf("%d", &num);
  for (cont=1; cont<=num; cont++) {
    printf ("Ingrese un numero \n");
    scanf("%d", &numero);
    if (numero == 0)
      cero++;
    else if (numero < 0)
      menor++;
    else
      mayor++;
  }
  printf("Los numeros iguales a cero son: \n %d", cero );	
  printf("\n Los numeros menores a cero son: \n %d", menor);
  printf("\n Los numeros mayores a cero son: \n %d", mayor);
  return 0;
}/*


/*3.-Generar e imprimir los números pares que se encuentran entre 0 y 100.
Con este código sabremos cuales son los numeros paras entre 0 y 100 que el usuario ingrese*/

/*#include <stdio.h>
int main () {
    int num=0;
    printf("Hola, los numeros pares que hay entre el 1 y 100 son:\n");
        for (num = 0; num <= 100; num = num +2){
        	printf("%d\n", num);
    }
}/*
