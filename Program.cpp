#include <iostream>
#include "LoginPanel.h"
#include "AdminPanel.h"

using namespace System;
using namespace System::Windows::Forms;

void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	ShopManagment::LoginPanel loginPanel;

	loginPanel.ShowDialog();
	User^ user = loginPanel.user;

	if (user != nullptr)
	{
		ShopManagment::AdminPanel adminPanel;
		Application::Run(% adminPanel);
	}
	else
	{
		MessageBox::Show("Authentication Cancelled",
			"Program.cpp", MessageBoxButtons::OK);
	}

}