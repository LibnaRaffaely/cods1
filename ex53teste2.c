
#include <stdio.h>

int main(){
    int freq[101],i,n,k,maior=0,im;
    scanf("%d",&n);
    if((n>=1)&&(n<=1000000)){
        for(i=0;i<101;i++){
            freq[i]=0;
        }
        for(i=0;i<n;i++){
            scanf("%d",&k);
            freq[k]++;
        }
        
        for(i=0;i<n;i++){
            if(freq[i]>maior){
                maior=freq[i];
                im=i;
            }
        }
        printf("\n%d\n%d",im,maior);
        
    }
    
    
    return 0;
}
