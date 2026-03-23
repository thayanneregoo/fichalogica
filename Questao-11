#include <stdio.h>
#include <math.h>

int calc_troco(int list[], int tamanho, int troco, char *tipo, char *unidade_monetaria){
        for (int i=0;i<tamanho;i++){
            int quantidade = troco / list[i];

            if (quantidade>0){
                printf(" %d %s%s de %d %s \n", 
                quantidade, 
                tipo,quantidade > 1 ? "s" : "",
                list[i], 
                unidade_monetaria);
            }
            
            troco=troco - (quantidade*list[i]);

        }
        return troco;
    }

int main(){
        int cedulas[8]={200,100,50,20,10,5,2,1};
        int moedas[4]={50,25,10,5};
        float compra, pagamento,  troco;
        int troco_centavos, reais, centavos;
        
        printf("Seja Bem Vndo ao Supermercado da Familia \n");
        printf("Valor da Compra:");
        scanf("%f", &compra);
        
        printf("Valor do Pagamento:");
        scanf("%f", &pagamento);
        
        troco=pagamento-compra;
        
        while(troco<0){
            printf("Pagamento insuficiente, altere valor do Pagamento \n");
            printf("Valor do Pagamento:");
            scanf("%f", &pagamento);
            troco=pagamento-compra;
        }
            
        printf("Seu troco é de R$%.2f \n",troco);
        
        troco_centavos = (int)round((troco) * 100);
        reais = troco_centavos / 100;
        centavos = troco_centavos % 100;
        
        if (reais>0)
            calc_troco(
                cedulas,
                8,
                reais,
                "cédula", 
                "reais");
        
        
        if (centavos>0){
            calc_troco(
                moedas,
                4,
                centavos,
                "moeda", 
                "centavos");
        }
        
        return 0;
    }
