#include <stdio.h> //Biblioteca de entrada e saida

int main(){
	
	float distancia, tempo, vm; //Variaveis
	
	printf("--------------------------");
	printf("\nCALCULADORA VELOCIDADE MEDIA");
	printf("\n--------------------------");
	printf("\nInsira a distancia(km):");
	scanf("%f",&distancia);
	printf("Entre com o tempo(hs):");
	scanf("%f",&tempo);
	
	vm=distancia/tempo;
	
	printf("A velocidade media e de: %.2f km/hs",vm);
	
	return 0;
}
