#include<stdio.h>
int main(){
    int far, pol;
    float cel, mil;
    
    scanf("%d \n%d", &far, &pol);
    cel = (float)(5*(far-32))/9;
    mil = (float)pol*25.4;
    
    printf("O VALOR EM CELSIUS = %.2f \nA QUANTIDADE DE CHUVA E = %.2f", cel,mil);
    
    
    return 0;
}