
#include <stdio.h>
#include<math.h>

int main()
{
    int a,b,c, delta;
    float x1,x2;
    scanf("%d %d %d", &a,&b,&c);
    delta = b*b -(4*a*c);
    
    if (delta<0){
        printf("RAIZES IMAGINARIAS\n");
    }
    else{
        if(delta==0){
            printf("RAIZ UNICA\n");
            x1 = (-b)/(2*a);
             printf("X1 = %.2f\n",x1);
        }
        else{
            printf("RAIZES DISTINTAS\n");
            x1 = ((-b) + sqrt(delta))/(2*a);
            x2 = ((-b) - sqrt(delta))/(2*a);
            printf("X1 = %.2f \nX2 = %.2f\n",x1,x2);
        }
    }
    
    
    
    return 0;
}
