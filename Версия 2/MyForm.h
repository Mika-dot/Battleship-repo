#pragma once
#include <cstdio>
#include "Game.h"
#include <windows.h>
#include <iostream>
#include <sstream>
#include <string>
#include <fstream>
#define HIDE_ENEMY_CELLS true

namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::Label^ label32;
	private: System::Windows::Forms::Label^ label33;
	private: System::Windows::Forms::Label^ label34;
	private: System::Windows::Forms::Label^ label35;
	private: System::Windows::Forms::Label^ label36;
	private: System::Windows::Forms::Label^ label37;
	private: System::Windows::Forms::Label^ label38;
	private: System::Windows::Forms::Label^ label39;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::PictureBox^ pictureBox5;






	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->panel1->Location = System::Drawing::Point(200, 50);
			this->panel1->Margin = System::Windows::Forms::Padding(2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(400, 400);
			this->panel1->TabIndex = 0;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
			this->panel1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::panel1_MouseClick);
			this->panel1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::panel1_MouseMove);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(5, 18);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(123, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Стать сервером";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(5, 167);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(123, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Начать с ботом";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::PowderBlue;
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Location = System::Drawing::Point(10, 253);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(180, 99);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Статистика";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(118, 70);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(13, 13);
			this->label9->TabIndex = 5;
			this->label9->Text = L"0";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(118, 48);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(13, 13);
			this->label8->TabIndex = 4;
			this->label8->Text = L"0";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(118, 26);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(13, 13);
			this->label7->TabIndex = 3;
			this->label7->Text = L"0";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(8, 70);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(37, 13);
			this->label6->TabIndex = 2;
			this->label6->Text = L"Всего";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(8, 48);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(62, 13);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Проиграно";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(8, 26);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(57, 13);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Выиграно";
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::PowderBlue;
			this->groupBox2->Controls->Add(this->label13);
			this->groupBox2->Controls->Add(this->label12);
			this->groupBox2->Controls->Add(this->label11);
			this->groupBox2->Controls->Add(this->label10);
			this->groupBox2->Controls->Add(this->pictureBox4);
			this->groupBox2->Controls->Add(this->pictureBox3);
			this->groupBox2->Controls->Add(this->pictureBox2);
			this->groupBox2->Controls->Add(this->pictureBox1);
			this->groupBox2->Controls->Add(this->button6);
			this->groupBox2->Controls->Add(this->button4);
			this->groupBox2->Controls->Add(this->button3);
			this->groupBox2->Location = System::Drawing::Point(10, 358);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(180, 232);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Поле";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(37, 118);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(19, 13);
			this->label13->TabIndex = 10;
			this->label13->Text = L"(4)";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(87, 179);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(19, 13);
			this->label12->TabIndex = 9;
			this->label12->Text = L"(2)";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(62, 149);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(19, 13);
			this->label11->TabIndex = 8;
			this->label11->Text = L"(3)";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(118, 210);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(19, 13);
			this->label10->TabIndex = 6;
			this->label10->Text = L"(1)";
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::White;
			this->pictureBox4->Location = System::Drawing::Point(6, 198);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(100, 25);
			this->pictureBox4->TabIndex = 7;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &MyForm::pictureBox4_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::White;
			this->pictureBox3->Location = System::Drawing::Point(6, 167);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(75, 25);
			this->pictureBox3->TabIndex = 6;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &MyForm::pictureBox3_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::White;
			this->pictureBox2->Location = System::Drawing::Point(6, 137);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(50, 25);
			this->pictureBox2->TabIndex = 5;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &MyForm::pictureBox2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::White;
			this->pictureBox1->Location = System::Drawing::Point(6, 106);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(25, 25);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(6, 77);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(123, 23);
			this->button6->TabIndex = 6;
			this->button6->Text = L"Из файла";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(6, 48);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(123, 23);
			this->button4->TabIndex = 5;
			this->button4->Text = L"Случайно";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(6, 19);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(123, 23);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Очистить";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(159, 223);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(31, 23);
			this->button5->TabIndex = 1;
			this->button5->Text = L"\?";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::White;
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->panel2->Location = System::Drawing::Point(628, 50);
			this->panel2->Margin = System::Windows::Forms::Padding(2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(400, 400);
			this->panel2->TabIndex = 1;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel2_Paint);
			this->panel2->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::panel2_MouseClick);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::RoyalBlue;
			this->label2->Location = System::Drawing::Point(533, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(70, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Ваше поле";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::Red;
			this->label3->Location = System::Drawing::Point(626, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(75, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Поле врага";
			// 
			// label14
			// 
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->ForeColor = System::Drawing::Color::Silver;
			this->label14->Location = System::Drawing::Point(196, 486);
			this->label14->Name = L"label14";
			this->label14->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label14->Size = System::Drawing::Size(161, 13);
			this->label14->TabIndex = 7;
			this->label14->Text = L"Никто не ходит";
			// 
			// button7
			// 
			this->button7->Enabled = false;
			this->button7->ForeColor = System::Drawing::Color::Red;
			this->button7->Location = System::Drawing::Point(10, 223);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(106, 23);
			this->button7->TabIndex = 3;
			this->button7->Text = L"Сдаться и выйти";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(197, 464);
			this->label1->Name = L"label1";
			this->label1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label1->Size = System::Drawing::Size(330, 13);
			this->label1->TabIndex = 8;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(5, 47);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(123, 23);
			this->button8->TabIndex = 9;
			this->button8->Text = L"Подключиться";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::Color::PowderBlue;
			this->groupBox3->Controls->Add(this->label17);
			this->groupBox3->Controls->Add(this->button9);
			this->groupBox3->Controls->Add(this->label16);
			this->groupBox3->Controls->Add(this->textBox2);
			this->groupBox3->Controls->Add(this->textBox1);
			this->groupBox3->Controls->Add(this->label15);
			this->groupBox3->Controls->Add(this->button1);
			this->groupBox3->Controls->Add(this->button8);
			this->groupBox3->Controls->Add(this->button2);
			this->groupBox3->Location = System::Drawing::Point(10, 23);
			this->groupBox3->Margin = System::Windows::Forms::Padding(2);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Padding = System::Windows::Forms::Padding(2);
			this->groupBox3->Size = System::Drawing::Size(180, 195);
			this->groupBox3->TabIndex = 10;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Играть";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::Color::Transparent;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label17->ForeColor = System::Drawing::Color::Black;
			this->label17->Location = System::Drawing::Point(4, 120);
			this->label17->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(113, 13);
			this->label17->TabIndex = 13;
			this->label17->Text = L"Статус соединения...";
			// 
			// button9
			// 
			this->button9->Enabled = false;
			this->button9->Location = System::Drawing::Point(5, 137);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(123, 23);
			this->button9->TabIndex = 12;
			this->button9->Text = L"Отключиться";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(4, 101);
			this->label16->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(29, 13);
			this->label16->TabIndex = 11;
			this->label16->Text = L"Port:";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(89, 98);
			this->textBox2->Margin = System::Windows::Forms::Padding(2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(79, 20);
			this->textBox2->TabIndex = 10;
			this->textBox2->Text = L"8888";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(28, 76);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(140, 20);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"127.0.0.1";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(6, 78);
			this->label15->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(20, 13);
			this->label15->TabIndex = 0;
			this->label15->Text = L"IP:";
			// 
			// label18
			// 
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label18->ForeColor = System::Drawing::Color::Black;
			this->label18->Location = System::Drawing::Point(199, 508);
			this->label18->Name = L"label18";
			this->label18->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label18->Size = System::Drawing::Size(289, 59);
			this->label18->TabIndex = 11;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(213, 34);
			this->label19->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(14, 13);
			this->label19->TabIndex = 12;
			this->label19->Text = L"A";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(254, 34);
			this->label20->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(14, 13);
			this->label20->TabIndex = 13;
			this->label20->Text = L"B";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(294, 34);
			this->label21->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(14, 13);
			this->label21->TabIndex = 14;
			this->label21->Text = L"C";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(335, 34);
			this->label22->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(15, 13);
			this->label22->TabIndex = 15;
			this->label22->Text = L"D";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(373, 34);
			this->label23->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(14, 13);
			this->label23->TabIndex = 16;
			this->label23->Text = L"E";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(415, 34);
			this->label24->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(13, 13);
			this->label24->TabIndex = 17;
			this->label24->Text = L"F";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(451, 34);
			this->label25->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(15, 13);
			this->label25->TabIndex = 18;
			this->label25->Text = L"G";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(492, 34);
			this->label26->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(15, 13);
			this->label26->TabIndex = 19;
			this->label26->Text = L"H";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(533, 34);
			this->label27->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(10, 13);
			this->label27->TabIndex = 20;
			this->label27->Text = L"I";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(571, 34);
			this->label28->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(12, 13);
			this->label28->TabIndex = 21;
			this->label28->Text = L"J";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(1003, 34);
			this->label29->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(12, 13);
			this->label29->TabIndex = 31;
			this->label29->Text = L"J";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(965, 34);
			this->label30->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(10, 13);
			this->label30->TabIndex = 30;
			this->label30->Text = L"I";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(924, 34);
			this->label31->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(15, 13);
			this->label31->TabIndex = 29;
			this->label31->Text = L"H";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(883, 34);
			this->label32->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(15, 13);
			this->label32->TabIndex = 28;
			this->label32->Text = L"G";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(847, 34);
			this->label33->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(13, 13);
			this->label33->TabIndex = 27;
			this->label33->Text = L"F";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Location = System::Drawing::Point(805, 34);
			this->label34->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(14, 13);
			this->label34->TabIndex = 26;
			this->label34->Text = L"E";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Location = System::Drawing::Point(767, 34);
			this->label35->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(15, 13);
			this->label35->TabIndex = 25;
			this->label35->Text = L"D";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Location = System::Drawing::Point(726, 34);
			this->label36->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(14, 13);
			this->label36->TabIndex = 24;
			this->label36->Text = L"C";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Location = System::Drawing::Point(686, 34);
			this->label37->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(14, 13);
			this->label37->TabIndex = 23;
			this->label37->Text = L"B";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Location = System::Drawing::Point(645, 34);
			this->label38->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(14, 13);
			this->label38->TabIndex = 22;
			this->label38->Text = L"A";
			// 
			// label39
			// 
			this->label39->Location = System::Drawing::Point(604, 66);
			this->label39->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(20, 389);
			this->label39->TabIndex = 32;
			this->label39->Text = L"1             2             3             4             5             6          "
				L"   7             8             9             10";
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::Lime;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->Location = System::Drawing::Point(122, 224);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(31, 23);
			this->button10->TabIndex = 33;
			this->button10->Text = L"Vol";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.InitialImage")));
			this->pictureBox5->Location = System::Drawing::Point(509, 507);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(528, 94);
			this->pictureBox5->TabIndex = 34;
			this->pictureBox5->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1038, 601);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->label39);
			this->Controls->Add(this->label29);
			this->Controls->Add(this->label30);
			this->Controls->Add(this->label31);
			this->Controls->Add(this->label32);
			this->Controls->Add(this->label33);
			this->Controls->Add(this->label34);
			this->Controls->Add(this->label35);
			this->Controls->Add(this->label36);
			this->Controls->Add(this->label37);
			this->Controls->Add(this->label38);
			this->Controls->Add(this->label28);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->panel1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->MaximumSize = System::Drawing::Size(1054, 640);
			this->MinimumSize = System::Drawing::Size(1054, 640);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"SEA BATTLE";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyForm::MyForm_FormClosing);
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		bool IsPlaying = false, MyTurn = false;
		int* Stats = new int[3];
		Graphics ^P1, ^P2;
		Game* CurGame = new Game();
		int ShipsCount = 10, BotShipsCount = 10;

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		srand(time(0));
		struct stat buffer;
		if (stat("stats", &buffer) == 0) {
			FILE* f;
			fopen_s(&f, "stats", "rb");
			fseek(f, 0, 0);
			fread(Stats, sizeof(int), 3, f);
			fclose(f);
			UpdateStatsUI();
		}
		else {
			Stats[0] = 0;
			Stats[1] = 0;
			Stats[2] = 0;
		}
		P1 = panel1->CreateGraphics();
		P2 = panel2->CreateGraphics();
		for (int i = 0; i < 10; i++) {
			CurGame->Cells[i] = new Game::Cell[10];
			CurGame->BotCells[i] = new Game::Cell[10];
		}
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("[1 / 3]\n\nЧтобы начать игру, заполните свое игровое поле."
		+ "Вы можете заполнить его случайным образом, загрузить решение из файла,"
		+ "или же сделать это самостоятельно.", "Начало игры");
	MessageBox::Show("[2 / 3]\n\nВы можете поручить заполнение поля компьютеру,"
		+ "можете загрузить решение из файла, а можете кликнуть по иконкам кораблей"
		+ " и начать их перемещать. Чтобы повернуть корабль, нажмите ПКМ, чтобы зафиксировать"
		+ " - ЛКМ.", "Заполнение поля");
	MessageBox::Show("[3 / 3]\n\nВы можете играть против игрока, а можете играть против бота."
		+ "\n\nВыход из игры до её завершения будет засчитан, как поражение.\n\n"
		+ "Чтобы выбрать ячейку, по которой надо бить, просто кликните по ней.\n\n"
		+ "Чтобы победить, уничтожьте все корабли противника.", "Правила игры");
}
	private: System::Void MyForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	if (IsPlaying) {
		if (MessageBox::Show("Вы сейчас играете. Выход будет считаться поражением.", "Точно выйти?", MessageBoxButtons::YesNo, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::No)
		{
			e->Cancel = true;
			return;
		}
		else {
			Stats[1]++;
			Stats[2]++;
			SaveStats();
		}
		CurGame->CloseNET();
	}
}

	void SaveStats() {
			FILE* FileVar;
		   fopen_s(&FileVar, "stats", "wb");
		   fseek(FileVar, 0, 0);
		   fwrite(Stats, sizeof(int), 3, FileVar);
		   fclose(FileVar);
	   }
	void UpdateStatsUI() {
	String^ str = gcnew String(to_string(Stats[0]).c_str());
	label7->Text = str;
	delete str;
	str = gcnew String(to_string(Stats[1]).c_str());
	label8->Text = str;
	delete str;
	str = gcnew String(to_string(Stats[2]).c_str());
	label9->Text = str;
	delete str;
}

	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	for (int i = 0; i < 10; i++)
		for (int j = 0; j < 10; j++) DrawCell(P1, i, j, false, false);
	DrawGrid(P1);
}
	private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	for (int i = 0; i < 10; i++)
		for (int j = 0; j < 10; j++) DrawCell(P2, i, j, true, HIDE_ENEMY_CELLS);
	DrawGrid(P2);
}

	void DrawGrid(System::Drawing::Graphics^ g) {
		   Pen^ pen = gcnew Pen(Color::Gray, 0.5f);
		   for (int i = 1; i < 10; i++) {
			   Point^ pt1 = gcnew Point(i * 40, 0);
			   Point^ pt2 = gcnew Point(i * 40, 400);
			   g->DrawLine(pen, *pt1, *pt2);
			   delete pt1;
			   delete pt2;
		   }
		   for (int i = 1; i < 10; i++) {
			   Point^ pt1 = gcnew Point(0, i * 40);
			   Point^ pt2 = gcnew Point(400, i * 40);
			   g->DrawLine(pen, *pt1, *pt2);
			   delete pt1;
			   delete pt2;
		   }
		   delete pen;
	   }
	void DrawCell(System::Drawing::Graphics^ g, int X, int Y, bool IsEnemy, bool HideShips) {
		Brush^ br = gcnew SolidBrush(Color::White);
		g->FillRectangle(br, X * 40, Y * 40, 40, 40);
		delete br;
	if (IsEnemy ? CurGame->BotCells[X][Y].IsThereShip : CurGame->Cells[X][Y].IsThereShip) {
		if (!HideShips) {
			br = gcnew SolidBrush(Color::DimGray);
			g->FillRectangle(br, X * 40, Y * 40, 40, 40);
			delete br;
		}
		if (IsEnemy ? CurGame->BotCells[X][Y].Attacked : CurGame->Cells[X][Y].Attacked) {
			br = gcnew SolidBrush(Color::Red);
			g->FillRectangle(br, X * 40 + 10, Y * 40 + 10, 20, 20);
			delete br;
		}
	}
	else {
		if (IsEnemy ? CurGame->BotCells[X][Y].Attacked : CurGame->Cells[X][Y].Attacked) {
			br = gcnew SolidBrush(Color::Black);
			g->FillEllipse(br, X * 40 + 15, Y * 40 + 15, 10, 10);
			delete br;
		}
	}
}

	private: System::Void panel1_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (e->Button == System::Windows::Forms::MouseButtons::Left && CurrentChoosenShip != 10 && AllowedToStayHere) {
			CreateShip(LastX, LastY, CurrentChoosenShip + 1, VerticallyHolding);
			CurrentChoosenShip = 10;
			if (Sound) Beep(500, 200);
		}
		if (e->Button == System::Windows::Forms::MouseButtons::Right) NeedToChangeDir = true;
	}

		   // Расстановка
		   char CurrentChoosenShip = 10;
		   char Left4 = 1, Left3 = 2, Left2 = 3, Left1 = 4;
		   bool VerticallyHolding = false;
		   bool AllowedToStayHere = true;
		   bool NeedToChangeDir = false;
		   int LastX = 0, LastY = 0;

	bool CheckIfCanStayHere() {
			   bool Can = true;
			   for (int i = 0; i < CurrentChoosenShip + 1; i++) {
				   if (VerticallyHolding) {
					   if (LastY + i < 10) {
						   if (CurGame->Cells[LastX][LastY + i].IsThereShip) Can = false;
						   if (LastX - 1 >= 0 && CurGame->Cells[LastX - 1][LastY + i].IsThereShip) Can = false;
						   if (LastX + 1<= 9 && CurGame->Cells[LastX + 1][LastY + i].IsThereShip) Can = false;
					   }
					   else Can = false;
					   if (i == 0 && LastY > 0) {
						   if (CurGame->Cells[LastX][LastY - 1].IsThereShip) Can = false;
						   if (LastX - 1 >= 0 && CurGame->Cells[LastX - 1][LastY - 1].IsThereShip) Can = false;
						   if (LastX + 1<= 9 && CurGame->Cells[LastX + 1][LastY - 1].IsThereShip) Can = false;
					   }
					   if (i == CurrentChoosenShip && LastY + CurrentChoosenShip + 1<= 9) {
						   if (CurGame->Cells[LastX][LastY + CurrentChoosenShip + 1].IsThereShip) Can = false;
						   if (LastX - 1 >= 0 && CurGame->Cells[LastX - 1][LastY + CurrentChoosenShip + 1].IsThereShip) Can = false;
						   if (LastX + 1<= 9 && CurGame->Cells[LastX + 1][LastY + CurrentChoosenShip + 1].IsThereShip) Can = false;
					   }
				   }
				   else {
					   if (LastX + i < 10) {
						   if (CurGame->Cells[LastX + i][LastY].IsThereShip) Can = false;
						   if (LastY - 1 >= 0 && CurGame->Cells[LastX + i][LastY - 1].IsThereShip) Can = false;
						   if (LastY + 1<= 9 && CurGame->Cells[LastX + i][LastY + 1].IsThereShip) Can = false;
					   }
					   else Can = false;
					   if (i == 0 && LastX > 0) {
						   if (CurGame->Cells[LastX - 1][LastY].IsThereShip) Can = false;
						   if (LastY - 1 >= 0 && CurGame->Cells[LastX - 1][LastY - 1].IsThereShip) Can = false;
						   if (LastY + 1<= 9 && CurGame->Cells[LastX - 1][LastY + 1].IsThereShip) Can = false;
					   }
					   if (i == CurrentChoosenShip && LastX + CurrentChoosenShip + 1<= 9) {
						   if (CurGame->Cells[LastX + CurrentChoosenShip + 1][LastY].IsThereShip) Can = false;
						   if (LastY - 1 >= 0 && CurGame->Cells[LastX + CurrentChoosenShip + 1][LastY - 1].IsThereShip) Can = false;
						   if (LastY + 1<= 9 && CurGame->Cells[LastX + CurrentChoosenShip + 1][LastY + 1].IsThereShip) Can = false;
					   }
				   }
			   }
			   return Can;
		   }
	
	bool CheckIfCanStayHereBot(int X, int Y, int Size, bool IsVert) {
		bool Can = true;
		for (int i = 0; i < Size + 1; i++) {
			if (IsVert) {
				if (Y + i < 10) {
					if (CurGame->BotCells[X][Y + i].IsThereShip) Can = false;
					if (X - 1 >= 0 && CurGame->BotCells[X - 1][Y + i].IsThereShip) Can = false;
					if (X + 1 <= 9 && CurGame->BotCells[X + 1][Y + i].IsThereShip) Can = false;
				}
				else Can = false;
				if (i == 0 && Y > 0) {
					if (CurGame->BotCells[X][Y - 1].IsThereShip) Can = false;
					if (X - 1 >= 0 && CurGame->BotCells[X - 1][Y - 1].IsThereShip) Can = false;
					if (X + 1 <= 9 && CurGame->BotCells[X + 1][Y - 1].IsThereShip) Can = false;
				}
				if (i == Size && Y + Size + 1 <= 9) {
					if (CurGame->BotCells[X][Y + Size + 1].IsThereShip) Can = false;
					if (X - 1 >= 0 && CurGame->BotCells[X - 1][Y + Size + 1].IsThereShip) Can = false;
					if (X + 1 <= 9 && CurGame->BotCells[X + 1][Y + Size + 1].IsThereShip) Can = false;
				}
			}
			else {
				if (X + i < 10) {
					if (CurGame->BotCells[X + i][Y].IsThereShip) Can = false;
					if (Y - 1 >= 0 && CurGame->BotCells[X + i][Y - 1].IsThereShip) Can = false;
					if (Y + 1 <= 9 && CurGame->BotCells[X + i][Y + 1].IsThereShip) Can = false;
				}
				else Can = false;
				if (i == 0 && X > 0) {
					if (CurGame->BotCells[X - 1][Y].IsThereShip) Can = false;
					if (Y - 1 >= 0 && CurGame->BotCells[X - 1][Y - 1].IsThereShip) Can = false;
					if (Y + 1 <= 9 && CurGame->BotCells[X - 1][Y + 1].IsThereShip) Can = false;
				}
				if (i == Size && X + Size + 1 <= 9) {
					if (CurGame->BotCells[X + Size + 1][Y].IsThereShip) Can = false;
					if (Y - 1 >= 0 && CurGame->BotCells[X + Size + 1][Y - 1].IsThereShip) Can = false;
					if (Y + 1 <= 9 && CurGame->BotCells[X + Size + 1][Y + 1].IsThereShip) Can = false;
				}
			}
		}
		return Can;
	}

	private: System::Void panel1_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (CurrentChoosenShip != 10) {

			auto x = e->Location.X / 40;
			auto y = e->Location.Y / 40;
			if ((LastX != x || LastY != y || NeedToChangeDir) && LastX >= 0 && LastX<= 9 && LastY >= 0 && LastY<= 9) {
				for (int i = 0; i < CurrentChoosenShip + 1; i++) {
					if (VerticallyHolding) {
						if (!(LastX >= 0 && LastX<= 9 && LastY + i >= 0 && LastY + i<= 9)) continue;
						DrawCell(P1, LastX, LastY + i, false, false);
					}
					else {
						if (!(LastX + i >= 0 && LastX + i<= 9 && LastY >= 0 && LastY<= 9)) continue;
						DrawCell(P1, LastX + i, LastY, false, false);
					}
				}
			}
			LastX = x;
			LastY = y;
			if (NeedToChangeDir) {
				VerticallyHolding = !VerticallyHolding;
				NeedToChangeDir = false;
			}
			AllowedToStayHere = CheckIfCanStayHere();
			Brush^ br;
			if (AllowedToStayHere)
				br = gcnew SolidBrush(Color::Green);
			else
				br = gcnew SolidBrush(Color::Red);
			if (VerticallyHolding)
				P1->FillRectangle(br, LastX * 40, LastY * 40, 40, 40 * (CurrentChoosenShip + 1));
			else
				P1->FillRectangle(br, LastX * 40, LastY * 40, 40 * (CurrentChoosenShip + 1), 40);
			delete br;
			DrawGrid(P1);
		}
	}

