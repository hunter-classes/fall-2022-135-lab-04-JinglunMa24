#include <iostream>
#include "getShapes.h"

int main() {

	//Test case for TASK A
	std::string resultA;
	resultA = box(7,4);
	std::cout << "box(7,4):\n" << resultA << "\n--------------------------\n";

	//Test case for TASK B
	std::string resultB;
	resultB = checker_board(11,6);
	std::cout << "checker_board(11,6):\n" << resultB << "\n--------------------------\n";

	//Test case for TASK C
	std::string resultC;
	resultC = cross(8);
	std::cout << "cross(8):\n" << resultC << "\n--------------------------\n";

	//Test case for TASK D
	std::string resultD;
	resultD = lower_triangle(6);
	std::cout << "lower_triangle(6):\n" << resultD << "\n--------------------------\n";

	//Test case for TASK E
	std::string resultE;
	resultE = upper_triangle(5);
	std::cout << "upper_triangle(5):\n" << resultE << "\n--------------------------\n";
	return 0;
}