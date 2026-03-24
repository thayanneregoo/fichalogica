///Questao 5.  ̃ Fazer um algoritmo que converta cent ́ımetros para polegadas (obs.: 1pol = 2.54cm).

#include <stdio.h>
float conv_polegadas(float centimentros){
    return centimentros/2.54;
}
int main (){
    float centimetros;
    printf("Convertendo para polegadas \n");
    printf("Centimetros: ");
    scanf("%f",&centimetros);
    printf("Polegadas: %.2f ", conv_polegadas(centimetros));
}