private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (Left1 == 0 || CurrentChoosenShip != 10) return;
		pictureBox1->BorderStyle = BorderStyle::FixedSingle;
		CurrentChoosenShip = 0;
}
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (Left2 == 0 || CurrentChoosenShip != 10) return;
	pictureBox2->BorderStyle = BorderStyle::FixedSingle;
	CurrentChoosenShip = 1;
}
private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (Left3 == 0 || CurrentChoosenShip != 10) return;
	pictureBox3->BorderStyle = BorderStyle::FixedSingle;
	CurrentChoosenShip = 2;
}
private: System::Void pictureBox4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (Left4 == 0 || CurrentChoosenShip != 10) return;
	pictureBox4->BorderStyle = BorderStyle::FixedSingle;
	CurrentChoosenShip = 3;
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	ClearField();
}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		ClearField();
		int X, Y, S, V;
		ifstream in("pattern.txt");
		while (!in.eof()) {
			in >> X >> Y >> S >> V;
			CreateShip(X, Y, S, V == 1);
		}
		in.close();
	}

	   void ClearField() {
		   if (CurrentChoosenShip != 10) return;
		   Left1 = 4;
		   Left2 = 3;
		   Left3 = 2;
		   Left4 = 1;
		   label13->Text = "(" + Left1 + ")";
		   label11->Text = "(" + Left2 + ")";
		   label12->Text = "(" + Left3 + ")";
		   label10->Text = "(" + Left4 + ")";
		   for (int i = 0; i < 10; i++)
			   for (int j = 0; j < 10; j++) {
				   CurGame->Cells[i][j].Attacked = false;
				   CurGame->Cells[i][j].IsThereShip = false;
				   CurGame->Cells[i][j].IsMain = false;
				   DrawCell(P1, i, j, false, false);
			   }
		   DrawGrid(P1);
		}

	   void ClearBotField()
	   {
		   for (int i = 0; i < 10; i++)
			   for (int j = 0; j < 10; j++) {
				   CurGame->BotCells[i][j].Attacked = false;
				   CurGame->BotCells[i][j].IsThereShip = false;
				   CurGame->BotCells[i][j].IsMain = false;
				   DrawCell(P2, i, j, true, HIDE_ENEMY_CELLS);
			   }
		   DrawGrid(P2);
	   }

