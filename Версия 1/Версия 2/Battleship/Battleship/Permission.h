#pragma once
#include "Libraries.h"

ref class Permission
{
private:

	bool Single_check(int x, int y, int leng_X, int leng_Y, int Fleet_x[20], int Fleet_y[20]);
	bool Single_check_narrow(int x, int y, int leng_X, int leng_Y, int Fleet_x[20], int Fleet_y[20]);
	bool Wall(int x, int y, int leng_X, int leng_Y);
public:
	bool Field_permissions(int x, int y, int leng_X, int leng_Y, int Fleet_length, int Fleet_x[20], int Fleet_y[20], bool narrow);
	bool Flag(int a, int b, int Range);

};