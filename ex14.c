#include <stdio.h>
#include <math.h>
int main(){
    double x1,y1,x2,y2,d;
    scanf ("%lf", &x1);
    scanf ("%lf", &y1);
    scanf ("%lf", &x2);
    scanf ("%lf", &y2);
    d = sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)));//para fazer o quadrado vc pode usar a função pow (x,2)
    
    
    printf("A DISTANCIA ENTRE A e B = %.2f\n", d);
    
    return 0;
}