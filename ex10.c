#include <stdio.h>

int main(){
    float valor, f;
    int n;
    scanf ("%f", &valor);
    n = valor*10+0.5;
    f = n/10.0;
    printf("%f\n",f);
    n = valor*100+0.5;
    f = n/100.0;
    printf("%f\n",f);
    n = valor*1000+0.5;
    f = n/1000.0;
    printf("%f\n",f);
    
    return 0;
}