
#include <stdio.h>

int main(){
    double a,r,jc;
    int n,i;
    scanf("%lf %lf %d",&a,&r,&n);
    jc=a*(1+r);
    for (i=1;i<=n;i++){
    
        printf("a*(1+r)^%d = %.2lf, renda: %.2lf\n",i,jc,jc-a);
        jc*=(1+r);
    }

    return 0;
}
