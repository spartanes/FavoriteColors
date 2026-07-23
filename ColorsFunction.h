#pragma once
#include <iostream>

class FavoriteColors {
public:
	static FavoriteColors* getInstance() {
		if (instance == nullptr) 
		{
			instance = new FavoriteColors();
		}
		return instance;
	}
	FavoriteColors(const FavoriteColors&) = delete;
	FavoriteColors& operator = (const FavoriteColors&) = delete;

	void AddColors();
	void RemoveColors();

	unsigned int getFavoriteColors() const {
		return favoriteColors;
	}
private:
	static FavoriteColors* instance;
	FavoriteColors() = default;
	unsigned int favoritecolors = 0;
};