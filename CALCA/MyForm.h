#pragma once
#include <string>
#include <stack>
#include <math.h>

namespace MyCalc {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
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
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  ExprText;
	protected:
	private: System::Windows::Forms::Button^  DigitOneBtn;
	private: System::Windows::Forms::Button^  DigitTwoBtn;
	private: System::Windows::Forms::Button^  DigitTreeBtn;
	private: System::Windows::Forms::Button^  FourDigitBtn;
	private: System::Windows::Forms::Button^  FiveDigitBtn;
	private: System::Windows::Forms::Button^  SixDigitBtn;
	private: System::Windows::Forms::Button^  SevenDigitBtn;
	private: System::Windows::Forms::Button^  EightDigitBtn;
	private: System::Windows::Forms::Button^  NineDigitBtn;
	private: System::Windows::Forms::Button^  ZeroDigitBtn;
	private: System::Windows::Forms::Button^  ClearBtn;
	private: System::Windows::Forms::Button^  ClearAllBtn;
	private: System::Windows::Forms::Button^  AddBtn;
	private: System::Windows::Forms::Button^  SubBtn;
	private: System::Windows::Forms::Button^  MultBtn;
	private: System::Windows::Forms::Button^  DivBtn;
	private: System::Windows::Forms::Button^  ResultBtn;
	private: System::Windows::Forms::Button^  SinBtn;
	private: System::Windows::Forms::Button^  CosBtn;


