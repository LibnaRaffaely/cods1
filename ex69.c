#include <stdio.h>
#include <string.h>

int main(){
    long int N;
    char P[100000];
    int qntd[58];
    int soma,i,j;
    

    scanf("%ld",&N);

    while(N){        
        scanf("%s",P);
        for(i=0,j=30;i<29,j<58;i++,j++){
            qntd[i]=0; qntd[j]=0;
        }
        for(i=0;i<strlen(P);i++){
             qntd[P[i]]++;
        }
        soma=(qntd[49]*2)+(qntd[50]*5)+(qntd[51]*5)+(qntd[52]*4)+(qntd[53]*5)+(qntd[54]*6)+(qntd[55]*3)+(qntd[56]*7)+(qntd[57]*6)+(qntd[48]*6);
        printf("%d leds\n",soma);
        N--;
    }

    return 0;
}