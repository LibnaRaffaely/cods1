
#include <stdio.h>

int main()
{
    int valores[5000],n,i,soma=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d ",&valores[i]);
        soma +=valores[i];
    }
    printf("%d\n",soma);

    return 0;
}
