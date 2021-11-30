#pragma once

namespace Battleship {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Victory
	/// </summary>
	public ref class Victory : public System::Windows::Forms::Form
	{
	public:
		Victory(void)
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
		~Victory()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ End;
	protected:
	private: System::Windows::Forms::Label^ Gain;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Victory::typeid));
			this->End = (gcnew System::Windows::Forms::Button());
			this->Gain = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// End
			// 
			this->End->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->End->Location = System::Drawing::Point(9, 51);
			this->End->Name = L"End";
			this->End->Size = System::Drawing::Size(214, 177);
			this->End->TabIndex = 5;
			this->End->Text = L"Закончить.";
			this->End->UseVisualStyleBackColor = true;
			this->End->Click += gcnew System::EventHandler(this, &Victory::End_Click);
			// 
			// Gain
			// 
			this->Gain->AutoSize = true;
			this->Gain->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Gain->ForeColor = System::Drawing::Color::Lime;
			this->Gain->Location = System::Drawing::Point(6, 11);
			this->Gain->Name = L"Gain";
			this->Gain->Size = System::Drawing::Size(217, 37);
			this->Gain->TabIndex = 4;
			this->Gain->Text = L"Вы выйграли.";
			// 
			// Victory
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ClientSize = System::Drawing::Size(238, 238);
			this->Controls->Add(this->End);
			this->Controls->Add(this->Gain);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Victory";
			this->Text = L"Victory";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void End_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	};
}
