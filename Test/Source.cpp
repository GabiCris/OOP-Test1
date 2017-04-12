#pragma once
#include <iostream>
#include "UI.h"
#include <assert.h>
void percTest()
{
	repo r{ 4,4, 1,1 };
	Ctrl c{ r };
	UI u{ c };
	//u.showPercentage();
	assert(u.showPercentage() == 0);
	u.cmoveDown();
	assert(u.showPercentage() == 0);
	u.cmoveDown();
	assert(u.showPercentage() == 0);
	std::cout << "\n";
}

void test()
{
	repo r{ 4,4, 1,1 };
	Ctrl c{ r };
	UI u{ c };
	assert(u.c.ctrlUp() == true);
	assert(u.c.ctrlUp() == false);
	assert(u.c.ctrlDown() == false);
	assert(u.c.ctrlLeft() == true);
	assert(u.c.ctrlLeft() == false);
	
}
int main()
{
	//std::cout << "yas";
	//repo r{ 4,4, 1,1 };

	//std::cout << r.tiles[1][1] << r.tiles[0][0];
	//std::cout << r.getcurrentX()<<r.getcurrentY();
	/*Ctrl c{ r };
	UI u{ c };
	u.cmoveDown();
	u.cmoveLeft();
	u.show();
	u.showPercentage();*/
	test();
	percTest();
	UI u;
	u.appstart();
	return 0;
}