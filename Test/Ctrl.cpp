#include "Ctrl.h"

bool Ctrl::ctrlUp()
{
	return this->r.moveUp();
}

bool Ctrl::ctrlDown()
{
	return r.moveDown();
}

bool Ctrl::ctrlRight()
{
	return r.moveRight();
}

bool Ctrl::ctrlLeft()
{
	return r.moveLeft();
}
