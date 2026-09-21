#include "funcoesDasAtividades.h"
#include <stdio.h>

int guardado = 0;
int pronto = 0;

void guardar(int x){
	guardado = 50;

}

void marcarPronto(void){
	guardado = 1;

}

int main(void){
	marcarPronto();
	guardar(50);

	return 0;
}
