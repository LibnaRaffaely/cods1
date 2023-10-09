
#include <stdio.h>

int main()
{
    unsigned long int cod,MV=0,ML=0;
    float pc,pv,lucro;    //lucro é em %
    int qntd;
    int lm10,l1020,lm20;
        lm10=l1020=lm20=0;
    float TV,TC,TL;
        TC=TV=TL=0;
    scanf("%lu %f %f %d",&cod,&pc,&pv,&qntd);
    while(cod!=0){
        lucro = ((pv-pc)/pc)*100;
        /*analizando os lucros*/
        if(lucro<10.00){
            lm10+=1;
        }
        else{
            if(lucro>=10.00 && lucro<=20.00){
                l1020+=1;
            }
            else{
                lm20+=1;
            }
        }
        if(qntd>MV){
            MV = cod;
        }
        if(lucro>ML){
            ML=lucro;
        }
        TC = TC+(pc*qntd); 
        TV = TV+(pv*qntd);

        scanf("%lu %f %f %d",&cod,&pc,&pv,&qntd);        
    }
    TL=((TV-TC)/TC)*100;  //lucro total
    
    printf("Quantidade de mercadorias que geraram lucro menor que 10%%: %d\n",lm10);
    printf("Quantidade de mercadorias que geraram lucro maior ou igual a 10%% e menor ou igual a 20%%: %d\n",l1020);
    printf("Quantidade de mercadorias que geraram lucro maior do que 20%%: %d\n",lm20);
    printf("Codigo da mercadoria que gerou maior lucro: %lu\n",ML);
    printf("Codigo da mercadoria mais vendida: %lu\n",MV);
    printf("Valor total de compras: %.2f, valor total de vendas: %.2f e percentual de lucro total: %.2f%%\n",TC,TV,TL);
    return 0;
}
