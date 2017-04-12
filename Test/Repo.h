#pragma once
#include <iostream>

class repo {
private:
	int m, n;
	int currentX, currentY;
public:
	
	bool tiles[150][150];

	int getM() { return m; }
	int getN() { return n; }
	int getcurrentX() { return currentX; }
	int getcurrentY() { return currentY; }
	repo::repo() { m = 0; n = 0; currentX = 0; currentY = 0; };
	repo::repo(const int& auxm, const int& auxn, const int& currX, const int& currY);

	bool changePosition(const int& x, const int& y);
	//Function which moves the robot upwords
	// if not valid: the position is out of bounds or if position is already cleaned.
	// return false!
	bool moveUp();

	//Function which moves the robot downwards
	// if not valid: the position is out of bounds or if position is already cleaned.
	// return false!
	bool moveDown();

	//Function which moves the robot to the right
	// if not valid: the position is out of bounds or if position is already cleaned.
	// return false!
	bool moveRight();

	//Function which moves the robot to the left
	// if not valid: the position is out of bounds or if position is already cleaned.
	// return false!
	bool moveLeft();

};
