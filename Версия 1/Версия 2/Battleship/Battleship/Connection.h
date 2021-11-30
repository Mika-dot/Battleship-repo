#pragma once
#include "Libraries.h"
#include "Game.h"
#include <windows.h>

using namespace msclr::interop;

namespace Battleship {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Connection
	/// </summary>
	public ref class Connection : public System::Windows::Forms::Form
	{
	public:
		int* Fleet_x;
	private: System::Windows::Forms::TextBox^ statistics3;
	public:
	private: System::Windows::Forms::Label^ Total;
	private: System::Windows::Forms::TextBox^ statistics2;
	private: System::Windows::Forms::TextBox^ statistics1;
	private: System::Windows::Forms::Label^ won;
	private: System::Windows::Forms::Label^ lost;
	private: System::Windows::Forms::Label^ statistics;
	private: System::Windows::Forms::Button^ Serverstart;
		   int* Fleet_y;
	public:
		Connection(int Fleet_x_copy[20], int Fleet_y_copy[20])
		{
			InitializeComponent();
			Fleet_x = new int[20];
			Fleet_y = new int[20];
			for (int i = 0; i < 20; i++)
			{
				Fleet_x[i] = Fleet_x_copy[i];
				Fleet_y[i] = Fleet_y_copy[i];
			}

			std::string line_1;
			std::string line_2;

			ifstream f1_1("statistics-.txt");
			f1_1 >> line_1;
			f1_1.close();
			ifstream f1_2("statistics+.txt");
			f1_2 >> line_2;
			f1_2.close();

			statistics1->Text = marshal_as<String^>(line_1);
			statistics2->Text = marshal_as<String^>(line_2);
			statistics3->Text = marshal_as<String^>(std::to_string(std::stoi(line_1) + std::stoi(line_2)));

		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Connection()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ Ip_4;
	protected:
	private: System::Windows::Forms::TextBox^ Ip_3;
	private: System::Windows::Forms::TextBox^ Ip_2;
	private: System::Windows::Forms::Button^ Insert;
	private: System::Windows::Forms::Button^ Save;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ Port_ip;
	private: System::Windows::Forms::Label^ Port;
	private: System::Windows::Forms::TextBox^ Ip_1;
	private: System::Windows::Forms::Label^ IP_adress;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Connection::typeid));
			this->Ip_4 = (gcnew System::Windows::Forms::TextBox());
			this->Ip_3 = (gcnew System::Windows::Forms::TextBox());
			this->Ip_2 = (gcnew System::Windows::Forms::TextBox());
			this->Insert = (gcnew System::Windows::Forms::Button());
			this->Save = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Port_ip = (gcnew System::Windows::Forms::TextBox());
			this->Port = (gcnew System::Windows::Forms::Label());
			this->Ip_1 = (gcnew System::Windows::Forms::TextBox());
			this->IP_adress = (gcnew System::Windows::Forms::Label());
			this->statistics3 = (gcnew System::Windows::Forms::TextBox());
			this->Total = (gcnew System::Windows::Forms::Label());
			this->statistics2 = (gcnew System::Windows::Forms::TextBox());
			this->statistics1 = (gcnew System::Windows::Forms::TextBox());
			this->won = (gcnew System::Windows::Forms::Label());
			this->lost = (gcnew System::Windows::Forms::Label());
			this->statistics = (gcnew System::Windows::Forms::Label());
			this->Serverstart = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Ip_4
			// 
			this->Ip_4->Location = System::Drawing::Point(133, 7);
			this->Ip_4->Name = L"Ip_4";
			this->Ip_4->Size = System::Drawing::Size(27, 20);
			this->Ip_4->TabIndex = 32;
			this->Ip_4->Text = L"1";
			// 
			// Ip_3
			// 
			this->Ip_3->Location = System::Drawing::Point(103, 7);
			this->Ip_3->Name = L"Ip_3";
			this->Ip_3->Size = System::Drawing::Size(24, 20);
			this->Ip_3->TabIndex = 31;
			this->Ip_3->Text = L"0";
			// 
			// Ip_2
			// 
			this->Ip_2->Location = System::Drawing::Point(70, 7);
			this->Ip_2->Name = L"Ip_2";
			this->Ip_2->Size = System::Drawing::Size(27, 20);
			this->Ip_2->TabIndex = 30;
			this->Ip_2->Text = L"0";
			// 
			// Insert
			// 
			this->Insert->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Insert->Location = System::Drawing::Point(11, 122);
			this->Insert->Name = L"Insert";
			this->Insert->Size = System::Drawing::Size(149, 23);
			this->Insert->TabIndex = 29;
			this->Insert->Text = L"Вставить";
			this->Insert->UseVisualStyleBackColor = true;
			this->Insert->Click += gcnew System::EventHandler(this, &Connection::Insert_Click);
			// 
			// Save
			// 
			this->Save->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Save->Location = System::Drawing::Point(11, 93);
			this->Save->Name = L"Save";
			this->Save->Size = System::Drawing::Size(149, 23);
			this->Save->TabIndex = 28;
			this->Save->Text = L"Cохранить";
			this->Save->UseVisualStyleBackColor = true;
			this->Save->Click += gcnew System::EventHandler(this, &Connection::Save_Click);
			// 
			// button1
			// 
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(11, 64);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(149, 23);
			this->button1->TabIndex = 27;
			this->button1->Text = L"Соединиться";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Connection::button1_Click);
			// 
			// Port_ip
			// 
			this->Port_ip->Location = System::Drawing::Point(60, 38);
			this->Port_ip->Name = L"Port_ip";
			this->Port_ip->Size = System::Drawing::Size(100, 20);
			this->Port_ip->TabIndex = 26;
			this->Port_ip->Text = L"1111";
			// 
			// Port
			// 
			this->Port->AutoSize = true;
			this->Port->Location = System::Drawing::Point(11, 41);
			this->Port->Name = L"Port";
			this->Port->Size = System::Drawing::Size(26, 13);
			this->Port->TabIndex = 25;
			this->Port->Text = L"Port";
			// 
			// Ip_1
			// 
			this->Ip_1->Location = System::Drawing::Point(34, 7);
			this->Ip_1->Name = L"Ip_1";
			this->Ip_1->Size = System::Drawing::Size(30, 20);
			this->Ip_1->TabIndex = 24;
			this->Ip_1->Text = L"127";
			// 
			// IP_adress
			// 
			this->IP_adress->AutoSize = true;
			this->IP_adress->Location = System::Drawing::Point(11, 10);
			this->IP_adress->Name = L"IP_adress";
			this->IP_adress->Size = System::Drawing::Size(17, 13);
			this->IP_adress->TabIndex = 23;
			this->IP_adress->Text = L"IP";
			// 
			// statistics3
			// 
			this->statistics3->Location = System::Drawing::Point(90, 262);
			this->statistics3->Name = L"statistics3";
			this->statistics3->Size = System::Drawing::Size(57, 20);
			this->statistics3->TabIndex = 50;
			// 
			// Total
			// 
			this->Total->AutoSize = true;
			this->Total->Location = System::Drawing::Point(40, 262);
			this->Total->Name = L"Total";
			this->Total->Size = System::Drawing::Size(37, 13);
			this->Total->TabIndex = 49;
			this->Total->Text = L"Всего";
			// 
			// statistics2
			// 
			this->statistics2->Location = System::Drawing::Point(90, 238);
			this->statistics2->Name = L"statistics2";
			this->statistics2->Size = System::Drawing::Size(57, 20);
			this->statistics2->TabIndex = 48;
			// 
			// statistics1
			// 
			this->statistics1->Location = System::Drawing::Point(90, 214);
			this->statistics1->Name = L"statistics1";
			this->statistics1->Size = System::Drawing::Size(57, 20);
			this->statistics1->TabIndex = 47;
			// 
			// won
			// 
			this->won->AutoSize = true;
			this->won->Location = System::Drawing::Point(27, 238);
			this->won->Name = L"won";
			this->won->Size = System::Drawing::Size(50, 13);
			this->won->TabIndex = 46;
			this->won->Text = L"выиграл";
			// 
			// lost
			// 
			this->lost->AutoSize = true;
			this->lost->Location = System::Drawing::Point(23, 214);
			this->lost->Name = L"lost";
			this->lost->Size = System::Drawing::Size(54, 13);
			this->lost->TabIndex = 45;
			this->lost->Text = L"проиграл";
			// 
			// statistics
			// 
			this->statistics->AutoSize = true;
			this->statistics->Location = System::Drawing::Point(13, 188);
			this->statistics->Name = L"statistics";
			this->statistics->Size = System::Drawing::Size(64, 13);
			this->statistics->TabIndex = 44;
			this->statistics->Text = L"статистика";
			// 
			// Serverstart
			// 
			this->Serverstart->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Serverstart->Location = System::Drawing::Point(11, 150);
			this->Serverstart->Name = L"Serverstart";
			this->Serverstart->Size = System::Drawing::Size(149, 23);
			this->Serverstart->TabIndex = 51;
			this->Serverstart->Text = L"Запуск сервера";
			this->Serverstart->UseVisualStyleBackColor = true;
			this->Serverstart->Click += gcnew System::EventHandler(this, &Connection::Serverstart_Click);
			// 
			// Connection
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ClientSize = System::Drawing::Size(171, 297);
			this->Controls->Add(this->Serverstart);
			this->Controls->Add(this->statistics3);
			this->Controls->Add(this->Total);
			this->Controls->Add(this->statistics2);
			this->Controls->Add(this->statistics1);
			this->Controls->Add(this->won);
			this->Controls->Add(this->lost);
			this->Controls->Add(this->statistics);
			this->Controls->Add(this->Ip_4);
			this->Controls->Add(this->Ip_3);
			this->Controls->Add(this->Ip_2);
			this->Controls->Add(this->Insert);
			this->Controls->Add(this->Save);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Port_ip);
			this->Controls->Add(this->Port);
			this->Controls->Add(this->Ip_1);
			this->Controls->Add(this->IP_adress);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Connection";
			this->Text = L" ";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Sockaddr socet;
		msclr::interop::marshal_context context;

		std::string line_ip_1 = context.marshal_as<std::string>(Ip_1->Text);
		std::string line_ip_2 = context.marshal_as<std::string>(Ip_2->Text);
		std::string line_ip_3 = context.marshal_as<std::string>(Ip_3->Text);
		std::string line_ip_4 = context.marshal_as<std::string>(Ip_4->Text);
		std::string line_port = context.marshal_as<std::string>(Port_ip->Text);


		SOCKET soc = socet.Server_socket(line_ip_1, line_ip_2, line_ip_3, line_ip_4, line_port);
		char msg[8];
		bool f = false;

		recv(soc, msg, 8, NULL); // прием сообщения

		if (msg[0] == 't') { f = true; }


		Game^ form = gcnew Game(Fleet_x, Fleet_y, soc, f);
		form->Show();
		this->Hide();
	}
	private: System::Void Save_Click(System::Object^ sender, System::EventArgs^ e) {
		ofstream f1;

		msclr::interop::marshal_context context1;
		std::string std_ip_1 = context1.marshal_as<std::string>(Ip_1->Text);
		msclr::interop::marshal_context context2;
		std::string std_ip_2 = context2.marshal_as<std::string>(Ip_2->Text);
		msclr::interop::marshal_context context3;
		std::string std_ip_3 = context3.marshal_as<std::string>(Ip_3->Text);
		msclr::interop::marshal_context context4;
		std::string std_ip_4 = context4.marshal_as<std::string>(Ip_4->Text);

		msclr::interop::marshal_context context5;
		std::string std_port = context5.marshal_as<std::string>(Port_ip->Text);

		f1.open("IP_1.txt");
		f1 << std_ip_1;
		f1.close();
		f1.open("IP_2.txt");
		f1 << std_ip_2;
		f1.close();
		f1.open("IP_3.txt");
		f1 << std_ip_3;
		f1.close();
		f1.open("IP_4.txt");
		f1 << std_ip_4;
		f1.close();

		f1.open("Port.txt");
		f1 << std_port;
		f1.close();
	}
	private: System::Void Insert_Click(System::Object^ sender, System::EventArgs^ e) {
		std::string line_ip_1;
		std::string line_ip_2;
		std::string line_ip_3;
		std::string line_ip_4;
		std::string line_port;

		ifstream f1_1("IP_1.txt");
		f1_1 >> line_ip_1;
		f1_1.close();
		ifstream f1_2("IP_2.txt");
		f1_2 >> line_ip_2;
		f1_2.close();
		ifstream f1_3("IP_3.txt");
		f1_3 >> line_ip_3;
		f1_3.close();
		ifstream f1_4("IP_4.txt");
		f1_4 >> line_ip_4;
		f1_4.close();

		ifstream f2("Port.txt");
		f2 >> line_port;
		f2.close();

		Ip_1->Text = marshal_as<String^>(line_ip_1);
		Ip_2->Text = marshal_as<String^>(line_ip_2);
		Ip_3->Text = marshal_as<String^>(line_ip_3);
		Ip_4->Text = marshal_as<String^>(line_ip_4);
		Port_ip->Text = marshal_as<String^>(line_port);
	}
	private: System::Void Serverstart_Click(System::Object^ sender, System::EventArgs^ e) {
		WinExec("ServerS.exe", SW_RESTORE);
	}
};
}
