#include <stdio.h>

#define distancia 149597870700 /*Distancia terra ao sol*/
#define vluz 299792458 /*Velocidade da luz no vacuo*/

int main(int argc, char** argv){

	int x, tempo, horas, horas_seg, minutos, segundos;
	x =  distancia / vluz;//numero de segundos

    horas_seg=3600;//horas em segundos
    tempo=x; //em seguundos
    horas = (tempo/horas_seg); //resultado da hora
    minutos = (tempo -(horas_seg*horas))/60;
    segundos = (tempo -(horas_seg*horas)-(minutos*60));

	printf("\nO tempo para luz do sol chegar a terra e aproximadamente: %dh : %dm :%ds \n",horas,minutos,segundos);

	return 0;
}
