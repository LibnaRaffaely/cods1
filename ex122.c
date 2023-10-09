#include<stdio.h>
#include<string.h>
/*void imprime(int m, int n, int matriz[][n]){
    int a,b,flag;
    for(a=0;a<m;a++){
        printf("linha %d: ",a+1);
        for(b=0;b<n;b++){
            printf("%d",matriz[a][b]);
            flag=b;
            flag++;
            if(flag<n){
                printf(",");}
        }
        printf("\n");
    }

}*/
int main(){
    int M,N,i,j,coluna,flag;
    int matr[10][10];

    scanf("%d",&M);
    while((M==0)||(M>10)){scanf("%d",&M);}
    scanf("%d",&N);
    while((N==0)||(N>10)){scanf("%d",&N);}
    

    for(i=0;i<M;i++){
        for(j=0;j<N;j++){
            scanf("%d",&matr[i][j]);
        }
    }
    //imprime(M,N,&matr[0][0]);
    for(i=0;i<M;i++){
        printf("linha %d: ",i+1);
        for(j=0;j<N;j++){
            printf("%d",matr[i][j]);
            flag=j;
            flag++;
            if(flag<N){
                printf(",");}
        }
        printf("\n");
    }
    return 0;
}