#pragma once
#include <iostream>

class FavoriteColors {
public:
	void AddColors();
	void RemoveColors();

	unsigned int getFavoriteColors() const {
		return favoriteColors;
	}
private:
	unsigned int favoriteColors = 0;
};