#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Button^  newButton;
	private: System::Windows::Forms::Button^  buttonUpLeft;
	private: System::Windows::Forms::Button^  buttonUpMid;
	private: System::Windows::Forms::Button^  buttonUpRight;
	private: System::Windows::Forms::Button^  buttonMidLeft;
	private: System::Windows::Forms::Button^  buttonMidMid;
	private: System::Windows::Forms::Button^  buttonMidRight;
	private: System::Windows::Forms::Button^  buttonBotLeft;
	private: System::Windows::Forms::Button^  buttonBotMid;
	private: System::Windows::Forms::Button^  buttonBotRight;
	protected:











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
			this->newButton = (gcnew System::Windows::Forms::Button());
			this->buttonUpLeft = (gcnew System::Windows::Forms::Button());
			this->buttonUpMid = (gcnew System::Windows::Forms::Button());
			this->buttonUpRight = (gcnew System::Windows::Forms::Button());
			this->buttonMidLeft = (gcnew System::Windows::Forms::Button());
			this->buttonMidMid = (gcnew System::Windows::Forms::Button());
			this->buttonMidRight = (gcnew System::Windows::Forms::Button());
			this->buttonBotLeft = (gcnew System::Windows::Forms::Button());
			this->buttonBotMid = (gcnew System::Windows::Forms::Button());
			this->buttonBotRight = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->Location = System::Drawing::Point(12, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(460, 300);
			this->panel1->TabIndex = 3;
			// 
			// newButton
			// 
			this->newButton->Location = System::Drawing::Point(279, 329);
			this->newButton->Name = L"newButton";
			this->newButton->Size = System::Drawing::Size(193, 112);
			this->newButton->TabIndex = 4;
			this->newButton->Text = L"NEW GAME";
			this->newButton->UseVisualStyleBackColor = true;
			// 
			// buttonUpLeft
			// 
			this->buttonUpLeft->Location = System::Drawing::Point(12, 329);
			this->buttonUpLeft->Name = L"buttonUpLeft";
			this->buttonUpLeft->Size = System::Drawing::Size(75, 23);
			this->buttonUpLeft->TabIndex = 5;
			this->buttonUpLeft->Text = L"button2";
			this->buttonUpLeft->UseVisualStyleBackColor = true;
			// 
			// buttonUpMid
			// 
			this->buttonUpMid->Location = System::Drawing::Point(100, 329);
			this->buttonUpMid->Name = L"buttonUpMid";
			this->buttonUpMid->Size = System::Drawing::Size(75, 23);
			this->buttonUpMid->TabIndex = 6;
			this->buttonUpMid->Text = L"button3";
			this->buttonUpMid->UseVisualStyleBackColor = true;
			// 
			// buttonUpRight
			// 
			this->buttonUpRight->Location = System::Drawing::Point(191, 329);
			this->buttonUpRight->Name = L"buttonUpRight";
			this->buttonUpRight->Size = System::Drawing::Size(75, 23);
			this->buttonUpRight->TabIndex = 7;
			this->buttonUpRight->Text = L"button4";
			this->buttonUpRight->UseVisualStyleBackColor = true;
			// 
			// buttonMidLeft
			// 
			this->buttonMidLeft->Location = System::Drawing::Point(12, 372);
			this->buttonMidLeft->Name = L"buttonMidLeft";
			this->buttonMidLeft->Size = System::Drawing::Size(75, 23);
			this->buttonMidLeft->TabIndex = 8;
			this->buttonMidLeft->Text = L"button5";
			this->buttonMidLeft->UseVisualStyleBackColor = true;
			// 
			// buttonMidMid
			// 
			this->buttonMidMid->Location = System::Drawing::Point(100, 372);
			this->buttonMidMid->Name = L"buttonMidMid";
			this->buttonMidMid->Size = System::Drawing::Size(75, 23);
			this->buttonMidMid->TabIndex = 9;
			this->buttonMidMid->Text = L"button6";
			this->buttonMidMid->UseVisualStyleBackColor = true;
			// 
			// buttonMidRight
			// 
			this->buttonMidRight->Location = System::Drawing::Point(191, 372);
			this->buttonMidRight->Name = L"buttonMidRight";
			this->buttonMidRight->Size = System::Drawing::Size(75, 23);
			this->buttonMidRight->TabIndex = 10;
			this->buttonMidRight->Text = L"button7";
			this->buttonMidRight->UseVisualStyleBackColor = true;
			// 
			// buttonBotLeft
			// 
			this->buttonBotLeft->Location = System::Drawing::Point(12, 418);
			this->buttonBotLeft->Name = L"buttonBotLeft";
			this->buttonBotLeft->Size = System::Drawing::Size(75, 23);
			this->buttonBotLeft->TabIndex = 11;
			this->buttonBotLeft->Text = L"button8";
			this->buttonBotLeft->UseVisualStyleBackColor = true;
			// 
			// buttonBotMid
			// 
			this->buttonBotMid->Location = System::Drawing::Point(100, 418);
			this->buttonBotMid->Name = L"buttonBotMid";
			this->buttonBotMid->Size = System::Drawing::Size(75, 23);
			this->buttonBotMid->TabIndex = 12;
			this->buttonBotMid->Text = L"button9";
			this->buttonBotMid->UseVisualStyleBackColor = true;
			// 
			// buttonBotRight
			// 
			this->buttonBotRight->Location = System::Drawing::Point(191, 418);
			this->buttonBotRight->Name = L"buttonBotRight";
			this->buttonBotRight->Size = System::Drawing::Size(75, 23);
			this->buttonBotRight->TabIndex = 13;
			this->buttonBotRight->Text = L"button10";
			this->buttonBotRight->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(484, 462);
			this->Controls->Add(this->newButton);
			this->Controls->Add(this->buttonBotRight);
			this->Controls->Add(this->buttonBotMid);
			this->Controls->Add(this->buttonBotLeft);
			this->Controls->Add(this->buttonMidRight);
			this->Controls->Add(this->buttonMidMid);
			this->Controls->Add(this->buttonMidLeft);
			this->Controls->Add(this->buttonUpRight);
			this->Controls->Add(this->buttonUpMid);
			this->Controls->Add(this->buttonUpLeft);
			this->Controls->Add(this->panel1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}
