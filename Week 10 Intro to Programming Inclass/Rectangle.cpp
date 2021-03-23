#include "Rectangle.h"

bool validNum;
bool Rectangle::setLength(double len)
{
	bool validNum = true;

	if (len >= 0)
	{
		length = len;
	}
	else
	{
		validNum = false;
	}
	return validNum;
}
bool Rectangle::setWidth(double wid)
{
	bool validNum;

	if (wid >= 0)
	{
		width = wid;
	}
	else
	{
		validNum = false;
	}
	return validNum;
}