
#include <stdio.h>

int main()
{
    float a,b,c;
    scanf("%f \n%f \n%f",&a,&b,&c);
    
    if(a<=b && a<=c){
        printf("%.2f, ",a);
        if(b<=c){
            printf("%.2f, ",b);
            printf("%.2f ",c);
        }
        else{
            printf("%.2f, ",c);
            printf("%.2f ",b);  
        }
    }

    if(b<a && b<c){
        printf("%.2f, ",b);
        if(a<=c){
            printf("%.2f, ",a);
            printf("%.2f ",c);
        }
        else{
            printf("%.2f, ",c);
            printf("%.2f ",a);
        }
    }
    
    if (c<a && c<b){
        printf("%.2f, ",c);
        if(a<=b){
            printf("%.2f, ",a);
            printf("%.2f ",b);
        }
        else{
            printf("%.2f, ",b);
            printf("%.2f ",a);
        }
    }
    
    return 0;
}
