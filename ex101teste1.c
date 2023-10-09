
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
            valor= (vc-vi)*qntd1;
            desp = 200+(0.05*qntd1);
            lucro = valor-desp;
            printf("V: %.2f, N: %d, L: %.2f\n",i,qntd1,lucro);
            if(lucro>lucromax){
                lucromax = lucro;
                valorlm = valor;
                qntdlm = qntd1;
            }
        }  
        if(i=vc){
            valor= vc*qntdc;
            desp = 200+(0.05*qntdc);
            lucro = valor-desp;
            printf("V: %.2f, N: %d, L: %.2f\n",i,qntd1,lucro);
            if(lucro>lucromax){
                lucromax = lucro;
                valorlm = valor;
                qntdlm = qntd1;
            }
        }
        for(i=vf;i>vc;i--){
            qntd1 = qntdc - (vc-i)*60;
            valor= (vc+vi)*qntd1;
            desp = 200+(0.05*qntd1);
            lucro = valor-desp;
            printf("V: %.2f, N: %d, L: %.2f\n",i,qntd1,lucro);
            if(lucro>lucromax){
                lucromax = lucro;
                valorlm = valor;
                qntdlm = qntd1;
            }
        }
    }
    printf("Melhor valor final: %.2f\n",valorlm);
    printf("Lucro: %.2f\n",lucromax);
    printf("Numero de ingressos: %d\n",qntdlm);





    return 0;
}
