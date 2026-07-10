#include "PrintMenu.h"
#include "ColorsFunction.h"

//Show Main Menu
void PrintMainMenu()
{
	std::cout << "\tHello! Please select operation:\n";
	std::cout << "\tAdd your favorite color: 1\n";
	std::cout << "\tRemove color: 2\n";
	std::cout << "\tShow your colors: 3\n";
	std::cout << "\tExit: -1\n";
}

//Show add colors menu
void PrintAddColorsMenu()
{
	std::cout << "Great!!! Please choise your color\n";
	std::cout << "\t0 - Red\n" << "\t1 - Black\n" << "\t2 - Blue\n";
	std::cout << "\t3 - Green\n" << "\t4 - White\n" << "\t5 - Pink\n";
	std::cout << "\t6 - Yellow\n" << "\t7 - Orange\n" << "\t8 - Purple\n";
	std::cout << "\t9 - Beige\n" << "\t10 - Gray\n" << "\t11 - Light green\n";
}

//Show remove colors menu
void PrintRemoveColorsMenu()
{
	std::cout << "We remove your color!\n";
	std::cout << "\t0 - Red\n" << "\t1 - Black\n" << "\t2 - Blue\n";
	std::cout << "\t3 - Green\n" << "\t4 - White\n" << "\t5 - Pink\n";
	std::cout << "\t6 - Yellow\n" << "\t7 - Orange\n" << "\t8 - Purple\n";
	std::cout << "\t9 - Beige\n" << "\t10 - Gray\n" << "\t11 - Light green\n";
}

//Show your favorite colors
void PrintShowColorsMenu(unsigned int currentMask)
{
	for (int i = 0; i <= 11; i++)
	{
		int showColors = 1;
		showColors <<= i;

		if (currentMask & showColors)
		{
			if (i == 0) std::cout << "\tRed\n";
			if (i == 1) std::cout << "\tBlack\n";
			if (i == 2) std::cout << "\tBlue\n";
			if (i == 3) std::cout << "\tGreen\n";
			if (i == 4) std::cout << "\tWhite\n";
			if (i == 5) std::cout << "\tPink\n";
			if (i == 6) std::cout << "\tYellow\n";
			if (i == 7) std::cout << "\tOrange\n";
			if (i == 8) std::cout << "\tPurple\n";
			if (i == 9) std::cout << "\tBeige\n";
			if (i == 10) std::cout << "\tGray\n";
			if (i == 11) std::cout << "\tLight green\n";
		}
	}
}
