
#include <stdio.h>

int main(){
    int x;
    float mpf,mif,qntdp,qntdi,somap,somai;
    qntdp=qntdi=somai=somap=0;
    
    scanf("%d",&x);
    while(x!=0){
        if(x%2==0){
            qntdp++;
            somap+=x;
        }
        else{
            qntdi++;
            somai+=x;
        }
        scanf("%d",&x);
    }
    if(somap!=0){
        mpf= (somap/qntdp);
        
    }else mpf=0;

    if(somai!=0){
        mif= (somai/qntdi);
        
    }else mif=0;
    
    printf("MEDIA PAR: %.6f\n",mpf);
    printf("MEDIA IMPAR: %.6f\n",mif);

    return 0;
}
