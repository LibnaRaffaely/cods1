
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,i,j,menorvai,guarda,n[100000],par[100000],impar[100000];
    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%d",&n[i]);
        if((n[i]%2)==0){
            par[i]=n[i];
        }
        else{
            impar[i]=n[i];
        }
    }
   /* //printf dos vetores par e impar
    for(i=0;i<N;i++){
        printf(" %d",par[i]);
    }
    printf("\n");
    for(i=0;i<N;i++){
        printf(" %d",impar[i]);
    }
    */
    //ordenando os vetores
    
    for(i=0;i<N-1;i++){
        menorvai=i;
        for(j=i;j<N;j++){
            if(par[j]<par[menorvai]){
                menorvai=j;    
            }
        }
        guarda=par[menorvai];
        par[menorvai]=par[i];
        par[i]=guarda;
    }
    /*for(i=0;i<N;i++){
        printf(" %d",par[i]);
    }
    printf("\n");*/
    for(i=0;i<N-1;i++){
        menorvai=i;
        for(j=i;j<N;j++){
            if(impar[j]<impar[menorvai]){
                menorvai=j;    
            }
        }
        guarda=impar[menorvai];
        impar[menorvai]=impar[i];
        impar[i]=guarda;
    }
    /*for(i=0;i<N;i++){
        printf(" %d",impar[i]);
    }*/
    //imprimir em ordem
    for(i=0;i<N;i++){
        if(par[i]!=0)
            printf("%d\n",par[i]);
    }
    for(i=N-1;i>=0;i--){
        if(impar[i]!=0)
            printf("%d\n",impar[i]);
    }
    
    
    return 0;
}
