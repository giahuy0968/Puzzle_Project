#pragma once

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Button^ butt9;

	private: System::Windows::Forms::Button^ butt8;

	private: System::Windows::Forms::Button^ butt7;

	private: System::Windows::Forms::Button^ butt6;

	private: System::Windows::Forms::Button^ butt5;

	private: System::Windows::Forms::Button^ butt4;

	private: System::Windows::Forms::Button^ butt3;

	private: System::Windows::Forms::Button^ butt2;

	private: System::Windows::Forms::Button^ butt1;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ NumOfClicks;

	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button10;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->butt9 = (gcnew System::Windows::Forms::Button());
			this->butt8 = (gcnew System::Windows::Forms::Button());
			this->butt7 = (gcnew System::Windows::Forms::Button());
			this->butt6 = (gcnew System::Windows::Forms::Button());
			this->butt5 = (gcnew System::Windows::Forms::Button());
			this->butt4 = (gcnew System::Windows::Forms::Button());
			this->butt3 = (gcnew System::Windows::Forms::Button());
			this->butt2 = (gcnew System::Windows::Forms::Button());
			this->butt1 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->NumOfClicks = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::CadetBlue;
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1369, 109);
			this->panel1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 70.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(320, -13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(759, 134);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Puzzle Game";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::CadetBlue;
			this->panel2->Controls->Add(this->butt9);
			this->panel2->Controls->Add(this->butt8);
			this->panel2->Controls->Add(this->butt7);
			this->panel2->Controls->Add(this->butt6);
			this->panel2->Controls->Add(this->butt5);
			this->panel2->Controls->Add(this->butt4);
			this->panel2->Controls->Add(this->butt3);
			this->panel2->Controls->Add(this->butt2);
			this->panel2->Controls->Add(this->butt1);
			this->panel2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel2->Location = System::Drawing::Point(0, 115);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(578, 625);
			this->panel2->TabIndex = 1;
			// 
			// butt9
			// 
			this->butt9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->butt9->Location = System::Drawing::Point(309, 354);
			this->butt9->Name = L"butt9";
			this->butt9->Size = System::Drawing::Size(126, 155);
			this->butt9->TabIndex = 8;
			this->butt9->UseVisualStyleBackColor = true;
			this->butt9->Click += gcnew System::EventHandler(this, &Form1::butt9_Click);
			// 
			// butt8
			// 
			this->butt8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->butt8->Location = System::Drawing::Point(177, 354);
			this->butt8->Name = L"butt8";
			this->butt8->Size = System::Drawing::Size(126, 155);
			this->butt8->TabIndex = 7;
			this->butt8->Text = L"8";
			this->butt8->UseVisualStyleBackColor = true;
			this->butt8->Click += gcnew System::EventHandler(this, &Form1::butt8_Click);
			// 
			// butt7
			// 
			this->butt7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->butt7->Location = System::Drawing::Point(45, 354);
			this->butt7->Name = L"butt7";
			this->butt7->Size = System::Drawing::Size(126, 155);
			this->butt7->TabIndex = 6;
			this->butt7->Text = L"7";
			this->butt7->UseVisualStyleBackColor = true;
			this->butt7->Click += gcnew System::EventHandler(this, &Form1::butt7_Click);
			// 
			// butt6
			// 
			this->butt6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->butt6->Location = System::Drawing::Point(309, 193);
			this->butt6->Name = L"butt6";
			this->butt6->Size = System::Drawing::Size(126, 155);
			this->butt6->TabIndex = 5;
			this->butt6->Text = L"6";
			this->butt6->UseVisualStyleBackColor = true;
			this->butt6->Click += gcnew System::EventHandler(this, &Form1::butt6_Click);
			// 
			// butt5
			// 
			this->butt5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->butt5->Location = System::Drawing::Point(177, 193);
			this->butt5->Name = L"butt5";
			this->butt5->Size = System::Drawing::Size(126, 155);
			this->butt5->TabIndex = 4;
			this->butt5->Text = L"5";
			this->butt5->UseVisualStyleBackColor = true;
			this->butt5->Click += gcnew System::EventHandler(this, &Form1::butt5_Click);
			// 
			// butt4
			// 
			this->butt4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->butt4->Location = System::Drawing::Point(45, 193);
			this->butt4->Name = L"butt4";
			this->butt4->Size = System::Drawing::Size(126, 155);
			this->butt4->TabIndex = 3;
			this->butt4->Text = L"4";
			this->butt4->UseVisualStyleBackColor = true;
			this->butt4->Click += gcnew System::EventHandler(this, &Form1::butt4_Click);
			// 
			// butt3
			// 
			this->butt3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->butt3->Location = System::Drawing::Point(309, 32);
			this->butt3->Name = L"butt3";
			this->butt3->Size = System::Drawing::Size(126, 155);
			this->butt3->TabIndex = 2;
			this->butt3->Text = L"3";
			this->butt3->UseVisualStyleBackColor = true;
			this->butt3->Click += gcnew System::EventHandler(this, &Form1::butt3_Click);
			// 
			// butt2
			// 
			this->butt2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->butt2->Location = System::Drawing::Point(177, 32);
			this->butt2->Name = L"butt2";
			this->butt2->Size = System::Drawing::Size(126, 155);
			this->butt2->TabIndex = 1;
			this->butt2->Text = L"2";
			this->butt2->UseVisualStyleBackColor = true;
			this->butt2->Click += gcnew System::EventHandler(this, &Form1::butt2_Click);
			// 
			// butt1
			// 
			this->butt1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->butt1->Location = System::Drawing::Point(45, 32);
			this->butt1->Name = L"butt1";
			this->butt1->Size = System::Drawing::Size(126, 155);
			this->butt1->TabIndex = 0;
			this->butt1->Text = L"1";
			this->butt1->UseVisualStyleBackColor = true;
			this->butt1->Click += gcnew System::EventHandler(this, &Form1::butt1_Click);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::CadetBlue;
			this->panel3->Controls->Add(this->NumOfClicks);
			this->panel3->Controls->Add(this->label2);
			this->panel3->Location = System::Drawing::Point(584, 115);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(385, 625);
			this->panel3->TabIndex = 2;
			// 
			// NumOfClicks
			// 
			this->NumOfClicks->BackColor = System::Drawing::Color::AliceBlue;
			this->NumOfClicks->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NumOfClicks->Location = System::Drawing::Point(0, 332);
			this->NumOfClicks->Name = L"NumOfClicks";
			this->NumOfClicks->Size = System::Drawing::Size(385, 250);
			this->NumOfClicks->TabIndex = 1;
			this->NumOfClicks->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::AliceBlue;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(0, 40);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(385, 250);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Total \r\nClicks";
			this->label2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::CadetBlue;
			this->panel4->Controls->Add(this->button12);
			this->panel4->Controls->Add(this->button11);
			this->panel4->Controls->Add(this->button10);
			this->panel4->Location = System::Drawing::Point(975, 115);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(394, 625);
			this->panel4->TabIndex = 2;
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->Location = System::Drawing::Point(18, 427);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(347, 155);
			this->button12->TabIndex = 11;
			this->button12->Text = L"Exit";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &Form1::button12_Click);
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(18, 253);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(347, 155);
			this->button11->TabIndex = 10;
			this->button11->Text = L"Reset";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &Form1::button11_Click);
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(18, 91);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(347, 145);
			this->button10->TabIndex = 9;
			this->button10->Text = L"Slution";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Form1::button10_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1368, 741);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Puzzle";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
		int Counter;
