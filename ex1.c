#include <stdio.h>

int main(){
    float idade, seg;
    scanf("%f", &idade);
    seg = idade*365.25*24*3600;
    printf("O CORACAO BATEU %.2f VEZES\n",seg);
    return 0;
}