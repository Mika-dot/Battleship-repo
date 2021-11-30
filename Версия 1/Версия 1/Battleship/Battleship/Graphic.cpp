#include "Graphic.h"

#include "Libraries.h"


void Graphic::Square_several_white(int x, int y, int number, System::Windows::Forms::PictureBox^ Pbx) {
	Graphics^ g = Pbx->CreateGraphics();
	SolidBrush^ White = gcnew SolidBrush(Color::White);
	for (int i = 0; i < number; i++)
	{
		g->FillRectangle(White, i * Pbx->Width / 10 + x - Pbx->Width / 10 / 2 + 2.0f, y - Pbx->Height / 10 / 2 + 2.0f, Pbx->Width / 10 - 4.0f, Pbx->Height / 10 - 4.0f);
	}

}

void Graphic::Square_several_black(int x, int y, int number, System::Windows::Forms::PictureBox^ Pbx) {
	Graphics^ g = Pbx->CreateGraphics();
	SolidBrush^ Black = gcnew SolidBrush(Color::Black);
	for (int i = 0; i < number; i++)
	{
		g->FillRectangle(Black, i * Pbx->Width / 10 + x - Pbx->Width / 10 / 2 + 2.0f, y - Pbx->Height / 10 / 2 + 2.0f, Pbx->Width / 10 - 4.0f, Pbx->Height / 10 - 4.0f);
	}

}

void Graphic::Square_several_red(int x, int y, int number, System::Windows::Forms::PictureBox^ Pbx) {
	Graphics^ g = Pbx->CreateGraphics();
	SolidBrush^ Red = gcnew SolidBrush(Color::Red);
	for (int i = 0; i < number; i++)
	{
		g->FillRectangle(Red, i * Pbx->Width / 10 + x - Pbx->Width / 10 / 2 + 2.0f, y - Pbx->Height / 10 / 2 + 2.0f, Pbx->Width / 10 - 4.0f, Pbx->Height / 10 - 4.0f);
	}

}

void Graphic::Square_several_green(int x, int y, int number, System::Windows::Forms::PictureBox^ Pbx) {
	Graphics^ g = Pbx->CreateGraphics();
	SolidBrush^ Green = gcnew SolidBrush(Color::Green);
	for (int i = 0; i < number; i++)
	{
		g->FillRectangle(Green, i * Pbx->Width / 10 + x - Pbx->Width / 10 / 2 + 2.0f, y - Pbx->Height / 10 / 2 + 2.0f, Pbx->Width / 10 - 4.0f, Pbx->Height / 10 - 4.0f);
	}

}

void Graphic::Death(int x, int y, System::Windows::Forms::PictureBox^ Pbx) {
	Graphics^ g = Pbx->CreateGraphics();
	SolidBrush^ Orange = gcnew SolidBrush(Color::Orange);

	for (int i = x - Pbx->Width / 10; i < x + Pbx->Width / 10 * 2; i += Pbx->Width / 10)
	{
		for (int j = y - Pbx->Height / 10; j < y + Pbx->Height / 10 * 2; j += Pbx->Height / 10)
		{
			g->FillRectangle(Orange, i - Pbx->Width / 10 / 2 + 2.0f, j - Pbx->Height / 10 / 2 + 2.0f, Pbx->Width / 10 - 4.0f, Pbx->Height / 10 - 4.0f);
		}
	}


}

void Graphic::Death_one(int x, int y, System::Windows::Forms::PictureBox^ Pbx) {
	Graphics^ g = Pbx->CreateGraphics();
	SolidBrush^ Blue = gcnew SolidBrush(Color::Blue);

	g->FillRectangle(Blue, x - Pbx->Width / 10 / 2 + 2.0f, y - Pbx->Height / 10 / 2 + 2.0f, Pbx->Width / 10 - 4.0f, Pbx->Height / 10 - 4.0f);


}