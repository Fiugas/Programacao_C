#include <stdio.h>
int c = 3;
int  multiplica(int a, int b)
{
  int resultado;
  resultado = a * b * c;
  return resultado;
}
int main()
{

  int x = 10;
  int saida;

  saida = multiplica (x,25);
  saida = multiplica (saida,2);
  printf("%d", multiplica (2,5));
	return 0;
}
