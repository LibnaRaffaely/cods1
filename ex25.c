#include<stdio.h>
int main(){
    float nota;
     scanf("%f",&nota);
    if(nota<=10.0&&nota>=9.0){
        printf("NOTA = %.1f CONCEITO = A", nota);
    } 
    else{
        if(nota<9.0&&nota>=7.5){
            printf("NOTA = %.1f CONCEITO = B", nota);
            
        }
        else{
            if(nota<7.5&&nota>=6.0) {
            printf("NOTA = %.1f CONCEITO = C", nota);
            
            }
            else {
            printf("NOTA = %.1f CONCEITO = D", nota);
            
            }
        }
    }
   
    return 0;
}   