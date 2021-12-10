#include <stdio.h>
//@cikey 2ec04005815a9deb1e74cd9ef4848bee
//@sid 2021155919
//@aid 4.1
int main()
{
	//begin_inputs
float salario;
printf("O escreva o seu salario:");
scanf("%f", &salario);
	//end_inputs
if (salario<=800)
  printf("salario: %.2f - imposto: isento",salario );
else
  if (salario<=2000 )
  {
    printf("salario: %.2f - imposto: ",salario);
    printf("%.2f",salario*0.2 );
  }
  else
  {
    printf("salario: %.2f - imposto: ",salario );
    printf("%.2f",salario*0.4 );
  }
	return 0;
}
