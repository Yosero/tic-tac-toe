#pragma once
#include <String>
namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	protected:

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(32, 28);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(70, 70);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(113, 28);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(70, 70);
			this->button2->TabIndex = 1;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(194, 28);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(70, 70);
			this->button3->TabIndex = 2;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(31, 109);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(70, 70);
			this->button4->TabIndex = 3;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(113, 109);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(70, 70);
			this->button5->TabIndex = 4;
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->Location = System::Drawing::Point(194, 109);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(70, 70);
			this->button6->TabIndex = 5;
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->Location = System::Drawing::Point(31, 190);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(70, 70);
			this->button7->TabIndex = 6;
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->Location = System::Drawing::Point(113, 190);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(70, 70);
			this->button8->TabIndex = 7;
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->Location = System::Drawing::Point(194, 190);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(70, 70);
			this->button9->TabIndex = 8;
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::Coral;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->ForeColor = System::Drawing::Color::White;
			this->button10->Location = System::Drawing::Point(87, 334);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(125, 40);
			this->button10->TabIndex = 9;
			this->button10->Text = L"Новая игра";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->BackColor = System::Drawing::Color::Coral;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(75, 277);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(150, 20);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Ходит игрок X";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::DarkCyan;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 1260, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(-11, -22);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(3023, 1902);
			this->label2->TabIndex = 11;
			this->label2->Text = L"     ";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(295, 386);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	public:
		char character = 'x';
		bool isWin = false;
		bool checkWin() {

			//1 2 3
			if (button1->Text == button2->Text && button2->Text == button3->Text && button1->Text != "") {
				return true;
			}
			//4 5 6
			if (button4->Text == button5->Text && button5->Text == button6->Text && button4->Text != "") {
				return true;
			}
			//7 8 9
			if (button7->Text == button8->Text && button8->Text == button9->Text && button7->Text != "") {
				return true;
			}
			//1 4 7
			if (button1->Text == button4->Text && button4->Text == button7->Text && button1->Text != "") {
				return true;
			}
			//2 5 8
			if (button2->Text == button5->Text && button5->Text == button8->Text && button2->Text != "") {
				return true;
			}
			//3 6 9
			if (button3->Text == button6->Text && button6->Text == button9->Text && button3->Text != "") {
				return true;
			}
			//1 5 9
			if (button1->Text == button5->Text && button5->Text == button9->Text && button1->Text != "") {
				return true;
			}
			//3 5 7
			if (button3->Text == button5->Text && button5->Text == button7->Text && button3->Text != "") {
				return true;
			}
			return false;
		}
	private: System::Void button_Click(System::Object^ sender, System::EventArgs^ e) {

		Button^ button = safe_cast<Button^>(sender);
		if (isWin != true) {
			if (button->Text == "" && character == 'x') {
				button->Text = "x";
				button->BackColor = Color::LightCoral;
				character = 'o';
				isWin = checkWin();
				if (isWin) {
					label1->Text = "Игрок X победил!";
				}
				else {
					label1->Text = "Ходит игрок O";
				}

			}
			else if (button->Text == "" && character == 'o') {
				button->Text = "o";
				button->BackColor = Color::SandyBrown;
				character = 'x';
				label1->Text = "Ходит игрок X";
				isWin = checkWin();
				if (isWin) {
					label1->Text = "Игрок O победил!";
				}
				else {
					label1->Text = "Ходит игрок X";
				}
			}

		}

	}

	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {


		button1->BackColor = Color::White;
		button2->BackColor = Color::White;
		button3->BackColor = Color::White;
		button4->BackColor = Color::White;
		button5->BackColor = Color::White;
		button6->BackColor = Color::White;
		button7->BackColor = Color::White;
		button8->BackColor = Color::White;
		button9->BackColor = Color::White;

		button1->Text = "";
		button2->Text = "";
		button3->Text = "";
		button4->Text = "";
		button5->Text = "";
		button6->Text = "";
		button7->Text = "";
		button8->Text = "";
		button9->Text = "";

		isWin = false;
		if (character == 'x') {
			label1->Text = "Ходит игрок X";
		}
		else {
			label1->Text = "Ходит игрок O";
		}

	}

	};
}