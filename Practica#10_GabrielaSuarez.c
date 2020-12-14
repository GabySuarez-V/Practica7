/* Practica#10              Suarez Velasco Gabriela 
Fecha de entrega: 14/12/2020

// Al quitar la diagonal invertida y los asteriscos a partir de include
y al finalizar la ultima llave el codigo se activara.*/

//1.-

/*#include <stdio.h>
//Declaración de librerias
int main()             //Para que este programa funcione se le tiene que cambiar el viod por un int
{
int N, CONT, AS;
AS=0;
CONT=1;
printf("TECLEA UN NUMERO: ");
scanf("%i",&N);
	while(CONT<=N)
	{
		AS=(AS+CONT);
		CONT=(CONT+2);
	}	
	printf("\nEL RESULTADO ES %i\n", AS);
return 0;
}*/
/*FUNCIONALIDAD DEL PROGRAMA:
Este programa lo que hace es comparar el numero ingresado por el usuario
es una sucesion numerica que va de 4 en cuatro, repitiendose el resultado
doble ves con cada numero que se ponga, sumandose el resultado anterior con el 
numero que se ponga...es tipo una susecion fibonacci*/

//2.-
/*#include <stdio.h>
//Declaración de librerias
int main()        		//Para que este programa funcione se le tiene que cambiar el viod por un int
{
int i, j;
printf("\n Introduzca un numero entero del 1 al 10:\n");
scanf( "%d",&j);
printf("\nTabla del %i\n", j); 
	for(i=1; i<11; i++)    
		printf("\n %d*%d=%d", j, i, j * i);
		{
			for(j=1; j==10; j++)
			{
				printf("%i X %i = %i\n", i, j, i*j);
			}
		}
}*/

//3.-
#include <stdio.h>
#include <math.h>
int main()
{
int K, X, AP, N;
float AS;
printf("EL TERMINO GENERICO DE LA SERIE ES: X^K/K!");
printf("\nN=");
scanf("%d",&N);		//para que en la variable se pueda guardar el dato le hace 
					//falta el & 
printf("X=");
scanf("%d",&X);	//para que en la variable se pueda guardar el dato le hace 
					//falta el & 
K=0;
AP=1;
AS=0;
	while(K<=N)
	{
		AS=AS+pow(X,K)/AP;
		K=K+1;
		AP=AP*K;
	}
	printf("SUM=%0.2f",AS);  //Aqui le cambie el %el por un  %f para que me muestre la cantidad 
						//correcta con dos decimales 
return 0;				//Aunque no era necesario le agregue un return 0; para que nos devuelva un valor.
}
