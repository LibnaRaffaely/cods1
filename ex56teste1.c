
#include <stdio.h>
#include <stdlib.h>

int main()
{
   int N,K,i,A[1001];
   int presentes=0,npresentes=0;
   scanf("%d %d",&N,&K);
   if((N>=0)&&(N<=1000)&&(K>=0)&&(K<=1000)){
        //lendo os horários de chegada
        for(i=1;i<N+1;i++){
            scanf("%d",&A[i]);
        }
        A[N+1]=0;
        //análise da presença
        for(i=1;i<N+1;i++){
            if(A[i]<=0){
                presentes++;
            }
            else{
                npresentes++;
            }
        }
        //printf("\npresença: %d  Npresença:%d\n",presentes,npresentes);
        if(K>presentes){
            printf("SIM\n");
        }
        else{
            printf("NAO\n");
            for(i=N;i>0;i--){
                if(A[i]<=0){
                    printf("%d\n",i);
                }
            }
        }
   }

    return 0;
}
