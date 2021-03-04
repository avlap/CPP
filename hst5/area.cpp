#include "../include/std_lib_facilities.h"

int area(int length, int width)
{
	//funtion to calculate area
	//input values can't be negative
	if(length <0 || width<0) error("values are negative!");
	return length*width;
}

int framed_area(int x, int y)
{
	//values can't be negative, x and y should be 2 or larger
	if(x<2 || y<2) error("values are smaller then 2");
	return area(x-2, y-2);
}

int main()
{
	int x = 2;
	int y = 1;
	int z = 2;

	area(x, y);
	framed_area(y, z);



}

