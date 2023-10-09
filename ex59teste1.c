
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,i;
    float A[3],B[3],dx,dy,dz,maior;
    scanf("%d",&N);
    for(i=0;i<3;i++)
        scanf("%f",&A[i]);
    while(N-1){
        for(i=0;i<3;i++)
            scanf("%f",&B[i]);
        dx=(A[0]-B[0]);
        dy=(A[1]-B[1]);
        dz=(A[2]-B[2]);
        //qual a maior coordenada da distancia
        if((dx>dy)&&(dx>dz)){
            if(dx<0){
                printf("%.2f\n",(-1*dx));    
            }else{
                printf("%.2f\n",dx);
            }
            
        }
        else{
            if((dy>dx)&&(dy>dz)){
                if(dy<0){
                    printf("%.2f\n",(-1*dy));
                }
                else{
                printf("%.2f\n",dy);}
            }
            else{
                if(dz<0){
                    printf("%.2f\n",(-1*dz));
                }
                else{
                printf("%.2f",dz);}
            }
        }
        //transferindo vetores
        for(i=0;i<3;i++){
            A[i]=B[i];
        }
        
        N--;
    }
    
    return 0;
}
