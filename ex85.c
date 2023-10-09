#include <stdio.h>
int main(){
    int n,i,quad;
    scanf("%d",&n);
    if(n>5 && n<2000){
        for(i=2;i<=n;i+=2){
            quad=0;
            quad = i*i;
            printf("%d^2 = %d\n",i,quad);
        }
        
    }

    return 0;

}