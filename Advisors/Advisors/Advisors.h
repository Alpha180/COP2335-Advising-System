#pragma once
#include "sqlite3.h"
#include "stdlib.h"
#include <stdio.h>
#include <string>
#include <msclr\marshal_cppstd.h>

//std::string output[100];
//char *outputchar[100000];

/*static int callback(void *data, int argc, char **argv, char **azColName) {
	int i;
	fprintf(stderr, "%s: ", (const char*)data);
	for (i = 0; i<argc; i++) {
		printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL");
		output[i] = *(*argv) + *(*azColName);
	}
	printf("\n");
	return 0;
}
*/


namespace Advisors {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Advisors
	/// </summary>
	public ref class Advisors : public System::Windows::Forms::Form
	{
	public:
		Advisors(void)
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
		~Advisors()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  UserNameLabel;
	protected:
	private: System::Windows::Forms::TextBox^  UserNameTextBox;
	private: System::Windows::Forms::TextBox^  PasswordTextBox;
	private: System::Windows::Forms::Label^  PassWordLabel;
	private: System::Windows::Forms::MonthCalendar^  Calendar;


	private: System::Windows::Forms::Label^  TimeBlockLabel;
	private: System::Windows::Forms::ComboBox^  TimeDropDown;

	private: System::Windows::Forms::Label^  AgendaLabel;
	private: System::Windows::Forms::RichTextBox^  StudentInfoTextBox;


	private: System::Windows::Forms::Button^  ConfirmBTN;

	private: System::Windows::Forms::Button^  CancelBTN;
	private: System::Windows::Forms::Label^  RunStudentServiedCountBTN;

	private: System::Windows::Forms::Button^  StudentsServicedBTN;
	private: System::Windows::Forms::Label^  TypesOfServiceLabel;
	private: System::Windows::Forms::Button^  TypesOfServiceBTN;
	private: System::Windows::Forms::Button^  LoginBTN;
	private: System::Windows::Forms::Button^  CheckTimeBTN;
	private: System::Windows::Forms::PictureBox^  MDCPic;
	private: System::Windows::Forms::Label^  IncorrectLabel;



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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Advisors::typeid));
			this->UserNameLabel = (gcnew System::Windows::Forms::Label());
			this->UserNameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->PasswordTextBox = (gcnew System::Windows::Forms::TextBox());
			this->PassWordLabel = (gcnew System::Windows::Forms::Label());
			this->Calendar = (gcnew System::Windows::Forms::MonthCalendar());
			this->TimeBlockLabel = (gcnew System::Windows::Forms::Label());
			this->TimeDropDown = (gcnew System::Windows::Forms::ComboBox());
			this->AgendaLabel = (gcnew System::Windows::Forms::Label());
			this->StudentInfoTextBox = (gcnew System::Windows::Forms::RichTextBox());
			this->ConfirmBTN = (gcnew System::Windows::Forms::Button());
			this->CancelBTN = (gcnew System::Windows::Forms::Button());
			this->RunStudentServiedCountBTN = (gcnew System::Windows::Forms::Label());
			this->StudentsServicedBTN = (gcnew System::Windows::Forms::Button());
			this->TypesOfServiceLabel = (gcnew System::Windows::Forms::Label());
			this->TypesOfServiceBTN = (gcnew System::Windows::Forms::Button());
			this->LoginBTN = (gcnew System::Windows::Forms::Button());
			this->CheckTimeBTN = (gcnew System::Windows::Forms::Button());
			this->MDCPic = (gcnew System::Windows::Forms::PictureBox());
			this->IncorrectLabel = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MDCPic))->BeginInit();
			this->SuspendLayout();
			// 
			// UserNameLabel
			// 
			this->UserNameLabel->AutoSize = true;
			this->UserNameLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->UserNameLabel->Location = System::Drawing::Point(33, 9);
			this->UserNameLabel->Name = L"UserNameLabel";
			this->UserNameLabel->Size = System::Drawing::Size(114, 24);
			this->UserNameLabel->TabIndex = 0;
			this->UserNameLabel->Text = L"User Name";
			// 
			// UserNameTextBox
			// 
			this->UserNameTextBox->Location = System::Drawing::Point(37, 36);
			this->UserNameTextBox->Name = L"UserNameTextBox";
			this->UserNameTextBox->Size = System::Drawing::Size(110, 20);
			this->UserNameTextBox->TabIndex = 1;
			// 
			// PasswordTextBox
			// 
			this->PasswordTextBox->Location = System::Drawing::Point(161, 36);
			this->PasswordTextBox->Name = L"PasswordTextBox";
			this->PasswordTextBox->Size = System::Drawing::Size(103, 20);
			this->PasswordTextBox->TabIndex = 2;
			// 
			// PassWordLabel
			// 
			this->PassWordLabel->AutoSize = true;
			this->PassWordLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PassWordLabel->Location = System::Drawing::Point(157, 9);
			this->PassWordLabel->Name = L"PassWordLabel";
			this->PassWordLabel->Size = System::Drawing::Size(100, 24);
			this->PassWordLabel->TabIndex = 3;
			this->PassWordLabel->Text = L"Password";
			// 
			// Calendar
			// 
			this->Calendar->Enabled = false;
			this->Calendar->Location = System::Drawing::Point(37, 97);
			this->Calendar->Name = L"Calendar";
			this->Calendar->TabIndex = 4;
			this->Calendar->Visible = false;
			// 
			// TimeBlockLabel
			// 
			this->TimeBlockLabel->AutoSize = true;
			this->TimeBlockLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TimeBlockLabel->Location = System::Drawing::Point(128, 272);
			this->TimeBlockLabel->Name = L"TimeBlockLabel";
			this->TimeBlockLabel->Size = System::Drawing::Size(47, 20);
			this->TimeBlockLabel->TabIndex = 6;
			this->TimeBlockLabel->Text = L"Time";
			// 
			// TimeDropDown
			// 
			this->TimeDropDown->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->TimeDropDown->Enabled = false;
			this->TimeDropDown->FormattingEnabled = true;
			this->TimeDropDown->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"10:00 AM", L"11:00 AM", L"12:00 PM", L"01:00 PM  ",
					L"02:00 PM"
			});
			this->TimeDropDown->Location = System::Drawing::Point(37, 297);
			this->TimeDropDown->Name = L"TimeDropDown";
			this->TimeDropDown->Size = System::Drawing::Size(227, 21);
			this->TimeDropDown->TabIndex = 7;
			// 
			// AgendaLabel
			// 
			this->AgendaLabel->AutoSize = true;
			this->AgendaLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AgendaLabel->Location = System::Drawing::Point(425, 9);
			this->AgendaLabel->Name = L"AgendaLabel";
			this->AgendaLabel->Size = System::Drawing::Size(121, 24);
			this->AgendaLabel->TabIndex = 8;
			this->AgendaLabel->Text = L"Student Info";
			// 
			// StudentInfoTextBox
			// 
			this->StudentInfoTextBox->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->StudentInfoTextBox->Enabled = false;
			this->StudentInfoTextBox->Location = System::Drawing::Point(322, 36);
			this->StudentInfoTextBox->Name = L"StudentInfoTextBox";
			this->StudentInfoTextBox->ReadOnly = true;
			this->StudentInfoTextBox->Size = System::Drawing::Size(329, 194);
			this->StudentInfoTextBox->TabIndex = 9;
			this->StudentInfoTextBox->Text = L"";
			// 
			// ConfirmBTN
			// 
			this->ConfirmBTN->Enabled = false;
			this->ConfirmBTN->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ConfirmBTN->Location = System::Drawing::Point(97, 361);
			this->ConfirmBTN->Name = L"ConfirmBTN";
			this->ConfirmBTN->Size = System::Drawing::Size(107, 57);
			this->ConfirmBTN->TabIndex = 10;
			this->ConfirmBTN->Text = L"Confirm ";
			this->ConfirmBTN->UseVisualStyleBackColor = true;
			this->ConfirmBTN->Click += gcnew System::EventHandler(this, &Advisors::ConfirmBTN_Click);
			// 
			// CancelBTN
			// 
			this->CancelBTN->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CancelBTN->Location = System::Drawing::Point(439, 361);
			this->CancelBTN->Name = L"CancelBTN";
			this->CancelBTN->Size = System::Drawing::Size(107, 57);
			this->CancelBTN->TabIndex = 11;
			this->CancelBTN->Text = L"Cancel";
			this->CancelBTN->UseVisualStyleBackColor = true;
			this->CancelBTN->Click += gcnew System::EventHandler(this, &Advisors::CancelBTN_Click);
			// 
			// RunStudentServiedCountBTN
			// 
			this->RunStudentServiedCountBTN->AutoSize = true;
			this->RunStudentServiedCountBTN->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->RunStudentServiedCountBTN->Location = System::Drawing::Point(337, 246);
			this->RunStudentServiedCountBTN->Name = L"RunStudentServiedCountBTN";
			this->RunStudentServiedCountBTN->Size = System::Drawing::Size(298, 60);
			this->RunStudentServiedCountBTN->TabIndex = 12;
			this->RunStudentServiedCountBTN->Text = L"Run Student Serviced Count Report\r\n\r\n\r\n";
			// 
			// StudentsServicedBTN
			// 
			this->StudentsServicedBTN->Enabled = false;
			this->StudentsServicedBTN->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->StudentsServicedBTN->Location = System::Drawing::Point(390, 269);
			this->StudentsServicedBTN->Name = L"StudentsServicedBTN";
			this->StudentsServicedBTN->Size = System::Drawing::Size(182, 23);
			this->StudentsServicedBTN->TabIndex = 13;
			this->StudentsServicedBTN->Text = L"Student Serviced Count";
			this->StudentsServicedBTN->UseVisualStyleBackColor = true;
			// 
			// TypesOfServiceLabel
			// 
			this->TypesOfServiceLabel->AutoSize = true;
			this->TypesOfServiceLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TypesOfServiceLabel->Location = System::Drawing::Point(419, 293);
			this->TypesOfServiceLabel->Name = L"TypesOfServiceLabel";
			this->TypesOfServiceLabel->Size = System::Drawing::Size(141, 20);
			this->TypesOfServiceLabel->TabIndex = 14;
			this->TypesOfServiceLabel->Text = L"Types of Service";
			// 
			// TypesOfServiceBTN
			// 
			this->TypesOfServiceBTN->Enabled = false;
			this->TypesOfServiceBTN->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->TypesOfServiceBTN->Location = System::Drawing::Point(402, 316);
			this->TypesOfServiceBTN->Name = L"TypesOfServiceBTN";
			this->TypesOfServiceBTN->Size = System::Drawing::Size(170, 23);
			this->TypesOfServiceBTN->TabIndex = 15;
			this->TypesOfServiceBTN->Text = L"Types of Service";
			this->TypesOfServiceBTN->UseVisualStyleBackColor = true;
			// 
			// LoginBTN
			// 
			this->LoginBTN->Location = System::Drawing::Point(112, 62);
			this->LoginBTN->Name = L"LoginBTN";
			this->LoginBTN->Size = System::Drawing::Size(75, 23);
			this->LoginBTN->TabIndex = 16;
			this->LoginBTN->Text = L"Login";
			this->LoginBTN->UseVisualStyleBackColor = true;
			this->LoginBTN->Click += gcnew System::EventHandler(this, &Advisors::button1_Click);
			// 
			// CheckTimeBTN
			// 
			this->CheckTimeBTN->Location = System::Drawing::Point(37, 324);
			this->CheckTimeBTN->Name = L"CheckTimeBTN";
			this->CheckTimeBTN->Size = System::Drawing::Size(227, 23);
			this->CheckTimeBTN->TabIndex = 17;
			this->CheckTimeBTN->Text = L"Check Time";
			this->CheckTimeBTN->UseVisualStyleBackColor = true;
			this->CheckTimeBTN->Click += gcnew System::EventHandler(this, &Advisors::CheckTimeBTN_Click);
			// 
			// MDCPic
			// 
			this->MDCPic->Enabled = false;
			this->MDCPic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"MDCPic.Image")));
			this->MDCPic->Location = System::Drawing::Point(37, 9);
			this->MDCPic->Name = L"MDCPic";
			this->MDCPic->Size = System::Drawing::Size(227, 76);
			this->MDCPic->TabIndex = 18;
			this->MDCPic->TabStop = false;
			this->MDCPic->Visible = false;
			// 
			// IncorrectLabel
			// 
			this->IncorrectLabel->AutoSize = true;
			this->IncorrectLabel->Enabled = false;
			this->IncorrectLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->IncorrectLabel->Location = System::Drawing::Point(93, 106);
			this->IncorrectLabel->Name = L"IncorrectLabel";
			this->IncorrectLabel->Size = System::Drawing::Size(132, 24);
			this->IncorrectLabel->TabIndex = 19;
			this->IncorrectLabel->Text = L"Incorrect Info";
			this->IncorrectLabel->Visible = false;
			// 
			// Advisors
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(666, 430);
			this->Controls->Add(this->IncorrectLabel);
			this->Controls->Add(this->MDCPic);
			this->Controls->Add(this->CheckTimeBTN);
			this->Controls->Add(this->LoginBTN);
			this->Controls->Add(this->TypesOfServiceBTN);
			this->Controls->Add(this->TypesOfServiceLabel);
			this->Controls->Add(this->StudentsServicedBTN);
			this->Controls->Add(this->RunStudentServiedCountBTN);
			this->Controls->Add(this->CancelBTN);
			this->Controls->Add(this->ConfirmBTN);
			this->Controls->Add(this->StudentInfoTextBox);
			this->Controls->Add(this->AgendaLabel);
			this->Controls->Add(this->TimeDropDown);
			this->Controls->Add(this->TimeBlockLabel);
			this->Controls->Add(this->Calendar);
			this->Controls->Add(this->PassWordLabel);
			this->Controls->Add(this->PasswordTextBox);
			this->Controls->Add(this->UserNameTextBox);
			this->Controls->Add(this->UserNameLabel);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Advisors";
			this->Text = L"Advisors";
			this->Load += gcnew System::EventHandler(this, &Advisors::Advisors_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MDCPic))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		this->IncorrectLabel->Visible = true;

		if ((UserNameTextBox->Text == "Admin") && (PasswordTextBox->Text == "pass"))
		{
			PasswordTextBox->Text = "******";

			this->IncorrectLabel->Visible = false;
			this->UserNameTextBox->Enabled = false;
			this->UserNameTextBox->Visible = false;
			this->PasswordTextBox->Enabled = false;
			this->PasswordTextBox->Visible = false;
			this->MDCPic->Visible = true;
			this->LoginBTN->Enabled = false;
			this->Calendar->Visible = true;
			this->Calendar->Enabled = true;
			this->TimeDropDown->Enabled = true;
			this->StudentInfoTextBox->Enabled = true;
			this->StudentsServicedBTN->Enabled = true;
			this->TypesOfServiceBTN->Enabled = true;
			this->ConfirmBTN->Enabled = true;



		}
	}
