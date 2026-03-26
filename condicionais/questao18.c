#include <stdio.h>

int main(){
    int quant;
    float total, preco;
    printf("QUANTIDADE: ");
    scanf("%d",&quant);
    
    if (quant<12){
        preco=.3;
    }else{
        preco=.25;
    }
    total=preco*quant;
    printf("TOTAL: %.2f",total);
    return 0;
}