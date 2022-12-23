#pragma once

namespace powitanieWindow {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Okienko
	/// </summary>
	public ref class Okienko : public System::Windows::Forms::Form
	{
	public:
		Okienko(void)
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
		~Okienko()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ etykieta;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TextBox^ txtImie;

	private: System::Windows::Forms::Button^ przycisk;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Okienko::typeid));
			this->etykieta = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->txtImie = (gcnew System::Windows::Forms::TextBox());
			this->przycisk = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// etykieta
			// 
			this->etykieta->AutoSize = true;
			this->etykieta->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->etykieta->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->etykieta->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->etykieta->ForeColor = System::Drawing::Color::Black;
			this->etykieta->Location = System::Drawing::Point(12, 168);
			this->etykieta->Name = L"etykieta";
			this->etykieta->Size = System::Drawing::Size(120, 20);
			this->etykieta->TabIndex = 0;
			this->etykieta->Text = L"Witaj w kursie!";
			this->etykieta->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->etykieta->Visible = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(24, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(153, 132);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Visible = false;
			// 
			// txtImie
			// 
			this->txtImie->Location = System::Drawing::Point(12, 36);
			this->txtImie->Name = L"txtImie";
			this->txtImie->Size = System::Drawing::Size(165, 20);
			this->txtImie->TabIndex = 2;
			this->txtImie->Text = L" ";
			// 
			// przycisk
			// 
			this->przycisk->Location = System::Drawing::Point(12, 62);
			this->przycisk->Name = L"przycisk";
			this->przycisk->Size = System::Drawing::Size(165, 72);
			this->przycisk->TabIndex = 3;
			this->przycisk->Text = L"Powitanie";
			this->przycisk->UseVisualStyleBackColor = true;
			this->przycisk->Click += gcnew System::EventHandler(this, &Okienko::przycisk_Click);
			// 
			// Okienko
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::HotPink;
			this->ClientSize = System::Drawing::Size(199, 234);
			this->Controls->Add(this->przycisk);
			this->Controls->Add(this->txtImie);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->etykieta);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Okienko";
			this->Text = L"Okienko";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void przycisk_Click(System::Object^ sender, System::EventArgs^ e) {

		txtImie->Visible = false;
		przycisk->Visible = false;
		pictureBox1->Visible = true;
		etykieta->Visible = true;

		etykieta->Text = "Witaj "+ txtImie->Text+" w kursie C++!";
	}
};
}
