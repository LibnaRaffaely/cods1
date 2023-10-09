#include <stdio.h>

int main(){
    long int n,d,r,numero,i,j,flag,guarda;
    long int menor1,menorind,cresc[10000],l[100000];
    scanf("%ld %ld",&n,&d);
    menor1=9;
   
    while((n!=0)&&(d!=0)){
        r=n-d;
        scanf("%ld",&numero);
        for(i=n-1;i>=0;i--){
            l[i]=(numero%10);
            cresc[i]=l[i];
            numero=numero/10;
        }
        for(i=0;i<r;i++){      //ordena os vetores até a qntd q tem que sumir
            menorind=i;
            for(j=i+1;j<n;j++){      
                if(cresc[j]<cresc[menorind]){
                    menorind=j;
                }
            }
            if(menorind!=i){
                guarda = cresc[i];
                cresc[i]=cresc[menorind];
                cresc[menorind]=guarda;
            }
        }
        flag=0;
        i=0;
        while(i<r){
            for(j=0;j<n;j++){
                if(l[j]==cresc[i]){
                    l[j]=-1;
                    flag++;
                    if(flag==r){break;}
                }
            }
            if(flag==r){
                break;
            }
            i++;
        }

        for(i=0;i<n;i++){     //printa os !=-1
            if(l[i]!=-1){
                printf("%ld",l[i]);
            }
        }
        printf("\n");

        scanf("%ld %ld",&n,&d);
        
    }

    return 0;

}