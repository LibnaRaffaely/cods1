#include<stdio.h>
int main(){
    int x,i,n,y;
    scanf("%d %d",&x,&y);
    if((x%2)==0){
        for(i==0;i<y;i++){
            n=x+(i*2);
            printf("%d ",n);
        }
    }
    else{
        printf("O PRIMEIRO NUMERO NAO E PAR\n");
    }

    return 0;
}