void CreateShip(int X, int Y, int Size, bool IsVertically) {
	CurGame->Cells[X][Y].IsMain = true;
	CurGame->Cells[X][Y].SizeLeft = Size;
	CurGame->Cells[X][Y].ShipSize = IsVertically ? -Size : Size;
		   for (int i = 0; i < Size; i++) {
			   if (IsVertically) {
				   if (!(X >= 0 && X<= 9 && Y + i >= 0 && Y + i<= 9)) continue;
				   CurGame->Cells[X][Y + i].IsThereShip = true;
				   CurGame->Cells[X][Y + i].MainX = X;
				   CurGame->Cells[X][Y + i].MainY = Y;
				   DrawCell(P1, X, Y + i, false, false);
			   }
			   else {
				   if (!(X + i >= 0 && X + i<= 9 && Y >= 0 && Y<= 9)) continue;
				   CurGame->Cells[X + i][Y].IsThereShip = true;
				   CurGame->Cells[X + i][Y].MainX = X;
				   CurGame->Cells[X + i][Y].MainY = Y;
				   DrawCell(P1, X + i, Y, false, false);
			   }
		   }
		   switch (Size - 1)
		   {
		   case 0:
			   Left1--;
			   label13->Text = "(" + Left1 + ")";
			   pictureBox1->BorderStyle = BorderStyle::None;
			   break;
		   case 1:
			   Left2--;
			   label11->Text = "(" + Left2 + ")";
			   pictureBox2->BorderStyle = BorderStyle::None;
			   break;
		   case 2:
			   Left3--;
			   label12->Text = "(" + Left3 + ")";
			   pictureBox3->BorderStyle = BorderStyle::None;
			   break;
		   case 3:
			   Left4--;
			   label10->Text = "(" + Left4 + ")";
			   pictureBox4->BorderStyle = BorderStyle::None;
			   break;
		   }
	   }

