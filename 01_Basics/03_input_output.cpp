#include <iostream>
#include <string>   // Include the string library for using the std::string type

int main() {
    // Declare a variable to store the user's name
    std::string name; //only declare the variable without initializing it

    std::cout << "Please enter your name: " << std::endl; // Prompt the user to enter their name

    std::getline(std::cin, name); // Read the user's input and store it in the 'name' variable
    //using getline(cin, name) allows us to read entire line of input instead of just a single word.

    std::cout << "Hello, " << name << "!" << std::endl;
    
    return 0;
}   