
#include <stdio.h>

int main()
{
    int n,i,n1,n2,segmaior=1,segat=0;
    scanf("%d",&n);
    scanf("%d",&n1);
    for(i=2;i<=n;i++){
       scanf("%d",&n2);
        if(n2>n1){
           segat++;
        }
        if(segat>segmaior){
           segmaior=segat;
        }
        n1=n2;
       
    }
    printf("O comprimento do segmento crescente maximo e: %d",segmaior);
    return 0;
}