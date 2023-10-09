
#include <stdio.h>

int main()
{
    int n,a=1,b=1,c;
    scanf("%d",&n);
    if(n<2){
        printf("Campeonato invalido!\n");
    }
    else{
        while(a<=n){
            while(b<=n){
                
                for(c=b+1;c<=n;c++){
                    printf("Final %d: Time%d X Time%d\n",a,b,c);  
                     a++;
                }
                b++;
            }
        }
    }

    return 0;
}
