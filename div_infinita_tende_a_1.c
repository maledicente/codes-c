#include <stdio.h>

int main(){
		double n=0;
		int i=0;
		
		for(i=0;i<=10000;++i){
			n=i+1;
		printf("Divisão de %d por %f: %f\n",i,n,i/n);
		}
		printf("\nCom o tempo a divisao de um numero x tende a 1.");
	
	return 0;
}
