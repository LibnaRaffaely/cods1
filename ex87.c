#include <stdio.h>
int main(){
    int n1,r,i,qntd,soma,termo;
    scanf("%d %d %d",&n1,&r,&qntd);
    soma=n1;

    for(i=1;i<qntd;i++){
        termo=n1+(i*r);
        soma+=termo;
    }
    printf("%d\n",soma);
    return 0;

}