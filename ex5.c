#include <stdio.h>
int main()
{
  int a;
  printf("Escreva um numero:" );
  scanf("%d", &a);
  if (a>0)
      printf("O numero e positivo\n");
  else
      if(a==0)
          printf("O numero o numero e igual a 0\n" );
      else
          printf("O numero e negativo\n" );
  return 0;
}
