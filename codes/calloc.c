#include <stdio.h>
#include <stdlib.h>

float *get_mem(void){
    float *p;

    p = calloc(100,sizeof(float));
    if(!p){
        printf("Erro de alocacao - abortando.");
        exit(1);
    }
    return p;
}
