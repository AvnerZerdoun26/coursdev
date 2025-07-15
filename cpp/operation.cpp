#include <iostream>

/*
Booléens -> deux résultats possibles 
vrai ou faux
! : not
&& : et
|| : ou
comparaison : < <= > >= == !=
autre : += *= /= %= ++ --
*/

int main(){
  int niveau_joueur{10};
  std::cout << "niveau actuelle : " << niveau_joueur << std::endl;

   //niveau_joueur = niveau_joueur +1;
   niveau_joueur ++;

  std::cout << "niveau actuelle : " << niveau_joueur << std::endl;

    return 0;
}