
#include <stdio.h>
#include<math.h>
int main()
{
    int n,i;
    float A[3],B[3];
    float dif1,dif2,dif3,dist;
    scanf("%d",&n);
    for(i=0;i<3;i++){
            scanf("%f",&A[i]);
    }
    n-=1;
    while(n){
        for(i=0;i<3;i++){
            scanf("%f",&B[i]);
        }
        dif1=A[0]-B[0];
        dif2=A[1]-B[1];
        dif3=A[2]-B[2];
        dist=(dif1*dif1)+(dif2*dif2)+(dif3*dif3);
        dist=sqrt(dist);
        printf("%.2f\n",dist);
        for(i=0;i<3;i++){
            A[i]=B[i];
        }
        n--;
    }

    return 0;
}
