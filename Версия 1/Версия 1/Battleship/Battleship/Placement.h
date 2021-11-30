#pragma once
#include "Libraries.h"
#include "Connection.h"



namespace Battleship {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Placement
	/// </summary>
	public ref class Placement : public System::Windows::Forms::Form
	{
	public:
		int x;
		int y;
		int* Fleet_x;
		int* Fleet_y;
		int Float_length_COUNT_parameter;
		int* Fleet_length;
		int Fleet_length_ACCOUNT;
		int X_old;
		int Y_old;
		bool flags = false;
		Placement(void)
		{
			InitializeComponent();
			Fleet_x = new int[20];
			Fleet_y = new int[20];

			Fleet_length = new int[10]{ 4, 3, 3, 2, 2, 2 ,1, 1, 1, 1 };
		}

	protected:
		~Placement()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ Quantity_4;
	protected:
	private: System::Windows::Forms::Label^ Quantity_3;
	private: System::Windows::Forms::Label^ Quantity_2;
	private: System::Windows::Forms::Label^ Quantity_1;
	private: System::Windows::Forms::Button^ Continue_The_Game;
	private: System::Windows::Forms::Label^ Watchdog_Name;
	private: System::Windows::Forms::PictureBox^ Watchdog;
	private: System::Windows::Forms::Label^ Patrol_Name;
	private: System::Windows::Forms::PictureBox^ Patrol;
	private: System::Windows::Forms::Label^ Landing_Ship_Name;
	private: System::Windows::Forms::PictureBox^ Landing_Ship;
	private: System::Windows::Forms::Label^ Battleship_Name;
	private: System::Windows::Forms::PictureBox^ Battleship;
	private: System::Windows::Forms::PictureBox^ My_Field;
	private: System::Windows::Forms::Button^ Start;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Placement::typeid));
			this->Quantity_4 = (gcnew System::Windows::Forms::Label());
			this->Quantity_3 = (gcnew System::Windows::Forms::Label());
			this->Quantity_2 = (gcnew System::Windows::Forms::Label());
			this->Quantity_1 = (gcnew System::Windows::Forms::Label());
			this->Continue_The_Game = (gcnew System::Windows::Forms::Button());
			this->Watchdog_Name = (gcnew System::Windows::Forms::Label());
			this->Watchdog = (gcnew System::Windows::Forms::PictureBox());
			this->Patrol_Name = (gcnew System::Windows::Forms::Label());
			this->Patrol = (gcnew System::Windows::Forms::PictureBox());
			this->Landing_Ship_Name = (gcnew System::Windows::Forms::Label());
			this->Landing_Ship = (gcnew System::Windows::Forms::PictureBox());
			this->Battleship_Name = (gcnew System::Windows::Forms::Label());
			this->Battleship = (gcnew System::Windows::Forms::PictureBox());
			this->My_Field = (gcnew System::Windows::Forms::PictureBox());
			this->Start = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Watchdog))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Patrol))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Landing_Ship))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Battleship))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->My_Field))->BeginInit();
			this->SuspendLayout();
			// 
			// Quantity_4
			// 
			this->Quantity_4->AutoSize = true;
			this->Quantity_4->Location = System::Drawing::Point(322, 304);
			this->Quantity_4->Name = L"Quantity_4";
			this->Quantity_4->Size = System::Drawing::Size(13, 13);
			this->Quantity_4->TabIndex = 29;
			this->Quantity_4->Text = L"4";
			this->Quantity_4->Visible = false;
			// 
			// Quantity_3
			// 
			this->Quantity_3->AutoSize = true;
			this->Quantity_3->Location = System::Drawing::Point(322, 211);
			this->Quantity_3->Name = L"Quantity_3";
			this->Quantity_3->Size = System::Drawing::Size(13, 13);
			this->Quantity_3->TabIndex = 28;
			this->Quantity_3->Text = L"3";
			this->Quantity_3->Visible = false;
			// 
			// Quantity_2
			// 
			this->Quantity_2->AutoSize = true;
			this->Quantity_2->Location = System::Drawing::Point(322, 121);
			this->Quantity_2->Name = L"Quantity_2";
			this->Quantity_2->Size = System::Drawing::Size(13, 13);
			this->Quantity_2->TabIndex = 27;
			this->Quantity_2->Text = L"2";
			this->Quantity_2->Visible = false;
			// 
			// Quantity_1
			// 
			this->Quantity_1->AutoSize = true;
			this->Quantity_1->Location = System::Drawing::Point(322, 37);
			this->Quantity_1->Name = L"Quantity_1";
			this->Quantity_1->Size = System::Drawing::Size(13, 13);
			this->Quantity_1->TabIndex = 26;
			this->Quantity_1->Text = L"1";
			this->Quantity_1->Visible = false;
			// 
			// Continue_The_Game
			// 
			this->Continue_The_Game->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->Continue_The_Game->Location = System::Drawing::Point(12, 390);
			this->Continue_The_Game->Name = L"Continue_The_Game";
			this->Continue_The_Game->Size = System::Drawing::Size(323, 172);
			this->Continue_The_Game->TabIndex = 25;
			this->Continue_The_Game->Text = L"Продолжить.";
			this->Continue_The_Game->UseVisualStyleBackColor = true;
			this->Continue_The_Game->Visible = false;
			this->Continue_The_Game->Click += gcnew System::EventHandler(this, &Placement::Continue_The_Game_Click);
			// 
			// Watchdog_Name
			// 
			this->Watchdog_Name->AutoSize = true;
			this->Watchdog_Name->Location = System::Drawing::Point(12, 304);
			this->Watchdog_Name->Name = L"Watchdog_Name";
			this->Watchdog_Name->Size = System::Drawing::Size(74, 13);
			this->Watchdog_Name->TabIndex = 24;
			this->Watchdog_Name->Text = L"Стороживые.";
			this->Watchdog_Name->Visible = false;
			// 
			// Watchdog
			// 
			this->Watchdog->Location = System::Drawing::Point(12, 320);
			this->Watchdog->Name = L"Watchdog";
			this->Watchdog->Size = System::Drawing::Size(323, 50);
			this->Watchdog->TabIndex = 23;
			this->Watchdog->TabStop = false;
			// 
			// Patrol_Name
			// 
			this->Patrol_Name->AutoSize = true;
			this->Patrol_Name->Location = System::Drawing::Point(12, 211);
			this->Patrol_Name->Name = L"Patrol_Name";
			this->Patrol_Name->Size = System::Drawing::Size(72, 13);
			this->Patrol_Name->TabIndex = 22;
			this->Patrol_Name->Text = L"Потрульные.";
			this->Patrol_Name->Visible = false;
			// 
			// Patrol
			// 
			this->Patrol->Location = System::Drawing::Point(12, 227);
			this->Patrol->Name = L"Patrol";
			this->Patrol->Size = System::Drawing::Size(323, 50);
			this->Patrol->TabIndex = 21;
			this->Patrol->TabStop = false;
			// 
			// Landing_Ship_Name
			// 
			this->Landing_Ship_Name->AutoSize = true;
			this->Landing_Ship_Name->Location = System::Drawing::Point(12, 121);
			this->Landing_Ship_Name->Name = L"Landing_Ship_Name";
			this->Landing_Ship_Name->Size = System::Drawing::Size(113, 13);
			this->Landing_Ship_Name->TabIndex = 20;
			this->Landing_Ship_Name->Text = L"Дисантный корабль.";
			this->Landing_Ship_Name->Visible = false;
			// 
			// Landing_Ship
			// 
			this->Landing_Ship->Location = System::Drawing::Point(12, 137);
			this->Landing_Ship->Name = L"Landing_Ship";
			this->Landing_Ship->Size = System::Drawing::Size(323, 50);
			this->Landing_Ship->TabIndex = 19;
			this->Landing_Ship->TabStop = false;
			// 
			// Battleship_Name
			// 
			this->Battleship_Name->AutoSize = true;
			this->Battleship_Name->Location = System::Drawing::Point(12, 37);
			this->Battleship_Name->Name = L"Battleship_Name";
			this->Battleship_Name->Size = System::Drawing::Size(48, 13);
			this->Battleship_Name->TabIndex = 18;
			this->Battleship_Name->Text = L"Линкор.";
			this->Battleship_Name->Visible = false;
			// 
			// Battleship
			// 
			this->Battleship->Location = System::Drawing::Point(12, 53);
			this->Battleship->Name = L"Battleship";
			this->Battleship->Size = System::Drawing::Size(323, 50);
			this->Battleship->TabIndex = 17;
			this->Battleship->TabStop = false;
			this->Battleship->Visible = false;
			// 
			// My_Field
			// 
			this->My_Field->Location = System::Drawing::Point(341, 40);
			this->My_Field->Name = L"My_Field";
			this->My_Field->Size = System::Drawing::Size(523, 523);
			this->My_Field->TabIndex = 16;
			this->My_Field->TabStop = false;
			this->My_Field->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Placement::My_Field_MouseDoubleClick);
			this->My_Field->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Placement::My_Field_MouseMove);
			// 
			// Start
			// 
			this->Start->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 72, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Start->Location = System::Drawing::Point(12, 12);
			this->Start->Name = L"Start";
			this->Start->Size = System::Drawing::Size(852, 22);
			this->Start->TabIndex = 15;
			this->Start->Text = L"Новая игра.";
			this->Start->UseVisualStyleBackColor = true;
			this->Start->Click += gcnew System::EventHandler(this, &Placement::Start_Click);
			// 
			// Placement
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ClientSize = System::Drawing::Size(876, 574);
			this->Controls->Add(this->Quantity_4);
			this->Controls->Add(this->Quantity_3);
			this->Controls->Add(this->Quantity_2);
			this->Controls->Add(this->Quantity_1);
			this->Controls->Add(this->Continue_The_Game);
			this->Controls->Add(this->Watchdog_Name);
			this->Controls->Add(this->Watchdog);
			this->Controls->Add(this->Patrol_Name);
			this->Controls->Add(this->Patrol);
			this->Controls->Add(this->Landing_Ship_Name);
			this->Controls->Add(this->Landing_Ship);
			this->Controls->Add(this->Battleship_Name);
			this->Controls->Add(this->Battleship);
			this->Controls->Add(this->My_Field);
			this->Controls->Add(this->Start);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Placement";
			this->Text = L"Морской бой.";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Watchdog))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Patrol))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Landing_Ship))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Battleship))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->My_Field))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Start_Click(System::Object^ sender, System::EventArgs^ e) {
		Start->Visible = false;

		My_Field->Visible = true;
		Battleship->Visible = true;
		Battleship_Name->Visible = true;
		Landing_Ship->Visible = true;
		Landing_Ship_Name->Visible = true;
		Patrol_Name->Visible = true;
		Patrol->Visible = true;
		Watchdog_Name->Visible = true;
		Watchdog->Visible = true;
		Continue_The_Game->Visible = true;
		Quantity_1->Visible = true;
		Quantity_2->Visible = true;
		Quantity_3->Visible = true;
		Quantity_4->Visible = true;


		Battleship->Image = Image::FromFile(Application::StartupPath + "\\Линкор.PNG");
		Landing_Ship->Image = Image::FromFile(Application::StartupPath + "\\Дисантный_корабль.PNG");
		Patrol->Image = Image::FromFile(Application::StartupPath + "\\Потрульный.PNG");
		Watchdog->Image = Image::FromFile(Application::StartupPath + "\\Сторожевой.PNG");


		Graphics^ g = My_Field->CreateGraphics();
		Pen^ p = gcnew Pen(Color::Blue, 2.0f);
		Pen^ p1 = gcnew Pen(Color::Red, 0.5f);

		for (int i = 0; i < My_Field->Width / 10; i++)
		{
			g->DrawLine(p, Point(i * My_Field->Width / 10, 0), Point(i * My_Field->Width / 10, My_Field->Height));
		}
		for (int i = 0; i < My_Field->Height / 10; i++)
		{
			g->DrawLine(p, Point(0, i * My_Field->Height / 10), Point(My_Field->Width, i * My_Field->Height / 10));
		}
		flags = true;
		X_old = (int)(My_Field->Width / 10) + My_Field->Width;
		Y_old = (int)(My_Field->Height / 10) + My_Field->Height;
	}
	private: System::Void My_Field_MouseDoubleClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {

		if ((Fleet_length_ACCOUNT <= 10) && flags)
		{

			int x = X_old;
			for (int i = 0; i < Fleet_length[Fleet_length_ACCOUNT]; i++)
			{
				Fleet_x[Float_length_COUNT_parameter] = x;
				Fleet_y[Float_length_COUNT_parameter] = Y_old;
				x += My_Field->Width / 10;
				Float_length_COUNT_parameter++;
			}

			X_old = (int)(My_Field->Width / 10) + My_Field->Width;
			Y_old = (int)(My_Field->Height / 10) + My_Field->Height;
			Fleet_length_ACCOUNT++;


			switch (Fleet_length_ACCOUNT)
			{
			case 1:
				Quantity_1->Text = "0"; //1
				break;
			case 2:
				Quantity_2->Text = "1"; //2
				break;
			case 3:
				Quantity_2->Text = "0"; //2
				break;
			case 4:
				Quantity_3->Text = "2"; //3
				break;
			case 5:
				Quantity_3->Text = "1"; //3
				break;
			case 6:
				Quantity_3->Text = "0"; //3
				break;
			case 7:
				Quantity_4->Text = "3"; //4
				break;
			case 8:
				Quantity_4->Text = "2"; //4
				break;
			case 9:
				Quantity_4->Text = "1"; //4
				break;
			case 10:
				Quantity_4->Text = "0"; //4
				break;
			default:
				break;
			}

		}
	}
	private: System::Void My_Field_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {

		if ((Fleet_length_ACCOUNT <= 9) && flags)
		{
			Coordinates Coord;
			Graphic Graf;
			Permission Sort;

			bool flag = false;

			if (Coord.Trigger_X(x, My_Field->Width, e)) {
				flag = true;
				x = Coord.Coordinate_changes_X(My_Field->Width, e);
			}
			if (Coord.Trigger_Y(y, My_Field->Height, e)) {
				flag = true;
				y = Coord.Coordinate_changes_Y(My_Field->Height, e);
			}
			if (x == 0) { x = My_Field->Width / 10 / 2; }
			if (y == 0) { y = My_Field->Width / 10 / 2; }
			if (flag && Sort.Field_permissions(x, y, (int)(My_Field->Width / 10), (int)(My_Field->Height / 10), Fleet_length[Fleet_length_ACCOUNT], Fleet_x, Fleet_y, true))
			{
				Graf.Square_several_white(X_old, Y_old, Fleet_length[Fleet_length_ACCOUNT], Battleship::Placement::My_Field);
				Graf.Square_several_black(x, y, Fleet_length[Fleet_length_ACCOUNT], Battleship::Placement::My_Field);
				X_old = x;
				Y_old = y;
			}
		}
		else if (flags)
		{
			this->Cursor = System::Windows::Forms::Cursors::No;
		}
	}
	private: System::Void Continue_The_Game_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Fleet_length_ACCOUNT > 9)
		{
			for (int i = 0; i < 20; i++)
			{
				int a = Fleet_x[i];
				int b = Fleet_y[i];
			}
			Connection^ form = gcnew Connection(Fleet_x, Fleet_y);
			form->Show();
			this->Hide();
			delete[] Fleet_x;
			delete[] Fleet_y;
			delete[] Fleet_length;
		}
	}
	};
}
