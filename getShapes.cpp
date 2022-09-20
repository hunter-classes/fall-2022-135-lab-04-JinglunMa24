#include <iostream>
#include "getShapes.h"

std::string box(int width, int height) {
	std::string output;

	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			output += "*";
		}
		output += "\n";
	}
	return output;
}


std::string checker_board(int width, int height) {
	std::string output;

	for (int row = 1; row <= height; row++) {
		if (row % 2 == 0) {
			for (int i = 0; i < width/2; i++) {
				output += " *";
			}
			output += "\n";
		}

		else {
			for (int i = 0; i < width/2; i++) {
				output += "* ";
			}
			output += "*\n";
		}
	}
	return output;
}


std::string cross(int width) {
	std::string output;

	for (int i = 0; i < width; i++) {
		for (int j = 0; j < width; j++) {
			if (j == i || j == width - i - 1) {
				output += "*";
			}
			else {
				output += " ";
			}
		}
		output += "\n";
	}
	return output;
}


std::string lower_triangle(int length) {
	std::string output;

	for (int i = 0; i < length; i++) {
		for (int j = length; j > length - i - 1; j--) {
			output += "*";
		}
		output += "\n";
	}
	return output;
}


std::string upper_triangle(int length) {
	std::string output;

	for (int i = 0; i < length; i++) {
		for (int j = 0; j < length; j++) {
			if (j < i) {
				output += " ";
			}
			else {
				output += "*";
			}
		}
		output += "\n";
	}
	return output;
}

std::string trapezoid(int width, int height) {
	std::string output;

	if (height > width/2) {
		output = "Impossible shape!\n";
	}

	else {
		for (int i = 0; i < height; i++) {
			for (int j = 0; j < width; j++) {
				if (j < i || j > width - i - 1) {
					output += " ";
				}
				else {
					output += "*";
				}
			}
			output += "\n";
		}
	}

	return output;
}


std::string checker_board3x3(int width, int height) {
	std::string output;
	bool space = false;

	for (int i = 1; i < height; i++) {
		for (int j = 1; j <= width; j++) {
			if (!space) {
				output += "*";
			}
			else {
				output += " "; 
			}

			if ((j % 3 == 0 && j != width) || (width % 3 != 0 && j == width)) {
				space = !space;
			}
		}
	}

	return output;
}