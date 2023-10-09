
#include <stdio.h>

int main(){
    float A[1000000],mediana;
    int n,i,j,i_menora,guarda;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%f",&A[i]);
    }
    for(i=0;i<n-1;i++){
        i_menora=i;
        for(j=i+1;j<n;j++){
            if(A[j]<A[i_menora]){
                i_menora=j;
            }
        }
        guarda=A[i_menora];
        A[i_menora]=A[i];
        A[i]=guarda;
    }
    /*for(i=0;i<n;i++){
        printf("%.2f ",A[i]);
    }*/
    
    printf("\n");
    if(n%2==0){
        n=n/2;
        mediana=(A[n-1]+A[n])/2;
    }else{
        n=(n-1)/2;
        mediana=A[n];
    }
    printf("%.2f",mediana);
    return 0;
}