	private: System::Windows::Forms::Button^  PointBtn;
	private: System::Windows::Forms::Button^  CtgBtn;
	private: System::Windows::Forms::Button^  TgBtn;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;








	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->ExprText = (gcnew System::Windows::Forms::TextBox());
			this->DigitOneBtn = (gcnew System::Windows::Forms::Button());
			this->DigitTwoBtn = (gcnew System::Windows::Forms::Button());
			this->DigitTreeBtn = (gcnew System::Windows::Forms::Button());
			this->FourDigitBtn = (gcnew System::Windows::Forms::Button());
			this->FiveDigitBtn = (gcnew System::Windows::Forms::Button());
			this->SixDigitBtn = (gcnew System::Windows::Forms::Button());
			this->SevenDigitBtn = (gcnew System::Windows::Forms::Button());
			this->EightDigitBtn = (gcnew System::Windows::Forms::Button());
			this->NineDigitBtn = (gcnew System::Windows::Forms::Button());
			this->ZeroDigitBtn = (gcnew System::Windows::Forms::Button());
			this->ClearBtn = (gcnew System::Windows::Forms::Button());
			this->ClearAllBtn = (gcnew System::Windows::Forms::Button());
			this->AddBtn = (gcnew System::Windows::Forms::Button());
			this->SubBtn = (gcnew System::Windows::Forms::Button());
			this->MultBtn = (gcnew System::Windows::Forms::Button());
			this->DivBtn = (gcnew System::Windows::Forms::Button());
			this->ResultBtn = (gcnew System::Windows::Forms::Button());
			this->SinBtn = (gcnew System::Windows::Forms::Button());
			this->CosBtn = (gcnew System::Windows::Forms::Button());
			this->PointBtn = (gcnew System::Windows::Forms::Button());
			this->CtgBtn = (gcnew System::Windows::Forms::Button());
			this->TgBtn = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// ExprText
			// 
			this->ExprText->BackColor = System::Drawing::Color::Aqua;
			this->ExprText->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->ExprText->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 15.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ExprText->ForeColor = System::Drawing::Color::Maroon;
			this->ExprText->Location = System::Drawing::Point(12, 85);
			this->ExprText->Name = L"ExprText";
			this->ExprText->ReadOnly = true;
			this->ExprText->Size = System::Drawing::Size(330, 31);
			this->ExprText->TabIndex = 0;
			this->ExprText->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// DigitOneBtn
			// 
			this->DigitOneBtn->BackColor = System::Drawing::Color::Orange;
			this->DigitOneBtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->DigitOneBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->DigitOneBtn->Location = System::Drawing::Point(12, 332);
			this->DigitOneBtn->Name = L"DigitOneBtn";
			this->DigitOneBtn->Size = System::Drawing::Size(50, 50);
			this->DigitOneBtn->TabIndex = 1;
			this->DigitOneBtn->Text = L"1";
			this->DigitOneBtn->UseVisualStyleBackColor = false;
			this->DigitOneBtn->Click += gcnew System::EventHandler(this, &MyForm::DigitOneBtn_Click);
			// 
			// DigitTwoBtn
			// 
			this->DigitTwoBtn->BackColor = System::Drawing::Color::Orange;
			this->DigitTwoBtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->DigitTwoBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->DigitTwoBtn->Location = System::Drawing::Point(68, 332);
			this->DigitTwoBtn->Name = L"DigitTwoBtn";
			this->DigitTwoBtn->Size = System::Drawing::Size(50, 50);
			this->DigitTwoBtn->TabIndex = 2;
			this->DigitTwoBtn->Text = L"2";
			this->DigitTwoBtn->UseVisualStyleBackColor = false;
			this->DigitTwoBtn->Click += gcnew System::EventHandler(this, &MyForm::DigitTwoBtn_Click);
			// 
			// DigitTreeBtn
			// 
			this->DigitTreeBtn->BackColor = System::Drawing::Color::Orange;
			this->DigitTreeBtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->DigitTreeBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->DigitTreeBtn->Location = System::Drawing::Point(124, 332);
			this->DigitTreeBtn->Name = L"DigitTreeBtn";
			this->DigitTreeBtn->Size = System::Drawing::Size(50, 50);
			this->DigitTreeBtn->TabIndex = 3;
			this->DigitTreeBtn->Text = L"3";
			this->DigitTreeBtn->UseVisualStyleBackColor = false;
			this->DigitTreeBtn->Click += gcnew System::EventHandler(this, &MyForm::DigitTreeBtn_Click);
			// 
			// FourDigitBtn
			// 
			this->FourDigitBtn->BackColor = System::Drawing::Color::Orange;
			this->FourDigitBtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->FourDigitBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FourDigitBtn->Location = System::Drawing::Point(12, 276);
			this->FourDigitBtn->Name = L"FourDigitBtn";
			this->FourDigitBtn->Size = System::Drawing::Size(50, 50);
			this->FourDigitBtn->TabIndex = 4;
			this->FourDigitBtn->Text = L"4";
			this->FourDigitBtn->UseVisualStyleBackColor = false;
			this->FourDigitBtn->Click += gcnew System::EventHandler(this, &MyForm::FourDigitBtn_Click);
			// 
			// FiveDigitBtn
			// 
			this->FiveDigitBtn->BackColor = System::Drawing::Color::Orange;
			this->FiveDigitBtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->FiveDigitBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FiveDigitBtn->Location = System::Drawing::Point(68, 276);
			this->FiveDigitBtn->Name = L"FiveDigitBtn";
			this->FiveDigitBtn->Size = System::Drawing::Size(50, 50);
			this->FiveDigitBtn->TabIndex = 5;
			this->FiveDigitBtn->Text = L"5";
			this->FiveDigitBtn->UseVisualStyleBackColor = false;
			this->FiveDigitBtn->Click += gcnew System::EventHandler(this, &MyForm::FiveDigitBtn_Click);
			// 
			// SixDigitBtn
			// 
			this->SixDigitBtn->BackColor = System::Drawing::Color::Orange;
			this->SixDigitBtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->SixDigitBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->SixDigitBtn->Location = System::Drawing::Point(124, 276);
			this->SixDigitBtn->Name = L"SixDigitBtn";
			this->SixDigitBtn->Size = System::Drawing::Size(50, 50);
			this->SixDigitBtn->TabIndex = 6;
			this->SixDigitBtn->Text = L"6";
			this->SixDigitBtn->UseVisualStyleBackColor = false;
			this->SixDigitBtn->Click += gcnew System::EventHandler(this, &MyForm::SixDigitBtn_Click);
			// 
			// SevenDigitBtn
			// 
			this->SevenDigitBtn->BackColor = System::Drawing::Color::Orange;
			this->SevenDigitBtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->SevenDigitBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->SevenDigitBtn->Location = System::Drawing::Point(12, 220);
			this->SevenDigitBtn->Name = L"SevenDigitBtn";
			this->SevenDigitBtn->Size = System::Drawing::Size(50, 50);
			this->SevenDigitBtn->TabIndex = 7;
			this->SevenDigitBtn->Text = L"7";
			this->SevenDigitBtn->UseVisualStyleBackColor = false;
			this->SevenDigitBtn->Click += gcnew System::EventHandler(this, &MyForm::SevenDigitBtn_Click);
			// 
			// EightDigitBtn
			// 
			this->EightDigitBtn->BackColor = System::Drawing::Color::Orange;
			this->EightDigitBtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->EightDigitBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->EightDigitBtn->Location = System::Drawing::Point(68, 220);
			this->EightDigitBtn->Name = L"EightDigitBtn";
			this->EightDigitBtn->Size = System::Drawing::Size(50, 50);
			this->EightDigitBtn->TabIndex = 8;
			this->EightDigitBtn->Text = L"8";
			this->EightDigitBtn->UseVisualStyleBackColor = false;
			this->EightDigitBtn->Click += gcnew System::EventHandler(this, &MyForm::EightDigitBtn_Click);
			// 
			// NineDigitBtn
			// 
			this->NineDigitBtn->BackColor = System::Drawing::Color::Orange;
			this->NineDigitBtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->NineDigitBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->NineDigitBtn->Location = System::Drawing::Point(124, 220);
			this->NineDigitBtn->Name = L"NineDigitBtn";
			this->NineDigitBtn->Size = System::Drawing::Size(50, 50);
			this->NineDigitBtn->TabIndex = 9;
			this->NineDigitBtn->Text = L"9";
			this->NineDigitBtn->UseVisualStyleBackColor = false;
			this->NineDigitBtn->Click += gcnew System::EventHandler(this, &MyForm::NineDigitBtn_Click);
			// 
			// ZeroDigitBtn
			// 
			this->ZeroDigitBtn->BackColor = System::Drawing::Color::Orange;
			this->ZeroDigitBtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->ZeroDigitBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ZeroDigitBtn->Location = System::Drawing::Point(68, 388);
			this->ZeroDigitBtn->Name = L"ZeroDigitBtn";
			this->ZeroDigitBtn->Size = System::Drawing::Size(50, 50);
			this->ZeroDigitBtn->TabIndex = 10;
			this->ZeroDigitBtn->Text = L"0";
			this->ZeroDigitBtn->UseVisualStyleBackColor = false;
			this->ZeroDigitBtn->Click += gcnew System::EventHandler(this, &MyForm::ZeroDigitBtn_Click);
			// 
			// ClearBtn
			// 
			this->ClearBtn->BackColor = System::Drawing::Color::Orange;
			this->ClearBtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->ClearBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ClearBtn->Location = System::Drawing::Point(236, 220);
			this->ClearBtn->Name = L"ClearBtn";
			this->ClearBtn->Size = System::Drawing::Size(50, 50);
			this->ClearBtn->TabIndex = 11;
			this->ClearBtn->Text = L"del";
			this->ClearBtn->UseVisualStyleBackColor = false;
			this->ClearBtn->Click += gcnew System::EventHandler(this, &MyForm::ClearBtn_Click);
			// 
			// ClearAllBtn
			// 
			this->ClearAllBtn->BackColor = System::Drawing::Color::Orange;
			this->ClearAllBtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->ClearAllBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ClearAllBtn->Location = System::Drawing::Point(180, 220);
			this->ClearAllBtn->Name = L"ClearAllBtn";
			this->ClearAllBtn->Size = System::Drawing::Size(50, 50);
			this->ClearAllBtn->TabIndex = 12;
			this->ClearAllBtn->Text = L"C";
			this->ClearAllBtn->UseVisualStyleBackColor = false;
			this->ClearAllBtn->Click += gcnew System::EventHandler(this, &MyForm::ClearAllBtn_Click);
			// 
			// AddBtn
			// 
			this->AddBtn->BackColor = System::Drawing::Color::Orange;
			this->AddBtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->AddBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->AddBtn->Location = System::Drawing::Point(180, 388);
			this->AddBtn->Name = L"AddBtn";
			this->AddBtn->Size = System::Drawing::Size(50, 50);
			this->AddBtn->TabIndex = 13;
			this->AddBtn->Text = L"+";
			this->AddBtn->UseVisualStyleBackColor = false;
			this->AddBtn->Click += gcnew System::EventHandler(this, &MyForm::AddBtn_Click);
			// 
			// SubBtn
			// 
			this->SubBtn->BackColor = System::Drawing::Color::Orange;
			this->SubBtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->SubBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->SubBtn->Location = System::Drawing::Point(236, 388);
			this->SubBtn->Name = L"SubBtn";
			this->SubBtn->Size = System::Drawing::Size(50, 50);
			this->SubBtn->TabIndex = 14;
			this->SubBtn->Text = L"-";
			this->SubBtn->UseVisualStyleBackColor = false;
			this->SubBtn->Click += gcnew System::EventHandler(this, &MyForm::SubBtn_Click);
			// 
			// MultBtn
			// 
			this->MultBtn->BackColor = System::Drawing::Color::Orange;
			this->MultBtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->MultBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->MultBtn->Location = System::Drawing::Point(236, 332);
			this->MultBtn->Name = L"MultBtn";
			this->MultBtn->Size = System::Drawing::Size(50, 50);
			this->MultBtn->TabIndex = 15;
			this->MultBtn->Text = L"*";
			this->MultBtn->UseVisualStyleBackColor = false;
			this->MultBtn->Click += gcnew System::EventHandler(this, &MyForm::MultBtn_Click);
			// 
			// DivBtn
			// 
			this->DivBtn->BackColor = System::Drawing::Color::Orange;
			this->DivBtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->DivBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->DivBtn->Location = System::Drawing::Point(236, 276);
			this->DivBtn->Name = L"DivBtn";
			this->DivBtn->Size = System::Drawing::Size(50, 50);
			this->DivBtn->TabIndex = 16;
			this->DivBtn->Text = L"/";
			this->DivBtn->UseVisualStyleBackColor = false;
			this->DivBtn->Click += gcnew System::EventHandler(this, &MyForm::DivBtn_Click);
			// 
			// ResultBtn
			// 
			this->ResultBtn->BackColor = System::Drawing::Color::Orange;
			this->ResultBtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->ResultBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ResultBtn->Location = System::Drawing::Point(124, 388);
			this->ResultBtn->Name = L"ResultBtn";
			this->ResultBtn->Size = System::Drawing::Size(50, 50);
			this->ResultBtn->TabIndex = 17;
			this->ResultBtn->Text = L"=";
			this->ResultBtn->UseVisualStyleBackColor = false;
			this->ResultBtn->Click += gcnew System::EventHandler(this, &MyForm::ResultBtn_Click);
			// 
			// SinBtn
			// 
			this->SinBtn->BackColor = System::Drawing::Color::Orange;
			this->SinBtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->SinBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->SinBtn->Location = System::Drawing::Point(292, 388);
			this->SinBtn->Name = L"SinBtn";
			this->SinBtn->Size = System::Drawing::Size(50, 50);
			this->SinBtn->TabIndex = 18;
			this->SinBtn->Text = L"sin";
			this->SinBtn->UseVisualStyleBackColor = false;
			this->SinBtn->Click += gcnew System::EventHandler(this, &MyForm::SinBtn_Click);
			// 
			// CosBtn
			// 
			this->CosBtn->BackColor = System::Drawing::Color::Orange;
			this->CosBtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->CosBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->CosBtn->Location = System::Drawing::Point(292, 332);
			this->CosBtn->Name = L"CosBtn";
			this->CosBtn->Size = System::Drawing::Size(50, 50);
			this->CosBtn->TabIndex = 19;
			this->CosBtn->Text = L"cos";
			this->CosBtn->UseVisualStyleBackColor = false;
			this->CosBtn->Click += gcnew System::EventHandler(this, &MyForm::CosBtn_Click);
			// 
			// PointBtn
			// 
			this->PointBtn->BackColor = System::Drawing::Color::Orange;
			this->PointBtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->PointBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->PointBtn->Location = System::Drawing::Point(12, 388);
			this->PointBtn->Name = L"PointBtn";
			this->PointBtn->Size = System::Drawing::Size(50, 50);
			this->PointBtn->TabIndex = 22;
			this->PointBtn->Text = L",";
			this->PointBtn->UseVisualStyleBackColor = false;
			this->PointBtn->Click += gcnew System::EventHandler(this, &MyForm::PointBtn_Click);
			// 
			// CtgBtn
			// 
			this->CtgBtn->BackColor = System::Drawing::Color::Orange;
			this->CtgBtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->CtgBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->CtgBtn->Location = System::Drawing::Point(292, 220);
			this->CtgBtn->Name = L"CtgBtn";
			this->CtgBtn->Size = System::Drawing::Size(50, 50);
			this->CtgBtn->TabIndex = 21;
			this->CtgBtn->Text = L"ctg";
			this->CtgBtn->UseVisualStyleBackColor = false;
			this->CtgBtn->Click += gcnew System::EventHandler(this, &MyForm::CtgBtn_Click);
			// 
			// TgBtn
			// 
			this->TgBtn->BackColor = System::Drawing::Color::Orange;
			this->TgBtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->TgBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->TgBtn->Location = System::Drawing::Point(292, 276);
			this->TgBtn->Name = L"TgBtn";
			this->TgBtn->Size = System::Drawing::Size(50, 50);
			this->TgBtn->TabIndex = 20;
			this->TgBtn->Text = L"tg";
			this->TgBtn->UseVisualStyleBackColor = false;
			this->TgBtn->Click += gcnew System::EventHandler(this, &MyForm::TgBtn_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Orange;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(180, 276);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(50, 50);
			this->button1->TabIndex = 23;
			this->button1->Text = L"pi";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Orange;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(180, 332);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(50, 50);
			this->button2->TabIndex = 24;
			this->button2->Text = L"e";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Lime;
			this->ClientSize = System::Drawing::Size(354, 450);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->PointBtn);
			this->Controls->Add(this->CtgBtn);
			this->Controls->Add(this->TgBtn);
			this->Controls->Add(this->CosBtn);
			this->Controls->Add(this->SinBtn);
			this->Controls->Add(this->ResultBtn);
			this->Controls->Add(this->DivBtn);
			this->Controls->Add(this->MultBtn);
			this->Controls->Add(this->SubBtn);
			this->Controls->Add(this->AddBtn);
			this->Controls->Add(this->ClearAllBtn);
			this->Controls->Add(this->ClearBtn);
			this->Controls->Add(this->ZeroDigitBtn);
			this->Controls->Add(this->NineDigitBtn);
			this->Controls->Add(this->EightDigitBtn);
			this->Controls->Add(this->SevenDigitBtn);
			this->Controls->Add(this->SixDigitBtn);
			this->Controls->Add(this->FiveDigitBtn);
			this->Controls->Add(this->FourDigitBtn);
			this->Controls->Add(this->DigitTreeBtn);
			this->Controls->Add(this->DigitTwoBtn);
			this->Controls->Add(this->DigitOneBtn);
			this->Controls->Add(this->ExprText);
			this->MaximumSize = System::Drawing::Size(370, 488);
			this->MinimumSize = System::Drawing::Size(370, 488);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"CAAALCUUULAAATEURRR!!!!!";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		private:
			float f_operand, s_operand;
			bool add = false, sub = false, mult = false, div = false;
			String ^ buf = "";

private:
	System::Void DigitOneBtn_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		ExprText->Text += "1";
	}
