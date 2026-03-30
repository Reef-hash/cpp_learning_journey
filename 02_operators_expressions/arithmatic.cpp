#include<iostream>


int main()  {

    int x = 10;
    int y = 15;

    std::cout << "====ARITHMATIC OPERATION====" << std::endl;

    std::cout << "\nx + y: " << x + y << std::endl; //this is addition operator
    std::cout << "x - y: " << x - y << std::endl;   //this is subtraction operator
    std::cout << "x * y: " << x * y << std::endl;   //this is multiplication operator
    std::cout << "x / y: " << x / y << std::endl;   //this is division operator
    std::cout << "x % y: " << x % y << std::endl;   //this is modulus operator

    //..ask input and print for user with each operation
    std::cout << "\ninsert value of x: "; std::cin >> x;
    std::cout << "insert value of y: "; std::cin >> y;

    //..printing..
    std::cout << "x + y: " << x + y << std::endl;  //we can change x and y value because it is not constant variables..
    std::cout << "x - y: " << x - y << std::endl; 
    std::cout << "x * y: " << x * y << std::endl; 
    std::cout << "x / y: " << x / y << std::endl; 
    std::cout << "x % y: " << x % y << std::endl; 

    return 0;
}