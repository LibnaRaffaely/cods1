#include<stdio.h>
int main(){
    int m,n,a,i,flag;               // i está para coluna(n) e a está para linha(m)
    scanf("%d \n%d",&m,&n);
    
    for(a=1;a<=m;a++){
        printf("valor a:%d\n",a);
        for(i=1;i<=n;i++){
            printf("valor i:%d\n",i);
            if(a=i){
                printf("\n");
                flag=1;
            }
            else{
                if(flag=1){
                    flag=0;
                    printf(" -(%d, %d)",a,i);
                }
                else{
                    printf("(%d, %d)",a,i);
                }
                
            }
            
        }
        printf("%dcerto ", m);
    }

    return 0;
}