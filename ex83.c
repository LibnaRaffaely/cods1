

#include <stdio.h>
#define pop 1.00
#define geral 5.00
#define arq 10.00
#define cad 20.00
int main (){
  int n, i, pessoas;
  double perpop, perger, perarq, percad, arrec;
  scanf ("%d", &n);
  i=1;

  while (n--){				//não precisa colocar ate onde n vai,pois ele para no 0 
      scanf ("%d %lf %lf %lf %lf", &pessoas, &perpop, &perger, &perarq, &percad);
      arrec =pessoas*(perpop*pop + perger*geral + perarq*arq + percad*cad)/100.0;
      printf ("A RENDA DO JOGO N. %d E = %.2f\n",i++,arrec);
        
    }

  return 0;
}