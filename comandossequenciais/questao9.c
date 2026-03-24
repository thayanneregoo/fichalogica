// Questao 9.  ̃ Ler dois valores para as variaveis  ́ A e B, e efetuar as trocas dos valores de forma
// que a variavel  ́ A passe a possuir o valor da variavel  ́ B e a variavel  ́ B passe a possuir o valor da
// variavel  ́ A. Apresentar os valores trocados.

#include <stdio.h>

int main(){
    int a,b,c;
    printf("A: ");
    scanf("%d", &a);
    printf("B: ");
    scanf("%d", &b);
    c=a;
    a=b;
    b=c;
    printf(" A: %d \n B: %d", a, b);
    return 0;
}