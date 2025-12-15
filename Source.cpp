#include <iostream>
#include <string> 
#include <Windows.h>

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::string word{};
	std::cout << "Введите слово: ";
	std::getline(std::cin, word);
	std::cout << "Вы ввели: " << word << std::endl;

	return EXIT_SUCCESS;
}