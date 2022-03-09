#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>
class ContestApplication {
	public:

	void sortAndPrint(std::vector<std::string> input) {
		// TODO You are expected to sort the list in the order of r-g-b
		// and print the sorted list
	}

	
	std::vector<std::string> mix(int i) {
		// TODO You are expected to refactor mix and convertS methods.
		// The main targets are "Efficiency" and "Readibility".
		// You are free to change everything.
		std::vector<std::string> j;
		while (i > 0) {
			std::string s = "#";
			std::srand((unsigned int)std::time(NULL));
			int c1 = std::rand() % 16;
			std::string s1;
			s1 = convertS(c1);
			s += s1;
			int c2 = std::rand() % 16;
			std::string s2;
			s2 = convertS(c2);
			s += s2;
			int c3 = std::rand() % 16;
			std::string s3;
			s3 = convertS(c3);
			s += s3;
			int c4 = std::rand() % 16;
			std::string s4;
			s4 = convertS(c4);
			s += s4;
			int c5 = std::rand() % 16;
			std::string s5;
			s5 = convertS(c5);
			s += s5;
			int c6 = std::rand() % 16;
			std::string s6;
			s6 = convertS(c6);
			s += s6;
			j.push_back(s);
			--i;
		}
		return j;
	}

	std::string convertS(int c1) {
		std::string s1;
		if (c1 == 0) {
			s1 = "0";
		}
		if (c1 == 1) {
			s1 = "1";
		}
		if (c1 == 2) {
			s1 = "2";
		}
		if (c1 == 3) {
			s1 = "3";
		}
		if (c1 == 4) {
			s1 = "4";
		}
		if (c1 == 5) {
			s1 = "5";
		}
		if (c1 == 6) {
			s1 = "6";
		}
		if (c1 == 7) {
			s1 = "7";
		}
		if (c1 == 8) {
			s1 = "8";
		}
		if (c1 == 9) {
			s1 = "9";
		}
		if (c1 == 10) {
			s1 = "A";
		}
		if (c1 == 11) {
			s1 = "B";
		}
		if (c1 == 12) {
			s1 = "C";
		}
		if (c1 == 13) {
			s1 = "D";
		}
		if (c1 == 14) {
			s1 = "E";
		}
		if (c1 == 15) {
			s1 = "F";
		}
		return s1;
	}
};

void main(std::string args[]) {
	ContestApplication* app = new ContestApplication();
	// Task 1: Refactor mix method
	std::vector<std::string> input = app->mix(1000000);
	// Task 2: Implement sortAndPrint method
	app->sortAndPrint(input);
	return;
}