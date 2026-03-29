#include <iostream>
#include <string>

int main() {

    //Declare variables of different data types (int, double, char, bool, string)
    std::string name;   //get input
    const double playerStamina = 77.2589; 
    int age;    //get input
    double kda = 3.8;
    char playerTeam = 'A';
    bool isPlayerAlive = true;

    //Ask the user to input their name and age
    std::cout << "Please insert your name: "; std::getline(std::cin, name); //using std::getline(std::cin, variable) to get whole line of string including space
    std::cout << "\nPlease insert your age: "; std::cin >> age;

    std::cout << "\n=====User Information=====\n" << std::endl;
    std::cout << "User's name: " << name << std::endl;
    std::cout << "User's age: " << age << std::endl;
    std::cout << "Player stamina: " << playerStamina << std::endl;
    std::cout << "Player Team: " << playerTeam << std::endl;
    std::cout << "isPlayerAlive: " << std::boolalpha << isPlayerAlive << std::endl;

    //Print the value and memory address of each variable
    std::cout << "\n====Memory Address====\n" << std::endl;
    std::cout << "Name: " << " " << &name << std::endl;     //this special case for string,its only show address of "string" object it self instead of showing address of string character
    std::cout << "Age: " << " " << &age << std::endl;
    std::cout << "playerStamina: " << " " << &playerStamina << std::endl;
    std::cout << "playerTeam: " << " " << &playerTeam << std::endl;
    std::cout << "isPlayerAlive: " << " " << &isPlayerAlive << std::endl;

    
    //demonstrate constant variable and bool
    std::cout <<"\n====Constant and Boolean====\n" << std::endl;
    std::cout << "playerStamina: " << playerStamina << std::endl; //constant
    std::cout << "isPlayerAlive: " << std::boolalpha << isPlayerAlive << std::endl; //std::boolalpha << variable (thats how its written)

    return 0;
}