void DestroyShip(Game::Cell* Ship) {
	if (Ship->ShipSize < 0) {
		if (Ship->MainY - 1 >= 0)
		{
			CurGame->Cells[Ship->MainX][Ship->MainY - 1].Attacked = true;
			DrawCell(P1, Ship->MainX, Ship->MainY - 1, false, false);
		}
		if (Ship->MainY - Ship->ShipSize < 10)
		{
			CurGame->Cells[Ship->MainX][Ship->MainY - Ship->ShipSize].Attacked = true;
			DrawCell(P1, Ship->MainX, Ship->MainY - Ship->ShipSize, false, false);
		}
	}
	else {
		if (Ship->MainX - 1 >= 0)
		{
			CurGame->Cells[Ship->MainX - 1][Ship->MainY].Attacked = true;
			DrawCell(P1, Ship->MainX - 1, Ship->MainY, false, false);
		}
		if (Ship->MainX + Ship->ShipSize < 10)
		{
			CurGame->Cells[Ship->MainX + Ship->ShipSize][Ship->MainY].Attacked = true;
			DrawCell(P1, Ship->MainX + Ship->ShipSize, Ship->MainY, false, false);
		}
	}
	for (int i = -1; i < abs(Ship->ShipSize) + 1; i++) {
		if (Ship->ShipSize < 0) {
			if (Ship->MainX + 1 < 10 && Ship->MainY + i > -1 && Ship->MainY + i < 10) {
				CurGame->Cells[Ship->MainX + 1][Ship->MainY + i].Attacked = true;
				DrawCell(P1, Ship->MainX + 1, Ship->MainY + i, false, false);
			}
			if (Ship->MainX - 1 >= 0 && Ship->MainY + i > -1 && Ship->MainY + i < 10) {
				CurGame->Cells[Ship->MainX - 1][Ship->MainY + i].Attacked = true;
				DrawCell(P1, Ship->MainX - 1, Ship->MainY + i, false, false);
			}
		}
		else {
			if (Ship->MainY + 1 < 10 && Ship->MainX + i > -1 && Ship->MainX + i < 10) {
				CurGame->Cells[Ship->MainX + i][Ship->MainY + 1].Attacked = true;
				DrawCell(P1, Ship->MainX + i, Ship->MainY + 1, false, false);
			}
			if (Ship->MainY - 1 >= 0 && Ship->MainX + i > -1 && Ship->MainX + i < 10) {
				CurGame->Cells[Ship->MainX + i][Ship->MainY - 1].Attacked = true;
				DrawCell(P1, Ship->MainX + i, Ship->MainY - 1, false, false);
			}
		}
	}
}

