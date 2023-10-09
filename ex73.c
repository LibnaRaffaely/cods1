#include <stdio.h>
#include <string.h>

int main(){
    char frase[1000],guarda;
    long int N,meio,tam;
    int i;
    scanf("%ld",&N);
    while(N){

        getchar();
        fgets(frase,1000,stdin);
        //substitui \n por \0
        for(i=0;i<=strlen(frase);i++){if(frase[i]=='\n'){frase[i]='\0';}}
        
        //tranforma o caractere em 3 casas a mais
        for(i=0;i<strlen(frase);i++){
            if (( (frase[i]>=97)&&(frase[i]<=122) ) || ( (frase[i]>=65)&&(frase[i]<=90) )){
                frase[i]+=3;
            }
        }
        //inverte a linha
        meio=strlen(frase)/2;
        tam=strlen(frase)-1;
        //if(tam%2==0){
            for(i=0;i<meio;i++){
                guarda=frase[i];
                frase[i]=frase[tam-i];
                frase[tam-i]=guarda;
            }
        //}
        /*else{
             for(i=0;i<meio;i++){
                guarda=frase[i];
                frase[i]=frase[tam-i];
                frase[tam=i]=guarda;
            }
        }*/

        //metade retrocede
        for(i=meio;i<strlen(frase);i++){
            frase[i]--;
        }

        //imprime
        
        fputs(frase,stdout);
        printf("\n");
        N--;
    }

    
    return 0;
}