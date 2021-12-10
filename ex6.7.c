#include <stdio.h>
//@cikey 2ec04005815a9deb1e74cd9ef4848bee
//@sid 2021155919
//@aid 6.7
int diaDoAno(int dia, int mes, int ano);
int dataValida(int dia, int mes, int ano);
int numDiasMes(int mes, int ano);
int bissexto(int ano);

int main()
{
	//begin_inputs
int dia, mes, ano;
printf("Este programa informa o numero de dias do inicio do ano ate a data introduzida.\n\n");
printf("Introduza uma data: ");
scanf("%d-%d-%d", &dia, &mes, &ano);
	//end_inputs
  int validacao;
  validacao =  dataValida( dia, mes, ano);

  if (validacao == 1)
  {
    printf("data: %02d-%02d-%d - numero do dia: %d", dia, mes, ano, diaDoAno(dia,mes,ano));
  }
  else
  printf("              ERRO");
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
int numDiasMes(int mes, int ano)
{
  int true_false;
    true_false = bissexto(ano);
  switch (mes)
  {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
    return 31;
    case 4:
    case 6:
    case 9:
    case 11:
    return 30;
    case 2:

      if (true_false == 1)
      {
        return 29;
      }
      else
      return 28;
      default: 0;
    }
}
int dataValida(int dia, int mes, int ano)
{
if (dia > numDiasMes(mes,ano) && dia < 1)
return 0;
  else if (mes < 1 && mes > 12)
  return 0;
   else if ( ano < 1583)
   return 0;
  else
    return 1;
}
int diaDoAno(int dia, int mes, int ano)
{
  int contador ;
  mes = mes - 1;
  for (contador = 0; mes > 0  ; mes--)
   {
    contador = contador + numDiasMes( mes, ano );
  }
  contador = contador + dia;
  return contador;
}
