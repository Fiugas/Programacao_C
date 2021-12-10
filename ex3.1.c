#include <stdio.h>
//@cikey 2ec04005815a9deb1e74cd9ef4848bee
//@sid 2021155919
//@aid 3.1
int main()
{
	//begin_inputs
  int numero1, numero2;
  printf("Insira o primeiro numero:");\
  scanf("%d", &numero1);
  printf("Insira o segundo numero:");
 scanf("%d", &numero2);
	//end_inputs
  int x = numero1 + numero2;
  int y = numero1 *numero2;
printf("%d + %d = %d\n", numero1, numero2, x );
printf("%d * %d = %d", numero1, numero2, y );

	return 0;
}
