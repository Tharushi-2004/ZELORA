#pragma once

namespace ZELORAGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ServiceForm
	/// </summary>
	public ref class ServiceForm : public System::Windows::Forms::Form
	{
	public:
		ServiceForm(void)
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
		~ServiceForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblTitle;
	private: System::Windows::Forms::Label^ lblServiceID;
	private: System::Windows::Forms::Label^ lblServiceName;
	private: System::Windows::Forms::Label^ lblPrice;
	private: System::Windows::Forms::Label^ lblDuration;
	protected:





	private: System::Windows::Forms::TextBox^ txtServiceID;
	private: System::Windows::Forms::TextBox^ txtServiceName;
	private: System::Windows::Forms::TextBox^ txtPrice;
	private: System::Windows::Forms::NumericUpDown^ numDuration;
	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::Button^ btUpdate;
	private: System::Windows::Forms::Button^ btDelete;
	private: System::Windows::Forms::Button^ btClear;
	private: System::Windows::Forms::DataGridView^ dgvServices;






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
			this->lblTitle = (gcnew System::Windows::Forms::Label());
			this->lblServiceID = (gcnew System::Windows::Forms::Label());
			this->lblServiceName = (gcnew System::Windows::Forms::Label());
			this->lblPrice = (gcnew System::Windows::Forms::Label());
			this->lblDuration = (gcnew System::Windows::Forms::Label());
			this->txtServiceID = (gcnew System::Windows::Forms::TextBox());
			this->txtServiceName = (gcnew System::Windows::Forms::TextBox());
			this->txtPrice = (gcnew System::Windows::Forms::TextBox());
			this->numDuration = (gcnew System::Windows::Forms::NumericUpDown());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btUpdate = (gcnew System::Windows::Forms::Button());
			this->btDelete = (gcnew System::Windows::Forms::Button());
			this->btClear = (gcnew System::Windows::Forms::Button());
			this->dgvServices = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numDuration))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvServices))->BeginInit();
			this->SuspendLayout();
			// 
			// lblTitle
			// 
			this->lblTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTitle->Location = System::Drawing::Point(230, 40);
			this->lblTitle->Name = L"lblTitle";
			this->lblTitle->Size = System::Drawing::Size(400, 40);
			this->lblTitle->TabIndex = 0;
			this->lblTitle->Text = L"SERVICE MANAGEMENT";
			this->lblTitle->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblServiceID
			// 
			this->lblServiceID->Enabled = false;
			this->lblServiceID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblServiceID->Location = System::Drawing::Point(32, 112);
			this->lblServiceID->Name = L"lblServiceID";
			this->lblServiceID->Size = System::Drawing::Size(154, 24);
			this->lblServiceID->TabIndex = 1;
			this->lblServiceID->Text = L"Service ID";
			// 
			// lblServiceName
			// 
			this->lblServiceName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblServiceName->Location = System::Drawing::Point(32, 165);
			this->lblServiceName->Name = L"lblServiceName";
			this->lblServiceName->Size = System::Drawing::Size(154, 24);
			this->lblServiceName->TabIndex = 2;
			this->lblServiceName->Text = L"Service Name";
			this->lblServiceName->Click += gcnew System::EventHandler(this, &ServiceForm::lblServiceName_Click);
			// 
			// lblPrice
			// 
			this->lblPrice->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPrice->Location = System::Drawing::Point(32, 212);
			this->lblPrice->Name = L"lblPrice";
			this->lblPrice->Size = System::Drawing::Size(154, 24);
			this->lblPrice->TabIndex = 3;
			this->lblPrice->Text = L"Price";
			// 
			// lblDuration
			// 
			this->lblDuration->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDuration->Location = System::Drawing::Point(32, 252);
			this->lblDuration->Name = L"lblDuration";
			this->lblDuration->Size = System::Drawing::Size(154, 24);
			this->lblDuration->TabIndex = 4;
			this->lblDuration->Text = L"Duration (Minutes)";
			// 
			// txtServiceID
			// 
			this->txtServiceID->Enabled = false;
			this->txtServiceID->Location = System::Drawing::Point(255, 112);
			this->txtServiceID->Name = L"txtServiceID";
			this->txtServiceID->Size = System::Drawing::Size(200, 22);
			this->txtServiceID->TabIndex = 5;
			this->txtServiceID->TextChanged += gcnew System::EventHandler(this, &ServiceForm::txtServiceID_TextChanged);
			// 
			// txtServiceName
			// 
			this->txtServiceName->Location = System::Drawing::Point(255, 165);
			this->txtServiceName->Name = L"txtServiceName";
			this->txtServiceName->Size = System::Drawing::Size(200, 22);
			this->txtServiceName->TabIndex = 6;
			// 
			// txtPrice
			// 
			this->txtPrice->Location = System::Drawing::Point(255, 212);
			this->txtPrice->Name = L"txtPrice";
			this->txtPrice->Size = System::Drawing::Size(200, 22);
			this->txtPrice->TabIndex = 7;
			// 
			// numDuration
			// 
			this->numDuration->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			this->numDuration->Location = System::Drawing::Point(255, 254);
			this->numDuration->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 500, 0, 0, 0 });
			this->numDuration->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			this->numDuration->Name = L"numDuration";
			this->numDuration->Size = System::Drawing::Size(200, 22);
			this->numDuration->TabIndex = 8;
			this->numDuration->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 30, 0, 0, 0 });
			this->numDuration->ValueChanged += gcnew System::EventHandler(this, &ServiceForm::numDuration_ValueChanged);
			// 
			// btnAdd
			// 
			this->btnAdd->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->btnAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAdd->Location = System::Drawing::Point(15, 314);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(90, 40);
			this->btnAdd->TabIndex = 9;
			this->btnAdd->Text = L"Add";
			this->btnAdd->UseVisualStyleBackColor = false;
			// 
			// btUpdate
			// 
			this->btUpdate->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->btUpdate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btUpdate->Location = System::Drawing::Point(144, 314);
			this->btUpdate->Name = L"btUpdate";
			this->btUpdate->Size = System::Drawing::Size(99, 40);
			this->btUpdate->TabIndex = 10;
			this->btUpdate->Text = L"Update";
			this->btUpdate->UseVisualStyleBackColor = false;
			// 
			// btDelete
			// 
			this->btDelete->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->btDelete->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btDelete->Location = System::Drawing::Point(275, 314);
			this->btDelete->Name = L"btDelete";
			this->btDelete->Size = System::Drawing::Size(90, 40);
			this->btDelete->TabIndex = 11;
			this->btDelete->Text = L"Delete";
			this->btDelete->UseVisualStyleBackColor = false;
			// 
			// btClear
			// 
			this->btClear->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->btClear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btClear->Location = System::Drawing::Point(397, 314);
			this->btClear->Name = L"btClear";
			this->btClear->Size = System::Drawing::Size(90, 40);
			this->btClear->TabIndex = 12;
			this->btClear->Text = L"Clear";
			this->btClear->UseVisualStyleBackColor = false;
			// 
			// dgvServices
			// 
			this->dgvServices->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dgvServices->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dgvServices->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvServices->Location = System::Drawing::Point(15, 383);
			this->dgvServices->Name = L"dgvServices";
			this->dgvServices->RowHeadersWidth = 51;
			this->dgvServices->RowTemplate->Height = 24;
			this->dgvServices->Size = System::Drawing::Size(472, 277);
			this->dgvServices->TabIndex = 13;
			// 
			// ServiceForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(793, 672);
			this->Controls->Add(this->dgvServices);
			this->Controls->Add(this->btClear);
			this->Controls->Add(this->btDelete);
			this->Controls->Add(this->btUpdate);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->numDuration);
			this->Controls->Add(this->txtPrice);
			this->Controls->Add(this->txtServiceName);
			this->Controls->Add(this->txtServiceID);
			this->Controls->Add(this->lblDuration);
			this->Controls->Add(this->lblPrice);
			this->Controls->Add(this->lblServiceName);
			this->Controls->Add(this->lblServiceID);
			this->Controls->Add(this->lblTitle);
			this->Name = L"ServiceForm";
			this->Text = L"ServiceForm";
			this->Load += gcnew System::EventHandler(this, &ServiceForm::ServiceForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numDuration))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvServices))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void lblServiceName_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void numDuration_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void ServiceForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txtServiceID_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
