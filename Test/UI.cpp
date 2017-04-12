#include "UI.h"
#include <string>

void UI::appstart()
{
// TODO: EVEN NUMBER VALIDATION
	bool alive = true;
	std::string cmd;
	while (alive)
	{
		std::cout << "Command: ";
		std::cin >> cmd;
		if (cmd == "exit")
			alive = false;
		if (cmd == "moveUp")
			cmoveUp();
		if (cmd == "moveDown")
			cmoveDown();
		if (cmd == "moveRight")
			cmoveRight();
		if (cmd == "moveLeft")
			cmoveLeft();
		if (cmd == "show")
			show();
		if (cmd == "showPercentage")
		{
			int a= showPercentage();
		}

	}
}

void UI::cmoveUp()
{
	bool result;
	result = c.ctrlUp();
	if (!result)
		std::cout << "Not valid!" << "\n";
	else
		std::cout << "Current postiton: x= " << c.r.getcurrentX() << "y= " << c.r.getcurrentY() << "\n";
}

void UI::cmoveDown()
{
	bool result;
	result = c.ctrlDown();
	if (!result)
		std::cout << "Not valid!" << "\n";
	else
		std::cout << "Current postiton: x= " << c.r.getcurrentX() << "y= " << c.r.getcurrentY() << "\n";
}

void UI::cmoveRight()
{
	bool result;
	result = c.ctrlRight();
	if (!result)
		std::cout << "Not valid!" << "\n";
	else
		std::cout << "Current postiton: x= " << c.r.getcurrentX() << "y= " << c.r.getcurrentY() << "\n";
}

void UI::cmoveLeft()
{
	bool result;
	result = c.ctrlLeft();
	if (!result)
		std::cout << "Not valid!" << "\n";
	else
		std::cout << "Current postiton: x= " << c.r.getcurrentX() << "y= " << c.r.getcurrentY() << "\n";
}

void UI::show()
{
	for (int i = 0; i < c.r.getM(); i++)
		for (int j = 0; j < c.r.getN(); j++)
			if (c.r.tiles[i][j])
				std::cout << "Tile with coord: x=" << i << ", j=" << j << ";\n";
}

//Function which computes the percentage of cleaned tiles!
//the function thakes no parameters and priunts on the screen the result
int UI::showPercentage()
{
	int i, j, p=0, k=0;
	float percLeft = 0, percRight = 0;
	for (int i = 0; i < c.r.getM(); i++)
		for (int j = 0; j < c.r.getN() / 2; j++)
			if (c.r.tiles[i][j])
				percLeft++;
	percLeft = percLeft / (c.r.getM() * (c.r.getN() / 2));
	for (int i = 0; i < c.r.getM(); i++)
		for (int j = c.r.getN() / 2; j < c.r.getN() - 1; j++)
			if (c.r.tiles[i][j])
				percRight++;
	//std::cout << percLeft <<"  "<< percRight;
	percRight = percRight / (c.r.getM() * (c.r.getN() / 2));
	std::cout << "Percent in the left half: " << percLeft<<"\n";
	std::cout << "Percent in the right half: " << percRight<<"\n";
	if (percLeft < percRight)
	{
		std::cout << "There are more tiles to clean in the left side!";
		return percLeft;
	}
	else
	{
		std::cout << "there are more tiles to clean in the right side!!";
		return percRight;
	}
	
}
