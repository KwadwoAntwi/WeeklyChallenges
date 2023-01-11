// Copyright Kwadwo Antwi Appiagyei. All rights reserved.

#include <iostream>
#include <string>

void Instructions();
void GetName();
void ErrorCheckInput();

std::string input;

int main()
{
    Instructions();
    GetName();
    ErrorCheckInput();
}



/**
*  Prints out the instructions to the user
*/
void Instructions()
{
    std::cout << "In this game, you three chances to provide the right answer." << "\n";
    std::cout << "\n";
}

/**
*  Get user input
*/
void GetName()
{
    std::cout << "Who is the first president of Ghana?: ";
    std::getline(std::cin,input);
}

/**
*  Checks if user provided the right input
*/
void ErrorCheckInput()
{
    int chances = 2;
    std::string name;
    name = "Kwame Nkrumah";
    if (input != name)
    {
        int i = 0;
        while (input != name && i < chances)
        {
            std::cout << "\n";
            std::cout << "Try again." << "\n";
            std::cout << "Who is the first president of Ghana?: ";
            getline(std::cin, input);
            i++;
        }
        if (input != name)
        {
            std::cout << "\n";
            std::cout << "You Lost!";
            std::cout << "\n";
        }
        else
        {
            std::cout << "\n";
            std::cout << "You won!";
            std::cout << "\n";
        }
    }
}