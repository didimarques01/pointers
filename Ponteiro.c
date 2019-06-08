
#include <stdio.h>

int main() {
  
  printf("Para Double:");
  double *p = 0X5DC;
  printf("%d\n",p);
  p++;
  printf("%d\n",p);
  p = p+15;
  printf("%d\n",p);
  p = p-2;
  printf("%d\n",p);
   
  printf("Para float:");
  float *q = 0X5DC;
  printf("%d\n",q);
  q++;
  printf("%d\n",q);
  q = q+15;
  printf("%d\n",q);
  q = q-2;
  printf("%d\n",q);
  
  printf("Para char:");
  char *z = 0X5DC;
  printf("%d\n",z);
  z++;
  printf("%d\n",z);
  z = z+15;
  printf("%d\n",z);
  z = z-2;
  printf("%d\n",z);
  
  return 0;
}

