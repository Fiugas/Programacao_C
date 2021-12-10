#include <stdio.h>
//@cikey 2ec04005815a9deb1e74cd9ef4848bee
//@sid 2021155919
//@aid 5.1
int main()
{
	//begin_inputs
int num_final;
printf("Escreva um valor que queira ser somado: ");
scanf("%d", &num_final );
	//end_inputs
  int acumulador=0;
for (int i = 1; i <=  num_final; i++)
{
  acumulador =acumulador+i;
}
  printf("num_final: %d - soma: %d",num_final, acumulador);
	return 0;
}
