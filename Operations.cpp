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
float nbrPremier(int a)
{
	 int n,i,p=0 ;

    cout << " entrez un nombre " << endl ;

    cin >> n;

    for (i=2 ; i<n; i++)

    if (n%i==0)p=1;
	
    if(p==0)
	
    cout << " le nombre est premier "<< endl ;
	
    else( cout << " le nombre n'est pas premier ") << endl ;

    return 0;
	
}