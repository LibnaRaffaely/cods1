
#include <stdio.h>

int main()
{
    int n,i,fatorial=1;
    scanf("%d",&n);
    if(n==0){
        fatorial=1;
    }
    else{
        for(i=n;i>0;i--){
            fatorial = fatorial*i;
        }
    }
    printf("%d!  = %d",n,fatorial);
    return 0;
}
