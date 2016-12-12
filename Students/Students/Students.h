#pragma once
#include "sqlite3.h"
#include "stdlib.h"
#include <stdio.h>
#include <string>
#include <msclr\marshal_cppstd.h>



static int callback(void *NotUsed, int argc, char **argv, char **azColName) {
	int i;
	for (i = 0; i<argc; i++) {
		printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL");
	}
	printf("\n");
	return 0;
}

namespace Students {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Students
	/// </summary>
	public ref class Students : public System::Windows::Forms::Form
	{
	public:
		Students(void)
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
		~Students()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^  programDrop;
	protected:

	private: System::Windows::Forms::Label^  Namelbl;
	private: System::Windows::Forms::TextBox^  nameText;
	private: System::Windows::Forms::Label^  ID;
	private: System::Windows::Forms::TextBox^  IDText;
	protected:




	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  NumberText;

	private: System::Windows::Forms::Label^  label4;


	private: System::Windows::Forms::MonthCalendar^  Calender;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::ComboBox^  visitDrop;

	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::ComboBox^  advisorDrop;

	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::RichTextBox^  richBox;

	private: System::Windows::Forms::Button^  cancelBut;

	private: System::Windows::Forms::Button^  confirmBut;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  emailBox;
	private: System::Windows::Forms::PictureBox^  pictureBox1;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Students::typeid));
			this->programDrop = (gcnew System::Windows::Forms::ComboBox());
			this->Namelbl = (gcnew System::Windows::Forms::Label());
			this->nameText = (gcnew System::Windows::Forms::TextBox());
			this->ID = (gcnew System::Windows::Forms::Label());
			this->IDText = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->NumberText = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->Calender = (gcnew System::Windows::Forms::MonthCalendar());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->visitDrop = (gcnew System::Windows::Forms::ComboBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->advisorDrop = (gcnew System::Windows::Forms::ComboBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->richBox = (gcnew System::Windows::Forms::RichTextBox());
			this->cancelBut = (gcnew System::Windows::Forms::Button());
			this->confirmBut = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->emailBox = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// programDrop
			// 
			this->programDrop->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->programDrop->FormattingEnabled = true;
			this->programDrop->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"Engineering and Technology", L"Entertainment and Design Technology",
					L"MAGIC", L"Business", L"Architecture and Interior Design", L"Aviation", L"Law", L"Funeral Service Education"
			});
			this->programDrop->Location = System::Drawing::Point(548, 32);
			this->programDrop->Name = L"programDrop";
			this->programDrop->Size = System::Drawing::Size(304, 21);
			this->programDrop->TabIndex = 13;
			// 
			// Namelbl
			// 
			this->Namelbl->AutoSize = true;
			this->Namelbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Namelbl->Location = System::Drawing::Point(12, 9);
			this->Namelbl->Name = L"Namelbl";
			this->Namelbl->Size = System::Drawing::Size(124, 20);
			this->Namelbl->TabIndex = 14;
			this->Namelbl->Text = L"Student Name";
			// 
			// nameText
			// 
			this->nameText->Location = System::Drawing::Point(12, 32);
			this->nameText->MaxLength = 35;
			this->nameText->Name = L"nameText";
			this->nameText->Size = System::Drawing::Size(251, 20);
			this->nameText->TabIndex = 15;
			this->nameText->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Students::nameText_KeyPress);
			// 
			// ID
			// 
			this->ID->AutoSize = true;
			this->ID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ID->Location = System::Drawing::Point(12, 65);
			this->ID->Name = L"ID";
			this->ID->Size = System::Drawing::Size(164, 20);
			this->ID->TabIndex = 16;
			this->ID->Text = L"10 Digit Student ID";
			// 
			// IDText
			// 
			this->IDText->Location = System::Drawing::Point(12, 88);
			this->IDText->MaxLength = 10;
			this->IDText->Name = L"IDText";
			this->IDText->Size = System::Drawing::Size(251, 20);
			this->IDText->TabIndex = 17;
			this->IDText->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Students::IDText_KeyPress);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(12, 125);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(200, 20);
			this->label3->TabIndex = 18;
			this->label3->Text = L"Textable Phone Number";
			// 
			// NumberText
			// 
			this->NumberText->Location = System::Drawing::Point(12, 148);
			this->NumberText->MaxLength = 10;
			this->NumberText->Name = L"NumberText";
			this->NumberText->Size = System::Drawing::Size(251, 20);
			this->NumberText->TabIndex = 19;
			this->NumberText->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Students::IDText_KeyPress);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(12, 245);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(302, 20);
			this->label4->TabIndex = 20;
			this->label4->Text = L"Please Select Date and Time of Visit";
			// 
			// Calender
			// 
			this->Calender->Location = System::Drawing::Point(12, 274);
			this->Calender->Name = L"Calender";
			this->Calender->TabIndex = 22;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(599, 9);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(204, 20);
			this->label5->TabIndex = 23;
			this->label5->Text = L"Select Program of Study";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(612, 65);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(181, 20);
			this->label6->TabIndex = 24;
			this->label6->Text = L"Reason for Your Visit";
			// 
			// visitDrop
			// 
			this->visitDrop->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->visitDrop->FormattingEnabled = true;
			this->visitDrop->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"IEP", L"General Questions" });
			this->visitDrop->Location = System::Drawing::Point(548, 88);
			this->visitDrop->Name = L"visitDrop";
			this->visitDrop->Size = System::Drawing::Size(304, 21);
			this->visitDrop->TabIndex = 25;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(622, 121);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(167, 20);
			this->label7->TabIndex = 26;
			this->label7->Text = L"Select Your Advisor";
			// 
			// advisorDrop
			// 
			this->advisorDrop->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->advisorDrop->FormattingEnabled = true;
			this->advisorDrop->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"Santos Perez", L"Gabriela Naraez", L"Veronica Gonzalez",
					L"Nache Atkins", L"Jonathan Rodriguez", L"Mylinda Auguste"
			});
			this->advisorDrop->Location = System::Drawing::Point(548, 144);
			this->advisorDrop->Name = L"advisorDrop";
			this->advisorDrop->Size = System::Drawing::Size(304, 21);
			this->advisorDrop->TabIndex = 27;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(551, 193);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(301, 40);
			this->label8->TabIndex = 28;
			this->label8->Text = L"Please Review Request Criteria and \r\nPress Confirm Changes to Complete";
			// 
			// richBox
			// 
			this->richBox->Location = System::Drawing::Point(486, 248);
			this->richBox->MaxLength = 1000;
			this->richBox->Name = L"richBox";
			this->richBox->Size = System::Drawing::Size(366, 116);
			this->richBox->TabIndex = 29;
			this->richBox->Text = L"";
			// 
			// cancelBut
			// 
			this->cancelBut->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cancelBut->Location = System::Drawing::Point(759, 380);
			this->cancelBut->Name = L"cancelBut";
			this->cancelBut->Size = System::Drawing::Size(93, 40);
			this->cancelBut->TabIndex = 30;
			this->cancelBut->Text = L"CANCEL";
			this->cancelBut->UseVisualStyleBackColor = true;
			this->cancelBut->Click += gcnew System::EventHandler(this, &Students::cancelBut_Click);
			// 
			// confirmBut
			// 
			this->confirmBut->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->confirmBut->Location = System::Drawing::Point(486, 380);
			this->confirmBut->Name = L"confirmBut";
			this->confirmBut->Size = System::Drawing::Size(93, 40);
			this->confirmBut->TabIndex = 31;
			this->confirmBut->Text = L"CONFIRM ";
			this->confirmBut->UseVisualStyleBackColor = true;
			this->confirmBut->Click += gcnew System::EventHandler(this, &Students::confirmBut_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 182);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(53, 20);
			this->label1->TabIndex = 32;
			this->label1->Text = L"Email";
			// 
			// emailBox
			// 
			this->emailBox->Location = System::Drawing::Point(12, 205);
			this->emailBox->MaxLength = 30;
			this->emailBox->Name = L"emailBox";
			this->emailBox->Size = System::Drawing::Size(251, 20);
			this->emailBox->TabIndex = 33;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(313, 32);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(216, 201);
			this->pictureBox1->TabIndex = 34;
			this->pictureBox1->TabStop = false;
			// 
			// Students
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(864, 454);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->emailBox);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->confirmBut);
			this->Controls->Add(this->cancelBut);
			this->Controls->Add(this->richBox);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->advisorDrop);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->visitDrop);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->Calender);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->NumberText);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->IDText);
			this->Controls->Add(this->ID);
			this->Controls->Add(this->nameText);
			this->Controls->Add(this->Namelbl);
			this->Controls->Add(this->programDrop);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Students";
			this->Text = L"Students";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void IDText_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) 
{

}

