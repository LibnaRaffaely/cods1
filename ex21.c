#include <stdio.h>

int main(){
    int n1,n2,n3,resp;
    scanf("%d %d %d", &n1, &n2,&n3);
    if((n1>=0)&&(n1<10)&&(n2>=0)&&(n2<10)&&(n3>=0)&&(n3<10))
    {resp = n1*100+n2*10+n3;
     printf("%d, %d\n", resp,resp*resp);
    }else printf("DIGITO INVALIDO\n");
    
    
    
    return 0;
}