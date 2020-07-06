#include <stdio.h>
#include <stdlib.h>

int main(){

	float quali, nvenda, negativas;


	printf("---------------------------------------");
	printf("\nPROGRAMA PARA SIMULAR EXITO EM COMPRA");
	printf("\nEntre com o numero de vendas: ");
	scanf("%f",&nvenda);
	printf("\nEntre com o numero de negativas: ");
	scanf("%f",&negativas);

	quali=(negativas+1)/nvenda;

	printf("\nA probabilidade de uma boa compra pode variar %.2f% em cima da qualificacao atual", quali);

	return 0;
}
