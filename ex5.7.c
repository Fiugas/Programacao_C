#include <stdio.h>
//@cikey 2ec04005815a9deb1e74cd9ef4848bee
//@sid 2021155919
//@aid 5.7
int main()
{
	//begin_inputs
int num_oper;
printf("\nEste programa mostra o calculo do PI consoante numero de operacoes que colocar.\n\n");
printf("Insira o numero de operacoes que quer: ");
scanf("%d", &num_oper);
	//end_inputs
  double PI=0;
  double auxiliar2=1;
  for (int auxiliar = 0 ; auxiliar <= num_oper ; auxiliar++)
  {
    if (auxiliar %2!=0)
    {
    PI = PI - (1/auxiliar2);
    auxiliar2 = auxiliar2 + 2;
    }
    else
    {
    PI = PI + (1/auxiliar2);
    auxiliar2 = auxiliar2 + 2;
    }
  }
  PI = PI * 4;
printf("num_oper: %d - PI: %.6f", num_oper, PI);
	return 0;
}
