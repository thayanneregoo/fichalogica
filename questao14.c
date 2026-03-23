#include <stdio.h>

int main()
{
    
    int a;
    printf("Informe numero inteiro : \n");
    scanf("%f", &a);
    if (a <0) {
        printf("O valor é negativo \n");
  
    } else if (a > 0) {
        printf("O valor é positivo \n");
    } else {
        printf("O valor é zero \n");
    }


    return 0;
}
