#include <stdio.h>
#include <math.h>
int main(){
    int n,nf,n1,n2,n3,controle;
    scanf ("%d", &n);
    nf = n;
    n1= n/100;
    n = n%100;
    n2 = n/10;
    n3 = n%10;
    controle = n1+(n2*3)+(n3*5);
    controle = controle%7;
   
    
    printf("O NOVO NUMERO E = %d%d\n", nf,controle);
   
    return 0;
}