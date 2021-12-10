#include <stdio.h>
//@cikey 2ec04005815a9deb1e74cd9ef4848bee
//@sid 2021155919
//@aid 3.2
int main()
{
	//begin_inputs
  int horas, minutos,segundos;
  printf("Escreva uma hora:");
  <scanf("%d:%d:%d",&horas,&minutos,&segundos);
	//end_inputs
  int s2;
  s2= horas*3600+minutos*60+segundos;
  printf("%d:%d:%d = %d segundos",horas, minutos, segundos, s2 );

}
