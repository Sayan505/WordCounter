#include "counter.hpp"

int word_count(std::string& str) {

	int count = 0;

	std::smatch matches;

	std::regex regx("\\S+");
	std::regex regy("[[:punct:]+]");


	str = std::regex_replace(str, regy, "");	//ignore punctuations

	while (std::regex_search(str, matches, regx)) {
		str = matches.suffix().str();

		++count;
	}

	return count;
}
