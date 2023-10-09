#include <stdio.h>
int main()
{
    int a,b;
    float media;
    scanf("%d %d\n", &a,&b);
    media = (float)(a+b)/2;
    printf("%.3f",media);

    return 0;
}
