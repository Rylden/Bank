#ifndef COMPTEEPARGNE_H_INCLUDED
#define COMPTEEPARGNE_H_INCLUDED

#include"compte_bancaire.h"

class compteepargne:public compte_bancaire
{   private:
    float taux;
	public:
	compteepargne(int, float, float);	
	float taux_annuel();
	void retirer(float);
	void afficher();
};

compteepargne::compteepargne(int n, float s, float t): compte_bancaire(n,s)
{  taux=t;}

void compteepargne::afficher()
{ compte_bancaire::afficher();
  cout<<"le taux d'intêret est= "<<taux<<endl;
}

float compteepargne::taux_annuel()
{  
    return taux *solde;

} 

void compteepargne::retirer(float ver)
{
	
	if(5<=solde)
	solde=solde-ver;
	else
	cout<<"le solde est inssufisant"<<endl;
}

#endif
