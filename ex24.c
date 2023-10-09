#include<stdio.h>
int main(){
    int horas,conj_3,hunit;
    float valor;
    scanf("%d",&horas);
    conj_3 =  horas/3;
    hunit = horas - conj_3*3;
    valor = (10*conj_3)+(5*hunit);
    printf("O VALOR A PAGAR E = %.2f\n", valor);
   
    return 0;
}