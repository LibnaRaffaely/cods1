#include <stdio.h>
#include <string.h>

int main(){
    int A,i,j,tam,guarda,menorind;
    int numer[10000];
    scanf("%d",&A);
    while(A){

        for(i=0;i<A;i++){
            scanf("%d",&numer[i]);
            //printf("%d ,",numer[i]);
        }

        for(i=0;i<A-1;i++){
            menorind=i;
            for(j=i;j<A;j++){
                if(numer[menorind]>numer[j]){
                    menorind=j;
                }
            }
            if(menorind != i){
                guarda=numer[i];
                numer[i]=numer[menorind];
                numer[menorind]=guarda;
            }
        }

        for(i=0;i<A;i++){
            printf("%d ",numer[i]);
        }
        printf("\n");
        scanf("%d",&A);
    }
    

    return 0;
}
