#include <stdio.h>
//@cikey 2ec04005815a9deb1e74cd9ef4848bee
//@sid 2021155919
//@aid 4.6
int main()
{
	//begin_inputs
int dia_semana, idade;
printf("Indroduza um dia da semana sendo domigo igual a 1: " );
scanf("%d", &dia_semana);
printf("Indroduza a Idade: ");
scanf("%d", &idade );
	//end_inputs
float  preco ;
switch (dia_semana)
 {
  case 1:
  printf("dia da semana: domigo -");
  preco= 5;
  break;
  case 2:
  printf("dia da semana: segunda-feira -");
  preco=10;
  break;
  case 3:
  printf("dia da semana: terca-feiras -" );
  preco=10;
  break;
  case 4:
  printf("dia da semana: quarta-feira -");
  preco=10;
  break;
  case 5:
  printf("dia da semana: quinta-feira -" );
  preco=5;
  break;
  case 6:
  printf("dia da semana: sexta-feira -" );
  preco=10;
  break;
  case 7:
  printf("dia da semana: sabado -" );
  preco=10;
  break;
}
if (idade <= 12 || idade>=65)
preco = preco*0.60;
else if (idade>=13 && idade<=20)
preco = preco* 0.75;
printf(" idade: %d - preco do ingresso: %.2f euros", idade,
preco);

	return 0;
}
