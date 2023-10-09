
#include <stdio.h>
#include<math.h>
int main()
{
    int n,notas[10000],i,qntd[11],k,maior=-9999,im;
    scanf("%d",&n);
    for(i=0;i<11;i++){
        qntd[i]=0;
    }      //zerei valores de qntd[]
    for(i=0;i<n;i++){
        scanf("%d",&k);
        qntd[k]++;
        if(k>maior){
            im=i;
            maior=k;
        }
    }
    printf("Nota %d, %d vezes\n",k,qntd[k]);
    printf("Nota %d, indice %d\n",maior,im);
    

    return 0;
}
