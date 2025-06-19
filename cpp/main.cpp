#include <iostream> 

/*
int main ()
{
    std::cout << "Hello Word ! " << "VTT" << std::endl;
    std::cout << "PSG CHAMPION" << std::endl;
    return 0; 
}


 g++ -std=c++17 -Wall -Wextra -Werror main.cpp -o prog = commande pour compiler le code
 .\prog.exe : permet de lancer le code 
 


std::cout : affichage stadard
std::cerr : erreur
std::clog : journalisation
std::endl : retour à la ligne + flush
\n : retour à la ligne
\t : tabulation 
*/


/*
Journalisation avec le clog

int main ()
{
    std::clog << "Hello Word ! " << std::endl;
    return 0; 
}
*/
/*
préfixes pour les bases 
0b : binaire
0 : octal
0x : hexa
*/
int main()
{
   
    int file_number = 0b111111111;
    
    std::cout << file_number << std::endl;
    
    
    return 0; 
}
