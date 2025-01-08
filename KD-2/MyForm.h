#pragma once

namespace KD2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		System::Diagnostics::ProcessStartInfo^ pradiniaiKonsolesDuomenys = gcnew System::Diagnostics::ProcessStartInfo();

		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ apieToolStripMenuItem;



	private: System::Windows::Forms::ToolStripMenuItem^ baigtiToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ baigtiToolStripMenuItem1;

	private: System::Windows::Forms::ToolStripMenuItem^ projektasToolStripMenuItem;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ textBox2;



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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->baigtiToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->baigtiToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->apieToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->projektasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(217, 27);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(378, 20);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"www.google.lt";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->baigtiToolStripMenuItem,
					this->apieToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(607, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// baigtiToolStripMenuItem
			// 
			this->baigtiToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->baigtiToolStripMenuItem1 });
			this->baigtiToolStripMenuItem->Name = L"baigtiToolStripMenuItem";
			this->baigtiToolStripMenuItem->Size = System::Drawing::Size(43, 20);
			this->baigtiToolStripMenuItem->Text = L"Išeiti";
			// 
			// baigtiToolStripMenuItem1
			// 
			this->baigtiToolStripMenuItem1->Name = L"baigtiToolStripMenuItem1";
			this->baigtiToolStripMenuItem1->Size = System::Drawing::Size(137, 22);
			this->baigtiToolStripMenuItem1->Text = L"Baigti darbą";
			this->baigtiToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::baigtiToolStripMenuItem1_Click);
			// 
			// apieToolStripMenuItem
			// 
			this->apieToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->projektasToolStripMenuItem });
			this->apieToolStripMenuItem->Name = L"apieToolStripMenuItem";
			this->apieToolStripMenuItem->Size = System::Drawing::Size(43, 20);
			this->apieToolStripMenuItem->Text = L"Apie";
			// 
			// projektasToolStripMenuItem
			// 
			this->projektasToolStripMenuItem->Name = L"projektasToolStripMenuItem";
			this->projektasToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->projektasToolStripMenuItem->Text = L"Projektas";
			this->projektasToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::projektasToolStripMenuItem_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(12, 27);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(196, 20);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Serverio patikra";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(311, 209);
			this->label1->Margin = System::Windows::Forms::Padding(6, 6, 0, 6);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 13);
			this->label1->TabIndex = 3;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(12, 53);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(196, 20);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Tinklo parametrų nustatymai";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(12, 79);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(196, 20);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Visi tinklo parametrų nustatymai";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(12, 105);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(196, 20);
			this->button4->TabIndex = 7;
			this->button4->Text = L"Vietinio tinklo prijungtos įrangos sąrašas";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"SimSun", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::Color::Lime;
			this->textBox2->Location = System::Drawing::Point(12, 143);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox2->Size = System::Drawing::Size(583, 322);
			this->textBox2->TabIndex = 8;
			this->textBox2->Text = L"(＾◡＾)っ Mygtukai gali užtrukti keleta sekundžių, prašome palaukti! Paskutiniai fun"
				L"kcijai gali prireikti keliolikos sekundžių...";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(607, 477);
			this->ControlBox = false;
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"Tinklo Padėjėjas";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void baigtiToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
	   // Mini optimiziavimas
public: System::Void parametrai(System::String^ uzklausa) {
	pradiniaiKonsolesDuomenys->FileName = "cmd.exe";
	pradiniaiKonsolesDuomenys->Arguments = uzklausa;
	pradiniaiKonsolesDuomenys->Verb = "runas";
	pradiniaiKonsolesDuomenys->UseShellExecute = false;
	pradiniaiKonsolesDuomenys->RedirectStandardOutput = true;
	pradiniaiKonsolesDuomenys->RedirectStandardError = true;
	pradiniaiKonsolesDuomenys->CreateNoWindow = true;
	textBox2->Text = "";
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	System::String^ queris = "";
	
	if (textBox1->Text == "") {
		queris = "www.google.lt";
	}
	else {
		queris = textBox1->Text;
	}
		System::String^ pilnasQueris = System::String::Format("/c ping {0}", queris);
		parametrai(pilnasQueris);
	

	System::Diagnostics::Process^ konsolesProcesas = System::Diagnostics::Process::Start(pradiniaiKonsolesDuomenys);

	System::IO::StreamReader^ skaito = konsolesProcesas->StandardOutput;
	System::String^ isvedam = skaito->ReadToEnd();
	konsolesProcesas->WaitForExit();

	textBox2->Text = isvedam;
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	parametrai("/c ipconfig");

	// paleisti procesą su prad. duom.
	System::Diagnostics::Process^ konsolesProcesas = System::Diagnostics::Process::Start(pradiniaiKonsolesDuomenys);

	// skaitymas iš konsolės
	System::IO::StreamReader^ skaito = konsolesProcesas->StandardOutput;
	System::String^ isvedam = skaito->ReadToEnd();
	konsolesProcesas->WaitForExit();

	textBox2->Text = isvedam;
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	parametrai("/c ipconfig /all");

	System::Diagnostics::Process^ konsolesProcesas = System::Diagnostics::Process::Start(pradiniaiKonsolesDuomenys);

	System::IO::StreamReader^ skaito = konsolesProcesas->StandardOutput;
	System::String^ isvedam = skaito->ReadToEnd();
	konsolesProcesas->WaitForExit();

	textBox2->Text = isvedam;
}

private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		parametrai("/c net view");

		System::Diagnostics::Process^ konsolesProcesas = System::Diagnostics::Process::Start(pradiniaiKonsolesDuomenys);

		System::IO::StreamReader^ skaito = konsolesProcesas->StandardOutput;
		System::IO::StreamReader^ klaiduSkaito = konsolesProcesas->StandardError; // Skaityti klaida

		System::String^ isvedam = skaito->ReadToEnd();
		System::String^ klaidos = klaiduSkaito->ReadToEnd();

		konsolesProcesas->WaitForExit();

		if (!System::String::IsNullOrEmpty(klaidos)) {
			textBox2->Text = "Prašome patikrinti, ar jūsų sistemoje suteikti tinklo leidimai, leidžiantys vykdyti šią funkciją.\r\n"
				"Galimos priežastys, dėl kurių funkcija gali neveikti:\r\n"
				"- Apribojimai dėl vartotojo teisių.\r\n"
				"- Antivirusinės arba ugniasienės nustatymai blokuoja programą.\r\n"
				"- Neveikianti arba netinkamai sukonfigūruota tinklo sąsaja.\r\n"
				"\r\nDaugiau informacijos galite rasti sistemos žurnaluose arba kreipkitės į administratorių.\r\n"
				"\nKlaidos pranešimas: " + klaidos;
		}
		else {
			textBox2->Text = isvedam;
		}
	}
	catch (System::Exception^ klaida) {
		textBox2->Text = klaida->Message;
	}
}
private: System::Void projektasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Projektas: Tinklo padėjėjas\nAutorius: Elvis Čepinskas\nGrupė: PIT-23-NL\nAprašymas: Komandinės eilutės tinklo užklausų valdymo programa.", "Apie programą", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
};
}