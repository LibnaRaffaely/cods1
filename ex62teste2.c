#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
    char frase[2001],frase1[1001],frase2[1001];
    int b,j,k,len,flag1=0,flag=0;
    double v,a=0,a1=0,e=0,e1=0;
    double i=0,i1=0,o=0,o1=0,u=0,u1=0;

    fgets(frase,sizeof(frase),stdin);
    len=strlen(frase);
    frase[len-1]='\0';
    len=strlen(frase);
    b=0;
    while(b<len){
        if(frase[b]==';'){
            flag1++;
        }
        b++;
    }
    
    if(flag1!=1){
        printf("FORMATO INVALIDO!\n");
        return 0;
    }
    
    /*for(i=0;i<5;i++){   //zerei os locais das vogais
        A[i]=B[i]=0;
    }*/
    for(b=0,j=0,k=0; b<len;b++){
        if(frase[b]==';'){
            flag=1;
            b++;      //dessa forma o caractere ; não é lido/ransferido
        }
        if(flag==0){
            frase1[j]=frase[b];
            j++;
        }
        if(flag==1){
            frase2[k]=frase[b];
            k++;
        }
    }

    frase1[j]='\0';
    frase2[k]='\0';
    len= strlen(frase1);
    for(b=0;b<len;b++){
        if(frase1[b]=='a' || frase1[b]=='A'){a++;}
        if(frase1[b]=='e' || frase1[b]=='E'){e++;}
        if(frase1[b]=='i' || frase1[b]=='I'){i++;}
        if(frase1[b]=='o' || frase1[b]=='O'){o++;}
        if(frase1[b]=='u' || frase1[b]=='U'){u++;}
    }
    len=strlen(frase2);
    for(b=0;b<len;b++){
        if(frase2[b]=='a' || frase2[b]=='A'){a1++;}
        if(frase2[b]=='e' || frase2[b]=='E'){e1++;}
        if(frase2[b]=='i' || frase2[b]=='I'){i1++;}
        if(frase2[b]=='o' || frase2[b]=='O'){o1++;}
        if(frase2[b]=='u' || frase2[b]=='U'){u1++;}
    }
    
    v= pow(((a-a1)*(a-a1)+(e-e1)*(e-e1)+(i-i1)*(i-i1)+(o-o1)*(o-o1)+(u-u1)*(u-u1)),(0.5));
    printf("(%.0lf,%.0lf,%.0lf,%.0lf,%.0lf)\n",a,e,i,o,u);
    printf("(%.0lf,%.0lf,%.0lf,%.0lf,%.0lf)\n",a1,e1,i1,o1,u1);
    printf("%.2lf",v);
    return 0;
}