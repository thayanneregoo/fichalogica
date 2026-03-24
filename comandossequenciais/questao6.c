// Questao 6.  ̃ Fac ̧a um algoritmo que recebe o valor do raio de um c ́ırculo e apresenta o valor da area desse c  ́  ́ırculo.
#include <stdio.h>
#include<math.h>
#define PI 3.14159
float calc_area_circulo(float raio){
    return PI*pow(raio,2);
}
int main(){
    float raio;
    printf("Raio: ");
    scanf("%f", &raio);
    printf("Area: %.2f", calc_area_circulo(raio));
    return 0;
}