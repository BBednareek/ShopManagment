#pragma once
#include "Admin.h"


namespace ShopManagment {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Podsumowanie informacji o LoginPanel
	/// </summary>
	public ref class LoginPanel : public System::Windows::Forms::Form
	{
	public:
		LoginPanel(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~LoginPanel()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ usernameTB;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ passwordTB;
	private: System::Windows::Forms::Button^ loginBTN;
	private: System::Windows::Forms::Button^ exitBTN;


	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->usernameTB = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->passwordTB = (gcnew System::Windows::Forms::TextBox());
			this->loginBTN = (gcnew System::Windows::Forms::Button());
			this->exitBTN = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(12, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(604, 45);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Login panel";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &LoginPanel::label1_Click);
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(12, 135);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(158, 87);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Username:";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label2->Click += gcnew System::EventHandler(this, &LoginPanel::label2_Click);
			// 
			// usernameTB
			// 
			this->usernameTB->Location = System::Drawing::Point(170, 166);
			this->usernameTB->Name = L"usernameTB";
			this->usernameTB->Size = System::Drawing::Size(365, 31);
			this->usernameTB->TabIndex = 2;
			this->usernameTB->TextChanged += gcnew System::EventHandler(this, &LoginPanel::usernameTB_TextChanged);
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->Location = System::Drawing::Point(12, 213);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(152, 87);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Password:";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label3->Click += gcnew System::EventHandler(this, &LoginPanel::label3_Click);
			// 
			// passwordTB
			// 
			this->passwordTB->Location = System::Drawing::Point(170, 244);
			this->passwordTB->Name = L"passwordTB";
			this->passwordTB->PasswordChar = '*';
			this->passwordTB->Size = System::Drawing::Size(365, 31);
			this->passwordTB->TabIndex = 2;
			this->passwordTB->TextChanged += gcnew System::EventHandler(this, &LoginPanel::textBox1_TextChanged);
			// 
			// loginBTN
			// 
			this->loginBTN->Location = System::Drawing::Point(170, 311);
			this->loginBTN->Name = L"loginBTN";
			this->loginBTN->Size = System::Drawing::Size(182, 73);
			this->loginBTN->TabIndex = 3;
			this->loginBTN->Text = L"Login";
			this->loginBTN->UseVisualStyleBackColor = true;
			this->loginBTN->Click += gcnew System::EventHandler(this, &LoginPanel::loginBTN_Click);
			// 
			// exitBTN
			// 
			this->exitBTN->Location = System::Drawing::Point(366, 311);
			this->exitBTN->Name = L"exitBTN";
			this->exitBTN->Size = System::Drawing::Size(169, 73);
			this->exitBTN->TabIndex = 3;
			this->exitBTN->Text = L"Exit";
			this->exitBTN->UseVisualStyleBackColor = true;
			this->exitBTN->Click += gcnew System::EventHandler(this, &LoginPanel::exitBTN_Click);
			// 
			// LoginPanel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(628, 441);
			this->Controls->Add(this->exitBTN);
			this->Controls->Add(this->loginBTN);
			this->Controls->Add(this->passwordTB);
			this->Controls->Add(this->usernameTB);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"LoginPanel";
			this->Text = L"Login";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void exitBTN_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}

	   public: User^ user = nullptr;

private: System::Void loginBTN_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ usernameInput = this->usernameTB->Text;
	String^ passwordInput = this->passwordTB->Text;

	if (usernameInput->Length == 0 || passwordInput->Length == 0)
	{
		MessageBox::Show("Please enter username and password",
			"Username or Password Empty", MessageBoxButtons::OK);
		return;
	}

	try 
	{
		String^ connString = "Data Source=DESKTOP-35EE7TF\\SQLEXPRESS;Initial Catalog=MyShopDB;Integrated Security=True";
		SqlConnection sqlConn(connString);
		sqlConn.Open();

		String^ sqlQuery = "SELECT * FROM admin WHERE username=@username AND password=@password;";
		SqlCommand command(sqlQuery, % sqlConn);
		command.Parameters->AddWithValue("@username", usernameInput);
		command.Parameters->AddWithValue("@password", passwordInput);

		SqlDataReader^ reader = command.ExecuteReader();
		if (reader->Read())
		{
			user = gcnew User;
			user->Id = reader->GetInt32(0);
			user->username = reader->GetString(1);
			user->password = reader->GetString(2);

			this->Close();
		}
		else
		{
			MessageBox::Show("Username or password is incorrect",
				"Username or Password Error", MessageBoxButtons::OK);
		}
	}
	catch (Exception^ e)
	{
		MessageBox::Show("Failed to connect to databse",
			"Database Connection Error", MessageBoxButtons::OK);
	}

}
private: System::Void usernameTB_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
