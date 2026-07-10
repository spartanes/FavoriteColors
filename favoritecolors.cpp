#include "ColorsFunction.h"
#include "PrintMenu.h"

int main()
{
	FavoriteColors myColors;

	int colorsInput = 0;
	do {
		PrintMainMenu();
		std::cin >> colorsInput;
		switch (colorsInput) 
		{
		case 1:
			PrintAddColorsMenu();
			myColors.AddColors();
			break;
		case 2:
			PrintRemoveColorsMenu();
			myColors.RemoveColors();
			break;
		case 3:
			PrintShowColorsMenu(myColors.getFavoriteColors());
			break;
		case -1:
			std::cout << "Error invalid index! Bye Bye!\n";
			break;
		default:
			std::cout << "Invalid operation!\n";
		}		
	} while (colorsInput != -1);
}	
