#include <stdio.h>
int main()
 {
   int a;
   printf("Introduza umm numero:" );
   scanf("%d", &a);

   if(a > 1000)
      printf("O numero %d é maior que 1000\n",a );
   else
   printf("O numero %d nao é maior que 1000\n",a );
  return 0;
}
