#pragma once
#include "Location.h"
#include "Graphics.h"
#include "Colors.h"

class Board {
public:
	Board(Graphics& gfx);
	void DrawCell(const Location &loc, const Color &c);
	int GetGridWidth() const;
	int GetGridHeight() const;
private:
	Graphics& gfx;
	static constexpr int width = 10;
	static constexpr int height = 10;
	static constexpr int dimension = 20;// The board tiles are 20 by 20.
};