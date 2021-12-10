#include <stdio.h>
//@cikey 2ec04005815a9deb1e74cd9ef4848bee
//@sid 2021155919
//@aid 4.4
int main()
{
	//begin_inputs
int nota;
printf("Escreva uma nota: ");
scanf("%d", &nota);
	//end_inputs
switch (nota)
{
  case 20:
  case 19:
  printf("nota: %d - Excelente",nota );
  break;
  case 18:
  case 17:
  case 16:
  printf("nota: %d - Muito bom ",nota );
  break;
  case 15:
  case 14:
  case 13:
  printf("nota: %d - Bom ",nota );
  break;
  case 12:
  case 11:
  case 10:
  printf("nota: %d - Regular ",nota );
  break;
  default:
  printf("nota: %d - Nota invalida ",nota );
}

	return 0;
}
