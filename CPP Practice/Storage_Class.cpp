#include <iostream>

// Global variable
extern int globalVariable;

// Function declaration
void exampleFunction();

int main() {
    // 1. auto keyword
    auto number = 10; // Infers the data type of 'number' as int

    // 2. static keyword
    static int staticVariable = 5; // The value of 'staticVariable' persists across function calls

    // 3. register keyword
    register int registerVariable = 20; // Suggests the compiler to store 'registerVariable' in a CPU register for faster access

    // 4. extern keyword
    extern int globalVariable; // Declares that 'globalVariable' is defined in another source file

    std::cout << "Number: " << number << std::endl;
    std::cout << "Static variable: " << staticVariable << std::endl;
    std::cout << "Register variable: " << registerVariable << std::endl;
    std::cout << "Global variable: " << globalVariable << std::endl;

    exampleFunction();

    return 0;
}

// Global variable definition
int globalVariable = 100;

// Function definition
void exampleFunction() {
    // 1. auto keyword (local variable)
    auto number = 15; // Infers the data type of 'number' as int

    // 2. static keyword (local variable)
    static int staticVariable = 25; // The value of 'staticVariable' persists across function calls

    // 3. register keyword (ignored by modern compilers)

    std::cout << "Number in function: " << number << std::endl;
    std::cout << "Static variable in function: " << staticVariable << std::endl;
    std::cout << "Global variable in function: " << globalVariable << std::endl;
}
