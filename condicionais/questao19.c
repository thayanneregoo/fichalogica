#include <stdio.h>

int main(){
    int a,b,c;
    printf("INFORME PRIMEIRO NUMERO: ");
    scanf("%d",&a);
    printf("INFORME SEGUNDO NUMERO: ");
    scanf("%d",&b);    
    printf("INFORME TERCEIRO NUMERO: ");
    scanf("%d",&c);
    if (a>b && a>c){
        printf("O maior número é %d",a);
    }else if (b>c && b>a){
        printf("O maior número é %d",b);
    }else{
        printf("O maior número é %d",c);
    }

    return 0;
    
}