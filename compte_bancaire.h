#ifndef COMPTE_BANCAIRE_H_INCLUDED
#define COMPTE_BANCAIRE_H_INCLUDED

#include<iostream>
using namespace std;

class compte_bancaire
{
	protected:
		int numcompte;
		float solde;
	public:
		compte_bancaire();
	    compte_bancaire(int, float);
		void ajouter(float);
     	virtual	void retirer(float);
	virtual	void afficher();
		float getnum();
			
		
};

float compte_bancaire::getnum()
{ return  numcompte;
}

compte_bancaire::compte_bancaire(int n, float s)
{ numcompte=n;
 solde=s;
}

compte_bancaire::compte_bancaire()
{
   numcompte=0;
   solde=0.0;
}

void compte_bancaire::ajouter(float ver)
{
	solde=solde+ver;
}


void compte_bancaire::retirer(float ver)
{
	
	if(ver<=solde)
	solde=solde-ver;
	else
	cout<<"le solde est inssufisant"<<endl;
}

void compte_bancaire::afficher()
{
	cout<<"le compte num est "<<numcompte<<" son solde est=  "<<solde<<endl;
	cout<<"----------------------"<<endl;
}
	#endif
