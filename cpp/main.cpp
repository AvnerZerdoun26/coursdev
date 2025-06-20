#include <iostream>
#include <string>

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
   std::string message{"atchoum"};
   std::cout << message << std::endl;

   int file_number{400};
   std::cout << file_number << std::endl;

   float decimal_n{12.09};
   std::cout << decimal_n << std::endl;
   
   int FileNumber = 0b11110000;
   std::cout << FileNumber << std::endl;

    
   


    return 0; 
}