private: 
	System::Void DigitTwoBtn_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		ExprText->Text += "2";
	}
private: 
	System::Void DigitTreeBtn_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		ExprText->Text += "3";
	}
private: 
	System::Void FourDigitBtn_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		ExprText->Text += "4";
	}
private: 
	System::Void FiveDigitBtn_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		ExprText->Text += "5";
	}
private: 
	System::Void SixDigitBtn_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		ExprText->Text += "6";
	}
private: 
	System::Void SevenDigitBtn_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		ExprText->Text += "7";
	}
private: 
	System::Void EightDigitBtn_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		ExprText->Text += "8";
	}
private: 
	System::Void NineDigitBtn_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		ExprText->Text += "9";
	}
private: 
	System::Void ZeroDigitBtn_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		ExprText->Text += "0";
	}
private: 
	System::Void ClearBtn_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		String ^ buf = ExprText->Text;
		ExprText->Text = buf->Substring(0, buf->Length - 1);
	}
private: 
	System::Void ClearAllBtn_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		ExprText->Text = "";
		buf = "";
	}
private: 
	System::Void PointBtn_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		ExprText->Text += ",";
	}
private: 
	System::Void AddBtn_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		String ^ expr_buf = ExprText->Text;

		ExprText->Text = "";
		buf = expr_buf;
		add = true;

		//float a = atof(expr_buf->ToCharArray);

		//f_operand = a;

	}
