//Link al repositorio: https://github.com/VangeFranco/Informatica

#include <stdio.h>
#define TAM 2
int main(int argc, char *argv[]) {
	int codigo[TAM]={0};
	float precio[TAM]={0};
	int max=0, min=0;
	
	printf("Ingrese %d productos, se solicitará el codigo y precio. \n", TAM);
	for(int i=0;i<TAM;i++){
		printf("\nIngrese el codigo de barras (1-999999999): ");
		scanf("%d", &codigo[i]);
		while(codigo[i]<1||codigo[i]>999999999){
			printf("Error: El codigo de barras debe estar entre 1 y 999999999.\n");
			printf("\nIngrese el codigo de barras (1-999999999): ");
			scanf("%d", &codigo[i]);
		}
		printf("\nIngrese el precio: ");
		scanf("%f", &precio[i]);
		while(precio[i]<0){
			printf("Error: El precio debe ser positivo.\n");
			printf("\nIngrese el precio: ");
			scanf("%f", &precio[i]);
		}
	}
	
	printf("\n%-10s %-10s\n", "Codigo", "Precio");
	for(int i=0;i<TAM;i++){
		printf("%-10d %-10.2f\n", codigo[i], precio[i]);
	}
	
	for(int i=1;i<TAM;i++){
		if(precio[max]<precio[i]){
			max=i;
		}
		if(precio[min]>precio[i]){
			min=i;
		}
	}
	printf("\nMas caro: [%d] %.2f", codigo[max], precio[max]);
	printf("\nMas barato: [%d] %.2f", codigo[min], precio[min]);
	
	return 0;
}

