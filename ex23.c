#include<stdio.h>
int main(){
    int valor, div3, div5;
    scanf ("%d", &valor);
    div3 = valor%3;
    div5 = valor%5;
    if(div3== 0 && div5==0){
        printf("O NUMERO E DIVISIVEL\n");
    }else {
        printf("O NUMERO NAO E DIVISIVEL\n");
    }
    
   
    
    return 0;
}