//====================================================================================================
		//kiem tra o trong
		public: System::Void EmptySpotChecker(Button^ butt1, Button^ butt2)
		{
			if (butt2->Text == "")
			{
				butt2->Text = butt1->Text;
				butt1->Text = "";
			}
		}
//====================================================================================================
	public: System::Void SolutionChecker()
	{
		if (butt1->Text == "1" && butt2->Text == "2" && butt3->Text == "3" && butt4->Text == "4" &&
			butt5->Text == "5" && butt6->Text == "6" && butt7->Text == "7" && butt8->Text == "8")
		{
			MessageBox::Show("Chuc mung ban da chien thang", "Puzzle",
				MessageBoxButtons::OK, MessageBoxIcon::Information);
		}

		Counter = Counter + 1;
		NumOfClicks->Text = Counter.ToString();
	}
//====================================================================================================
	//Xao tron cac o
	public: System::Void Shuffle()
	{
		array<int>^ bnum = gcnew array<int>(9);
		int i, j, rowchecker;
		bool flag = false;

		i = 1;
		Random^ rnd = gcnew Random();

		do
		{
			rowchecker = Convert::ToInt32((rnd->Next(0, 8)) + 1);

			for (j = 1; j <= i; j++)
			{
				if (bnum[j] == rowchecker)
				{
					flag = true;
					break;
				}
				
			}
			if (flag == true)
			{
				flag = false;
			}
			else
			{
				bnum[i] = rowchecker;
				i = i + 1;
			}
		} while (i <= 8);
		butt1->Text = Convert::ToString(bnum[1]);
		butt2->Text = Convert::ToString(bnum[2]);
		butt3->Text = Convert::ToString(bnum[3]);
		butt4->Text = Convert::ToString(bnum[4]);
		butt5->Text = Convert::ToString(bnum[5]);
		butt6->Text = Convert::ToString(bnum[6]);
		butt7->Text = Convert::ToString(bnum[7]);
		butt8->Text = Convert::ToString(bnum[8]);
		butt9->Text = "";

	}
