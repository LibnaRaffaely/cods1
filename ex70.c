#include<stdio.h>
#include <string.h>

int main(){
    int N,i,soma1,soma2;
    char frase[10000];
    scanf("%d",&N);
    getchar();
    while(N){
        fgets(frase,10000,stdin);
        soma1=soma2=0;
        for(i=0;i<strlen(frase);i++){
            if((frase[i]=='A')||(frase[i]=='a')||(frase[i]=='E')||(frase[i]=='e')||(frase[i]=='I')||(frase[i]=='i')||(frase[i]=='O')||(frase[i]=='o')||(frase[i]=='U')||(frase[i]=='u')){soma1++;}
                else{
            if((frase[i]=='B')||(frase[i]=='b')||(frase[i]=='C')||(frase[i]=='c')||(frase[i]=='D')||(frase[i]=='d')||(frase[i]=='F')||(frase[i]=='f')||(frase[i]=='G')||(frase[i]=='g')||(frase[i]=='H')||(frase[i]=='h')){soma2++;}
                else{
            if((frase[i]=='J')||(frase[i]=='j')||(frase[i]=='K')||(frase[i]=='k')||(frase[i]=='L')||(frase[i]=='l')||(frase[i]=='M')||(frase[i]=='m')||(frase[i]=='N')||(frase[i]=='n')||(frase[i]=='P')||(frase[i]=='p')||(frase[i]=='Q')||(frase[i]=='q')||(frase[i]=='R')||(frase[i]=='r')){soma2++;}
                else{
            if((frase[i]=='S')||(frase[i]=='s')||(frase[i]=='T')||(frase[i]=='t')||(frase[i]=='V')||(frase[i]=='v')||(frase[i]=='W')||(frase[i]=='w')||(frase[i]=='X')||(frase[i]=='x')||(frase[i]=='Y')||(frase[i]=='y')||(frase[i]=='Z')||(frase[i]=='z')){soma2++;}
            }
            }
            }
        }

        printf("Letras = %d\nVogais = %d\nConsoantes = %d\n",soma1+soma2,soma1,soma2);
        N--;
    }

    return 0;
}