private: System::Void nameText_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) 
{

	if (e->KeyChar < 65 || e->KeyChar > 91 && e->KeyChar < 97 || e->KeyChar > 122)
	{

		if (!(e->KeyChar == 8) && (e->KeyChar != 32))
		{
			MessageBox::Show("Please enter letters only!");
			e->KeyChar = (char)0;
		}

	}

}

private: System::Void cancelBut_Click(System::Object^  sender, System::EventArgs^  e) 
{

	Application::Exit();
}
     
private: System::Void confirmBut_Click(System::Object^  sender, System::EventArgs^  e) 
{
	using namespace std;

	static int id = 1;
	string strPrimarykey = std::to_string(id);

	String^ name = nameText->Text;
	string strName = msclr::interop::marshal_as<std::string>(name);
	String^ sid = IDText->Text;
	string strSid = msclr::interop::marshal_as<std::string>(sid);
	String^ phone = NumberText->Text;
	string strPhone = msclr::interop::marshal_as<std::string>(phone);
	String^ email = emailBox->Text;
	string strEmail = msclr::interop::marshal_as<std::string>(email);
	String^ program = programDrop->Text;
	string strProgram = msclr::interop::marshal_as<std::string>(program);
	String^ reason = visitDrop->Text;
	string strReason = msclr::interop::marshal_as<std::string>(reason);
	String^ advisor = advisorDrop->Text;
	string strAdvisor = msclr::interop::marshal_as<std::string>(advisor);
	String^ DateTime = Calender->Text;
	string strDateTime = msclr::interop::marshal_as<std::string>(DateTime);

	string finalString =  "INSERT INTO APPOINTMENTS (ID,NAME,SID,PHONE,EMAIL,PROGRAM,REASON,ADVISOR,DATETIME) VALUES (" + strName + "," + strSid + "," + strPhone + "," + strEmail + "," + strProgram + "," + strReason + "," + strAdvisor + "," + strDateTime+ ");";
		
		sqlite3 *db;
		char *zErrMsg = 0;
		int rc;
		char *sql;

		/* Open database */
		rc = sqlite3_open("APPOINTMENTS.db", &db);
		if (rc) {
			fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
			return;
		}
		else {
			fprintf(stderr, "Opened database successfully\n");
		}

		/* Create SQL statement */
		sql = (char*)finalString.c_str();

			/* Execute SQL statement */
		rc = sqlite3_exec(db, sql, callback, 0, &zErrMsg);
		if (rc != SQLITE_OK) {
			MessageBox::Show("error");
			sqlite3_free(zErrMsg);
		}
		else {
			fprintf(stdout, "Records created successfully\n");
		}
		sqlite3_close(db);
		id++;
		return;
	}
};
}
