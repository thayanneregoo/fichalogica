/*Questao 8.  ̃ Escreva um algoritmo que recebe o valor do salario fixo e o total de vendas efetuadas  ́
por um vendedor de uma loja durante o mes (em dinheiro). Sabendo que este vendedor ganha ˆ
15% de comissao sobre suas vendas efetuadas, informar o sal  ̃ ario fixo e sal  ́ ario no final do m  ́ es.*/

#include <stdio.h>

float calc_salario(float salario, float vendas){
    return salario+(vendas*.15);
}

int main(){
    float salario, vendas;
    printf("Salario: ");
    scanf("%f", &salario);
    printf("Vendas: ");
    scanf("%f", &vendas);
    printf("Salario Final: %.2f", calc_salario(salario, vendas));
    return 0;
}