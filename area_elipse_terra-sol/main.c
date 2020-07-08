#include <stdio.h>

#define distancia 149597870700 /*Distancia terra ao sol*/
#define vluz 299792458 /*Velocidade da luz no vacuo*/
#define PI 3.14

int main(int argc, char** argv){

    //perielio e afelio correspondem a menor distancia e maior distancia
	double perielio=147000000000,afelio=152100000000, area;
	area = perielio*afelio*PI;

    printf("\nA area aproximada da elipse da terra e de aprox. %.2lfkm2.\n",area);

	return 0;
}
