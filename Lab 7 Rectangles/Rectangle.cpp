#include "Rectangle.h"

bool validInfo;
double Rectangle::setLength(double len)
{
	bool validInfo = true;
	
	if(len >= 0)
	{
		length = len;
	}
	else
	{
		validInfo = false;
	}
	return validInfo;
}
double Rectangle::setWidth(double wid)
{
	bool validInfo = true;

	if (wid >= 0)
	{
		width = wid;
	}
	else
	{
		validInfo = false;
	}
	return validInfo;
}