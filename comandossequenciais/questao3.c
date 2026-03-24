
// Questao 3.  ̃ Fazer um algoritmo que obtenha dois numeros inteiros,  ́ x e y, mostre o quociente e
// o resto da divisao inteira entre eles.  ̃

#include <stdio.h>
#include <locale.h>

int main (){

    setlocale(LC_ALL, "pt_BR");
    
    int x,y,q,r;
    printf("Digite o primeiro numero inteiro \n");
    scanf("%d",&x);
    printf("Digite o segundo numero inteiro \n");
    scanf("%d",&y); 
    q=x/y;
    r=x%y;
    printf("O resultado da divisão entre %d e %d é %d e resta %d", x, y, q, r);
}
