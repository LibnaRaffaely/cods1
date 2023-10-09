
#include <stdio.h>

int main()
{
    int valores[10000],i,n,qntd[10000],maior,k;
    scanf("%d",&n);
    while(n!=0){
        maior=-9999;
        for(i=0;i<10000;i++){            //zerando o vetor
            valores[i]=0;
        }
        for(i=0;i<n;i++){
            scanf("%d",&k);
            if(k>maior){
                maior=k;
            }
            valores[k]++;
        }
       for(i=0;i<maior+1;i++){
            printf("(%d) %d\n",i,valores[i]);
            valores[i+1]=valores[i]+valores[i+1];
        }
        
        scanf("%d",&n);
    }
    

    return 0;
}
