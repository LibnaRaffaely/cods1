#include<stdio.h>
#include<string.h>
int main(){
    int N,num,i;
    char frase[499];
    scanf("%d",&N);
    getchar();
    while(N){
        
        scanf("%d",&num);
        getchar();
        fgets(frase,499,stdin);
        for(i=0;i<num;i++){
            printf("%c",frase[i]);
        }
        printf("\n");
        N--;
    }


    return 0;
}