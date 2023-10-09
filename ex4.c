#include <stdio.h>
int main() {
    float raio, altura, custo, pi, base, lateral, area;
    scanf ("%f", &raio);
    scanf ("%f", &altura);
    pi = 3.14159;
    base = 2*pi*raio*raio;
    lateral = 2*pi*raio*altura;
    area = base+lateral;
    custo = 100*area;
    
    printf ("O VALOR DO CUSTO E = %.2f",custo);
	printf("\n");
}