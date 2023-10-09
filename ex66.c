#include <stdio.h>
#include <string.h>

int main(){
    int i,j,d,e,Ta,Tb,num,tamb,menor,maior,flag;
    int Ca[100]={0};
    int Cb[100]={0};
    int U[200];
    int I[100];
    memset(U, -1, sizeof(U));
    memset(U, -1, sizeof(U));

    scanf("%d",&Ta);
    while((Ta<1)||(Ta>100)){
        scanf("%d",&Ta);
    }
    scanf("%d",&Tb);
    while((Tb<1)||(Tb>100)){
        scanf("%d",&Tb);
    }
    tamb=Tb+Ta;
    for(i=0,j=0,d=0;;i++,j++,d++){              //ler os elementos de A[] e ver quais aparecem pois n pode repetir
        if(i<Ta){
            scanf("%d",&num);
            while(Ca[num]==1){
                scanf("%d",&num);
                if(Ca[num]==0){
                    Ca[num]=1; break;}
            }
            Ca[num]=1;
            U[d]=num;
        }
        if((j>=Ta)&&(j<tamb)){
            scanf("%d",&num);
            while(Cb[num]==1){
                scanf("%d",&num);
                if(Cb[num]==0){
                    Cb[num]=1; break;}
            }
            Cb[num]=1;
            U[d]=num;
        }
        
        if(d==tamb){break;}
    }
    e=0;
    for(i=0;i<d-1;i++){                  //estou tornando -1 aqueles que já apareceram na união
        if(U[i]!=-1){
            j=i+1;
            while(j<=d){
                if(U[i]==U[j]){
                I[i]=U[j]; U[j]=-1;e++;break;}       //transferi os iguais para I[] e tornei o 2 a aparecer -1 na únião
                j++;
            }
            
        }
    }
    printf("(");
    for(i=0,j=1;i<d;i++,j++){
        if(U[i]!=-1){
            printf("%d",U[i]);
            if(j==d){
                break;
            }
            printf(",");
        }
    }
    printf(")\n");


    printf("(");
    for(i=0,j=1;i<e;i++,j++){
        j=i+1;
        if(I[i]!=-1){
            printf("%d",I[i]);
            if(j==e){break;}
            printf(",");
        }
        
    }
    printf(")\n");
    return 0;
}