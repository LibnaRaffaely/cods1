
#include <stdio.h>

int main(){
   int n,i,flag=0;
   int divi;
   scanf("%d",&n);
   if(n==0){
       printf("NAO PRIMO");
   }
   if(n==1){
       printf("NAO PRIMO");
   }
   
   if(n>1){
       for(i=2;i<((n/2)+1);i++){
           divi= (n%i);
           if(divi==0){
               flag++;
           }
       }
       if(flag==0){
            printf("PRIMO");
        }
        else printf("NAO PRIMO");
   }
   else{
       return 0;
   }
   
    return 0;
}