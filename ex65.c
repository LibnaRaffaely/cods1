#include<stdio.h>

int main(){
    int i,j,N,soma,menorn,guarda,flag,v[9];
    scanf("%d",&N);
    while(N){
        for(i=0;i<9;i++){
            scanf("%d",&v[i]);
        }
        soma=flag=0;
        for(i=0;i<9;i++){soma+=v[i];}
        for(i=0;i<8;i++){
            for(j=i+1;j<9;j++){
                if((soma-v[i]-v[j])==100){      //aqui eu avalio se retirando os dois números vira 100
                    v[i]=0;
                    v[j]=0;
                    flag=1;
                    break;
                }
            }
            if(flag==1){break;}
        }
        for(i=0;i<8;i++){
            menorn=i;
            for(j=i+1 ; j<9 ; j++){
                if(v[menorn]>v[j]){menorn=j;}
            }
            guarda=v[menorn];
            v[menorn]=v[i];
            v[i]=guarda;
        }
        for(i=0;i<9;i++){
            if(v[i]!=0){printf("%d\n",v[i]);}
        }


        N--;
    }

    return 0;
}