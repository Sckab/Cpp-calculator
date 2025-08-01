#include "../lib/core.h"
#include <iostream>

void question(double &firstNumber, double &secondNumber) {
	std::cout << "Choose you first number: ";
	std::cin >> firstNumber;

	std::cout << "Choose you second number: ";
	std::cin >> secondNumber;
}

void calculator(double firstNumber, double secondNumber) {
	char operation;

	std::cout << "what operation do you want to do? (+ - * /): ";
	std::cin >> operation;

	std::cout << std::endl;

	switch (operation) {
	case '+':
		std::cout << "result: " << firstNumber << " " << operation << " "
				  << secondNumber << " = " << firstNumber + secondNumber
				  << std::endl;
		break;
	case '-':
		std::cout << "result: " << firstNumber << " " << operation << " "
				  << secondNumber << " = " << firstNumber - secondNumber
				  << std::endl;
		break;
	case '*':
		std::cout << "result: " << firstNumber << " " << operation << " "
				  << secondNumber << " = " << firstNumber * secondNumber
				  << std::endl;
		break;
	case '/':
		if (secondNumber == 0) {
			std::cout << "Error: division by zero" << std::endl;
		} else {
			std::cout << "result: " << firstNumber << " " << operation << " "
					  << secondNumber << " = " << firstNumber / secondNumber
					  << std::endl;
		}
		break;
	default:
		std::cout << "Error: operation not found" << std::endl;
		break;
	}
}
