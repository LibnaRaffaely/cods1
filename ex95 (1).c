#include<stdio.h>
int main(){
    int n,i,n1,n2,cont=1,maior=1;
    scanf("%d",&n);
    scanf("%d",&n1);
    for(i=1;i<=n;i++){
        scanf("%d",&n2);    
        if(n1==n2){
            cont++;
        }else cont=1;
        if(maior<cont){
            maior=cont;
        }
        n1=n2;
    }
    printf("O comprimento do segmento de numeros iguais e: %d\n",maior);

    return 0;
}