void DestroyBotShip(Game::Cell* Ship) {
	if (Ship->ShipSize < 0) {
		if (Ship->MainY - 1 >= 0)
		{
			CurGame->BotCells[Ship->MainX][Ship->MainY - 1].Attacked = true;
			DrawCell(P2, Ship->MainX, Ship->MainY - 1, true, HIDE_ENEMY_CELLS);
		}
		if (Ship->MainY - Ship->ShipSize < 10)
		{
			CurGame->BotCells[Ship->MainX][Ship->MainY - Ship->ShipSize].Attacked = true;
			DrawCell(P2, Ship->MainX, Ship->MainY - Ship->ShipSize, true, HIDE_ENEMY_CELLS);
		}
	}
	else {
		if (Ship->MainX - 1 >= 0)
		{
			CurGame->BotCells[Ship->MainX - 1][Ship->MainY].Attacked = true;
			DrawCell(P2, Ship->MainX - 1, Ship->MainY, true, HIDE_ENEMY_CELLS);
		}
		if (Ship->MainX + Ship->ShipSize < 10)
		{
			CurGame->BotCells[Ship->MainX + Ship->ShipSize][Ship->MainY].Attacked = true;
			DrawCell(P2, Ship->MainX + Ship->ShipSize, Ship->MainY, true, HIDE_ENEMY_CELLS);
		}
	}
	for (int i = -1; i < abs(Ship->ShipSize) + 1; i++) {
		if (Ship->ShipSize < 0) {
			if (Ship->MainX + 1 < 10 && Ship->MainY + i > -1 && Ship->MainY + i < 10) {
				CurGame->BotCells[Ship->MainX + 1][Ship->MainY + i].Attacked = true;
				DrawCell(P2, Ship->MainX + 1, Ship->MainY + i, true, HIDE_ENEMY_CELLS);
			}
			if (Ship->MainX - 1 >= 0 && Ship->MainY + i > -1 && Ship->MainY + i < 10) {
				CurGame->BotCells[Ship->MainX - 1][Ship->MainY + i].Attacked = true;
				DrawCell(P2, Ship->MainX - 1, Ship->MainY + i, true, HIDE_ENEMY_CELLS);
			}
		}
		else {
			if (Ship->MainY + 1 < 10 && Ship->MainX + i > -1 && Ship->MainX + i < 10) {
				CurGame->BotCells[Ship->MainX + i][Ship->MainY + 1].Attacked = true;
				DrawCell(P2, Ship->MainX + i, Ship->MainY + 1, true, HIDE_ENEMY_CELLS);
			}
			if (Ship->MainY - 1 >= 0 && Ship->MainX + i > -1 && Ship->MainX + i < 10) {
				CurGame->BotCells[Ship->MainX + i][Ship->MainY - 1].Attacked = true;
				DrawCell(P2, Ship->MainX + i, Ship->MainY - 1, true, HIDE_ENEMY_CELLS);
			}
		}
	}
}


void CreateBotShip(int X, int Y, int Size, bool IsVertically) {
	CurGame->BotCells[X][Y].IsMain = true;
	CurGame->BotCells[X][Y].SizeLeft = Size;
	CurGame->BotCells[X][Y].ShipSize = IsVertically ? -Size : Size;
	for (int i = 0; i < Size; i++) {
		if (IsVertically) {
			CurGame->BotCells[X][Y + i].IsThereShip = true;
			CurGame->BotCells[X][Y + i].MainX = X;
			CurGame->BotCells[X][Y + i].MainY = Y;
			DrawCell(P2, X, Y + i, true, HIDE_ENEMY_CELLS);
		}
		else {
			CurGame->BotCells[X + i][Y].IsThereShip = true;
			CurGame->BotCells[X + i][Y].MainX = X;
			CurGame->BotCells[X + i][Y].MainY = Y;
			DrawCell(P2, X + i, Y, true, HIDE_ENEMY_CELLS);
		}
	}
}

private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	ClearField();
	CreationHelper(3);
	CreationHelper(2);
	CreationHelper(2);
	CreationHelper(1);
	CreationHelper(1);
	CreationHelper(1);
	CreationHelper(0);
	CreationHelper(0);
	CreationHelper(0);
	CreationHelper(0);
	LastX = 0;
	LastY = 0;
	VerticallyHolding = true;
	CurrentChoosenShip = 10;
}
	   void CreationHelper(int i) {
		   bool b = rand() % 10 > 4;
		   CurrentChoosenShip = i;
		   VerticallyHolding = (rand() % 10) > 4;
		   LastX = rand() % 10;
		   LastY = rand() % 10;
		   while (true) {
			   if (CheckIfCanStayHere()) {
				   CreateShip(LastX, LastY, CurrentChoosenShip + 1, VerticallyHolding);
				   break;
			   }
			   else {
				   if (b) {
					   LastX++;
					   if (LastX > 9) {
						   LastX = 0;
						   LastY++;
						   if (LastY > 9) LastY = 0;
					   }
				   }
				   else {
					   LastX--;
					   if (LastX < 0) {
						   LastX = 9;
						   LastY--;
						   if (LastY < 0) LastY = 9;
					   }
				   }
			   }
		   }
	   }
	   void CreationHelperBot(int i) {
		   bool b = rand() % 10 > 4;
		   bool v = (rand() % 10) > 4;
		   int x = rand() % 10;
		   int y = rand() % 10;
		   while (true) {
			   if (CheckIfCanStayHereBot(x, y, i, v)) {
				   CreateBotShip(x, y, i + 1, v);
				   DrawGrid(P2);
				   break;
			   }
			   else {
				   if (b) {
					   x++;
					   if (x > 9) {
						   x = 0;
						   y++;
						   if (y > 9) y = 0;
					   }
				   }
				   else {
					   x--;
					   if (x < 0) {
						   x = 9;
						   y--;
						   if (y < 0) y = 9;
					   }
				   }
			   }
		   }
	   }


