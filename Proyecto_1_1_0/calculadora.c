
#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"
#include "disp7seg.h"
#include <math.h>
#include <wiringPi.h>

int main()
{
	wiringPiSetup();
	while(1){
	float a,b,res;
	int c;
	printf("Ingrese opreando 1: \n");
	scanf("%f",&a);
	printf("Ingrese opreando 2: \n");
	scanf("%f",&b);
	printf("1. Suma: \n");
	printf("2. Resta: \n");
	printf("3. Multiplicacion: \n");
	printf("4. Division: \n");
	printf("5. Raiz cuadrada: \n");
	printf("6. Potencia de 2: \n");
	printf("7. Salir: \n");
	printf("Ingrese operacion a realizar: \n");
	scanf("%i",&c);
	switch(c){
		case 1: res = suma(a,b);
		printf("Su resultado es: %f\n",res);
		out(res);
		break;
		
		case 2: res = resta(a,b);
		printf("Su resultado es: %f\n",res);
		out(res);
		break;
		
		case 3: res = mult(a,b);
		printf("Su resultado es: %f\n",res);
		out(res);
		break;
		
		case 4: res = div1(a,b);
		printf("Su resultado es: %f\n",res);
		out(res);
		break;
		
		case 5: res = sqrt1(a);
		printf("Su resultado es: %f\n",res);
		out(res);
		break;
		
		case 6: res = pot2(a);
		printf("Su resultado es: %f\n",res);
		out(res);
		break;
		
		case 7: printf("Salida");
		exit(0);
		
		default: printf("Argumento invalido");
		exit(0);
	}
	}
	return 0;
}

