#pragma once
#include "Libraries.h";
#pragma comment(lib, "ws2_32.lib")
#pragma warning(disable: 4996)

using namespace std;


namespace Battleship {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Game
	/// </summary>
	public ref class Game : public System::Windows::Forms::Form
	{
	public:
		int* Fleet_x;
		int* Fleet_y;
		bool* Fleet;
		int* Fleet_x_mines;
		int* Fleet_y_mines;
		SOCKET Connection;
		int x;
		int y;
		int X_old;
		int Y_old;
		int mines;
		bool flag;
		bool flag_messeg;
		int ships;
	public:
		Game(int Fleet_x_copy[20], int Fleet_y_copy[20], SOCKET soc_copy, bool f1)
		{
			InitializeComponent();
			Fleet_x = new int[20];
			Fleet_y = new int[20];
			Fleet = new bool[20];
			Fleet_x_mines = new int[200];
			Fleet_y_mines = new int[200];
			Connection = soc_copy;

			if (f1) { flag_messeg = true; }
			else { flag_messeg = false; }

			for (int i = 0; i < 20; i++)
			{
				Fleet_x[i] = Fleet_x_copy[i];
				Fleet_y[i] = Fleet_y_copy[i];
				Fleet[i] = false;
			}

			u_long iMode = 1;
			ioctlsocket(Connection, FIONBIO, &iMode);

			Signal = gcnew Timer();
			Signal->Interval = 10;
			Signal->Tick += gcnew EventHandler(this, &Game::Signal_Tick);
			Signal->Enabled = true;
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Game()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Start;
	protected:
	private: System::Windows::Forms::PictureBox^ Enemy_field;
	private: System::Windows::Forms::PictureBox^ My_field;
	private: System::Windows::Forms::Timer^ Signal;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Game::typeid));
			this->Start = (gcnew System::Windows::Forms::Button());
			this->Enemy_field = (gcnew System::Windows::Forms::PictureBox());
			this->My_field = (gcnew System::Windows::Forms::PictureBox());
			this->Signal = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Enemy_field))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->My_field))->BeginInit();
			this->SuspendLayout();
			// 
			// Start
			// 
			this->Start->Cursor = System::Windows::Forms::Cursors::Cross;
			this->Start->Location = System::Drawing::Point(10, 27);
			this->Start->Name = L"Start";
			this->Start->Size = System::Drawing::Size(1052, 23);
			this->Start->TabIndex = 8;
			this->Start->Text = L"Начать";
			this->Start->UseVisualStyleBackColor = true;
			this->Start->Click += gcnew System::EventHandler(this, &Game::Start_Click);
			// 
			// Enemy_field
			// 
			this->Enemy_field->Location = System::Drawing::Point(539, 56);
			this->Enemy_field->Name = L"Enemy_field";
			this->Enemy_field->Size = System::Drawing::Size(523, 523);
			this->Enemy_field->TabIndex = 7;
			this->Enemy_field->TabStop = false;
			this->Enemy_field->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Game::Enemy_field_MouseDoubleClick);
			this->Enemy_field->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Game::Enemy_field_MouseMove);
			// 
			// My_field
			// 
			this->My_field->Location = System::Drawing::Point(10, 56);
			this->My_field->Name = L"My_field";
			this->My_field->Size = System::Drawing::Size(523, 523);
			this->My_field->TabIndex = 6;
			this->My_field->TabStop = false;
			// 
			// Signal
			// 
			this->Signal->Tick += gcnew System::EventHandler(this, &Game::Signal_Tick);
			// 
			// Game
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1073, 606);
			this->Controls->Add(this->Start);
			this->Controls->Add(this->Enemy_field);
			this->Controls->Add(this->My_field);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Game";
			this->Text = L"The_game";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Enemy_field))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->My_field))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Start_Click(System::Object^ sender, System::EventArgs^ e) {



		Graphics^ g1 = My_field->CreateGraphics();
		Graphics^ g2 = Enemy_field->CreateGraphics();
		Pen^ p = gcnew Pen(Color::Blue, 2.0f);
		SolidBrush^ Black = gcnew SolidBrush(Color::Black);
		Graphic Graf;

		for (int i = 0; i < Enemy_field->Width / 10; i++)
		{
			g1->DrawLine(p, Point(i * My_field->Width / 10, 0), Point(i * My_field->Width / 10, My_field->Height));
			g2->DrawLine(p, Point(i * Enemy_field->Width / 10, 0), Point(i * Enemy_field->Width / 10, Enemy_field->Height));

		}
		for (int i = 0; i < Enemy_field->Height / 10; i++)
		{
			g1->DrawLine(p, Point(0, i * My_field->Height / 10), Point(Enemy_field->Width, i * My_field->Height / 10));
			g2->DrawLine(p, Point(0, i * Enemy_field->Height / 10), Point(Enemy_field->Width, i * Enemy_field->Height / 10));
		}
		for (int i = 0; i < 20; i++)
		{
			Graf.Square_several_black(Fleet_x[i], Fleet_y[i], 1, Battleship::Game::My_field);
		}

		X_old = (int)(Enemy_field->Width / 10) + Enemy_field->Width;
		Y_old = (int)(Enemy_field->Height / 10) + Enemy_field->Height;

		flag = true;
	}

		   void Shooting(char* msg) {

			   Graphic Graf;
			   Permission allowed;
			   Sockaddr recording;


			   int X = recording.Unloading_from_an_array_x(msg);
			   int Y = recording.Unloading_from_an_array_y(msg);

			   Graf.Square_several_red(X, Y, 1, Battleship::Game::My_field);

			   flag_messeg = true;

			   for (int i = 0; i < 20; i++)
			   {
				   if (allowed.Flag(X, Fleet_x[i], 5) && allowed.Flag(Y, Fleet_y[i], 5))
				   {
					   Fleet[i] = true;
					   Graf.Death_one(X, Y, Battleship::Game::My_field);
					   char* Messeg = recording.Writing_to_the_send_array(X, Y);
					   Messeg[3] = '%';
					   send(Connection, Messeg, 10, NULL);
					   flag_messeg = false;
				   }
			   }

			   if (flag_messeg == false)
			   {

				   int Nose = -1;
				   int My_number = -1;
				   for (int i = 0; i < 20; i++)
				   {
					   int leng = sqrt(pow(X - Fleet_x[i], 2) + pow(Y - Fleet_y[i], 2));
					   if (allowed.Flag(leng, 0, 5)) { Nose = i; My_number = i; break; }
				   }

				   while (true)
				   {
					   Nose -= 1;
					   int leng = sqrt(pow(Fleet_x[My_number] - Fleet_x[Nose], 2) + pow(Fleet_y[My_number] - Fleet_y[Nose], 2));
					   if (allowed.Flag(leng, 52, 5)) { My_number = Nose; }
					   else { break; }
				   }

				   Nose = My_number;
				   int Times = My_number;
				   int Destroyed = 0;
				   int Whole = 0;

				   while (true)
				   {
					   Whole++;
					   My_number += 1;
					   int leng = sqrt(pow(Fleet_x[My_number] - Fleet_x[Nose], 2) + pow(Fleet_y[My_number] - Fleet_y[Nose], 2));

					   if (Fleet[Nose]) { Destroyed++; }

					   Nose = My_number;

					   if (allowed.Flag(leng, 52, 5) == false) { break; }
				   }


				   Nose = Times;
				   My_number = Times;

				   if (Destroyed == Whole)
				   {
					   while (true)
					   {
						   My_number += 1;
						   int leng = sqrt(pow(Fleet_x[My_number] - Fleet_x[Nose], 2) + pow(Fleet_y[My_number] - Fleet_y[Nose], 2));

						   Graf.Death(Fleet_x[Nose], Fleet_y[Nose], Battleship::Game::My_field);

						   char* Messeg = recording.Writing_to_the_send_array(Fleet_x[Nose], Fleet_y[Nose]);
						   Messeg[3] = '$';
						   send(Connection, Messeg, 10, NULL);

						   if (allowed.Flag(leng, 52, 5) == false) { ships++; break; }

						   Nose = My_number;

					   }
				   }



			   }

		   }

		   void Hit(char* msg) {
			   Sockaddr recording;
			   Graphic Graf;

			   flag_messeg = true;
			   Graf.Death_one(recording.Unloading_from_an_array_x(msg), recording.Unloading_from_an_array_y(msg), Battleship::Game::Enemy_field);
		   }

		   void Murder(char* msg) {
			   Sockaddr recording;
			   Graphic Graf;

			   int xx = recording.Unloading_from_an_array_x(msg);
			   int yy = recording.Unloading_from_an_array_y(msg);

			   Graf.Death(xx, recording.Unloading_from_an_array_y(msg), Battleship::Game::Enemy_field);

			   for (int i = xx - Enemy_field->Width / 10; i < xx + Enemy_field->Width / 10 * 2; i += Enemy_field->Width / 10)
			   {
				   for (int j = yy - Enemy_field->Height / 10; j < yy + Enemy_field->Height / 10 * 2; j += Enemy_field->Height / 10)
				   {
					   Fleet_x_mines[mines] = i;
					   Fleet_y_mines[mines] = j;
					   mines++;
				   }
			   }
		   }

		   void Winning(char* msg) {
			   Victory^ form = gcnew Victory();
			   form->Show();
			   this->Hide();
		   }

	private: System::Void Signal_Tick(System::Object^ sender, System::EventArgs^ e) {

		Graphic Graf;
		Permission dd;
		Sockaddr recording;

		char* msg = new char[255];

		recv(Connection, msg, 10, NULL);

		switch (msg[3])
		{
		case '&':
			Shooting(msg);
			break;
		case '%':
			Hit(msg);
			break;
		case '$':
			Murder(msg);
			break;
		case '*':
			Winning(msg);
			break;
		default:
			break;
		}

		if (ships == 10)
		{
			char* Messeg = recording.Writing_to_the_send_array(0, 0);
			Messeg[3] = '*';
			send(Connection, Messeg, 10, NULL);
			Defeat^ form = gcnew Defeat();
			form->Show();
			this->Hide();
			ships = 11;
		}




	}
	private: System::Void Enemy_field_MouseDoubleClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {

		if (flag_messeg && flag) {

			Graphic Graf;
			Sockaddr recording;
			Graf.Square_several_red(X_old, Y_old, 1, Battleship::Game::Enemy_field);

			Fleet_x_mines[mines] = X_old;
			Fleet_y_mines[mines] = Y_old;

			mines++;

			send(Connection, recording.Writing_to_the_send_array(X_old, Y_old), 10, NULL);

			X_old = (int)(Enemy_field->Width / 10) + Enemy_field->Width;
			Y_old = (int)(Enemy_field->Height / 10) + Enemy_field->Height;

			flag_messeg = false;
		}
	}
	private: System::Void Enemy_field_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (flag) {
			Coordinates Coord;
			Graphic Graf;
			Permission Sort;

			if (Coord.Trigger_X(x, Enemy_field->Width, e)) {
				x = Coord.Coordinate_changes_X(Enemy_field->Width, e);
			}
			if (Coord.Trigger_Y(y, Enemy_field->Height, e)) {
				y = Coord.Coordinate_changes_Y(Enemy_field->Height, e);
			}
			if (x == 0) { x = Enemy_field->Width / 10 / 2; }
			if (y == 0) { y = Enemy_field->Width / 10 / 2; }

			if (Sort.Field_permissions(x, y, (int)(Enemy_field->Width / 10), (int)(Enemy_field->Height / 10), 1, Fleet_x_mines, Fleet_y_mines, false))
			{

				Graf.Square_several_white(X_old, Y_old, 1, Battleship::Game::Enemy_field);
				Graf.Square_several_green(x, y, 1, Battleship::Game::Enemy_field);
				X_old = x;
				Y_old = y;

			}
		}
	}
	};
}
