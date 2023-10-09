#include <stdio.h>
#include <math.h>
int main(){
    float cf, x, y, z, px,py;
    scanf ("%f", &cf);
    scanf ("%f", &x);
    scanf ("%f", &y);
    px = (x/100)*cf;
    py = (y/100)*cf;
    z = cf+px+py;
    printf("O VALOR DO CARRO E = %.2f\n", z);
    
    return 0;
}