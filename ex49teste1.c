
#include <stdio.h>

int main()
{
     int bin[100],i,j,n;
   while(scanf("%d",&n)!=EOF){
       if((n==0)|| (n==1)){
           printf("%d\n",n);
       }
       else{
           for(i=0;i<100;i++){
               bin[i]=0;
           }
            i=0;
           while(n!=0){
               bin[i]=n%2;            //irei colocar cada binário em um índica
               n=n/2;
               i++;
           }
           for(j=i-1;j>=0;j--){
               printf("%d",bin[j]);
           }
           printf("\n");
       }
       
   }
    

    return 0;
}
