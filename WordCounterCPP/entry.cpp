#include <iostream>
#include <string>
#include <regex>

int main(int argc, char** argv) {
	while (1) {
		//init
		std::string x;
		int _Wcount = 0;
		std::regex regx("\\S+");
		std::regex regy("[[:punct:]+]");
		std::smatch matches;

		//work
		std::cout << R"(Enter a string: )";
		std::getline(std::cin, x);//unformatted input
		x = std::regex_replace(x, regy, "");//ignore punctuations

		while (std::regex_search(x, matches, regx)) {
			std::cout << matches.str(1);
			x = matches.suffix().str();
			_Wcount++;
		}
		std::cout << _Wcount << "\n";

		system("pause");
	}
	return 0;
}
