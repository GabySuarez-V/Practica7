/* Practica#7                 Suarez Velasco Gabriela 
Fecha de entrega: 19/11/2020
*/


//Segundo programa

 /* 
 Este programa es para obener el área y 
 la hipótenusa de un triángulo 
 */
 
 //Seccion de librerías que se utilizara a lo largo del código
 #include <stdio.h>
 #include <math.h>
 
 //Declaracion de variables
 int base; int altura; 
 float area; float hipo; float a; float b;
 //Declaración de funciones
 int main()
 {
 	/*
 	Bloque de instrucciones
	 */
 	printf ("Por favor ingrese la base del triangulo \n");
 	scanf ("%d", & base);
 	printf ("Ahora por favor ingrese la altura del triangulo \n");
 	scanf ("%d",& altura);
 	area=base*altura/2;
 	printf ("Ahora se obtendra el hipotenusa \n");
 	printf ("Ingresa el primer cateto \n");
 	scanf ("%lf",& a);
 	printf ("Ingresa el sugundo cateto \n");
 	scanf ("%lf",& b);
	hipo = sqrt((a*a)+(b*b));
	printf ("El area del triangulo es: %lf \n %.2f", area);
	printf ("La hipotenusa de ese mismo triangulo es: %lf \n %.2f", hipo);
	return 0;
 }
 
