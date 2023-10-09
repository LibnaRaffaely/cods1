#include <stdio.h>
#include <math.h>
int main(){
    double m, a, td, vel, esp,trab;
    scanf ("%lf", &m);
    scanf ("%lf", &a);
    scanf ("%lf", &td);
    vel = a*td;
    vel = vel*3.6;
    esp = a*td*td/2;
    trab = ((m*1000)*vel/3.6*vel/3.6)/2;
    
    printf("VELOCIDADE = %.2f\n", vel);
    printf("ESPACO PERCORRIDO = %.2f\n", esp);
    printf("TRABALHO REALIZADO = %.2f\n", trab);
    
    
    return 0;
}