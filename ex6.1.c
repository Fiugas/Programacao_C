#include <stdio.h>
//@cikey 2ec04005815a9deb1e74cd9ef4848bee
//@sid 2021155919
//@aid 6.1
int menor (int , int , int );

int main()
{
	//begin_inputs
int A,B,C;
printf("Este programa calacula o menor valor de tres numeros inteiros.\n\n");
printf("Insira tres numeros: ");
scanf("%d%d%d", &A, &B, &C);
	//end_inputs
int menor_numero;
menor_numero = menor(A,B,C);
printf("A: %d - B: %d - C: %d - menor: %d", A, B, C, menor_numero );

	return 0;
}
int menor (int a, int b, int c )
{
  if (a<=b && a<=c)
  {
  return a;
  }
    if (b<=c && b<=a)
    {
      return b;
    }
    else
      {
        return c;
      }
}
