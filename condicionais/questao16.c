#include <stdio.h>

int main(){
    int a;
    printf("Digite um numero inteiro: ");
    scanf("%d", &a);
    if (a < 0 ){
        printf("NUMERO: %d", -a);
    }else{
        printf("NUMERO: %d", a);
    }
    return 0;
}

