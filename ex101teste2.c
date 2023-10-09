
#include <stdio.h>
#include <math.h>

int main(){
    
    float vc,vi,vf,ing,desp,lucro,valor,i;
    int qntd1,qntdlm;
    const int qntdc=120 ;
    float lucromax=0,valorlm;              // valores no lucro maximo
    scanf("%f \n%f \n%f",&vc,&vi,&vf);
    if(vi>vf){
        printf("INTERVALO INVALIDO.\n");
    }
    else{
        for(i=vi;i<vc;i++){              //casos e que haverá desconto
            
            qntd1 = qntdc + (vc-i)*50;
            valor= (i)*qntd1;
            desp =(0.05*qntd1)+200;
            lucro = valor-desp;
            printf("V: %.2f, N: %d, L: %.2f\n",i,qntd1,lucro,desp,valor);
            if(lucro>lucromax){
                lucromax = lucro;
                valorlm = i;
                qntdlm = qntd1;
            }
        }  
        if(i=vc){
            valor= vc*qntdc;
            desp = 200+(0.05*qntdc);
            lucro = valor-desp;
            printf("V: %.2f, N: %d, L: %.2f\n",i,qntdc,lucro,desp,valor);
            if(lucro>lucromax){
                lucromax = lucro;
                valorlm = vc;
                qntdlm = qntd1;
            }
        }
        for(i=vc+1;i<=vf;i++){
            qntd1 = qntdc - (i-vc)*60;
            valor= (i)*qntd1;
            desp = (0.05*qntd1)+200;
            lucro = valor-desp;
            printf("V: %.2f, N: %d, L: %.2f\n",i,qntd1,lucro,desp,valor);
            if(lucro>lucromax){
                lucromax = lucro;
                valorlm = i;
                qntdlm = qntd1;
            }
        }
    }
    printf("Melhor valor final: %.2f\n",valorlm);
    printf("Lucro: %.2f\n",lucromax);
    printf("Numero de ingressos: %d\n",qntdlm);

    return 0;
}