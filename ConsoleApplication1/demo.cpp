// Our first C++ program(hello,world)
#include <iostream>
#include <string>

int main() {

	std::string myName;

	std::cout << "please enter your name:";
	std::cin >> myName;
	std::cout << "hello," << myName << std::endl;
}