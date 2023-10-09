
#include <stdio.h>

int main()
{
    int valores[10001],n,i,maior,valor;
    scanf("%d",&n);
    while(n!=0){
        maior=-9999;
        for(i=0;i<10001;i++){
            valores[i]=0;
        }
        for(i=0;i<n;i++){
            scanf(" %d",&valor);
            if(valor>maior){
                maior=valor;
            }
            valores[valor]++;                  //acrescento um valor no 
        }
        for(i=0;i<maior+1;i++){
            printf("(%d) %d\n",i,valores[i]);
            valores[i+1]=valores[i+1]+valores[i];
        }
        
        scanf("%d",&n);
    }
    
    

    return 0;
}
