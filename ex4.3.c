#include <stdio.h>
//@cikey 2ec04005815a9deb1e74cd9ef4848bee
//@sid 2021155919
//@aid 4.3
int main()
{
	//begin_inputs
int horas, minutos,segundos;
printf("Escreva uma hora: ");
scanf("%d:%d:%d", &horas, &minutos, &segundos);
	//end_inputs
if (horas>=24 || horas<0)
 printf("%02d:%02d:%02d : hora invalida", horas, minutos, segundos);
else
  if (minutos>=60 || minutos<0)
    printf("%02d:%02d:%02d : hora invalida", horas, minutos, segundos);
  else
    if (segundos>=60 || segundos<0)
      printf("%02d:%02d:%02d : hora invalida", horas, minutos, segundos);
    else
    printf("%02d:%02d:%02d : hora valida", horas, minutos, segundos );
	return 0;
}
