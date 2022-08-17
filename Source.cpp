#include <iostream>
#include <string>

int main(int argc, char** argv) {

#ifdef _WIN32
	system("chcp 1251");
#endif

	std::string name;

	std::cout << "Введите имя: ";
	std::cin >> name;
	std::cout << "Здравствуйте, " << name << std::endl;

	return 0;
}