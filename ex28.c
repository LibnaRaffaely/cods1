#include <stdio.h>

int main() {
  int ano, div4,div400;
  scanf ("%d",&ano);
  div400 = ano%400;
  div4 = ano%4;
  

  if(div400==0){
     printf("ANO BISSEXTO");
  }
  else{
      if(div4==0){
          printf("ANO BISSEXTO");
      }
      else{
          printf("ANO NAO BISSEXTO");
      }
  }
 
  
  
return 0;
}
