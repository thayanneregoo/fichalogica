#include <stdio.h>

int main(){
    int a,b;
    printf("DIGITE PRIMEIRO NÚMERO: ");
    scanf("%d",&a);
    printf("DIGITE SEGUNDO NÚMERO: ");
    scanf("%d",&b);
    if (a==b){
        printf("São iguais");
    }else{
        if (a>b){

            printf(" %d > %d",a,b);
        }else{
            printf(" %d > %d",b,a);
        }
        printf("\n Portanto são diferentes");
    }
    return 0;
}