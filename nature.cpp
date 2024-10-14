#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() { 
    float c1, c2, c3, a1, a2, a3;

std::cout <<" nous allons determiner la nature du triangle" << std::endl;
std::cout << " si il y a des cotes egaux entrer de preference les mesures de ces cotes d abord" << std::endl;
std::cout << "donne moi la mesure du premier cote " << std::endl;
std::cin >> c1 ;
std::cout << "donne moi la mesure du deuxieme cote " << std::endl;
std::cin >> c2 ;
std::cout << "donne moi la mesure du troisieme cote " << std::endl;
std::cin >> c3;

if (c1== c2== c3)
{
    std::cout << "il sagit d un triangle equilateral" << std::endl;
}
else if (c1 != c2 && c2 != c3)
{
    std::cout << "il s agit d un triangle quelconque"<< std::endl;
   
}
else if (c1 == c2 && c1 != c3 )
{
    std::cout << "il s agit d un triangle isocele" << std::endl;    
}
else
{
    std::cout <<"entrer d autres valeurs s il vous plait" << std::endl;
    
}
std::cout << "entrer les mesures des angles" << std::endl;
std::cin >> a1, a2, a3;
  if (a1 == 45 || a2 == 45 || a3 == 45)
    {
        std::cout << "ce triangle est aussi rectangle" << std::endl;
}



    return 0;
}