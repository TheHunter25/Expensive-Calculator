#include <iostream>
#include <string>

int main()
{
	int aFirst, bsecond ,cAdd, dSubtract, fMultiply, eDivide;
	std::string nameString;

	std::cout << "What is your name: ";
	std::cin>> nameString;
	
	std::cout << "Enter a number: ";
	std::cin >> aFirst;
	
	std::cout << "Enter a second number: ";
	std::cin >> bsecond;

	cAdd = aFirst + bsecond;
	dSubtract = aFirst - bsecond;
	fMultiply = aFirst * bsecond;
	eDivide = aFirst / bsecond;
	//dSubtract = afirst - bsecond;
	//fMultiply = aFrist * bsecond;
	//eDivide = aFrist / bsecond;
	//Remainder =

	std::cout << "The sum of " << aFirst << " + " << bsecond << " = " << cAdd << std::endl;
	std::cout << "The sum of " << aFirst << " - " << bsecond << " = " << dSubtract << std::endl;
	std::cout << "The sum of " << aFirst << " * " << bsecond << " = " << fMultiply << std::endl;
	std::cout << "The sum of " << aFirst << " / " << bsecond << " = " << eDivide << std::endl;
	//Show out put here for each
	std::cout << "The End" << nameString << std::endl;

}