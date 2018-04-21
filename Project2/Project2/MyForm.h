#pragma once
#include "menu.h"
namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			txt_password->PasswordChar = '*';
			txt_password->MaxLength = 15;
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
	private: System::Windows::Forms::Button^  btn_login;
	protected:
	private: System::Windows::Forms::TextBox^  txt_username;
	private: System::Windows::Forms::TextBox^  txt_password;
	private: System::Windows::Forms::Label^  lbl_username;
	private: System::Windows::Forms::Label^  lbl_password;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->btn_login = (gcnew System::Windows::Forms::Button());
			this->txt_username = (gcnew System::Windows::Forms::TextBox());
			this->txt_password = (gcnew System::Windows::Forms::TextBox());
			this->lbl_username = (gcnew System::Windows::Forms::Label());
			this->lbl_password = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// btn_login
			// 
			this->btn_login->Location = System::Drawing::Point(347, 134);
			this->btn_login->Name = L"btn_login";
			this->btn_login->Size = System::Drawing::Size(75, 23);
			this->btn_login->TabIndex = 1;
			this->btn_login->Text = L"LOGIN";
			this->btn_login->UseVisualStyleBackColor = true;
			this->btn_login->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// txt_username
			// 
			this->txt_username->Location = System::Drawing::Point(297, 35);
			this->txt_username->Name = L"txt_username";
			this->txt_username->Size = System::Drawing::Size(125, 20);
			this->txt_username->TabIndex = 2;
			// 
			// txt_password
			// 
			this->txt_password->CausesValidation = false;
			this->txt_password->Location = System::Drawing::Point(297, 80);
			this->txt_password->Name = L"txt_password";
			this->txt_password->Size = System::Drawing::Size(125, 20);
			this->txt_password->TabIndex = 3;
			this->txt_password->WordWrap = false;
			// 
			// lbl_username
			// 
			this->lbl_username->AutoSize = true;
			this->lbl_username->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_username->Location = System::Drawing::Point(168, 35);
			this->lbl_username->Name = L"lbl_username";
			this->lbl_username->Size = System::Drawing::Size(101, 20);
			this->lbl_username->TabIndex = 4;
			this->lbl_username->Text = L"Username :";
			// 
			// lbl_password
			// 
			this->lbl_password->AutoSize = true;
			this->lbl_password->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbl_password->Location = System::Drawing::Point(168, 80);
			this->lbl_password->Name = L"lbl_password";
			this->lbl_password->Size = System::Drawing::Size(96, 20);
			this->lbl_password->TabIndex = 5;
			this->lbl_password->Text = L"Password :";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 245);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 6;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Red;
			this->button2->Location = System::Drawing::Point(356, 245);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 7;
			this->button2->Text = L"EXIT";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 35);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(150, 153);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 8;
			this->pictureBox1->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(443, 280);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->lbl_password);
			this->Controls->Add(this->lbl_username);
			this->Controls->Add(this->txt_password);
			this->Controls->Add(this->txt_username);
			this->Controls->Add(this->btn_login);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {










































































































































		String^ constring = L"datasource=localhost;port=3306;username=root;password=root";
		MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
		MySqlCommand^cmdDataBase = gcnew MySqlCommand("select * from database.edata where user_name ='"+ this->txt_username->Text+"' and password ='"+ this->txt_password->Text +"' ;", conDataBase);
		MySqlDataReader^ myReader;
		try {
			conDataBase->Open();
			myReader = cmdDataBase->ExecuteReader();
			int count = 0;
			while (myReader->Read())
			{
				count = count + 1;
			}
			if (count==1) {
				//MessageBox::Show("Username and password is correct");
				this->Hide();
				//Application::Exit();
				menu^ Menu = gcnew menu();
				Menu->ShowDialog();
			}
			else if (count>1) {
				MessageBox::Show("Duplicate Username and password nooor Access ");
			}
			else
				MessageBox::Show("Username and password is not correct gooway");
		}
		catch (Exception^ex) {
			MessageBox::Show(ex->Message);

		}

	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		Application::Exit();
	}
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
