#pragma once
#include "Graphics.h"
#include "Colors.h"
#include "Location.h"
#include "Board.h"

class Snake
{
private:
	class Segment {
	public:
		void InitHead(const Location& in_loc);
		void InitBody();
		void Follow(const Segment& next);
		void MoveBy(const Location& delta_loc);
		void Draw(Board& brd) const;
	private:
		Location loc;
		Color c;
	};
public:
	Snake(const Location& loc);
	void MoveBy(const Location& delta_loc);
	void Grow();
	void Draw(Board& brd) const;
private:
	static constexpr int nSegmentMax = 100;
	Segment segments[nSegmentMax];
	int nSegments = 1;
	static constexpr Color headColor = Colors::Yellow;
	static constexpr Color bodyColor = Colors::Red;
};