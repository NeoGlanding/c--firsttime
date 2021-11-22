#include <iostream>

int main() {
	int favorite_number;

	std::cout << "What is your favorite number, between 1 and 100" << std::endl;
	std::cin >> favorite_number;
	std::cout << favorite_number << std::endl;
	std::cout << "Amazing, we have same favorite number" << std::endl;

	return 0;
}