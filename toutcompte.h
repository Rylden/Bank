#ifndef TOUTCOMPTE_H_INCLUDED
#define TOUTCOMPTE_H_INCLUDED

#include"compte_bancaire.h"

#include<vector>

class toutcompte
{
	private:
   vector  <compte_bancaire> comp;
   
	public:
		
	toutcompte();
	toutcompte(const toutcompte & );	
	~toutcompte();
	int chercher(int);
	void ajouter(compte_bancaire);
	void retirer(compte_bancaire);
	void afficher();
	
};

toutcompte::toutcompte()
{
}

toutcompte::toutcompte(const toutcompte& c )
{
	int tail=c.comp.size();
        int i=0;
        while(i<tail)
        {
            comp.push_back(c.comp[i]);
            i++;
        }

}
toutcompte::~toutcompte()
{
}

int toutcompte::chercher(int num)
{int i=0;
 bool trouve=false; 
 while(i<comp.size() && trouve==false)
{ if (comp[i].getnum()==num)
 trouve=true;
 else 
 i++; 
}
if (trouve==true)
return i;
else
return -1;

}


void toutcompte::ajouter(compte_bancaire b)
{
	if (comp.size()!=0)
	{
	
	if(chercher(b.getnum())==-1)
	{
		comp.push_back(b);
	}
	else
	cout<<"le compte existe déjà"<<endl;
  }
else
	comp.push_back(b);
}

void toutcompte::retirer(compte_bancaire b)	
{
  if (comp.size()!=0)
	{
     int pos=chercher(b.getnum());
		if(chercher(b.getnum())!=-1)
		{   
		  comp.erase(comp.vector::begin()+pos);
		}
		else
		cout<<"le compte n'existe pas"<<endl;
}
else
cout<<"la bibliothèque est vide"<<endl;
}
	
	void toutcompte::afficher()
	{  int i=0;
	 while(i<comp.size())
	 {
	 	 comp[i].afficher();
	 	 i++;
	 }
	}
	
	#endif
