

#include"toutcompte.h"
#include"comptecourant.h"
#include"compteepargne.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{ 
   compte_bancaire *c=new compte_bancaire(123,1000.3);
  compteepargne c2(124,9000.1, 12.2);
  c2.afficher();
 comptecourant c1(122,9000.1);
 
  
  toutcompte *ttc=new toutcompte();
 ttc->ajouter(*c);
   ttc->ajouter(c1);
ttc->ajouter(c2);	
int os=ttc->chercher(124);
ttc->afficher();
ttc->retirer(c2);
cout<<"-----------------------"<<endl;
cout<<"-----------------------"<<endl;
ttc->afficher();

return 0;
}
