#include<stdio.h>
int main(){
    int conta;
    float cons, valor;
    char tipo;
    scanf ("%d %f %c", &conta, &cons, &tipo);
    
    if (tipo=='r'|| tipo=='R'){
        valor= 5+0.05*cons;
        printf("CONTA = %d\n VALOR DA CONTA = %.2f\n", conta,valor);
    } else {
        if (tipo =='c'|| tipo=='C'){
            if (cons<=80){
                valor = 500;
                printf("CONTA = %d\n VALOR DA CONTA = %.2f\n", conta,valor);
            }else{
             valor= 500+((cons-80)*0.25);
             printf("CONTA = %d\n VALOR DA CONTA = %.2f\n", conta,valor);
            }
        }else {
            if (tipo=='i'||tipo=='I'){
                if(cons<=100){
                    valor = 800;
                printf("CONTA = %d\n VALOR DA CONTA = %.2f\n", conta,valor);
                }else{
                    valor= 800+((cons-100)*0.04);
                    printf("CONTA = %d\n VALOR DA CONTA = %.2f\n", conta,valor);    
                }
            }
        }
    }
    
    
    return 0; 
}