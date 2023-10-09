#include <stdio.h>

int main (){
    int n, divi;
    scanf ("%d", &n);
    if ((n>=0)&&(n<=255))
    {
        printf("%d", n/128%2);
        printf("%d", n/64%2);
        printf("%d", n/32%2);
        printf("%d", n/16%2);
        printf("%d", n/8%2);
        printf("%d", n/4%2);
        printf("%d", n/2%2);
        printf("%d\n", n%2);

    }else printf("Numero invalido!");
    
    
    
    return 0;
}