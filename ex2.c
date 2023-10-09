#include <stdio.h>
int main() {
		float salario, consumo, valorp, desconto, custokw;
		scanf ("%f", &salario);
		scanf ("%f", &consumo);
		valorp = (salario*0.7)/100;
		custokw = valorp;
		valorp = valorp*consumo;
		desconto = valorp*0.9;
		
		
		printf ("Custo por kW: R$ %.2f \n", custokw);
		printf ("Custo do consumo: R$ %.2f \n", valorp);
		printf ("Custo com desconto: R$ %.2f \n", desconto);
		return 0;
}