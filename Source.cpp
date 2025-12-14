#include <iostream>
#include <string> 

int main(){
	std::string word{};
	std::cout << "Enter the word: " << std::endl;
	std::getline(std::cin, word);
	std::cout << "You have entered: \n" << word << std::endl;

	return EXIT_SUCCESS;
}
