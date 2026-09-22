#include "funcoesDosExercicios.h"
#include <stdio.h>

int main(void){
	int a, b;
	scanf("%d %d", &a, &b);
	printf("a = %d \n b = %d \n", a, b);
	if (b != 0){
		int divisao = a/b;
		printf("divisão: %d \n", divisao);

		float divisaoComPonto = a/b;
		printf("divisao com decimais: %f \n", divisaoComPonto);

		float resto = a%b;
		printf("resto da duvisão a/b: %f \n", resto);
	 }else{
		printf("error");
		return 1;
	}


	return 0;
}
