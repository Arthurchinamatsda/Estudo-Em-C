#include "funcoesDosExercicios.h"
#include <stdio.h>

int main(void){
	int minutosRecebido;
	int minutos;
	int horasMinutos;
	int horas;
	scanf("%d", &minutosRecebido);
	if(minutosRecebido >= 0 ){
		horas = minutosRecebido/60;
		minutos = minutosRecebido%60;
		horasMinutos = horas*100 + minutos;
		printf("horas e minutos: %d\n", horasMinutos);
	}else{printf("error \n"); return 0;}

	return 0;
}
