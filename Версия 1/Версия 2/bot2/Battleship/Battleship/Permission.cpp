#include "Permission.h"
#include "Libraries.h"

bool Permission::Field_permissions(int x, int y, int leng_X, int leng_Y, int Fleet_length, int Fleet_x[200], int Fleet_y[200], bool narrow) {

	for (int i = 0; i < Fleet_length; i++)
	{
		if (Single_check(x, y, leng_X, leng_Y, Fleet_x, Fleet_y) && narrow) {
			return false;
		}
		else if (Single_check_narrow(x, y, leng_X, leng_Y, Fleet_x, Fleet_y)) {
			return false;
		}
		if (Wall(x, y, leng_X, leng_Y)) {
			return false;
		}
		x += leng_X;
	}

	return true;
}
bool Permission::Wall(int x, int y, int leng_X, int leng_Y) {
	int Range = 5;
	for (int i = 0; i < 20; i++)
	{
		bool flag[2];
		flag[0] = x >= leng_X * 10;
		flag[1] = y >= leng_Y * 10;

		if (flag[0] || flag[1])
		{
			return true;
		}

	}
	return false;

}
bool Permission::Single_check(int x, int y, int leng_X, int leng_Y, int Fleet_x[20], int Fleet_y[20]) {

	int Range = 5;
	for (int i = 0; i < 20; i++)
	{
		bool flag[9];
		flag[0] = (Flag(x, Fleet_x[i] - leng_X, Range) && Flag(y, Fleet_y[i] - leng_Y, Range));
		flag[1] = (Flag(x, Fleet_x[i] - 0, Range) && Flag(y, Fleet_y[i] - leng_Y, Range));
		flag[2] = (Flag(x, Fleet_x[i] + leng_X, Range) && Flag(y, Fleet_y[i] - leng_Y, Range));
		flag[3] = (Flag(x, Fleet_x[i] - leng_X, Range) && Flag(y, Fleet_y[i] - 0, Range));
		flag[4] = (Flag(x, Fleet_x[i] - 0, Range) && Flag(y, Fleet_y[i] - 0, Range));
		flag[5] = (Flag(x, Fleet_x[i] + leng_X, Range) && Flag(y, Fleet_y[i] - 0, Range));
		flag[6] = (Flag(x, Fleet_x[i] - leng_X, Range) && Flag(y, Fleet_y[i] + leng_Y, Range));
		flag[7] = (Flag(x, Fleet_x[i] - 0, Range) && Flag(y, Fleet_y[i] + leng_Y, Range));
		flag[8] = (Flag(x, Fleet_x[i] + leng_X, Range) && Flag(y, Fleet_y[i] + leng_Y, Range));

		if (flag[0] || flag[1] || flag[2] || flag[3] || flag[4] || flag[5] || flag[6] || flag[7] || flag[8])
		{
			return true;
		}

	}
	return false;

}

bool Permission::Single_check_narrow(int x, int y, int leng_X, int leng_Y, int Fleet_x[200], int Fleet_y[200]) {

	int Range = 5;
	for (int i = 0; i < 200; i++)
	{
		if (Flag(x, Fleet_x[i] - 0, Range) && Flag(y, Fleet_y[i] - 0, Range))
		{
			return true;
		}

	}
	return false;

}

bool Permission::Flag(int a, int b, int Range) {

	if ((a <= b + Range) && (b - Range <= a))
	{
		return true;
	}
	else
	{
		return false;
	}

}