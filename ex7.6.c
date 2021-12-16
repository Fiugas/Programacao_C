#include <stdio.h>
#define NUM_JOGADORES  6
//@cikey 2ec04005815a9deb1e74cd9ef4848bee
//@sid 2021155919
//@aid 7.6

void somaPontos(int resultados[][NUM_JOGADORES], int pontos[]);
void imprimeTabela(int resultados[][NUM_JOGADORES], int pontos[]);
float percentagemEmpates(int resultados[][NUM_JOGADORES]);


int main()
{
	//begin_inputs
  int jogos[NUM_JOGADORES][NUM_JOGADORES]={ {0, 1, 1, 0, 2, 1},
                                           {1, 0, 1, 1, 1, 1},
                                           {1, 1, 0, 1, 1, 2},
                                           {2, 1, 1, 0, 1, 1},
                                           {0, 1, 1, 1, 0, 2},
                                           {1, 1, 0, 1, 0, 0} };

printf("Este programa calcula a percentagem de epates e mostra os pontos obtidos.\n\n");
	//end_inputs
  int pontos[NUM_JOGADORES];
  somaPontos(jogos,pontos);
  printf("         J1 J2 J3 J4 J5 J6  Pontos\n" );
  imprimeTabela(jogos,pontos);
  printf("Percentagem de empates: %.1f %%",percentagemEmpates(jogos) );

	return 0;
}
void somaPontos(int resultados[][NUM_JOGADORES],int pontos[])
{
  int hh;
  int soma;
  for ( hh = 0; hh < NUM_JOGADORES; hh++)
  {
    pontos[hh] = 0;
  }
  for (int kk = 0; kk < NUM_JOGADORES; kk++)
  {
    soma=0;
    for (int ll = 0; ll < NUM_JOGADORES; ll++)
    {
      soma = resultados[kk][ll] + soma;
      pontos[kk] = soma;
    }
  }

}
void imprimeTabela(int resultados[][NUM_JOGADORES], int pontos[])
{
for (int gg = 0; gg < NUM_JOGADORES; gg++)
{
  printf("Jogador%d ",gg+1 );
  for (int ff = 0; ff < NUM_JOGADORES; ff++)
  {
 printf("%2d ", resultados[gg][ff] );
  }
  printf(" %2d\n", pontos[gg] );
}


}
float percentagemEmpates(int resultados[][NUM_JOGADORES])
{
  float auxiliar = 0;
  int total_jogadores;
  float auxiliar2;

  for (int ff = 0; ff < NUM_JOGADORES; ff++) {
    for (int dd = 0; dd < NUM_JOGADORES; dd++) {
      if (resultados[ff][dd] == 1) {
        auxiliar += 1;
      }
    }
  }
  total_jogadores = (NUM_JOGADORES * NUM_JOGADORES) - NUM_JOGADORES;
  auxiliar2 = (auxiliar * 100) / total_jogadores;

  return auxiliar2;
}
