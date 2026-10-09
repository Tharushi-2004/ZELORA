#pragma once

namespace ZELORAGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CustomerForm
	/// </summary>
	public ref class CustomerForm : public System::Windows::Forms::Form
	{
	public:
		CustomerForm(void)
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
		~CustomerForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblCustomerID;
	private: System::Windows::Forms::TextBox^ txtCustomerID;
	private: System::Windows::Forms::Label^ lblPhone;
	private: System::Windows::Forms::Label^ lblEmail;


	private: System::Windows::Forms::Label^ lblName;
	private: System::Windows::Forms::TextBox^ txtEmail;


	private: System::Windows::Forms::TextBox^ txtName;
	private: System::Windows::Forms::TextBox^ txtPhone;
	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::Button^ btnUpdate;
	private: System::Windows::Forms::Button^ btnDelete;
	private: System::Windows::Forms::Button^ btnClear;
	private: System::Windows::Forms::Label^ lblTitle;





	protected:

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
			this->lblCustomerID = (gcnew System::Windows::Forms::Label());
			this->txtCustomerID = (gcnew System::Windows::Forms::TextBox());
			this->lblPhone = (gcnew System::Windows::Forms::Label());
			this->lblEmail = (gcnew System::Windows::Forms::Label());
			this->lblName = (gcnew System::Windows::Forms::Label());
			this->txtEmail = (gcnew System::Windows::Forms::TextBox());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->txtPhone = (gcnew System::Windows::Forms::TextBox());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->btnClear = (gcnew System::Windows::Forms::Button());
			this->lblTitle = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// lblCustomerID
			// 
			this->lblCustomerID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCustomerID->Location = System::Drawing::Point(20, 117);
			this->lblCustomerID->Name = L"lblCustomerID";
			this->lblCustomerID->Size = System::Drawing::Size(154, 27);
			this->lblCustomerID->TabIndex = 0;
			this->lblCustomerID->Text = L"Customer ID";
			// 
			// txtCustomerID
			// 
			this->txtCustomerID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtCustomerID->Location = System::Drawing::Point(175, 114);
			this->txtCustomerID->Name = L"txtCustomerID";
			this->txtCustomerID->Size = System::Drawing::Size(220, 27);
			this->txtCustomerID->TabIndex = 1;
			this->txtCustomerID->TextChanged += gcnew System::EventHandler(this, &CustomerForm::txtCustomerID_TextChanged);
			// 
			// lblPhone
			// 
			this->lblPhone->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPhone->Location = System::Drawing::Point(20, 231);
			this->lblPhone->Name = L"lblPhone";
			this->lblPhone->Size = System::Drawing::Size(100, 25);
			this->lblPhone->TabIndex = 2;
			this->lblPhone->Text = L"Phone";
			// 
			// lblEmail
			// 
			this->lblEmail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblEmail->Location = System::Drawing::Point(20, 289);
			this->lblEmail->Name = L"lblEmail";
			this->lblEmail->Size = System::Drawing::Size(100, 25);
			this->lblEmail->TabIndex = 3;
			this->lblEmail->Text = L"Email";
			this->lblEmail->Click += gcnew System::EventHandler(this, &CustomerForm::lblEmail_Click);
			// 
			// lblName
			// 
			this->lblName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblName->Location = System::Drawing::Point(20, 176);
			this->lblName->Name = L"lblName";
			this->lblName->Size = System::Drawing::Size(100, 25);
			this->lblName->TabIndex = 4;
			this->lblName->Text = L"Name";
			// 
			// txtEmail
			// 
			this->txtEmail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtEmail->Location = System::Drawing::Point(175, 286);
			this->txtEmail->Name = L"txtEmail";
			this->txtEmail->Size = System::Drawing::Size(220, 27);
			this->txtEmail->TabIndex = 5;
			// 
			// txtName
			// 
			this->txtName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtName->Location = System::Drawing::Point(175, 174);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(220, 27);
			this->txtName->TabIndex = 6;
			// 
			// txtPhone
			// 
			this->txtPhone->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtPhone->Location = System::Drawing::Point(175, 229);
			this->txtPhone->Name = L"txtPhone";
			this->txtPhone->Size = System::Drawing::Size(220, 27);
			this->txtPhone->TabIndex = 7;
			// 
			// btnAdd
			// 
			this->btnAdd->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->btnAdd->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAdd->Location = System::Drawing::Point(24, 374);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(90, 40);
			this->btnAdd->TabIndex = 8;
			this->btnAdd->Text = L"Add";
			this->btnAdd->UseVisualStyleBackColor = false;
			// 
			// btnUpdate
			// 
			this->btnUpdate->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->btnUpdate->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnUpdate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnUpdate->Location = System::Drawing::Point(149, 374);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(98, 40);
			this->btnUpdate->TabIndex = 9;
			this->btnUpdate->Text = L"Update";
			this->btnUpdate->UseVisualStyleBackColor = false;
			// 
			// btnDelete
			// 
			this->btnDelete->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->btnDelete->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDelete->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDelete->Location = System::Drawing::Point(288, 374);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(90, 40);
			this->btnDelete->TabIndex = 10;
			this->btnDelete->Text = L"Delete";
			this->btnDelete->UseVisualStyleBackColor = false;
			// 
			// btnClear
			// 
			this->btnClear->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->btnClear->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnClear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnClear->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnClear->Location = System::Drawing::Point(425, 374);
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(90, 40);
			this->btnClear->TabIndex = 11;
			this->btnClear->Text = L"Clear";
			this->btnClear->UseVisualStyleBackColor = false;
			this->btnClear->Click += gcnew System::EventHandler(this, &CustomerForm::button4_Click);
			// 
			// lblTitle
			// 
			this->lblTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTitle->Location = System::Drawing::Point(230, 40);
			this->lblTitle->Name = L"lblTitle";
			this->lblTitle->Size = System::Drawing::Size(400, 40);
			this->lblTitle->TabIndex = 12;
			this->lblTitle->Text = L"CUSTOMER MANAGEMENT";
			this->lblTitle->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// CustomerForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(690, 457);
			this->Controls->Add(this->lblTitle);
			this->Controls->Add(this->btnClear);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->btnUpdate);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->txtPhone);
			this->Controls->Add(this->txtName);
			this->Controls->Add(this->txtEmail);
			this->Controls->Add(this->lblName);
			this->Controls->Add(this->lblEmail);
			this->Controls->Add(this->lblPhone);
			this->Controls->Add(this->txtCustomerID);
			this->Controls->Add(this->lblCustomerID);
			this->Name = L"CustomerForm";
			this->Text = L"CustomerForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void txtCustomerID_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void lblEmail_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
