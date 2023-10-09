
#include <stdio.h>

int main()
{
    int a, b,c,d,soma;
    scanf("%d \n%d \n%d \n%d", &a,&b,&c,&d);
    
    if(a>=b && a>=c && a>=d){
        soma = b+c+d;
        
    }
    else{
        if(b>a && b>=c && b>=d){
            soma = a+c+d;
        }
        else{
            if(c>a && c>b && c>=d){
                soma = a+b+d;
            }
            else{
                if(d>a && d>b && d>c){
                    soma = a+b+c;
                }
            }
        }
    }
    printf ("%d",soma);
    
    
    return 0;
}
