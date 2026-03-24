/*Questao 4.  ̃ Fazer um algoritmo que calcule e mostre:
a) A soma entre dois numeros  ́
b) O produto entre eles e
c) O quociente entre eles.*/

#include<stdio.h>
int main(){
    int a,b,p,q;
    printf("Digite o primeiro numero inteiro \n");
    scanf("%d",&a);
    printf("Digite o segundo numero inteiro \n");
    scanf("%d",&b); 
    p=a+b;
    q=a/b;
    printf(" O produto entre %d e %d = %d, e o quociente = %d", a,b,p,q);
}