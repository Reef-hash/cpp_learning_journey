#include <iostream>

int main() {

    int a = 10;
    int b = 20;
    int c = 30;
    int d = 40;
    

    std::cout << "Before swapping: " << "a: " << a << " b: " << b << " c: " << c << " d: " << d << std::endl;

    //circular swap with four variable
    
    //left rotation: a-b-c-d
    int temp = a;   //temp have a data (10)
    a = b;          //store the value of b in to a
    b = c;          //store the value of c in to b
    c = d;          //store value of d into c
    d = temp;       //store value of temp(original a) into d
    
    //printing...
    std::cout << "\n====LEFT ROTATION====" << std::endl;
    std::cout << "After swapping: " << "a: " << a << " b: " << b << " c: " << c << " d: " << d << std::endl;

    //resetting the value of variable
    a = 10; b = 20; c = 30; d = 40;

    //right rotation d-c-b-a
    temp = d;       //temp have d data (40)
    d = c;          //d getting c data
    c = b;          //c getting b data
    b = a;          //b getting a data
    a = temp;       //a getting temp (original d data)        
    

    //printing...
    std::cout << "\n====RIGHT ROTATION====" << std::endl;
    std::cout << "After swapping: " << "a: " << a << " b: " << b << " c: " << c << " d: " << d << std::endl;


    return 0;     //semicolon at the end
}