#include "Operations.h"
#include <math.h>  

int addition(int a, int b)
{
	int resultat;
	
	resultat = a + b;
	
	return resultat;
}

int soustraction(int a, int b)
{
	int resultat;
	
	resultat = a - b;
	
	return resultat;
}
int multiplication(int a, int b)
{
	int resultat;
	resultat=a * b;
	return resultat;
	
}
int division(int a ,int b)
{
	int resultat;
	resultat=a/b;
	return resultat;
}
int exposant(int nb, int exp)
{
	int resultat;
	resultat=exp(np);
}

int factoriel(int nb)
{
	if(nb<=1)
	{
		return 1;
	} else
	{
		return(nb*factoriel(nb-1));
	}
	
}

int multiplication(int a, int b)
{
	int resultat;

	resultat = a * b;

	return resultat;
}

float division(int a, int b)
{
	float resultat;

	resultat = a / b;

	return resultat;
}

float distance(int x1, int y1, int x2, int y2)
{
	float resultat;

	resultat = sqrt[[(x2-x1)*(x2-x1)]+[(y2-y1)*(y2-y1)]];

	return resultat
}