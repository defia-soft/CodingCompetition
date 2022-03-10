#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>

#include <iostream>
#include <iomanip>
#include <sstream>
#include <algorithm>


class ContestApplication {
public:

	void sortAndPrint(std::vector<std::string> input) {
		// TODO You are expected to sort the list in the order of r-g-b
		// and print the sorted list
		
		// ASCII codes of '0-9,A-F' are ascending just like in the hexadecimal system.
		// So a lexicographical order can be used to order these strings.
		std::sort(input.begin(), input.end());
		
		// Print the list sequentially.
		for(const auto i : input)
			std::cout << i << std::endl;
	}
	
	std::vector<std::string> mix(int i) {
		// TODO You are expected to refactor mix and convertS methods.
		// The main targets are "Efficiency" and "Readibility".
		// You are free to change everything.
		std::srand((unsigned int)std::time(NULL));
		std::vector<std::string> res;
		while (i > 0) {
			std::string str = "#";
			for (int j = 1; j <= 6; ++j) {
				int ch_j = std::rand() % 16;
				std::string str_j = convertS(ch_j);
				str += str_j;
			}
			res.push_back(str);
			--i;
		}
		return res;
	}

	std::string convertS(const int c1) {
		std::stringstream stream;
		stream << std::hex << c1;
		std::string res = stream.str();
		return res;
	}
};

int main() {
	ContestApplication* app = new ContestApplication();
	// Task 1: Refactor mix method
	std::vector<std::string> input = app->mix(100);
	// Task 2: Implement sortAndPrint method
	app->sortAndPrint(input);
	return 0;
}