private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (Left1 == 0 && Left2 == 0 && Left3 == 0 && Left4 == 0) {
		groupBox2->Enabled = false;
		button1->Enabled = false;
		button8->Enabled = false;
		button9->Enabled = false;
		button2->Enabled = false;
		button7->Enabled = true;


		ClearBotField();

		CreationHelperBot(3);
		CreationHelperBot(2);
		CreationHelperBot(2);
		CreationHelperBot(1);
		CreationHelperBot(1);
		CreationHelperBot(1);
		CreationHelperBot(0);
		CreationHelperBot(0);
		CreationHelperBot(0);
		CreationHelperBot(0);


		LastFountShipX = -1;
		LastFountShipY = -1;
		MyTurn = ((rand() % 10) > 4);
		ShipsCount = 10;
		BotShipsCount = 10;
		IsPlaying = true;
		UpdateUITurn();
		Tip("Игра началась!");
		if (!MyTurn) {
			Application::DoEvents();
			Sleep(1000);
			BotTurn();
		}
	}
	else
		MessageBox::Show("Сначала расставьте все корабли.", "Игру начать нельзя", MessageBoxButtons::OK, MessageBoxIcon::Error);
}

	   void SetLastTurn(int x, int y, bool me, bool got) {
		   y++;
		   string Words = "ABCDEFGHIJ";
		   String^ s = gcnew String(Words.substr(x, 1).c_str());
		   label18->Text = "Последний ход: " + (me ? "вы" : "враг") + " на " + s + y + " - " + (got ? "попадание" : "промах");
		   delete s;
	   }

	   void UpdateUITurn() {
		   if (!IsPlaying) {

			   label14->Text = "Никто не ходит";
			   label14->ForeColor = Color::Silver;
			   return;
		   }
		   label14->Text = MyTurn ? "Ваш ход" : "Ход противника";
		   label14->ForeColor = MyTurn ? Color::RoyalBlue : Color::Red;
	   }

	   void Tip(String^ s) {
		   label1->Text = s;
	   }

