
#include <stdio.h>

int main()
{
    int CC, DR,RT,grau;
    scanf("%d \n%d \n%d", &CC,&DR,&RT);
    if(CC<7 && DR>50 && RT>80000){
       grau = 10;
    }
    
    if(CC<7 && DR>50 && RT<=80000){
            grau=9;
        }
       
    if(CC<7 && DR<=50 && RT<=80000){
        grau = 8;
    }

    if(CC>=7 && DR<=50 && RT<=80000){
        grau = 7;
    }
    
    printf("ACO DE GRAU = %d", grau);
    
    return 0;
}