private: System::Void CancelBTN_Click(System::Object^  sender, System::EventArgs^  e) {

	Application::Exit();
}
private: System::Void CheckTimeBTN_Click(System::Object^  sender, System::EventArgs^  e) {



	StudentInfoTextBox->Text = System::Convert::ToString(Calendar->SelectionStart);
	StudentInfoTextBox->Text = StudentInfoTextBox->Text->Remove(StudentInfoTextBox->Text->Length - 11, 11);
	StudentInfoTextBox->Text = StudentInfoTextBox->Text + Environment::NewLine +TimeDropDown->SelectedItem;


	

}
private: System::Void Advisors_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void ConfirmBTN_Click(System::Object^  sender, System::EventArgs^  e) {
	
	StudentInfoTextBox->Text = Calendar->Text + "\n" + TimeDropDown->Text + "\n" + "Jane Doe\n4536573454\n7865556543\nJane.Doe@hotmail.com\nMAGIC\nGeneral Questions\nPablo Escobar";

	/*
		using namespace std;
		sqlite3 *db;
		char *zErrMsg = 0;
		int rc;
		char *sql;
		const char* data = "Callback function called";

		String^ DateTime = TimeDropDown->Text;
		string strDateTime = msclr::interop::marshal_as<std::string>(DateTime);

		/* Open database */ /*
		rc = sqlite3_open("APPOINTMENTS.db", &db);
		if (rc) {
			fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
			MessageBox::Show("CANT OPEN DATABASE");
			return;
		}
		else {
			fprintf(stderr, "Opened database successfully\n");
		}

		/* Create SQL statement *//*
		sql = "Select * from apps where datetime like '11'";

		/* Execute SQL statement */ /*
		rc = sqlite3_exec(db, sql, callback, (void*)data, &zErrMsg);
		if (rc != SQLITE_OK) {
			fprintf(stderr, "SQL error: %s\n", zErrMsg);
			sqlite3_free(zErrMsg);
		}
		else {
			fprintf(stdout, "Operation done successfully\n");
		}
		sqlite3_close(db);
		for (int i = 0; i < 100; i++) {

			strcpy(outputchar[i], output[i].c_str());
			MessageBox::Show(Convert::ToString(outputchar[i]));
			//StudentInfoTextBox->Text += Convert::ToString(output[i]);
		}
		return;
		*/
}
};
}
