// Copyright A.T. Chamillard. All Rights Reserved.

#include <iostream>
#include <string>

// IMPORTANT: Only add code in the section
// indicated below. The code I've provided
// makes your solution work with the 
// automated grader on Coursera

/**
 * Programming Assignment 1
 * @return exit status
*/
int main()
{
	// loop while there's more input
	std::string Input;
	std::getline(std::cin, Input);
	while (Input[0] != 'q')
	{
		// Add your code between this comment
		// and the comment below. You can of
		// course add more space between the
		// comments as needed

		std::cout << "H" << std::endl;
		std::cout << "He" << std::endl;
		std::cout << "Li" << std::endl;
		std::cout << "Be" << std::endl;
		std::cout << "B" << std::endl;
		std::cout << "C" << std::endl;
		std::cout << "N" << std::endl;
		std::cout << "O" << std::endl;
		std::cout << "F" << std::endl;
		std::cout << "Ne" << std::endl;

		// Don't add or modify any code below
		// this comment
		std::getline(std::cin, Input);
	}
}
