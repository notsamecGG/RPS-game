#include <iostream>
#include <cmath>
#include <random>

#include "common.hpp"
#include "objs.hpp"


int random_range(const int& max)
{
    const int x = std::rand();

    return (x % max);
}

int main()
{
    char selection;

    std::cout << 
    "Select one: \n"
    " r - rock \n"
    " p - paper \n"
    " s - scissors"
    << std::endl;

    std::cin >> selection;

    auto x = std::find(std::begin(objList), std::end(objList), selection);
    if (x == std::end(objList))
    {
        std::cerr << "Not valid selection" << std::endl;
        return 1;
    }
    else
    {   
        char bot_selection = objList[random_range(std::size(objList))]; 
        
        GameObject user_selection = objectFromChar(selection);
        int result = user_selection.getsDefeatedBy(bot_selection);

        switch(result)
        {
            case 0:
                std::cout << "Draw!" << std::endl;
                break;

            case 1:
                std::cout << "You loose. :(" << std::endl;
                break;

            case -1:
                std::cout << "Nice. :)" << std::endl;
                break;
        }
    }

    return 0;
}