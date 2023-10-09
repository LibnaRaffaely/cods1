#include <stdio.h>

int main(){
    int h,m,s;
    scanf ("%d", &h);
    scanf ("%d", &m);
    scanf ("%d", &s);
    s = s+(h*3600)+(m*60);
   
    
    printf("O TEMPO EM SEGUNDOS E = %d\n", s);
   
    return 0;
}