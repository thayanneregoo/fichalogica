/*Questao 10.  ̃ Fac ̧a um algoritmo que mostra a quantidade de cedulas de um caixa eletr  ́ onico de ˆ
um banco. O algoritmo recebe como entrada o valor inteiro a ser sacado pelo cliente, em seguida
apresente a quantidade de cada cedula que o cliente dever  ́ a receber, de forma que a quantidade  ́
de cedulas seja o menor poss  ́  ́ıvel.*/

#include <stdio.h>

int main(){
    int cedulas[6]={200,100,50,20,10,5};
    int saque;

    printf("Digite valor que deseja sacar: R$");
    scanf("%d",&saque);

    while (saque%5!= 0|| saque<=0)
    {
        printf("\n Digite valor multiplo de 5 R$");
        scanf("%d",&saque);
    }
    
    int resto = saque;

    printf("\n Você recebera as seguintes notas: \n");
    for (int i=0;i<6;i++){

        int quantidade = resto / cedulas[i];
        if (quantidade>0)
        {
            printf(" %d - %d \n", quantidade, cedulas[i]);
        }
        
        resto=resto - (quantidade*cedulas[i]);

        if (resto==0)
        {
            break;
        }    
    }
    
    return 0;
}

