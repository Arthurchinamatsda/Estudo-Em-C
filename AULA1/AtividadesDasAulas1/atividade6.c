#include "funcoesDasAtividades.h"
#include <stdio.h>

int main(void){
	float nota1;
	float nota2;
	float nota3;
	printf("coloque a nota do primeiro trimestre aqui: \n");
	scanf("%f", &nota1);
	printf("coloque a nota do segundo trimestre aqui: \n");
	scanf("%f", &nota2);
	printf("coloque a nota do terceiro trimestre aqui: \n");
	scanf("%f", &nota3);
	float media = (nota1+nota2+nota3)/3;

	printf("media do ano: %f  \n", media);

	return 0;
}
