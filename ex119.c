#include <stdio.h>
#include <string.h>

int main (){
    float M[2][2],determ;
    int i,j;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            scanf("%f",&M[i][j]);
        }
    }
    determ=(M[0][0]*M[1][1])-(M[0][1]*M[1][0]);
    printf("%.2f\n",determ);
    return 0;
}