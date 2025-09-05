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
		printf("\nEl área del rectángulo es: %.2f",area);
		printf("\nEl perimetro del rectángulo es: %.2f",perimetro);
		printf("\nLa diagonal del rectángulo es: %.2f",diagonal);
	}
	if (n==2){
		printf("\nEl área del circulo es: %.2f",area);
		printf("\nEl perimetro del circulo es: %.2f",perimetro);
	}
}

int main(int argc, char *argv[]) {
	int n;
	float longitud, altura, radio, area, perimetro, diagonal=0;
	printf("Ingrese la figura que desea calcular (1:rectángulo, 2:círculo): ");
	scanf("%d",&n);
	while(n!=1&&n!=2){
		printf("\nOpción no válida. Ingrese la figura que desea calcular (1:rectángulo, 2:círculo): ");
		scanf("%d",&n);
	}
	if(n==1){
		printf("\nOpción de rectángulo seleccionada\n");
		printf("\nIngrese la longitud del rectángulo: ");
		scanf("%f",&longitud);
		printf("Ingrese la altura del rectángulo: ");
		scanf("%f",&altura);
		
		area = calcularAreaRectangulo(longitud, altura);
		perimetro = calcularPerimetroRectangulo(longitud, altura);
		diagonal = calcularDiagonalRectangulo(longitud, altura);
	}
	if(n==2){
		printf("\nOpción de círculo seleccionada\n");
		printf("\nIngrese el radio del círculo: ");
		scanf("%f",&radio);
		area = calcularAreaCirculo(radio);
		perimetro = calcularPerimetroCirculo(radio);
	}
	
	imprimirResultados(area, perimetro, diagonal, n);
	return 0;
}

