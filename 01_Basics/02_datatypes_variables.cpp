#include <iostream>

int main() {
    // Declare and initialize variables of different data types
    int myAge = 24;                          // Integer variable
    double myGpa = 3.14;            // Double (floating-point) variable
    char myChar = 'A';                 // Character variable
    bool myBool = true;                // Boolean variable

    // Output the values of the variables to the console
    std::cout << "Age: " << myAge << std::endl;
    std::cout << "GPA: " << myGpa << std::endl;
    std::cout << "Character: " << myChar << std::endl;
    //used to print boolean value as true/false instead of 1/0
    std::cout << "Boolean: " << std::boolalpha << myBool << std::endl;


    return 0;   // Return 0 to indicate that the program ended successfully
}