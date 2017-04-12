#include "Repo.h"

repo::repo(const int& auxm, const int& auxn, const int& currX, const int& currY)
{
	this->m = auxm;
	this->n = auxn;
	this->currentX = currX;
	this->currentY = currY;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			tiles[i][j] = false;
	tiles[currentX][currentY] = true;

}
/* 2x3
 1 2 3
 4 5 6
*/
bool repo::changePosition(const int & x, const int & y)
{
	if (tiles[x][y])
		return false;
	if (x < 0 || x >m - 1)
		return false;
	if (y < 0 || y >n - 1)
		return false;

	this->currentX = x;
	this->currentY = y;
	return true;
}

bool repo::moveUp()
{
	if (currentX == 0 || tiles[currentX - 1][currentY] == true)
		return false;
	currentX -= 1;
	tiles[currentX][currentY] = true;
	return true;
}

bool repo::moveDown()
{
	if (currentX == m - 1 || tiles[currentX + 1][currentY] == true)
		return false;
	currentX += 1;
	tiles[currentX][currentY] = true;
	//std::cout << tiles[currentX][currentY];
	return true;
}

bool repo::moveRight()
{
	if (currentY == n - 1 || tiles[currentX][currentY + 1])
		return false;
	currentY += 1;
	tiles[currentX][currentY] = true;
	return true;
}

bool repo::moveLeft()
{
	if (currentY == 0 || tiles[currentX][currentY - 1])
		return false;
	currentY -= 1;
	tiles[currentX][currentY] = true;
	return true;
}

