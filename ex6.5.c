#include <stdio.h>
//@cikey 2ec04005815a9deb1e74cd9ef4848bee
//@sid 2021155919
//@aid 6.5
int bissexto(int ano);
int main()
{
	//begin_inputs
int ano;
printf("Este programa calcula se o ano e bissexto ou nao.\n\n");
printf("Introduza um ano: ");
scanf("%d", &ano);
	//end_inputs
int true_false;
true_false = bissexto(ano);
if (true_false == 1)
{
  printf("ano: %d - bissexto", ano );
}
else
printf("ano: %d - nao bissexto", ano );
	return 0;
}
int bissexto (int ano)
{
  if (ano % 4 == 0 && ano % 100 != 0 )
  {
    return 1;
  }
  else if (ano % 400 == 0)
  {
    return 1;
  }
  else
  return 0;
}
