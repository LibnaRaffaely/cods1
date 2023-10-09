
#include <stdio.h>

int main(){
    int matr;
    float h,vh,salario;
    scanf("%d %f %f",&matr,&h,&vh);
    getchar();
    while(matr!=0){
        salario=h*vh;
        printf("salario: %d %.2f\n",matr,salario);
        scanf("%d %f %f",&matr,&h,&vh);
        getchar();
    }
    
    return 0;
}