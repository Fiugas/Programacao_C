#include <stdio.h>
//@cikey 2ec04005815a9deb1e74cd9ef4848bee
//@sid 2021155919
//@aid 3.3
int main()
{
	//begin_inputs
  int  total_segundos;
  printf("Escreva uma valor:");
  scanf("%d",&total_segundos);
	//end_inputs

  int horas, horas2, minutos, minutos2, segundos;
  horas = total_segundos/3600;
  horas2 = total_segundos%3600;
  minutos = horas2/60;
  minutos2 = horas2%60;
  segundos = minutos2;
  printf("%d segundos = %d:%d:%d",total_segundos , horas, minutos, segundos);

	return 0;
}
