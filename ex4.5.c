#include <stdio.h>
//@cikey 2ec04005815a9deb1e74cd9ef4848bee
//@sid 2021155919
//@aid 4.5
int main()
{
	//begin_inputs
  int A,B,C;
  printf("Escreva 3 numeros:\n");
  scanf("%d%d%d", &A, &B, &C);
  	//end_inputs
    int resultado;
  resultado = (A>B && A>C ) ? A : (B>C ? B : C);
  	printf("A: %d - B: %d - C: %d - maior: %d", A, B, C, resultado );
  	return 0;
  }
