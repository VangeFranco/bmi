#include <stdio.h>

int main()
{
	float peso;
	float altura;
	float imc;
	
	printf("Ingrese su peso en kg: \n");
	scanf("%f",&peso);
	while(peso<0){
		printf("Peso no valido, no se permite el ingreso de números negativos.\nIngrese su peso en kg: \n");
		scanf("%f",&peso);
	}
	printf("Igrese su altura en metros: \n");
	scanf("%f",&altura);
	while(altura<0){
		printf("Altura no valida, no se permite el ingreso de números negativos.\nIngrese su altura en metros: \n");
		scanf("%f",&altura);
	}
	
	imc=peso/(altura*altura);
	
	printf("Su indice de masa corporal es %f \n\n",imc);
	
	printf("Indice          Condición\n");
	printf("---------------------------\n");
	printf("<18.5           Bajo peso\n");
	printf("18.5 a 24.9     Normal\n");
	printf("25.0 a 29.9     Sobrepeso\n");
	printf(">=30            Obesidad\n");
	
	return 0;
}
