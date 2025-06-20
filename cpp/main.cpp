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
int main()
{
    using namespace std::literals;
    
auto some_string{"gagner"s};
   std::cout << some_string << std::endl;


   return 0; 
}

*/
/* 
goodbit : 1
failbit : 0
badbit  : 0
*/

int main (){
    std::cout << "Good " << std::cin.good()<< std::endl;
    std::cout << "Fail " << std::cin.fail() << std::endl;
    std::cout << "Bad " << std::cin.fail()<< std::endl;

    std::cout << "taper un nbr entie : ";
    


    int number;
    std::cin >> number;
    std::cout << "saisi nombre " << number << std::endl;
    
    std::cout << "Good " << std::cin.good()<< std::endl;
    std::cout << "Fail " << std::cin.fail() << std::endl;
    std::cout << "Bad " << std::cin.fail()<< std::endl;
  
    return 0;



}
