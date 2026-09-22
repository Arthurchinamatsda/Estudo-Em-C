#include "funcoesDosExercicios.h"
#include <stdio.h>

int main(void){
	float Celsius;
	scanf("%f", &Celsius);
	float Fahrenheit = Celsius*1.8 + 32;
	printf("%f \n", Fahrenheit);

	return 0;
}
