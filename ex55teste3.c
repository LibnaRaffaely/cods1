
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T,N,i,j,guarda,menorvai,difinic=1000,valor[1000],dif[1000];
    scanf("%d",&T);
    if((T>=1)&&(T<=10)){
         while(T){
            scanf("%d",&N);
            if((N>=2)&&(N<=1000)){
                for(i=0;i<N;i++)
                    scanf("%d",&valor[i]);
                    
                            //ordendando elementos do vetor valor[]
                for(i=0;i<N;i++){
                    menorvai=i;
                    for(j=i+1;j<N;j++){
                        if(valor[j]<valor[menorvai]){
                            menorvai=j;
                        }
                    }
                            //troca de elementos de posição
                    guarda = valor[i];
                    valor[i]=valor[menorvai];
                    valor[menorvai]=guarda;
                }
                            //analizar a diferença dos elementos
                difinic=1000;
                for(i=0;i<N-1;i++){
                    dif[i]=abs(valor[i]-valor[i+1]);
                    printf("%d ",dif[i]);
                    if(dif[i]<difinic){
                        difinic=dif[i]; 
                    }
                }
                printf("\n(resultado)%d %d",difinic,N*N);
            }
            
            T--;
        }
        
        
    }
    

    return 0;
}
