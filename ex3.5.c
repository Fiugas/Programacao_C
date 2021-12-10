#include <stdio.h>
//@cikey 2ec04005815a9deb1e74cd9ef4848bee
//@sid 2021155919
//@aid 3.5
int main()
{
	//begin_inputs
float raio,altura;
printf("Escrava um raio:");
scanf("%f", &raio);
printf("Escreva uma altura:");
scanf("%f", &altura);
	//end_inputs
float PI = 3.14159, Volume;
Volume = PI*(raio*raio)*altura;
printf("Volume (r = %.2f, a = %.2f) = %.3f m3 \n",raio, altura, Volume );


	return 0;
}
