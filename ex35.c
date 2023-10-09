
#include <stdio.h>

int main()
{
    int matricula, dep; 
    float salm, sal,tx, nsal, ib,il,ip, result;
    scanf("%d  %f  %d  %f  %f", &matricula,&salm,&dep,&sal,&tx);
    
    nsal = sal/salm;
    if(nsal<=5){
        ib = 0;
        ip = (tx/100)*sal;
    }
        
    if(nsal>5 && nsal<12){
        ib = 0.08*sal;
        ip = (tx/100)*sal;
    }
    
    if(nsal>12){
        ib = 0.2*sal;
        ip = (tx/100)*sal;
    }
    
    il = ib - (300*dep);
    result = il - ip;
    printf("MATRICULA = %d \nIMPOSTO BRUTO = %.2f \nIMPOSTO LIQUIDO = %.2f \nRESULTADO = %.2f\n",matricula,ib,il,result);
    
    if(result<0){
        printf("IMPOSTO A RECEBER");
    }
    if (result>0){
        printf("IMPOSTO A PAGAR");
    }
    if(result==0){
        printf("IMPOSTO QUITADO ");
    }
    
    return 0;
}