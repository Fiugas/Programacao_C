#include <stdio.h>
//@cikey 2ec04005815a9deb1e74cd9ef4848bee
//@sid 2021155919
//@aid 4.2
int main()
{
	//begin_inputs
int A,B,C;
printf("Escreva 3 numeros:\n");
scanf("%d%d%d", &A, &B, &C);
	//end_inputs
if (A>B && A>C)
	printf("A: %d - B: %d - C: %d - maior: %d", A, B, C, A );
else
	if (B>C)
	printf("A: %d - B: %d - C: %d - maior: %d", A, B, C, B );
	else
	printf("A: %d - B: %d - C: %d - maior: %d", A, B, C, C );
	return 0;
}
