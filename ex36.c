#include<stdio.h>
int main(){
    int n,n1,n2,n3,n4,n5;
    scanf("%d",&n);
    
    if(n>99999){
        printf("NUMERO INVALIDO");
    }
    
    if (n>10 && n<99){
        n1 = n/10;
        n2 = n%10;
        if(n1==n2){
            printf("PALINDROMO");
        } else printf("NAO PALINDROMO");
        
    }
    
    
    if (n>100 && n<999){
        n1 = n/100;
        n2 = (n%100)/10;
        n3 = n%10;
        if(n1==n3){
            printf("PALINDROMO");
        } else printf("NAO PALINDROMO");
    }
   
    if (n>1000 && n<9999){
        n1 = n/1000;
        n2 = (n%1000)/100;
        n3 = (n%100)/10;
        n4 = n%10;
        if(n1==n4 && n2== n3){
            printf("PALINDROMO");
        } else printf("NAO PALINDROMO");
    }
    
    if (n>10000 && n<99999){
        n1 = n/10000;
        n2 = (n%10000)/1000;
        n3 = (n%1000)/100;
        n4 = (n%100)/10;
        n5 = n%10;
        if(n1==n5 && n2== n4){
            printf("PALINDROMO");
        } else printf("NAO PALINDROMO");
    }
    
    
    
    return 0;
}