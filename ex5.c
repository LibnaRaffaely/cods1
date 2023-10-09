#include<stdio.h>
int main(){
    int A, B,C;
    float delta;
    scanf("%d \n%d \n%d", &A, &B, &C);
    delta = (B*B)- (4*A*C);
    printf("O VALOR DE DELTA E = %.2f", delta);
    
    
    
    return 0;
}