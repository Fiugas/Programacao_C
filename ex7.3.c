#include <stdio.h>
//@cikey 2ec04005815a9deb1e74cd9ef4848bee
//@sid 2021155919
//@aid 7.3
int main()
{
	//begin_inputs
const int num_votos = 15;
const int num_candidatos = 5;
int votos[]={1, 1, 1, 2, 2, 2, 3, 3, 3, 4, 4, 4, 5, 5, 5};
printf("Este programa calcula o numero de votos para cada candidato.\n\n");
	//end_inputs
  int ll;
  int votos_auxiliar[num_candidatos];
  for (int kk = 0; kk < num_candidatos; kk++) {
   votos_auxiliar[kk] = 0;
  }
  for (int jj = 0; jj < num_votos; jj++) {
   votos_auxiliar[votos[jj]-1] += 1;
  }
for (ll = 0; ll < num_candidatos; ll++)
{
printf("candidato %d: %d votos\n", ll+1,votos_auxiliar[ll]);
}

	return 0;
}
