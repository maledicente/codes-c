/*====== FATORIAL =======*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int factorial(int num);

int main(){

    int num;
    printf("Entre com o numero: ");
    scanf("%d",&num);
    system("cls");

    printf("\nO fatorial de %d e igual a: %d\n", num, factorial(num));


return 0;
}

int factorial(int num){

    if(num == 1){
        return(1);
    }
    else{
        return (num * factorial(num - 1));
    }
}
