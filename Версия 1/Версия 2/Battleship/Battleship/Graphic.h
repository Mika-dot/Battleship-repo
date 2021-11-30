#pragma once

ref class Graphic
{
private:

public:
	void Square_several_white(int x, int y, int number, System::Windows::Forms::PictureBox^ Pbx);
	void Square_several_black(int x, int y, int number, System::Windows::Forms::PictureBox^ Pbx);
	void Square_several_red(int x, int y, int number, System::Windows::Forms::PictureBox^ Pbx);
	void Square_several_green(int x, int y, int number, System::Windows::Forms::PictureBox^ Pbx);
	void Death(int x, int y, System::Windows::Forms::PictureBox^ Pbx);
	void Death_one(int x, int y, System::Windows::Forms::PictureBox^ Pbx);
};

