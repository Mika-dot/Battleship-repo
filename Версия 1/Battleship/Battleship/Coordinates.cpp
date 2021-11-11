#include "Coordinates.h"
#include "Libraries.h"

int Coordinates::Coordinate_changes_X(int Width, System::Windows::Forms::MouseEventArgs^ e) {
	int mouseX = e->Location.X;

	int flag = INT_MAX;
	int x = -1;
	for (int i = 0; i < 10; i++)
	{

		int leng = (mouseX - i * Width / 10 - Width / 10 / 2);
		if (leng < 0) {
			leng *= -1;
		}
		if (leng < flag)
		{
			flag = leng;
			x = i * Width / 10 + Width / 10 / 2;
		}
	}
	return x;
}

int Coordinates::Coordinate_changes_Y(int Height, System::Windows::Forms::MouseEventArgs^ e) {
	int mouseY = e->Location.Y;

	int flag = INT_MAX;
	int y = -1;
	for (int i = 0; i < 10; i++)
	{
		int leng = (mouseY - i * Height / 10 - Height / 10 / 2);

		if (leng < 0) {
			leng *= -1;
		}
		if (leng < flag)
		{
			flag = leng;
			y = i * Height / 10 + Height / 10 / 2;
		}
	}
	return y;
}

bool Coordinates::Trigger_X(int x, int Width, System::Windows::Forms::MouseEventArgs^ e) {
	int mouseX = e->Location.X;


	int flag = mouseX - x;
	if (flag < 0) {
		flag *= -1;
	}
	if (flag > Width / 10 / 2) {
		return true;
	}
	else
	{
		return false;
	}
}

bool Coordinates::Trigger_Y(int y, int Height, System::Windows::Forms::MouseEventArgs^ e) {
	int mouseY = e->Location.Y;


	int flag = mouseY - y;
	if (flag < 0) {
		flag *= -1;
	}
	if (flag > Height / 10 / 2) {
		return true;
	}
	else
	{
		return false;
	}

}