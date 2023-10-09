
#include <stdio.h>

int main()
{
   int n, n1,n2,n3,n4;
   char plur;
   scanf ("%d", &n);
   
    plur = 's';
    n1 = n%10;                    //unidade
    n2 = ((n%100)-n1)/10;        // dezena
    n3 = (n/100)%10;            // centena
    n4 = n/1000;               // milhar
    
   if (n<0||n>9999){
       printf("Numero invalido!");
   }                                       
   else{                                     // ordem correpondente
        if(n4!=0){
            printf("(quarta ordem) %d = ",n);
        }   
        else{
            if(n3!=0){
                printf("(terceira ordem) %d = ",n);    
            }
            else{
                if(n2!=0){
                    printf("(segunda ordem) %d = ",n);
                }
                else{
                    printf("(primeira ordem) %d = ",n);
                }
            }
        }
   
   
       if(n4>1){
           printf("%d unidade%c de milhar ",n4, plur);
       }             
                                                        //somas das casas decimais
       else{
           if(n4==1){
                printf("%d unidade de milhar ",n4);   
           }
           
       }
       
        if(n4!=0){
            printf("+");
        }               // uso do +
       
       if(n3>1){
           printf(" %d centena%c ",n3, plur);
       }
       else{
           if(n3==1){
                printf(" %d centena ",n3);   
           }
           
       }
       
           if(n3!=0){
            printf("+");
        }           // uso do +
       
       if(n2>1){
           printf(" %d dezena%c ",n2, plur);
       }
       else{
           if(n2==1){
                printf(" %d dezena ",n2);   
           }
           
       }
       
           if(n2!=0){
            printf("+");
        }           // uso do +
        
        
       if(n1>1){
           printf(" %d unidade%c ",n1, plur);
       }
       else{
           if(n1==1){
                printf(" %d unidade ",n1);   
           }
           
       }
       
       printf("= ") ;
       
       if(n4!=0){
           printf("%d000 ",n4);
       }                
                if(n4!=0){
                printf("+");
                }           // uso do +
       if(n3!=0){
                printf(" %d00 ",n3);   
           }
                if(n3!=0){
                    printf("+");
                }           // uso do +
       if(n2!=0){
           printf(" %d0 ",n2);
       }
                if(n2!=0){
                    printf("+");
                 }           // uso do +
       if(n1!=0){
                printf(" %d ",n1);   
           }
           
       
    }   
  
    return 0;
}
