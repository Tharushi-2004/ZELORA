#pragma once

namespace ZELORAGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AppointmentForm
	/// </summary>
	public ref class AppointmentForm : public System::Windows::Forms::Form
	{
	public:
		AppointmentForm(void)
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
		~AppointmentForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lbTitle;
	private: System::Windows::Forms::Label^ lblAppointmentID;
	private: System::Windows::Forms::Label^ lblCustomerID;
	private: System::Windows::Forms::Label^ lblServiceID;
	private: System::Windows::Forms::Label^ lblDate;
	private: System::Windows::Forms::Label^ lblTime;
	protected:

	protected:





	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ txtAppointmentID;
	private: System::Windows::Forms::TextBox^ txtCustomerID;
	private: System::Windows::Forms::TextBox^ txtServiceID;
	private: System::Windows::Forms::TextBox^ txtTime;




	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Button^ btClear;
	private: System::Windows::Forms::Button^ btDelete;
	private: System::Windows::Forms::Button^ btUpdate;
	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::DataGridView^ dataGridView1;

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
			this->lbTitle = (gcnew System::Windows::Forms::Label());
			this->lblAppointmentID = (gcnew System::Windows::Forms::Label());
			this->lblCustomerID = (gcnew System::Windows::Forms::Label());
			this->lblServiceID = (gcnew System::Windows::Forms::Label());
			this->lblDate = (gcnew System::Windows::Forms::Label());
			this->lblTime = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txtAppointmentID = (gcnew System::Windows::Forms::TextBox());
			this->txtCustomerID = (gcnew System::Windows::Forms::TextBox());
			this->txtServiceID = (gcnew System::Windows::Forms::TextBox());
			this->txtTime = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->btClear = (gcnew System::Windows::Forms::Button());
			this->btDelete = (gcnew System::Windows::Forms::Button());
			this->btUpdate = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// lbTitle
			// 
			this->lbTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbTitle->Location = System::Drawing::Point(230, 40);
			this->lbTitle->Name = L"lbTitle";
			this->lbTitle->Size = System::Drawing::Size(400, 40);
			this->lbTitle->TabIndex = 0;
			this->lbTitle->Text = L"APPOINTMENT MANAGEMENT";
			this->lbTitle->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblAppointmentID
			// 
			this->lblAppointmentID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblAppointmentID->Location = System::Drawing::Point(69, 133);
			this->lblAppointmentID->Name = L"lblAppointmentID";
			this->lblAppointmentID->Size = System::Drawing::Size(154, 24);
			this->lblAppointmentID->TabIndex = 1;
			this->lblAppointmentID->Text = L"Appointment ID";
			// 
			// lblCustomerID
			// 
			this->lblCustomerID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCustomerID->Location = System::Drawing::Point(69, 190);
			this->lblCustomerID->Name = L"lblCustomerID";
			this->lblCustomerID->Size = System::Drawing::Size(154, 24);
			this->lblCustomerID->TabIndex = 2;
			this->lblCustomerID->Text = L"Customer ID";
			// 
			// lblServiceID
			// 
			this->lblServiceID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblServiceID->Location = System::Drawing::Point(69, 244);
			this->lblServiceID->Name = L"lblServiceID";
			this->lblServiceID->Size = System::Drawing::Size(154, 24);
			this->lblServiceID->TabIndex = 3;
			this->lblServiceID->Text = L"Service ID";
			// 
			// lblDate
			// 
			this->lblDate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDate->Location = System::Drawing::Point(69, 297);
			this->lblDate->Name = L"lblDate";
			this->lblDate->Size = System::Drawing::Size(154, 24);
			this->lblDate->TabIndex = 4;
			this->lblDate->Text = L"Appointment Date";
			// 
			// lblTime
			// 
			this->lblTime->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTime->Location = System::Drawing::Point(69, 356);
			this->lblTime->Name = L"lblTime";
			this->lblTime->Size = System::Drawing::Size(154, 24);
			this->lblTime->TabIndex = 5;
			this->lblTime->Text = L"Appointment Time";
			// 
			// label7
			// 
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(69, 400);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(154, 24);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Status";
			// 
			// txtAppointmentID
			// 
			this->txtAppointmentID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->txtAppointmentID->Location = System::Drawing::Point(290, 133);
			this->txtAppointmentID->Name = L"txtAppointmentID";
			this->txtAppointmentID->Size = System::Drawing::Size(220, 27);
			this->txtAppointmentID->TabIndex = 7;
			// 
			// txtCustomerID
			// 
			this->txtCustomerID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtCustomerID->Location = System::Drawing::Point(290, 190);
			this->txtCustomerID->Name = L"txtCustomerID";
			this->txtCustomerID->Size = System::Drawing::Size(220, 27);
			this->txtCustomerID->TabIndex = 8;
			// 
			// txtServiceID
			// 
			this->txtServiceID->Location = System::Drawing::Point(290, 244);
			this->txtServiceID->Name = L"txtServiceID";
			this->txtServiceID->Size = System::Drawing::Size(220, 22);
			this->txtServiceID->TabIndex = 9;
			// 
			// txtTime
			// 
			this->txtTime->Location = System::Drawing::Point(290, 356);
			this->txtTime->Name = L"txtTime";
			this->txtTime->Size = System::Drawing::Size(220, 22);
			this->txtTime->TabIndex = 10;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(290, 299);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(220, 22);
			this->dateTimePicker1->TabIndex = 11;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(290, 400);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(220, 24);
			this->comboBox1->TabIndex = 12;
			// 
			// btClear
			// 
			this->btClear->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->btClear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btClear->Location = System::Drawing::Point(455, 466);
			this->btClear->Name = L"btClear";
			this->btClear->Size = System::Drawing::Size(90, 40);
			this->btClear->TabIndex = 16;
			this->btClear->Text = L"Clear";
			this->btClear->UseVisualStyleBackColor = false;
			// 
			// btDelete
			// 
			this->btDelete->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->btDelete->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btDelete->Location = System::Drawing::Point(333, 466);
			this->btDelete->Name = L"btDelete";
			this->btDelete->Size = System::Drawing::Size(90, 40);
			this->btDelete->TabIndex = 15;
			this->btDelete->Text = L"Delete";
			this->btDelete->UseVisualStyleBackColor = false;
			// 
			// btUpdate
			// 
			this->btUpdate->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->btUpdate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btUpdate->Location = System::Drawing::Point(202, 466);
			this->btUpdate->Name = L"btUpdate";
			this->btUpdate->Size = System::Drawing::Size(100, 40);
			this->btUpdate->TabIndex = 14;
			this->btUpdate->Text = L"Update";
			this->btUpdate->UseVisualStyleBackColor = false;
			// 
			// btnAdd
			// 
			this->btnAdd->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->btnAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAdd->Location = System::Drawing::Point(73, 466);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(90, 40);
			this->btnAdd->TabIndex = 13;
			this->btnAdd->Text = L"Add";
			this->btnAdd->UseVisualStyleBackColor = false;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(67, 562);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(478, 277);
			this->dataGridView1->TabIndex = 17;
			// 
			// AppointmentForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(880, 786);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->btClear);
			this->Controls->Add(this->btDelete);
			this->Controls->Add(this->btUpdate);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->txtTime);
			this->Controls->Add(this->txtServiceID);
			this->Controls->Add(this->txtCustomerID);
			this->Controls->Add(this->txtAppointmentID);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->lblTime);
			this->Controls->Add(this->lblDate);
			this->Controls->Add(this->lblServiceID);
			this->Controls->Add(this->lblCustomerID);
			this->Controls->Add(this->lblAppointmentID);
			this->Controls->Add(this->lbTitle);
			this->Name = L"AppointmentForm";
			this->Text = L"AppointmentForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
