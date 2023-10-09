
#include <stdio.h>

int main(){
    int n,i=0;
    double far,cel;
    scanf("%d",&n);
    while(i<n){
        scanf("%lf",&far);
        cel = 5.0*(far - 32.0)/9.0;
        printf("%.2lf FAHRENHEIT EQUIVALE A %.2lf CELSIUS\n",far,cel);
        i++;
    }

    return 0;
}
