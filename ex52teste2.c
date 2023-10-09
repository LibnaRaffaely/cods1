
#include <stdio.h>

int main(){
   int n,A[1000],B[1000],i,j,i_menorvalora,guarda;
   scanf("%d",&n);
   for(i=0;i<n;i++){
       scanf("%d",&A[i]);
   }
   for(i=0;i<(n-1);i++){
       i_menorvalora=i;
       for(j=i+1;j<n;j++){
           if(A[j]<A[i_menorvalora]){
               i_menorvalora=j;
           }
       }
       guarda = A[i_menorvalora];
       A[i_menorvalora]=A[i];
       A[i]=guarda;
   }
   
   for(i=0;i<n;i++){
       printf("%d\n",A[i]);
   }

    return 0;
}
