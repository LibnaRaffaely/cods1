#include<stdio.h>
#define F 96;
#define M 6.0;
int main(){
    unsigned int mat;
    int freq,i;
    float p1,p2,p3,p4,p5,p6,p7,p8,l1,l2,l3,l4,l5,t,media;
    scanf("%u %f %f %f %f %f %f %f %f %f %f %f %f %f %f %d",&mat,&p1,&p2,&p3,&p4,&p5,&p6,&p7,&p8,&l1,&l2,&l3,&l4,&l5,&t,&freq);
    while(mat!=-1){
        media=((p1+p2+p3+p4+p5+p6+p7+p8)/8)*0.7+((l1+l2+l3+l4+l5)/5)*0.15+0.15*t;
        if(media>=6 && freq>=F){
            printf("Matricula: %u, Nota Final: %f, Situacao Final: APROVADO",mat,media);
        }
        else{
            if(media<6 && freq>=F){
                printf("Matricula: %d, Nota Final: %f, Situacao Final: REPROVADO POR NOTA",mat,media);
            
            }
        }
        scanf("%u %f %f %f %f %f %f %f %f %f %f %f %f %f %f %d",&mat,&p1,&p2,&p3,&p4,&p5,&p6,&p7,&p8,&l1,&l2,&l3,&l4,&l5,&t,&freq);
    }


    return 0;
}