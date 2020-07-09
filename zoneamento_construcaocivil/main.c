#include <stdio.h>
/*  I - Zona Residencial 1 - ZR1;
	II - Zona Residencial 2 - ZR2;
	III - Zona Residencial 3 - ZR3;
	IV - Zona Residencial 3 Transição - ZR3-T;
	V - Zona Residencial 4 - ZR-4;
	VI - Zona Residencial de Ocupação Controlada - ZROC;
	VII - Zona Residencial de Ocupação Integrada - ZROI.
	https://leismunicipais.com.br/plano-de-zoneamento-uso-e-ocupacao-do-solo-curitiba-pr
*/

int main(){
	
	float tam, test, zr1, zr2, zr3, zr4;
	
	printf("|-------------------------------------|");
	printf("\n|Taxa de ocupacao do solo e zoneamento|");
	printf("\n|-------------------------------------|");
	printf("\nQual tamanho do seu terreno(m^2)?");
	scanf("%f",&tam);
	printf("\nQuantos metros ele possui de testada(frente)?");
	scanf("%f",&test);
	
	if(test < 6) printf("Valor inferior ao permitido de testada.");
	if(test >= 6 || test >= 17.9) printf("Possivel construir mais de duas unidades residenciais.");
	
	return 0;
}





















