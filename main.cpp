#include <iostream>
#include <string>
#include <sstream>

int main() {
    std::string buffer;
    double a, b;
    char action;
    std::cout << "Enter two numbers and a mathematical action on them: \n";
    std::cin >> buffer;
    std::stringstream buffer_stream(buffer);
    buffer_stream >> a >> action >> b;

    std::cout << a << " " << action << " " << b ;
    return 0;
}
