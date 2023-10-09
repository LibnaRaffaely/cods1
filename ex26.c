#include<stdio.h>
int main(){
   float salario,reajuste;
   scanf("%f",&salario);
   if(salario<=300.00){
       reajuste = 1.5*salario;
       
   }
   else{
       reajuste = 1.3*salario;
   }
   
   printf("SALARIO COM REAJUSTE = %.2f\n",reajuste);
    return 0;
}   