#include<stdio.h>
#include<string.h>

int main(){
    int dez1[6], dez2[6];
    int dez1v[61], dez2v[61];
    int i,j,d,N,len,num,guarda;
    int  ponto,sena,quina,quadra;
    for(i=0;i<6;i++){
        scanf("%d",&dez1[i]);
    }
    for(i=0,j=20,d=40;i<20,j<40,d<61;i++,j++,d++){                   //zerei os valores para contar os numeros do sorteio
        dez1v[i]=0;         
        dez1v[j]=0;
        dez1v[d]=0;
    }
    for(i=0;i<6;i++){
        dez1v[dez1[i]]++;
    }
    /*for(i=0;i<6;i++){               // aqui vou separar os números e tornar 1 na dez1v nos índices q corresponderem ao valor
        if(dez1[i]!=' '){
            if(dez1[i+1]!=' '){
                guarda = dez1[i]*10+dez1[i+1];
                dez1v[guarda]=1;
            }
            else{dez1v[dez1[i]]=1;}
        }
    }*/
    scanf("%d",&N);
    sena=quina=quadra=0;
    while(N){
        for(i=0;i<6;i++){
            scanf("%d",&dez2[i]);
        }
        for(i=0,j=20,d=40;i<20,j<40,d<61;i++,j++,d++){                   //zerei os valores para contar os numeros do sorteio
            dez2v[i]=0;         
            dez2v[j]=0;
            dez2v[d]=0;
        }
        for(i=0;i<6;i++){
            dez2v[dez2[i]]++;
        }

        /*for(i=0;i<(len);i++){        // aqui vou separar os números e tornar 1 na dez1v nos índices q corresponderem ao valor
            if(dez2[i]!=' '){
                if(dez2[i+1]!=' '){
                    guarda = dez2[i]*10+dez2[i+1];
                    dez2v[guarda]=1;
                }
                else{dez2v[dez1[i]]=1;}
            }
        }*/
        ponto=0;
        for(i=0,j=20,d=40;i<20,j<40,d<60;i++,j++,d++){
            if((dez1v[i]==1)&&(dez2v[i]==1)){ponto++;}
            if((dez1v[j]==1)&&(dez2v[j]==1)){ponto++;}
            if((dez1v[d]==1)&&(dez2v[d]==1)){ponto++;}
        }
        
        if(ponto==6){sena++;}
        if(ponto==5){quina++;}
        if(ponto==4){quadra++;}
        N--;
    }
    if(sena!=0){
        printf("Houve %d acertador(es) da sena\n",sena);
    }else{printf("Nao houve acertador para sena\n");}
    if(quina!=0){
        printf("Houve %d acertador(es) da quina\n",quina);
    }else{printf("Nao houve acertador para quina\n");}
    if(quadra!=0){
        printf("Houve %d acertador(es) da quadra\n",quadra);
    }else{printf("Nao houve acertador para quadra\n");}

    return 0;
}