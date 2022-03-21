#pragma once

namespace ShopManagment {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o AdminPanel
	/// </summary>
	public ref class AdminPanel : public System::Windows::Forms::Form
	{
	public:
		AdminPanel(void)
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
		~AdminPanel()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Button^ addEmployerBTN;
	private: System::Windows::Forms::Button^ delEmployerBTN;
	private: System::Windows::Forms::Button^ modifyEmployerBTN;
	private: System::Windows::Forms::Button^ ListEmployersBTN;
	private: System::Windows::Forms::Button^ AddProductBTN;
	private: System::Windows::Forms::Button^ delProductBTN;
	private: System::Windows::Forms::Button^ ModifyProductInfo;
	private: System::Windows::Forms::Button^ ListProductsBTN;
	private: System::Windows::Forms::Button^ SearchProductBTN;







	private: System::Windows::Forms::Button^ ExitBTN;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label5;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AdminPanel::typeid));
			this->addEmployerBTN = (gcnew System::Windows::Forms::Button());
			this->delEmployerBTN = (gcnew System::Windows::Forms::Button());
			this->modifyEmployerBTN = (gcnew System::Windows::Forms::Button());
			this->ListEmployersBTN = (gcnew System::Windows::Forms::Button());
			this->AddProductBTN = (gcnew System::Windows::Forms::Button());
			this->delProductBTN = (gcnew System::Windows::Forms::Button());
			this->ModifyProductInfo = (gcnew System::Windows::Forms::Button());
			this->ListProductsBTN = (gcnew System::Windows::Forms::Button());
			this->SearchProductBTN = (gcnew System::Windows::Forms::Button());
			this->ExitBTN = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// addEmployerBTN
			// 
			resources->ApplyResources(this->addEmployerBTN, L"addEmployerBTN");
			this->addEmployerBTN->Name = L"addEmployerBTN";
			this->addEmployerBTN->UseVisualStyleBackColor = true;
			// 
			// delEmployerBTN
			// 
			resources->ApplyResources(this->delEmployerBTN, L"delEmployerBTN");
			this->delEmployerBTN->Name = L"delEmployerBTN";
			this->delEmployerBTN->UseVisualStyleBackColor = true;
			// 
			// modifyEmployerBTN
			// 
			resources->ApplyResources(this->modifyEmployerBTN, L"modifyEmployerBTN");
			this->modifyEmployerBTN->Name = L"modifyEmployerBTN";
			this->modifyEmployerBTN->UseVisualStyleBackColor = true;
			// 
			// ListEmployersBTN
			// 
			resources->ApplyResources(this->ListEmployersBTN, L"ListEmployersBTN");
			this->ListEmployersBTN->Name = L"ListEmployersBTN";
			this->ListEmployersBTN->UseVisualStyleBackColor = true;
			// 
			// AddProductBTN
			// 
			resources->ApplyResources(this->AddProductBTN, L"AddProductBTN");
			this->AddProductBTN->Name = L"AddProductBTN";
			this->AddProductBTN->UseVisualStyleBackColor = true;
			// 
			// delProductBTN
			// 
			resources->ApplyResources(this->delProductBTN, L"delProductBTN");
			this->delProductBTN->Name = L"delProductBTN";
			this->delProductBTN->UseVisualStyleBackColor = true;
			this->delProductBTN->Click += gcnew System::EventHandler(this, &AdminPanel::button4_Click);
			// 
			// ModifyProductInfo
			// 
			resources->ApplyResources(this->ModifyProductInfo, L"ModifyProductInfo");
			this->ModifyProductInfo->Name = L"ModifyProductInfo";
			this->ModifyProductInfo->UseVisualStyleBackColor = true;
			// 
			// ListProductsBTN
			// 
			resources->ApplyResources(this->ListProductsBTN, L"ListProductsBTN");
			this->ListProductsBTN->Name = L"ListProductsBTN";
			this->ListProductsBTN->UseVisualStyleBackColor = true;
			// 
			// SearchProductBTN
			// 
			resources->ApplyResources(this->SearchProductBTN, L"SearchProductBTN");
			this->SearchProductBTN->Name = L"SearchProductBTN";
			this->SearchProductBTN->UseVisualStyleBackColor = true;
			// 
			// ExitBTN
			// 
			resources->ApplyResources(this->ExitBTN, L"ExitBTN");
			this->ExitBTN->ForeColor = System::Drawing::Color::Red;
			this->ExitBTN->Name = L"ExitBTN";
			this->ExitBTN->UseVisualStyleBackColor = true;
			this->ExitBTN->Click += gcnew System::EventHandler(this, &AdminPanel::button8_Click);
			// 
			// label2
			// 
			resources->ApplyResources(this->label2, L"label2");
			this->label2->Name = L"label2";
			// 
			// label3
			// 
			resources->ApplyResources(this->label3, L"label3");
			this->label3->Name = L"label3";
			// 
			// label5
			// 
			resources->ApplyResources(this->label5, L"label5");
			this->label5->Name = L"label5";
			// 
			// AdminPanel
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->Controls->Add(this->SearchProductBTN);
			this->Controls->Add(this->ListProductsBTN);
			this->Controls->Add(this->ExitBTN);
			this->Controls->Add(this->ListEmployersBTN);
			this->Controls->Add(this->ModifyProductInfo);
			this->Controls->Add(this->delProductBTN);
			this->Controls->Add(this->modifyEmployerBTN);
			this->Controls->Add(this->AddProductBTN);
			this->Controls->Add(this->delEmployerBTN);
			this->Controls->Add(this->addEmployerBTN);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Name = L"AdminPanel";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
