#pragma once
#include "CustomerForm.h"
#include "ServiceForm.h"
#include "AppointmentForm.h"

namespace ZELORAGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for DashboardForm
	/// </summary>
	public ref class DashboardForm : public System::Windows::Forms::Form
	{
	public:
		DashboardForm(void)
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
		~DashboardForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblTitle;
	private: System::Windows::Forms::Button^ btnCustomers;
	private: System::Windows::Forms::Button^ btnServices;
	private: System::Windows::Forms::Button^ btnAppointments;
	private: System::Windows::Forms::Button^ btnLogout;

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
			this->lblTitle = (gcnew System::Windows::Forms::Label());
			this->btnCustomers = (gcnew System::Windows::Forms::Button());
			this->btnServices = (gcnew System::Windows::Forms::Button());
			this->btnAppointments = (gcnew System::Windows::Forms::Button());
			this->btnLogout = (gcnew System::Windows::Forms::Button());
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
			this->lblTitle->Text = L"SALON ZELORA - DASHBOARD";
			this->lblTitle->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lblTitle->Click += gcnew System::EventHandler(this, &DashboardForm::label1_Click);
			// 
			// btnCustomers
			// 
			this->btnCustomers->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCustomers->Location = System::Drawing::Point(275, 120);
			this->btnCustomers->Name = L"btnCustomers";
			this->btnCustomers->Size = System::Drawing::Size(250, 50);
			this->btnCustomers->TabIndex = 1;
			this->btnCustomers->Text = L"Customer Management";
			this->btnCustomers->UseVisualStyleBackColor = true;
			this->btnCustomers->Click += gcnew System::EventHandler(this, &DashboardForm::btnCustomers_Click);
			// 
			// btnServices
			// 
			this->btnServices->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnServices->Location = System::Drawing::Point(275, 200);
			this->btnServices->Name = L"btnServices";
			this->btnServices->Size = System::Drawing::Size(250, 50);
			this->btnServices->TabIndex = 2;
			this->btnServices->Text = L"Service Management";
			this->btnServices->UseVisualStyleBackColor = true;
			this->btnServices->Click += gcnew System::EventHandler(this, &DashboardForm::btnServices_Click);
			// 
			// btnAppointments
			// 
			this->btnAppointments->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAppointments->Location = System::Drawing::Point(275, 280);
			this->btnAppointments->Name = L"btnAppointments";
			this->btnAppointments->Size = System::Drawing::Size(250, 50);
			this->btnAppointments->TabIndex = 3;
			this->btnAppointments->Text = L"Appointment  Management";
			this->btnAppointments->UseVisualStyleBackColor = true;
			this->btnAppointments->Click += gcnew System::EventHandler(this, &DashboardForm::btnAppointments_Click);
			// 
			// btnLogout
			// 
			this->btnLogout->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLogout->Location = System::Drawing::Point(327, 368);
			this->btnLogout->Name = L"btnLogout";
			this->btnLogout->Size = System::Drawing::Size(120, 35);
			this->btnLogout->TabIndex = 4;
			this->btnLogout->Text = L"Logout";
			this->btnLogout->UseVisualStyleBackColor = true;
			this->btnLogout->Click += gcnew System::EventHandler(this, &DashboardForm::btnLogout_Click);
			// 
			// DashboardForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(850, 494);
			this->Controls->Add(this->btnLogout);
			this->Controls->Add(this->btnAppointments);
			this->Controls->Add(this->btnServices);
			this->Controls->Add(this->btnCustomers);
			this->Controls->Add(this->lblTitle);
			this->Name = L"DashboardForm";
			this->Text = L"DashboardForm";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnCustomers_Click(System::Object^ sender, System::EventArgs^ e) {
		CustomerForm^ form = gcnew CustomerForm();
		form->ShowDialog();
	}
private: System::Void btnServices_Click(System::Object^ sender, System::EventArgs^ e) {
	ServiceForm^ form = gcnew ServiceForm();
	form->ShowDialog();
}
private: System::Void btnAppointments_Click(System::Object^ sender, System::EventArgs^ e) {
	AppointmentForm^ form = gcnew AppointmentForm();
	form->ShowDialog();
}
private: System::Void btnLogout_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
