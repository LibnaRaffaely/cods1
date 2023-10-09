
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,i,b1,b2,d[11];
    scanf("%d",&N);
    while(N){
        b1=b2=0;
        for(i=0;i<11;i++){
            scanf("%d",&d[i]);
            
        }
        for(i=0;i<9;i++){
            b1=b1+(d[i]*(i+1));
            b2=b2+(d[i]*(9-i));
            //printf("%d  %d\n",b1,b2);
        }
        //printf("b1: %d/%d b2:%d/%d\n",b1,b1%11,b2,b2%11);
        if((d[9]==b1%11)&&(d[10]==b2%11)){
            printf("CPF valido\n");
        }
        else{
            printf("CPF invalido\n");
        }
        N--;
    }
    return 0;
}
