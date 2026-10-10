#pragma once
#include <io.h>
#include "DashboardForm.h"
namespace ZELORAGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
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
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}






	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;







	protected:







	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::NavajoWhite;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::IndianRed;
			this->button1->Location = System::Drawing::Point(637, 253);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(106, 47);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Login";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &LoginForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::PapayaWhip;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"MV Boli", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(585, 188);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(434, 44);
			this->textBox1->TabIndex = 9;
			this->textBox1->UseSystemPasswordChar = true;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &LoginForm::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"MV Boli", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::IndianRed;
			this->label1->Location = System::Drawing::Point(347, 188);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(199, 40);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Password   ";
			this->label1->Click += gcnew System::EventHandler(this, &LoginForm::label1_Click);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::PapayaWhip;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"MV Boli", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(437, 101);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(239, 44);
			this->textBox2->TabIndex = 7;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &LoginForm::textBox2_TextChanged);
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(442, 42);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(250, 45);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Username  ";
			this->label2->Click += gcnew System::EventHandler(this, &LoginForm::label2_Click);
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Thistle;
			this->ClientSize = System::Drawing::Size(824, 651);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->ForeColor = System::Drawing::SystemColors::Highlight;
			this->Name = L"LoginForm";
			this->Text = L"LoginForm";
			this->Load += gcnew System::EventHandler(this, &LoginForm::LoginForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void txtPassword_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void btnLogin_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ username = txtUsername->Text;
	String^ password = txtPassword->Text;

	if (username == "admin" && password == "1234")
	{
		DashboardForm^ dashboard = gcnew DashboardForm();
		dashboard->Show();
		this->Hide();
	}
	else
	{
		MessageBox::Show(
			"Invalid username or password.",
			"Login Failed",
			MessageBoxButtons::OK,
			MessageBoxIcon::Error
		);
	}
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void LoginForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
