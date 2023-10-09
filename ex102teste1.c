#include<stdio.h>
int main(){
    int n,somap,somab;
    scanf("%d",&n);
    somap=32*n*2;
    somab=32*n;
    printf("%d\n",somap+somab-n);

    return 0;
}