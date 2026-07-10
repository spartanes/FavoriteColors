#include "ColorsFunction.h"

void FavoriteColors::AddColors()
{
	int colorsInput = 0;
	std::cin >> colorsInput;

	int ourColors = 1;
	if (colorsInput < 0 || colorsInput > 11) //There was a small bug that when entering a number greater than 11, the color was displayed
	{
		std::cout << "Wrong index! Choose between 0 and 11.\n";
		return;
	}
	ourColors <<= colorsInput;
	favoriteColors |= ourColors;

	std::cout << "Your color add!\n";
}

void FavoriteColors::RemoveColors()
{
	int colorsInput = 0;
	std::cin >> colorsInput;

	int ourColors = 1;
	if (colorsInput < 0 || colorsInput > 11) //There was a small bug that when entering a number greater than 11, the color was displayed
	{
		std::cout << "Wrong index! Choose between 0 and 11.\n";
		return;
	}
	ourColors <<= colorsInput;

	ourColors = ~ourColors;
	favoriteColors &= ourColors;

	std::cout << "Color remove!\n";
}
