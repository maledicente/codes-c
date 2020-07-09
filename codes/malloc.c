#include <stdio.h>
#include <malloc.h>

int main(){

    char *str;

    if(!(str = _alloca(80))){
        printf("Erro de alocacao - abortando.");
        exit(1);
    }
    return 0;
}
