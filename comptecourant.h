#ifndef COMPTECOURANT_H_INCLUDED
#define COMPTECOURANT_H_INCLUDED

#include"compte_bancaire.h"

class comptecourant: public compte_bancaire
{
  public: 
  comptecourant(int,float);
  void retirer(float );

  
};

comptecourant::comptecourant(int n,float s):compte_bancaire(n,s){  }
void comptecourant::retirer(float ver)
{
	
	if(-500<=solde)
	solde=solde-ver;
	else
	cout<<"le solde est inssufisant"<<endl;
}

#endif
