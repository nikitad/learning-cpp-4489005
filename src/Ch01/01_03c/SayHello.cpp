#include <iostream>
#include <string>

int main() {
    std::string name;
    std::cout << "Enter name: " << std::flush;
    std::cin >> name;
    std::cout << "Hello " << name << "!" << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}
