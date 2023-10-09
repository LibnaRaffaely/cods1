#include <stdio.h>

int main(){
    int N,V[10000],vi,i;
    int mv,M;

    scanf("%d",&N);
    while(N!=0){
        mv= -999;
        for(i=0;i<N;i++){
            scanf("%d",&V[i]);     //scanf nos elementos do vetor de qntd N
            if(V[i]>mv){
                mv=V[i];
                M=i;
            }
            
        }
        printf("%d %d",M,mv);
        scanf("%d",&N);
        
    }
    

    return 0;
}