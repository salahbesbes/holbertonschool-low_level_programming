#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/**
* X - generate a random number inferieur a nbMax
* @a: nbMax 
* 
* Return: int < nbMax
*/

int nombreAleatoire( int nbMax)
{
	srand(time(NULL));
	
	return (rand() % nbMax);
}
/**
* checkChar - replace star with the char in hiden, if its present in mot.
* @hidden: stars
* @mot: secretMot
* 
* Return: 0 if star is present, 1 if star is not present in hidden
*/

int checkChar(char c, char *hidden, char *mot)
{
	int i;

	for (i = 0; mot[i]; i++)
	{
		if (mot[i] == c)
			hidden[i] = c;
	}
	
	for (i = 0; hidden[i]; i++)
	{
		if (hidden[i] == '*')
			return (0);
			
	}
	return (1);
}
/**
* X - lire le premier Char  dans use pharase (exclude '\n')
* 
* Return: first char
*/

char lireChar(void)
{
	char c = 0;

	c = getchar();
	c = toupper(c);
	
	while (getchar() != '\n')
	;
	return (c);
}


/**
* X - piocher un mot automatiquement depuis un fichier .txt
* @a: str
* 
* Return: le mot piocher
*/

int piocheMot(char *motPioche)
{
	FILE *dico;
	int numberDeMots = 0, numMotChoisi = 0;
	int carachtereLu = 0, length = 0;
	dico = fopen("./dico.txt", "r"); // On ouvre le dictionnaire en lecture seule

	// On vérifie si on a réussi à ouvrir le dictionnaire
	if (dico == NULL) // Si on n'a PAS réussi à ouvrir le fichier
	{
		printf("\nImpossible de charger le dictionnaire de mots");
		return (0); // On retourne 0 pour indiquer que la fonction a échoué
		// À la lecture du return, la fonction s'arrête immédiatement.
	}
	do {
		carachtereLu = fgetc(dico);// ine fois le char est lu le pointeur est avance au suivat
		if (carachtereLu == '\n')
			numberDeMots++;
	}
	while (carachtereLu != EOF);// le pointeur est arriver au dernier char du fichier


	numMotChoisi = nombreAleatoire(numberDeMots);
	// on repositionne le pointeur depuis le début. On s'arrête lorsqu'on est arrivé au bon mot
	rewind(dico);


	while (numMotChoisi > 0)
	{		// si ont trouve '\0' on retire un numero 
		carachtereLu = fgetc(dico);
		if (carachtereLu == '\n')// le but est de place le pouinteur just devant le mot qu'on vala recuperer
			numMotChoisi--;
		 // on parcour le fichier 
	}
	// le poineur est positionner devant le mot 
	fgets(motPioche, 100, dico); // lire le mot et le sauvgarder dans motpioche
	// '\n' est sauvragder auassi  on veut pas 
	length = strlen(motPioche);
	motPioche[length - 1] = '\0';
	fclose(dico);

	return (1);
}

/**
* main - 
* @argc: nb of arguments
* @argv: arguments
*
* Return: 0
* Error: 1
*/
int main(int argc, char *argv[])
{
	int i, coups = 10, gagner = 0;
	char mot[100];
	char hidden[100];
	char lettre = 49;
	if (!piocheMot(mot))
		printf("some thing wrong with the pioch Mot\n");

	for (i = 0; i < mot[i]; i++)
	{
		hidden[i] = '*';
	}
	printf("mot = %s\n", mot);

	while (!gagner && coups > 0)
	{

		printf("Il vous reste %d coups a jouer\n", coups);
		printf("Quel est le mot secret ? %s\n", hidden);
		printf("Proposez une lettre:\n");
		lettre=  lireChar();

		gagner = checkChar(lettre, hidden, mot);

		if (gagner)
		{
			printf("Mot secret est %s\n", mot);
			printf("\nVOUS AVEZ DEVINER, CONGRADUATION !!!!\n");
		}
		else 
			coups--;
	}

	
	return (0);
}