private: 
	System::Void ResultBtn_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		if (buf == "inf")
			buf = "0";
		if (add)
		{
			float a = System::Double::Parse(buf);

			float b = System::Double::Parse(ExprText->Text);

			float s = a + b;

			ExprText->Text = "" + s;
		}
		if (sub)
		{
			float a = System::Double::Parse(buf);

			float b = System::Double::Parse(ExprText->Text);

			float s = a - b;

			ExprText->Text = "" + s;
		}
		if (mult)
		{
			double a = System::Double::Parse(buf);

			double b = System::Double::Parse(ExprText->Text);

			double s = a * b;

			ExprText->Text = "" + s;
		}
		if (div)
		{
			float a = System::Double::Parse(buf);

			float b = System::Double::Parse(ExprText->Text);

			if (b != 0)
			{
				float s = a / b;
				ExprText->Text = "" + s;
			}
			else
			{
				//float s = a + b;

				ExprText->Text = "inf";
			}
		}

		add = sub = mult = div = false;
	}
private: 
	System::Void SubBtn_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		if (ExprText->Text == "")
			ExprText->Text = "-";
		else
		{

			String ^ expr_buf = ExprText->Text;

			ExprText->Text = "";
			buf = expr_buf;
			sub = true;
		}

	}
private: 
	System::Void MultBtn_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		String ^ expr_buf = ExprText->Text;

		ExprText->Text = "";
		buf = expr_buf;
		mult = true;
	}
private: 
	System::Void DivBtn_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		String ^ expr_buf = ExprText->Text;

		ExprText->Text = "";
		buf = expr_buf;
		div = true;
	}
private: 
	System::Void SinBtn_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		double a = System::Double::Parse(ExprText->Text);
		ExprText->Text = "" + sin(a);
	}
private: 
	System::Void CosBtn_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		double a = System::Double::Parse(ExprText->Text);
		ExprText->Text = "" + cos(a);
	}
private: 
	System::Void TgBtn_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		double a = System::Double::Parse(ExprText->Text);
		ExprText->Text = "" + tan(a);
	}
private: 
	System::Void CtgBtn_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		double a = System::Double::Parse(ExprText->Text);
		if (tan(a) == 0)
			ExprText->Text = "" + "inf";
		else
			ExprText->Text = "" + (1/tan(a));
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	ExprText->Text += "3,141592653589793238462643383279502";
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	ExprText->Text += "2,71828182845904523536";
}
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
}
};
}
