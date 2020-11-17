 #include <stdio.h>
 #include <math.h>
 
 int main(){
	 
	 int numero;
	 float resultado;
	 
	 printf("Entre com o numero: ");
	 scanf("%d",&numero);
	 
	 resultado=log2(numero);
	 
	 printf("O Logaritmo natural de %d, é igual a: %.3f\n", numero, resultado);
	 

	return 0;
}
