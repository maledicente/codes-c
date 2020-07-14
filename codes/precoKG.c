#include <stdio.h>

int main(){

    float valor_prod, peso, valor_quilo;

    printf("Entre com valor do produto (0.00) R$: ");
    scanf("%f",&valor_prod);
    printf("Entre com o peso do produto (gramas) R$ : ");
    scanf("%f",&peso);

    valor_quilo = valor_prod / peso;

    printf("O valor por grama do produto e: %.3f",valor_quilo);


    return 0;
}
