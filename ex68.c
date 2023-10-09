
#include <stdio.h>
#include <string.h>

int main() {
   char A[51],B[51];
   int N,i,maior;
   scanf("%d",&N);
   
   while(N){
        memset(A,0,sizeof(A));
        memset(B,0,sizeof(B));

        scanf("%s",A);
        scanf("%s",B);
        //tam=sizeof(A);
        //printf("tam a:%zu\n",strlen(A));
        //printf("tam b:%zu\n", strlen(B));
        if(strlen(A)>strlen(B)){maior=strlen(A);}
        else{maior=strlen(B);}
        
        for(i=0;i<maior;i++){
            if((A[i]!=0)){
                printf("%c",A[i]);
            }
            if((B[i]!=0)){
                printf("%c",B[i]);
            }
        }
        N--;
   }

    return 0;
}
