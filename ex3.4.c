#include <stdio.h>
//@cikey 2ec04005815a9deb1e74cd9ef4848bee
//@sid 2021155919
//@aid 3.4
int main()
{
	//begin_inputs
  float graus_f;
  printf("Escrevas uma temperatura que quer converter: ");
  scanf("%f", &graus_f );
	//end_inputs
  float graus_c;
  graus_c = ((graus_f-32)/9)*5;
  printf("%.2fº F = %.1fº C\n", graus_f, graus_c );

	return 0;
}
