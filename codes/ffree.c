#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

int main(){
    char *str;

    if((str = _fmalloc(128)) == NULL){
        printf("Erro de alocacao - abortando.");
        exit(1);
    }

    /* Libera memoria*/
    _ffree(str);

    return 0;
}