//====================================================================================================
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	Shuffle();
	NumOfClicks->Text = "";
}
private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	Shuffle();
}
private: System::Void butt1_Click(System::Object^ sender, System::EventArgs^ e) {
	EmptySpotChecker(butt1, butt2);
	EmptySpotChecker(butt1, butt4);
	SolutionChecker();
}
private: System::Void butt2_Click(System::Object^ sender, System::EventArgs^ e) {
	EmptySpotChecker(butt2, butt1);
	EmptySpotChecker(butt2, butt3);
	EmptySpotChecker(butt2, butt5);
	SolutionChecker();
}
private: System::Void butt3_Click(System::Object^ sender, System::EventArgs^ e) {
	EmptySpotChecker(butt3, butt2);
	EmptySpotChecker(butt3, butt6);
	SolutionChecker();
}
private: System::Void butt4_Click(System::Object^ sender, System::EventArgs^ e) {
	EmptySpotChecker(butt4, butt1);
	EmptySpotChecker(butt4, butt5);
	EmptySpotChecker(butt4, butt7);
	SolutionChecker();
}
private: System::Void butt5_Click(System::Object^ sender, System::EventArgs^ e) {
	EmptySpotChecker(butt5, butt2);
	EmptySpotChecker(butt5, butt4);
	EmptySpotChecker(butt5, butt6);
	EmptySpotChecker(butt5, butt8);
	SolutionChecker();
}
private: System::Void butt6_Click(System::Object^ sender, System::EventArgs^ e) {
	EmptySpotChecker(butt6, butt3);
	EmptySpotChecker(butt6, butt5);
	EmptySpotChecker(butt6, butt9);
	SolutionChecker();
}
private: System::Void butt7_Click(System::Object^ sender, System::EventArgs^ e) {
	EmptySpotChecker(butt7, butt4);
	EmptySpotChecker(butt7, butt8);
	SolutionChecker();
}
private: System::Void butt8_Click(System::Object^ sender, System::EventArgs^ e) {
	EmptySpotChecker(butt8, butt5);
	EmptySpotChecker(butt8, butt7);
	EmptySpotChecker(butt8, butt9);
	SolutionChecker();
}
private: System::Void butt9_Click(System::Object^ sender, System::EventArgs^ e) {
	EmptySpotChecker(butt9, butt6);
	EmptySpotChecker(butt9, butt8);
	SolutionChecker();
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	butt1->Text = Convert::ToString(1);
	butt2->Text = Convert::ToString(2);
	butt3->Text = Convert::ToString(3);
	butt4->Text = Convert::ToString(4);
	butt5->Text = Convert::ToString(5);
	butt6->Text = Convert::ToString(6);
	butt7->Text = Convert::ToString(7);
	butt8->Text = Convert::ToString(8);
	butt9->Text = "";

	NumOfClicks->Text = "";

}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {

	System::Windows::Forms::DialogResult iExit;

	iExit = MessageBox::Show("Xac nhan neu ban muon thoat", "Puzzle",
		MessageBoxButtons::YesNo, MessageBoxIcon::Question);
	if (iExit == System::Windows::Forms::DialogResult::Yes)
	{
		Application::Exit();
	}
}
};
}
