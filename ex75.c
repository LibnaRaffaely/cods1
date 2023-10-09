#include<stdio.h>
#include<string.h>

int checagem(char *f,long unsigned int x,char let,int *ind){
    int j;
    for(j=0;j<x;j++){
        if(f[j]==let){*ind=j; return 1;}
    }
    return -1;
}

int main(){
    int N,sinal,indice;
    long unsigned int tam;
    char frase[499],letra;
    scanf("%d",&N);
    getchar();
    while(N){
        indice=0;
        scanf("%c",&letra);
        getchar();
        fgets(frase,499,stdin);
        tam=strlen(frase);
        sinal= checagem(frase,tam,letra,&indice);
        if (sinal==1){printf("Caractere %c encontrado no indice %d da string.\n",letra,indice);}
        if(sinal==-1){printf("Caractere %c nao encontrado.\n",letra);}
        N--;
    }


    return 0;
}