
#include <stdio.h>

int main()
{
    int data, dia, mes, ano;
    scanf("%d", &data);
    dia = data/1000000;
    mes = data%1000000;
    mes = mes/10000;
    ano = data%10000;
    

    if(mes==1 && dia>31){
        printf("Data invalida!");
    }
    else{
        if(mes==1){
            printf("%d de janeiro de %d",dia,ano);
        }
    }
    
    if(mes==2 && dia>28){
        printf("Data invalida!");
    }
    else{
        if(mes==2){
            printf("%d de fevereiro de %d",dia,ano);
        }
    }
    
    if(mes==3 && dia>31){
        printf("Data invalida!");
    }
    else{
        if(mes==3){
            printf("%d de março de %d",dia,ano);
        }
    }
    
    if(mes==4 && dia>30){
        printf("Data invalida!");
    }
    else{
        if(mes==4){
            printf("%d de abril de %d",dia,ano);
        }
    }
    
    if(mes==5 && dia>31){
        printf("Data invalida!");
    }
    else{
        if(mes==5){
            printf("%d de maio de %d",dia,ano);
        }
    }
    
    
    if(mes==6 && dia>30){
        printf("Data invalida!");
    }
    else{
        if(mes==6){
            printf("%d de junho de %d",dia,ano);
        }
    }
    
    if(mes==7 && dia>31){
        printf("Data invalida!");
    }
    else{
        if(mes==7){
            printf("%d de julho de %d",dia,ano);
        }
    }
    
    if(mes==8 && dia>31){
        printf("Data invalida!");
    }
    else{
        if(mes==8){
            printf("%d de agosto de %d",dia,ano);
        }
    }

    if(mes==9 && dia>30){
        printf("Data invalida!");
    }
    else{
        if(mes==9){
            printf("%d de setembro de %d",dia,ano);
        }
    }

    if(mes==10 && dia>31){
        printf("Data invalida!");
    }
    else{
        if(mes==10){
            printf("%d de outubro de %d",dia,ano);
        }
    }
    
    if(mes==11 && dia>30){
        printf("Data invalida!");
    }
    else{
        if(mes==11){
            printf("%d de novembro de %d",dia,ano);
        }
    }
    
    if(mes==12 && dia>31){
        printf("Data invalida!");
    }
    else{
        if(mes==12){
            printf("%d de dezembro de %d",dia,ano);
        }
    }
    
   

    return 0;
}