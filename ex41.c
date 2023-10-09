
#include <stdio.h>

int main()
{
    int n,vetor[n],N;
    scanf ("%d",&n);
    N=0;
    while(N!=n){
        scanf("%d",&vetor[N]);
        N++;
    }
    /*N=0;
    while(N!=n){
        printf("%d",vetor[N]);
        N++;
    }
    */
   printf("%d", vetor[2]);
    return 0;
}
