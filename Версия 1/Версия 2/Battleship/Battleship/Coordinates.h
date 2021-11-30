#pragma once
ref class Coordinates
{
private:

public:
	int Coordinate_changes_X(int Width, System::Windows::Forms::MouseEventArgs^ e);
	int Coordinate_changes_Y(int Height, System::Windows::Forms::MouseEventArgs^ e);
	bool Trigger_X(int x, int Width, System::Windows::Forms::MouseEventArgs^ e);
	bool Trigger_Y(int y, int Height, System::Windows::Forms::MouseEventArgs^ e);
};
