#include "main.hpp"


int main(int argc, char** argv) {

	int count = 0;

	std::string str;

	while (1) {
		std::cout << R"(Enter a string: )";
		std::getline(std::cin, str);	//unformatted input

		count = word_count(str);

		std::cout << count << '\n';
	}

	return 0;
}
