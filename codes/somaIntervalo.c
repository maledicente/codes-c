#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(void){
    setlocale (LC_ALL, "Portuguese");
    int sum=0, inicio, fim, intervalo, i, j;
    int *v;

    printf("Insina o primeiro numero do intervalo: ");
    scanf("%d", &inicio);
    printf("Insina o ultimo numero do intervalo: ");
    scanf("%d", &fim);
    intervalo=fim-inicio;
    v = (int *)malloc(intervalo * sizeof(int));

    for(j = 0; j <= intervalo; j++){
            v[j]=(inicio+j);
        }
    for(i = 0; i <= intervalo; i++){
        sum+=v[i];
        //printf("%d\n",sum);
    }

    printf("\nA soma de todos os numeros no intervalor e: %d", sum);
    free(v); // delete array pointed

    return 0;
}