private: System::Void panel2_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (IsPlaying && MyTurn) {
		auto x = e->Location.X / 40;
		auto y = e->Location.Y / 40;
		if (WithPlayer) {
			if (NETMeAllowedToMakeTurn) {
				CurGame->Send(1, x * 10 + y, 0);
				NETMeAllowedToMakeTurn = false;
				ServerGame();
			}
		}
		else {
			if (CurGame->BotCells[x][y].Attacked) {
				MessageBox::Show("Эта ячейка уже атакована.");
				return;
			}
			CurGame->BotCells[x][y].Attacked = true;
			if (CurGame->BotCells[x][y].IsThereShip) {
				Game::Cell* d3 = &CurGame->BotCells[CurGame->BotCells[x][y].MainX][CurGame->BotCells[x][y].MainY];
				d3->SizeLeft--;
				if (d3->SizeLeft == 0) {
					DestroyBotShip(d3);
					BotShipsCount--;
					if (Sound) Beep(500, 200);
					if (BotShipsCount == 0) {
						MessageBox::Show("Вы выиграли!\n\nНажмите 'ОК', чтобы продолжить. Поля будут очищены, и будет записано значение в статистику.", "Победа!", MessageBoxButtons::OK);
						Stats[0]++;
						EndGame();
						return;
					}
					SetLastTurn(x, y, true, true);
					Tip("Вы уничтожили корабль противника! Ходите ещё раз.");
				}
				else {
					if (Sound) Beep(200, 200);
					SetLastTurn(x, y, true, true);
					Tip("Вы ранили противника! Продолжайте в том же духе!");
				}
				DrawCell(P2, x, y, true, HIDE_ENEMY_CELLS);
				DrawGrid(P2);
			}
			else {
				if (Sound) Beep(100, 200);
				SetLastTurn(x, y, true, false);
				Tip("Вы промахнулись! Ходит противник.");
				MyTurn = false;
				UpdateUITurn();
				DrawCell(P2, x, y, true, HIDE_ENEMY_CELLS);
				DrawGrid(P2);
				Application::DoEvents();
				Sleep(1000);//задержка, чтоб игра вела в оптимальном темпе - бот соображает мгновенно.
				BotTurn();
			}
		}
	}
}


		// ИИ бота
	   int LastFountShipX = -1, LastFountShipY = -1, BotCurrentDir = 0, BotOffset = 0;
	   void BotTurn() {
		   if (LastFountShipX == -1) {
			   auto x = rand() % 10;
			   auto y = rand() % 10;
			   while (CurGame->Cells[x][y].Attacked) {
				   if (rand() % 10 > 4) {
					   x--;
					   if (x < 0) {
						   y--;
						   x = 9;
						   if (y < 0) y = 9;
					   }
				   }
				   else {
					   x++;
					   if (x > 9) {
						   y++;
						   x = 0;
						   if (y > 9) y = 0;
					   }
				   }
			   }

			   CurGame->Cells[x][y].Attacked = true;
			   DrawCell(P1, x, y, false, false);
			   if (CurGame->Cells[x][y].IsThereShip) {
				   Game::Cell* d3 = &CurGame->Cells[CurGame->Cells[x][y].MainX][CurGame->Cells[x][y].MainY];
				   d3->SizeLeft--;
				   if (d3->SizeLeft == 0) {
					   DestroyShip(d3);
					   ShipsCount--;
					   if (Sound) Beep(500, 200);
					   if (ShipsCount == 0) {
						   MessageBox::Show("Вы проиграли!\n\nНажмите 'ОК', чтобы продолжить. Поля будут очищены, и будет записано значение в статистику.", "Проигрыш.", MessageBoxButtons::OK);
						   Stats[1]++;
						   EndGame();
						   return;
					   }
					   SetLastTurn(x, y, false, true);
					   Tip("Противник уничтожил ваш корабль! Он ходит ещё раз.");
				   }
				   else {
					   if (Sound) Beep(200, 200);
					   LastFountShipX = x;
					   LastFountShipY = y;
					   CurGame->AlreadyCheckedClear();
					   /*
					   0 - верх
					   1 - низ
					   2 лево
					   3 право
					   */
					   if (y == 0 || (y > 0 && CurGame->Cells[x][y - 1].Attacked)) CurGame->AlreadyChecked[0] = true;
					   if (y == 9 || (y < 9 && CurGame->Cells[x][y + 1].Attacked)) CurGame->AlreadyChecked[1] = true;
					   if (x == 0 || (x > 0 && CurGame->Cells[x - 1][y].Attacked)) CurGame->AlreadyChecked[2] = true;
					   if (x == 9 || (x < 9 && CurGame->Cells[x + 1][y].Attacked)) CurGame->AlreadyChecked[3] = true;
					   BotOffset = 0;
					   auto d2 = rand() % 4;
					   while (CurGame->AlreadyChecked[d2]) {
						   d2++;
						   if (d2 == 4) d2 = 0;
					   }
					   BotCurrentDir = d2;
					   SetLastTurn(x, y, false, true);
					   Tip("Противник повредил ваш корабль! Он ходит ещё раз.");
				   }
				   DrawGrid(P1);
				   Application::DoEvents();
				   Sleep(1000);
				   BotTurn();

			   }
			   else {
				   if (Sound) Beep(100, 200);
				   DrawGrid(P1);
				   SetLastTurn(x, y, false, false);
				   Tip("Противник промахнулся! Ход переходит к вам.");
				   MyTurn = true;
				   UpdateUITurn();
			   }
		   }
		   else {
			   /*
			   0 - верх
			   1 - низ
			   2 лево
			   3 право
			   */
			   int ThisX, ThisY;
			Label1:
			   BotOffset++;
			   switch (BotCurrentDir)
			   {
			   case 0:
				   ThisX = LastFountShipX;
				   ThisY = LastFountShipY - BotOffset;
				   break;
			   case 1:
				   ThisX = LastFountShipX;
				   ThisY = LastFountShipY + BotOffset;
				   break;
			   case 2:
				   ThisX = LastFountShipX - BotOffset;
				   ThisY = LastFountShipY;
				   break;
			   case 3:
				   ThisX = LastFountShipX + BotOffset;
				   ThisY = LastFountShipY;
				   break;
			   }
			   if (ThisX < 0 || ThisX > 9 || ThisY < 0 || ThisY > 9) {
				   BotChangeDir();
				   goto Label1;
			   }
			   Game::Cell* c = &CurGame->Cells[ThisX][ThisY];
			   if (c->Attacked) {
				   BotChangeDir();
				   goto Label1;
			   }
			   c->Attacked = true;
			   DrawCell(P1, ThisX, ThisY, false, false);
			   if (c->IsThereShip) {
				   Game::Cell* c2 = &CurGame->Cells[c->MainX][c->MainY];
				   c2->SizeLeft--;
				   if (c2->SizeLeft == 0) {
					   DestroyShip(c2);
					   if (Sound) Beep(500, 200);
					   ShipsCount--;
					   LastFountShipX = -1;
					   LastFountShipY = -1;
					   if (ShipsCount == 0) {
						   MessageBox::Show("Вы проиграли!\n\nНажмите 'ОК', чтобы продолжить. Поля будут очищены, и будет записано значение в статистику.", "Проигрыш.", MessageBoxButtons::OK);
						   Stats[1]++;
						   EndGame();
						   return;
					   }
					   SetLastTurn(ThisX, ThisY, false, true);
					   Tip("Противник уничтожил ваш корабль! Он ходит ещё раз.");
				   }
				   else {
					   SetLastTurn(ThisX, ThisY, false, true);
					   Tip("Противник повредил ваш корабль! Он ходит ещё раз.");
					   if (Sound) Beep(200, 200);
				   }
				   DrawGrid(P1);
				   Application::DoEvents();
				   Sleep(1000);
				   BotTurn();
			   }
			   else {
				   if (Sound) Beep(100, 200);
				   if (BotOffset > 1)
					   BotChangeDir();
				   else {
					   CurGame->AlreadyChecked[BotCurrentDir] = true;
					   BotOffset = 0;
					   auto d2 = rand() % 4;
					   while (CurGame->AlreadyChecked[d2]) {
						   d2++;
						   if (d2 == 4) d2 = 0;
					   }
					   BotCurrentDir = d2;
				   }
				   SetLastTurn(ThisX, ThisY, false, false);
				   Tip("Противник промахнулся! Ход переходит к вам.");
				   MyTurn = true;
				   UpdateUITurn();
			   }
		   }
	   }
	   void BotChangeDir() {
		   BotOffset = 0;
		   if (BotCurrentDir == 0) {
			   BotCurrentDir = 1;
			   return;
		   }
		   if (BotCurrentDir == 1) {
			   BotCurrentDir = 0;
			   return;
		   }
		   if (BotCurrentDir == 2) {
			   BotCurrentDir = 3;
			   return;
		   }
		   if (BotCurrentDir == 3) {
			   BotCurrentDir = 2;
			   return;
		   }
	   }


	   void EndGame() {
		   Stats[2]++;
		   UpdateStatsUI();
		   SaveStats();
		   IsPlaying = false;
		   UpdateUITurn();
		   ClearField();
		   ClearBotField();
		   Tip("");
		   label18->Text = "";
		   groupBox2->Enabled = true;

		   button1->Enabled = true;
		   button8->Enabled = true;
		   button9->Enabled = false;
		   button2->Enabled = true;
		   button7->Enabled = false;
	   }
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	if (MessageBox::Show("Вы уверены?", "Сдаться", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes) {
		Stats[1]++;
		EndGame();
	}
}
	   bool Sound = true;
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	Sound = !Sound;
	if (Sound)
		button10->BackColor = Color::Lime;
	else
		button10->BackColor = Color::Red;
}

	   // Сервер
	   bool WithPlayer = false;
	   bool NETMeAllowedToMakeTurn = true;

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (Left1 == 0 && Left2 == 0 && Left3 == 0 && Left4 == 0) {
		groupBox2->Enabled = false;
		button1->Enabled = false;
		button8->Enabled = false;
		button9->Enabled = true;
		button2->Enabled = false;
		button7->Enabled = true;
		NETMeAllowedToMakeTurn = false;
		if (!CurGame->StartSERVER(Convert::ToInt32(textBox2->Text))) {
			label17->Text = "Создать сервер не удалось.";
			groupBox2->Enabled = true;
			button1->Enabled = true;
			button8->Enabled = true;
			button9->Enabled = false;
			button2->Enabled = true;
			button7->Enabled = false;
			NETMeAllowedToMakeTurn = true;
			return;
		}
		label17->Text = "Сервер готов. Ожидание игрока...";
		Application::DoEvents();
		CurGame->ServerAccept();
		label17->Text = "Игрок подключился.";
		MyTurn = ((rand() % 10) > 4);
		ShipsCount = 10;
		BotShipsCount = 10;
		IsPlaying = true;
		WithPlayer = true;
		UpdateUITurn();
		Tip("Игра началась!");
		CurGame->Send(0, MyTurn ? 1 : 0, 0);
		if (MyTurn) NETMeAllowedToMakeTurn = true;
		else
			ServerGame();
	}
	else
		MessageBox::Show("Сначала расставьте все корабли.", "Игру начать нельзя", MessageBoxButtons::OK, MessageBoxIcon::Error);
}

	   void ServerGame() {
		   char c1, c2, c3;
		   CurGame->Get(c1, c2, c3);
		   if (c1 == 15) {
			   MessageBox::Show("Соединение разорвано!\n\nСейчас будут очищены все поля. Никому не зачтётся поражение.");
			   CurGame->CloseNET();
			   label17->Text = "Отключено.";
			   NETMeAllowedToMakeTurn = true;
			   WithPlayer = false;
			   EndGame();
		   }
		   if (c1 == 0) {
			   Tip("Игра началась!");
			   IsPlaying = true;
			   WithPlayer = true;
			   MyTurn = (c2 == 0);
			   NETMeAllowedToMakeTurn = MyTurn;
			   UpdateUITurn();
			   if (c2 == 1) {
				   Application::DoEvents();
				   ServerGame();
			   }
		   }
		   if (c1 == 1) {
			   int x = c2 / 10;
			   int y = c2 % 10;
			   CurGame->Cells[x][y].Attacked = true;
			   DrawCell(P1, x, y, false, false);
			   DrawGrid(P1);
			   if (CurGame->Cells[x][y].IsThereShip) {
				   Game::Cell* d3 = &CurGame->Cells[CurGame->Cells[x][y].MainX][CurGame->Cells[x][y].MainY];
				   d3->SizeLeft--;
				   if (d3->SizeLeft == 0) {
					   DestroyShip(d3);
					   ShipsCount--;
					   CurGame->Send(4, d3->MainX * 10 + d3->MainY, d3->ShipSize < 0 ? 10 - d3->ShipSize : d3->ShipSize);
					   if (Sound) Beep(500, 200);
					   Tip("Противник уничтожил корабль! Он ходит ещё раз.");
					   SetLastTurn(x, y, false, true);
					   if (ShipsCount == 0) {
						   CurGame->CloseNET();
						   label17->Text = "Отключено.";
						   NETMeAllowedToMakeTurn = true;
						   WithPlayer = false;
						   MessageBox::Show("Вы проиграли!\n\nНажмите 'ОК', чтобы продолжить. Поля будут очищены, и будет записано значение в статистику.", "Проигрыш.", MessageBoxButtons::OK);
						   Stats[1]++;
						   EndGame();
						   return;
					   }
					   Application::DoEvents();
					   ServerGame();
				   }
				   else {
					   CurGame->Send(3, c2, c3);
					   Application::DoEvents();
					   if (Sound) Beep(200, 200);
					   Tip("Противник попал в ваш корабль! Он ходит ещё раз.");
					   SetLastTurn(x, y, false, true);
					   ServerGame();
				   }
			   }
			   else {
				   CurGame->Send(2, c2, c3);
				   MyTurn = true;
				   UpdateUITurn();
				   NETMeAllowedToMakeTurn = true;
				   Application::DoEvents();
				   if (Sound) Beep(100, 200);
				   Tip("Противник промахнулся! Вы ходите.");
				   SetLastTurn(x, y, false, true);
			   }
		   }
		   if (c1 == 2) {
			   int x = c2 / 10;
			   int y = c2 % 10;
			   CurGame->BotCells[x][y].IsThereShip = false;
			   CurGame->BotCells[x][y].Attacked = true;
			   DrawCell(P2, x, y, true, HIDE_ENEMY_CELLS);
			   DrawGrid(P2);
			   MyTurn = false;
			   UpdateUITurn();
			   NETMeAllowedToMakeTurn = false;
			   if (Sound) Beep(100, 200);
			   Tip("Вы промахнулись. Теперь ходит противник.");
			   SetLastTurn(x, y, true, false);
			   Application::DoEvents();
			   ServerGame();
		   }
		   if (c1 == 3) {
			   int x = c2 / 10;
			   int y = c2 % 10;
			   CurGame->BotCells[x][y].IsThereShip = true;
			   CurGame->BotCells[x][y].Attacked = true;
			   DrawCell(P2, x, y, true, HIDE_ENEMY_CELLS);
			   DrawGrid(P2);
			   MyTurn = true;
			   UpdateUITurn();
			   NETMeAllowedToMakeTurn = true;
			   if (Sound) Beep(200, 200);
			   Tip("Вы попали! Ходите ещё раз.");
			   SetLastTurn(x, y, true, true);
		   }
		   if (c1 == 4) {
			   int x = c2 / 10;
			   int y = c2 % 10;
			   for (int i = 0; i < c3 % 10; i++) {
				   if (c3 > 9) {
					   CurGame->BotCells[x][y + i].IsThereShip = true;
					   CurGame->BotCells[x][y + i].Attacked = true;
					   DrawCell(P2, x, y + i, true, HIDE_ENEMY_CELLS);
				   }
				   else {
					   CurGame->BotCells[x + i][y].IsThereShip = true;
					   CurGame->BotCells[x + i][y].Attacked = true;
					   DrawCell(P2, x + i, y, true, HIDE_ENEMY_CELLS);
				   }
			   }
			   Game::Cell* d = &CurGame->BotCells[x][y];
			   d->IsMain = true;
			   d->ShipSize = (c3 > 9 ? -(c3 - 10) : c3);
			   d->SizeLeft = 0;
			   d->MainX = x;
			   d->MainY = y;
			   DestroyBotShip(d);
			   DrawGrid(P2);
			   BotShipsCount--;
			   if (Sound) Beep(500, 200);
			   if (BotShipsCount == 0) {
				   MessageBox::Show("Вы победили!\n\nСейчас будут очищены все поля. Вам зачитывается победа.");
				   CurGame->CloseNET();
				   label17->Text = "Отключено.";
				   NETMeAllowedToMakeTurn = true;
				   WithPlayer = false;
				   Stats[0]++;
				   EndGame();
				   return;
			   }
			   MyTurn = true;
			   UpdateUITurn();
			   NETMeAllowedToMakeTurn = true;
			   if (Sound) Beep(500, 200);
			   Tip("Вы уничтожили корабль противника! Ходите ещё раз.");
			   SetLastTurn(x, y, true, true);
		   }
		   if (c1 == 6) {
			   MessageBox::Show("Противник сдался!\n\nСейчас будут очищены все поля. Вам зачитывается победа.");
			   CurGame->CloseNET();
			   label17->Text = "Отключено.";
			   NETMeAllowedToMakeTurn = true;
			   WithPlayer = false;
			   Stats[0]++;
			   EndGame();
		   }
	   }

