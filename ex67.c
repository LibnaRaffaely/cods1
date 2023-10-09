#include <stdio.h>
#include <string.h>

int main(){
    long int q1,q2,tamuni,i,j,inddomen1,guarda1;
    scanf("%ld",&q1);
    while(q1<0 && q1>500000){scanf("%ld",&q1);}
    scanf("%ld",&q2);
    while(q2<0 && q2>500000){scanf("%ld",&q2);}
    tamuni=0;
    long int V1[q1],V2[q2],Vuni[10000];
    memset(V1, -1, q1);
    memset (V2, -1, q2);

    for (i=0;i<q1+q2;i++){
        scanf("%ld", &Vuni[i]);
        // printf("\n");
        tamuni++;
    }
    

    for(i=0;i<tamuni-1;i++){
        inddomen1/*=inddomen2*/=i;
        for(j=i+1;j<tamuni;j++){
            if(Vuni[inddomen1]>Vuni[j]){
                inddomen1=j;
            }
            /*if(V2[inddomen2]>V2[j]){
                inddomen2=j;
            }*/
        }
        if(inddomen1!=i){
            guarda1=Vuni[inddomen1];
            Vuni[inddomen1]=Vuni[i];
            Vuni[i]=guarda1;
        }

        /*if(inddomen2!=i){
            guarda2=V2[inddomen2];
            V2[inddomen2]=V2[i];
            V2[i]=guarda2;
        }*/
    }
    for(i=0;i<tamuni;i++){
            printf("%ld ",Vuni[i]);   
    }


    return 0; 
}