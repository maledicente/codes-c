#include <stdio.h>
#include <locale.h>
#define com 0.06
/*
*Valor padrao de comissao no setor imobiliario 6%
*Valor da comissao para o angariador do imovel 25%
*Valor da comissao para o vendedor do imovel 20%
*Valor da comissao correspondente a imobiliaria 55%
*Valor padrao para imoveis em cidades
*/

int main(void){
	setlocale(LC_ALL, "Portuguese");
	int valor_imo;
	float comissao;
	
	printf("|--------------------------------------------|\n");
	printf("|CALCULADORA DE COMISSAO DO SETOR IMOBILIARIO|\n");
	printf("|--------------------------------------------|\n\n");
	
	printf("Entre com o valor da venda do imovel: ");
	scanf("%d",&valor_imo);
	comissao=valor_imo*com;
	
	printf("\nO valor da comissão no imovel corresponde a: %.2f", comissao);
	printf("\nComissão referente a angariacao corresponde a: %.2f",comissao*0.25);
	printf("\nComissão referente a venda corresponde a: %.2f\n",comissao*0.2);
	
	return 0;
}
