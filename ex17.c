#include <stdio.h>

int main() {
  int n, c, d, u, nv;
  scanf("%d", &n);
  
  c = n/100;
  d = (n%100)/10;
  u = n%10;
  nv = u*100+d*10+c;
  
  printf("%d\n",nv);

return 0;
}
