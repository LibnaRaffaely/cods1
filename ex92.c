
#include <stdio.h>

int main()
{
    float n,i,k,s,a,op,op2;
    scanf("%f \n%f \n%f \n%f",&n,&i,&k,&s);
    printf("Tabuada de soma:\n");
    for(a=0;a<k;a++){
        op2=i+a*s;
        op=n+op2;
        printf("%.2f + %.2f = %.2f\n",n,op2,op);
    }
    printf("Tabuada de subtracao:\n"); 
    for(a=0;a<k;a++){
        op2=i+a*s;
        op=n-op2;
        printf("%.2f - %.2f = %.2f\n",n,op2,op);
    }
    printf("Tabuada de multiplicacao:\n"); 
    for(a=0;a<k;a++){
        op2=i+a*s;
        op=n*op2;
        printf("%.2f x %.2f = %.2f\n",n,op2,op);
    }
    printf("Tabuada de divisao:\n"); 
    for(a=0;a<k;a++){
        op2=i+a*s;
        op=n/op2;
        printf("%.2f / %.2f = %.2f\n",n,op2,op);
    }

    return 0;
}
