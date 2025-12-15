#include <iostream>
#include <Windows.h>

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int num{};
	std::cout << "Введите число: ";
	std::cin >> num;
	std::cout << "Вы ввели: " << num << std::endl;

	return EXIT_SUCCESS;
}