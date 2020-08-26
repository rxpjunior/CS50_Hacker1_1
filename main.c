#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <cs50.c>
int
main(void)
{
// seed do gerador de números aleatorios
srand(time(NULL));
// geracao do numero aleatorio
int skittles = rand() % 1024;
int tentativa;
int palpites=0;
printf("Olá visitante. Como vai? Tente advinhar quantos skittles ha no interior da maquina. Dica: o número esta entre 0 e 1023 !\n");
do
{
tentativa = get_int("Entre com um numero: ");
palpites++;
if (tentativa > skittles)
{
	printf("Voce chutou alto, tente um numero menor\n");
}
else if (tentativa < skittles)
{
	printf ("Voce chutou baixo, tente um numero maior\n");
}
else
{
	printf ("\n\n\n\nVOCE ACERTOU PARABENS!!!!!!!");
	printf("Seu palpite: %i\n", tentativa);
	printf("Numero sorteado: %i\n", skittles);
	printf("Quantidade de palpites: %i\n",palpites);
}
}while(tentativa != skittles);
}
