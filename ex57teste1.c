
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,i,j,maior=0,unicos=0,V[5000],L[5000];
    scanf("%d",&N);
    //zerei os valores de V[]
    for(i=0;i<N;i++){
        V[i]=0;
        L[i]=0;
    }
    
    //scanf e maior valor
    for(i=0;i<N;i++){
        scanf("%d",&V[i]);
        if(V[i]>maior){
            maior=V[i];
        }
        //L[V[i]]++;
    }
    //printf("\nmaior: %d\n",maior);
    
    //contagem dos valores
    for(i=0;i<maior+1;i++){
        L[V[i]]++;
    }
    
    //analise da qntd dos valores
    for(i=0;i<maior+1;i++){
        //printf("%d ",L[i]);
        if(L[i]==1){
            unicos++;
        }
    }
    
    printf("%d\n",unicos);
        
    
    
    return 0;
}
