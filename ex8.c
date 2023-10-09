#include <stdio.h>
#include <math.h>
int main(){
    float alt, aresta, raiz, volume; 
    scanf ("%f %f",&alt, &aresta);
    raiz = sqrt(3);
    volume = (aresta*aresta*raiz*alt)/2;
    printf("O VOLUME DA PIRAMIDE E = %.2f METROS CUBICOS", volume);
    return 0;
}