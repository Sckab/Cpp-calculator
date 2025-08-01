#include "../lib/core.h"
#include "../lib/intro.h"
#include <iostream>

int main() {
	double first_number, second_number;
	char answer;

	intro();

	while (true) {
		question(first_number, second_number);
		calculator(first_number, second_number);

		std::cout << std::endl;

		std::cout << "Do you want to continue? (y/n): ";
		std::cin >> answer;

		if (answer == 'y') {
			std::cout << std::endl;
		} else if (answer == 'n') {
			std::cout << std::endl;
			std::cout << "Thanks for using the calculator!" << std::endl;
			return 0;
			break;
		} else {
			std::cout << "Invalid input" << std::endl;
			return 1;
			break;
		}
	}

	return 0;
}
