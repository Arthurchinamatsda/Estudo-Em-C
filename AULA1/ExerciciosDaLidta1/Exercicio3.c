#include "funcoesDosExercicios.h"
#include <stdio.h>

int main(void){
        float altura, largura;
        scanf("%f %f", &altura, &largura);
        if(altura >= 0 && largura >= 0){
                float area = (altura*largura)/2;
                printf("a area do retangulo é: %f \n", area);
        }else{ printf("error \n"); return 0;}
        return 0;
}
