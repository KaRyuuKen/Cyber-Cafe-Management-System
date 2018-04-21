#pragma once
//#include "MyForm.h"

namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;


	/// <summary>
	/// Summary for menu
	/// </summary>
	public ref class menu : public System::Windows::Forms::Form
	{
	public:
		menu(void)
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
		~menu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  txt_Eid;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  txt_name;
	private: System::Windows::Forms::TextBox^  txt_surname;
	private: System::Windows::Forms::TextBox^  txt_age;



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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txt_Eid = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txt_name = (gcnew System::Windows::Forms::TextBox());
			this->txt_surname = (gcnew System::Windows::Forms::TextBox());
			this->txt_age = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Red;
			this->button1->Location = System::Drawing::Point(419, 242);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Exit";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &menu::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(13, 242);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Log out";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &menu::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(363, 130);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Save";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &menu::button3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(53, 61);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(22, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Eid";
			this->label1->Click += gcnew System::EventHandler(this, &menu::label1_Click);
			// 
			// txt_Eid
			// 
			this->txt_Eid->Location = System::Drawing::Point(159, 61);
			this->txt_Eid->Name = L"txt_Eid";
			this->txt_Eid->Size = System::Drawing::Size(100, 20);
			this->txt_Eid->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(53, 100);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(57, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"First Name";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(53, 176);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(26, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Age";
			this->label3->Click += gcnew System::EventHandler(this, &menu::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(53, 140);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(58, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Last Name";
			// 
			// txt_name
			// 
			this->txt_name->Location = System::Drawing::Point(159, 97);
			this->txt_name->Name = L"txt_name";
			this->txt_name->Size = System::Drawing::Size(100, 20);
			this->txt_name->TabIndex = 8;
			// 
			// txt_surname
			// 
			this->txt_surname->Location = System::Drawing::Point(159, 137);
			this->txt_surname->Name = L"txt_surname";
			this->txt_surname->Size = System::Drawing::Size(100, 20);
			this->txt_surname->TabIndex = 9;
			// 
			// txt_age
			// 
			this->txt_age->Location = System::Drawing::Point(159, 173);
			this->txt_age->Name = L"txt_age";
			this->txt_age->Size = System::Drawing::Size(100, 20);
			this->txt_age->TabIndex = 10;
			this->txt_age->TextChanged += gcnew System::EventHandler(this, &menu::textBox4_TextChanged);
			// 
			// menu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(506, 277);
			this->Controls->Add(this->txt_age);
			this->Controls->Add(this->txt_surname);
			this->Controls->Add(this->txt_name);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txt_Eid);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"menu";
			this->Text = L"menu";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		Application::Exit();


	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {




































































































this->Hide();
		//Application::Exit();
		//MyForm^ Login = gcnew MyForm();
		//Login->ShowDialog();
		//main();


	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ constring = L"datasource=localhost;port=3306;username=root;password=root";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^cmdDataBase = gcnew MySqlCommand("insert into database.edata (Eid,name,surname,age) value('"+this->txt_Eid->Text+"','" + this->txt_name->Text + "','" + this->txt_surname->Text + "','" + this->txt_age->Text + "');", conDataBase);
	MySqlDataReader^ myReader;
	try {
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();
		MessageBox::Show("Databse Updated");
		txt_name->Text="";
		txt_Eid->Text="";
		txt_surname->Text="";
		txt_age->Text="";
		//label3->Text = in;
		while (myReader->Read())
		{

			
		}
		
	}
	catch (Exception^ex) {
		MessageBox::Show(ex->Message);

	}

}
private: System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}
