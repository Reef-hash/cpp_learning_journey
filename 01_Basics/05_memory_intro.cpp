#include <iostream>
#include <string>   // Include the string library to use std::string

int main() {

    // Declare and initialize variables for a simple game character
    int playerHealth = 100;
    float playerStamina = 67.7f;
    std::string playerName = "Carl Johnson";
    bool isPlayerAlive = true;

    //we want to see the value of the variables and where they are stored in memory
    std::cout << "Player Name: " << playerName << " (Memory Address: " << &playerName << ")" << " String size: " << sizeof(playerName) << " bytes" << std::endl;
    //this special case of std::string,we now just printing the size of the string object itself, which is typically 24 bytes on a 64-bit system, but the actual string data is stored separately on the heap and can be much larger depending on the length of the string.
    //we can trace actual data of the string by using playerName.c_str() to get a pointer to the character array that holds the string data, and then we can print the memory address and size of that data as well
    //now we just printing stack memory address of the string object, not the heap memory where the actual string data is stored, so we are not seeing the memory address of the string data itself, but rather the memory address of the string object that manages that data.
    //but never mind, we will learn about pointers and dynamic memory allocation in later chapters, for now we just focus on the basics of variables and data types

    std::cout << "playerHealth: " << playerHealth << " (Memory Address: " << &playerHealth << ")" << " Integer size: " << sizeof(playerHealth) << " bytes" << std::endl;

    //we added f to the end of the number to indicate that it's a float literal, otherwise it would be treated as a double
    //the different between float and double is that float has a smaller range and precision than double, but it takes up less memory (4 bytes vs 8 bytes)

    std::cout << "Player Stamina: " << playerStamina << " (Memory Address: " << &playerStamina << ")" << " Float size: " << sizeof(playerStamina) << " bytes" << std::endl; //dont forget semicolon at the end of the line
    std::cout << "Is Player Alive: " << std::boolalpha << isPlayerAlive << " (Memory Address: " << &isPlayerAlive << ")" << " Boolean size: " << sizeof(isPlayerAlive) << " bytes" << std::endl;
    //used std::boolalpha before variable to print boolean value as true/false instead of 1/0

    std::cout << "Total memory used by player variables: " << sizeof(playerHealth) + sizeof(playerStamina) + sizeof(playerName) + sizeof(isPlayerAlive) << " bytes" << std::endl;

    //let's see how different data stored in memory by declaring same data type with different values
    int a = 10;
    int b = 20;
    int c = 30;
    std:: cout << &a << " " << &b << " " << &c << std::endl;
    //we can see that the memory addresses of a, b, and c are different, even though they are of the same data type (int), because they are stored in different locations in memory. This is because each variable is allocated its own space in memory to store its value.

    return 0;
}