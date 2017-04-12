#pragma once
#include "Repo.h"

class Ctrl {
public:
	repo r;
	Ctrl::Ctrl() {};
	Ctrl::Ctrl(repo& re) { this->r = re; }

	//Function which moves the robot to the up
	// if not valid: the position is out of bounds or if position is already cleaned.
	// return false!
	bool ctrlUp();

	//Function which moves the robot down
	// if not valid: the position is out of bounds or if position is already cleaned.
	// return false!
	bool ctrlDown();

	//Function which moves the robot to the right
	// if not valid: the position is out of bounds or if position is already cleaned.
	// return false!
	bool ctrlRight();

	//Function which moves the robot to the left
	// if not valid: the position is out of bounds or if position is already cleaned.
	// return false!
	bool ctrlLeft();


};