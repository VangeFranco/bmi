#include <stdio.h>
#include <math.h>

float calcularAreaRectangulo(float l, float a){
	return l*a;
}

float calcularPerimetroRectangulo(float l, float a){
	return 2*(l+a);
}

float calcularDiagonalRectangulo(float l, float a){
	return sqrt(l*l+a*a);
}

float calcularAreaCirculo(float r){
	return M_PI*r*r;
}

float calcularPerimetroCirculo(float r){
	return 2*M_PI*r;
}

void imprimirResultados(float area, float perimetro, float diagonal, int n){
	if (n==1){
		printf("\nEl �rea del rect�ngulo es: %.2f",area);
		printf("\nEl perimetro del rect�ngulo es: %.2f",perimetro);
		printf("\nLa diagonal del rect�ngulo es: %.2f",diagonal);
	}
	if (n==2){
		printf("\nEl �rea del circulo es: %.2f",area);
		printf("\nEl perimetro del circulo es: %.2f",perimetro);
	}
}

int main(int argc, char *argv[]) {
	int n;
	float longitud, altura, radio, area, perimetro, diagonal=0;
	printf("Ingrese la figura que desea calcular (1:rect�ngulo, 2:c�rculo): ");
	scanf("%d",&n);
	while(n!=1&&n!=2){
		printf("\nOpci�n no v�lida. Ingrese la figura que desea calcular (1:rect�ngulo, 2:c�rculo): ");
		scanf("%d",&n);
	}
	if(n==1){
		printf("\nOpci�n de rect�ngulo seleccionada\n");
		printf("\nIngrese la longitud del rect�ngulo: ");
		scanf("%f",&longitud);
		printf("Ingrese la altura del rect�ngulo: ");
		scanf("%f",&altura);
		
		area = calcularAreaRectangulo(longitud, altura);
		perimetro = calcularPerimetroRectangulo(longitud, altura);
		diagonal = calcularDiagonalRectangulo(longitud, altura);
	}
	if(n==2){
		printf("\nOpci�n de c�rculo seleccionada\n");
		printf("\nIngrese el radio del c�rculo: ");
		scanf("%f",&radio);
		area = calcularAreaCirculo(radio);
		perimetro = calcularPerimetroCirculo(radio);
	}
	
	imprimirResultados(area, perimetro, diagonal, n);
	return 0;
}

