#include "funcoesDosExercicios.h"
#include <stdio.h>

int main(void){
	float km;
	scanf("%f", &km);
	if(km >= 0){
		float metros = km*100;
		printf("%f\n", metros);
	}else{printf("error"); return 0;}

	return 0;
}
