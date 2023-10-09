#include <stdio.h>
int main (){
    int valor, t100, t50, t10, t1;
    scanf ("%d", &valor);
    t100 = valor/100; 
    valor = valor%100; // o valor começa a valer o resto da divisão por 100
    t50 = valor/50;
    valor = valor%50;
    t10 = valor/10;
    t1 = valor%10;
    printf("NOTAS DE 100 = %d\n", t100);
    printf("NOTAS DE 50 = %d\n", t50);
    printf("NOTAS DE 10 = %d\n", t10);
    printf("MOEDAS DE 1 = %d\n", t1);
    return 0;
}