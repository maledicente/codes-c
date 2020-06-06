//calculadora de indice de massa corporal
#include <stdio.h> //biblioteca de entrada e saida do C
#include <stdlib.h> //biblioteca padrao para uso do clear (limpa a tela)
#include <math.h>  //Utilizei a Biblioteca math.h para utilizar o comando operador pow(n,n)
#include <locale.h> //biblioteca para idiomas e acentos

/**/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	/*Declaracao de variaveis*/
	float massa,altura,imc;
	char nome[20];
	
	printf("\n |---------------------------------------------|\n");
	printf(" |CALCULADORA DE INDICE DE MASSA CORPORAL - IMC|\n");
	printf(" |---------------------------------------------|\n");
	
	printf("\nQual seu nome: ");
	gets(nome);
	printf("\nEntre com o seu Peso (Kg): ");
	scanf("%f",&massa);
	printf("\nEntre com a sua Altura (Metros): ");
	scanf("%f",&altura);
	
	if(altura > 2.3){
		printf("Valor invalido para altura.\n");
		printf("\nEntre com a sua Altura (Metros): ");
		scanf("%f",&altura);
		/*exit(0);*/
	}
	
	imc = massa / pow(altura,2);
	
	printf("%s seu Indice de Massa Corporal é: %.2f\n",nome, imc);
	
	if(imc < 18.5){
		printf("Peso abaixo do normal.\n");
	}else if(imc > 18.5 && imc < 24.9){
		printf("Peso ideal.\n");
	}else if(imc > 25 && imc < 29.9){
		printf("Acima do peso.\n");
	}else if(imc > 30 && imc < 34.9){
		printf("Obesidade grau I.\n");
	}else if(imc > 35 && imc < 39.9){
		printf("Obesidade grau II.\n");
	}else{
		printf("Obesidade grau III ou mórbida.\n");
	}
	system("pause");
	
	return 0;
}
