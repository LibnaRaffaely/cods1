#include <stdio.h>
#include <string.h>

int main (){
    int i,j,N;
    scanf("%d",&N);
    long long int M[100][100];
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            scanf("%lld",&M[i][j]);
        }
    }
    j=N-1;
    for(i=0;i<N;i++){
        printf("%lld\n",M[i][j]);
        j--;
    }
    return 0;
}