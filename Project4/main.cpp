#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand((unsigned)time(nullptr)); 
    int range,
        input,
        count = 0,
        health = 100,
        damage = 5;
    std::cout << "Input a range from 1 to ";
    std::cin >> range;
    int rNumber = rand() % range +1;
    while (true)
    {
        count++;
        std::cout << "Please input a number 1 - "<< range <<std::endl;
        std::cin >> input;
        if (rNumber == input)
        {
            std::cout << "You win , number was " << rNumber << std::endl;
            std::cout << "Attempts: " << count << "\n";
            std::cout << "Health : " << health << std::endl;
            break;
        }
        else if (input < 1 ||  input > range)
        {
            std::cout << "Please input a number between 1 and " << range << "\n";
        }
        else {
            if (input < rNumber)
                std::cout << "You are wrong ,the hidden number is higher \n";
            else
                std::cout << "You are wrong, the hidden number is lower.\n";
        }

        health -= damage + count * 2;
        if (health <= 0)
        {
            health = 0;
            std::cout << "\nYou are lost,number was " << rNumber<< std::endl;
            std::cout << "Health : " << health<< std::endl;
            break;
        }
        std::cout << "Health : " << health << std::endl;
    }
    std::cin.ignore();
    std::cin.get();
    return 0;
}