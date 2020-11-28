/* Practica#8                 Suarez Velasco Gabriela 
Fecha de entrega: 27/11/2020

// Al quitar la diagonal invertida y los asteriscos a partir de include
y al finalizar la ultima llave el codigo se activara.

/*1.-Algoritmo para determinar si un número es positivo o negativo.
Este algoritmo nos va a permitir identificar si un numero es positivo o negativo*/

/*#include <stdio.h>
//Declaración de librerias
int main () 
{
	//Declaración de variables
	int num;
	//Proceso
	printf ("Por favor ingrese un numero \n");
	scanf ("%d", & num);
	if (num>0) {
		printf("El numero es positivo");

		}else {
		printf("El numero es negativo");
			}
	return 0;
}*/


/*2.-Algoritmo para determinar cuánto se debe pagar por equis cantidad de lápices considerando que si son 1000 o 
más el costo es de 85¢, de lo contrario, el precio es de 90¢.

Este algoritmo nos servira para poder saber cual será el precio de los lapices dependiedo la cantidad de ellos*/
/*#include <stdio.h>
//Declaración de librerias
int main ()
{
	// Declaración de variables 
	int lapi; int pagar; int dar;
	//Proceso
	printf ("Ingrese el numero de lapices que compro \n");
	scanf ("%d", & lapi);
	if (lapi>1000) {
		pagar= (lapi*0.85);
		printf("El monto a pagar es: %d", pagar);

		}else {
			dar = (lapi*0.90);
	 		printf("El monto a pagar es: %d", dar);
			 }
	return 0;	
}*/


/*3.-Un almacén tiene una promoción: a todos los trajes que tienen un precio superior a $2500.00 se les aplicará un
descuento de 15 %, a todos los demás se les aplicará sólo 8 %. Realice un algoritmo para determinar el precio final
que debe pagar una persona por comprar un traje y de cuánto es el descuento que obtendrá.

Este algoritmo nos ayudara a saber cual será el pricio final del traje adquirido con el devido descuento segun el precio del mismo*/

/*#include <stdio.h>
//Declaración de librerias
int main ()
{
	// Declaración de variables 
	int precioTraje; int descuento; int total;
	//Proceso
	printf ("Ingrese el precio del traje \n");
	scanf ("%d", & precioTraje);
	if (precioTraje >2500) {
		descuento = (precioTraje *0.15);
		printf("El monto a pagar es: %d", descuento);

		}else {
			descuento = (precioTraje *0.08);
	 		printf("El monto a pagar es: %d", descuento);
			 }
	return 0;	
}/*


/*4.-Se requiere determinar cuál de tres cantidades proporcionadas es la mayor.
Este algoritmo nos ayudara a saber cual de los tres numeros proporcionados será el numero mayor*/
/*#include <stdio.h>
//Declaración de libreria
int main()
{
	//Declaración de variables
    int numero_1, numero_2, numero_3;
    //Proceso
	printf("Ingrese el primer numero entero: \n");
    scanf( "%d", &numero_1 );
    printf("Ingrese el segundo numero entero: \n");
    scanf( "%d", &numero_2 );
    printf("Ingrese el primer numero entero: \n");
    scanf( "%d", &numero_3 );
    if (numero_1 > numero_2 && numero_1 > numero_3)
        printf( "El numero mayor es: %d \n", numero_1);
    else
        if ( numero_2 > numero_3 )
            printf( "El numero mayor es: %d \n", numero_2 );
        else
            printf( "El numero mayor es: %d \n", numero_3 );
return 0;
}*/


/*5.-El director de una escuela está organizando un viaje de estudios, y requiere determinar cuánto debe cobrar a
cada alumno y cuánto debe pagar a la compañía de viajes por el servicio. La forma de cobrar es la siguiente: si son
100 alumnos o más, el costo por cada alumno es de $65.00; de 50 a 99 alumnos, el costo es de $70.00, de 30 a
49, de $95.00, y si son menos de 30, el costo de la renta del autobús es de $4000.00, sin importar el número de
alumnos. Realice un algoritmo que permita determinar el pago a la compañía de autobuses y lo que debe pagar
cada alumno por el viaje.

Este programa lo que hará será determinar el costo del viaje dependiendo la cantidad de alumnos*/

/*#include <stdio.h>
//Declaración de libreria
int main()
{
	//Declaración de variables
    int alumnos, precioA, total;
    //Proceso
	printf("Ingrese la cantidad de alumnos que iran al paseo: \n");
    scanf( "%d", &alumnos);
    if (alumnos>=100){
    	precioA=65;
    }else{
        if (alumnos >= 50 && alumnos <= 99) 
        	precioA=70;
			}if (alumnos <=49){
        		precioA=95;
        			}if 
        				(precioA = (4000 / alumnos));
						total=precioA*alumnos;
						printf("El precio del boleto individual es de: %d \n" , precioA);
						printf( "El pago total es: %d \n" , total);
					
return 0;
}*/