private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	if (MessageBox::Show("В таком случае сейчас поле будет очищено.", "Вы уверены?", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes) {
		CurGame->Send(6, 0, 0);
		CurGame->CloseNET();
		label17->Text = "Отключено.";
		NETMeAllowedToMakeTurn = true;
		WithPlayer = false;
		EndGame();
	}
}


private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	if (Left1 == 0 && Left2 == 0 && Left3 == 0 && Left4 == 0) {
		groupBox2->Enabled = false;
		button1->Enabled = false;
		button8->Enabled = false;
		button9->Enabled = true;
		button2->Enabled = false;
		button7->Enabled = true;
		NETMeAllowedToMakeTurn = false;
		if (!CurGame->ConnectTo(textBox1->Text, Convert::ToInt32(textBox2->Text))) {
			label17->Text = "Подключиться не удалось.";
			groupBox2->Enabled = true;
			button1->Enabled = true;
			button8->Enabled = true;
			button9->Enabled = false;
			button2->Enabled = true;
			button7->Enabled = false;
			return;
		}
		char c1, ch2, ch3;
		//CurGame->Get(c1, ch2, ch3);
		//Application::DoEvents();
		label17->Text = "Подключено.";
		ShipsCount = 10;
		BotShipsCount = 10;
		IsPlaying = true;
		WithPlayer = true;
		//UpdateUITurn();
		ServerGame();
	}
	else
		MessageBox::Show("Сначала расставьте все корабли.", "Игру начать нельзя", MessageBoxButtons::OK, MessageBoxIcon::Error);

}
};

}
