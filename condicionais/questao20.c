int main(){
    int a,b,c;
    int ordem[3];
    printf("INFORME PRIMEIRO NUMERO: ");
    scanf("%d",&a);
    printf("INFORME SEGUNDO NUMERO: ");
    scanf("%d",&b);    
    printf("INFORME TERCEIRO NUMERO: ");
    scanf("%d",&c);
    
    if (a>b && a>c){
        ordem[0]=a  ;
        if (b>c){
            ordem[1]=b;
            ordem[2]=c;
        }else{
            ordem[1]=c;
            ordem[2]=b;
        }
        
    }else if (b>c && b>a){
        ordem[0]=b  ;
        if (c>a){
            ordem[1]=c;
            ordem[2]=a;
        }else{
            ordem[1]=a;
            ordem[2]=c;
        }
        

    }else{
        ordem[0]=c  ;
        if (b>a){
            ordem[1]=b;
            ordem[2]=a;
        }else{
            ordem[1]=a;
            ordem[2]=b;
        }
    }
    printf("%d, %d, %d", ordem[0], ordem[1], ordem[2]);

    return 0;
    
}