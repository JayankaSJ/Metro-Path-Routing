#pragma once

namespace MetroPathRoutingSoft {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Interface
	/// </summary>
	public ref class Interface : public System::Windows::Forms::Form
	{
	public:
		Interface(void)
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
		~Interface()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  menuToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  viewMapToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  hideMapToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  debugModeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  enableToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  disableToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem1;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;

	private: System::Windows::Forms::CheckBox^  checkBox1;



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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Interface::typeid));
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->menuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->viewMapToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->hideMapToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->debugModeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->enableToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->disableToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(54) {
				L"Andei", L"Cerny Most", L"Chodov", L"CM", L"Budejovicka",
					L"Dejvicka", L"Depo Hostivar", L"Flora", L"Florenc", L"Haje", L"Hloubetin", L"Hradcanska", L"Hurka", L"Hlavni nadrazi", L"Inalidovna",
					L"IPPavlova", L"Jinonice", L"Jiriho z Podebrad", L"Kacerov", L"Karlovo namesti", L"Kobylisy", L"Kolbenova", L"Krizikova", L"Ladvi",
					L"Letnany", L"Luka", L"Luziny", L"Malostranka", L"Mustek", L"Museum", L"Nadrazi Holesovice", L"Namesti Miru", L"Narodni trida",
					L"Nove Butovice", L"NR", L"Opatov", L"Palmovka", L"Pankrac", L"Prazskeho povstani", L"Prosek", L"Radlicka", L"Rajska zahrada",
					L"Roztyly", L"Skalka", L"Smichovske nadrazi", L"Staromestska", L"Strasnicka", L"Strizkov", L"Stodulky", L"Viltavska", L"Vysehrad",
					L"Vysocanska", L"Zelivskeho", L"Zlicin"
			});
			this->comboBox1->Location = System::Drawing::Point(20, 41);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 0;
			this->comboBox1->Text = L"Select Start Station";
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Interface::comboBox1_SelectedIndexChanged);
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(54) {
				L"Andei", L"Cerny Most", L"Chodov", L"CM", L"Budejovicka",
					L"Dejvicka", L"Depo Hostivar", L"Flora", L"Florenc", L"Haje", L"Hloubetin", L"Hradcanska", L"Hurka", L"Hlavni nadrazi", L"Inalidovna",
					L"IPPavlova", L"Jinonice", L"Jiriho z Podebrad", L"Kacerov", L"Karlovo namesti", L"Kobylisy", L"Kolbenova", L"Krizikova", L"Ladvi",
					L"Letnany", L"Luka", L"Luziny", L"Malostranka", L"Mustek", L"Museum", L"Nadrazi Holesovice", L"Namesti Miru", L"Narodni trida",
					L"Nove Butovice", L"NR", L"Opatov", L"Palmovka", L"Pankrac", L"Prazskeho povstani", L"Prosek", L"Radlicka", L"Rajska zahrada",
					L"Roztyly", L"Skalka", L"Smichovske nadrazi", L"Staromestska", L"Strasnicka", L"Strizkov", L"Stodulky", L"Viltavska", L"Vysehrad",
					L"Vysocanska", L"Zelivskeho", L"Zlicin"
			});
			this->comboBox2->Location = System::Drawing::Point(182, 41);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 21);
			this->comboBox2->TabIndex = 1;
			this->comboBox2->Text = L"Select Destination";
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &Interface::comboBox2_SelectedIndexChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Location = System::Drawing::Point(20, 19);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(72, 17);
			this->radioButton1->TabIndex = 2;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Automatic";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &Interface::radioButton1_Checked);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(93, 19);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(67, 17);
			this->radioButton2->TabIndex = 3;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Set Time";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &Interface::radioButton2_Checked);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(20, 136);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox1->Size = System::Drawing::Size(406, 165);
			this->textBox1->TabIndex = 4;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(390, 335);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(42, 20);
			this->textBox2->TabIndex = 5;
			this->textBox2->Visible = false;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Interface::textBox2_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(213, 367);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Text = Convert::ToString(TIME_SCALER_PER_DOT_LINE_A);
			this->textBox3->Size = System::Drawing::Size(35, 20);
			this->textBox3->TabIndex = 6;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &Interface::textBox3_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(213, 393);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Text = Convert::ToString(TIME_SCALER_PER_DOT_LINE_B);
			this->textBox4->Size = System::Drawing::Size(35, 20);
			this->textBox4->TabIndex = 7;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &Interface::textBox4_TextChanged);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(213, 419);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Text = Convert::ToString(TIME_SCALER_PER_DOT_LINE_C);
			this->textBox5->Size = System::Drawing::Size(35, 20);
			this->textBox5->TabIndex = 8;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &Interface::textBox5_TextChanged);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(20, 136);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox6->Size = System::Drawing::Size(406, 165);
			this->textBox6->TabIndex = 19;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Controls->Add(this->dateTimePicker1);
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Location = System::Drawing::Point(20, 76);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(254, 50);
			this->groupBox1->TabIndex = 9;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Experimental C line status";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CustomFormat = L"HH:mm";
			this->dateTimePicker1->Enabled = false;
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker1->Location = System::Drawing::Point(173, 21);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(56, 20);
			this->dateTimePicker1->TabIndex = 20;
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &Interface::dateTimePicker1_ValueChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(23, 323);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 13);
			this->label1->TabIndex = 10;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(23, 323);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 13);
			this->label2->TabIndex = 11;
			this->label2->Visible = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(303, 338);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 13);
			this->label3->TabIndex = 12;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(37, 370);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(123, 13);
			this->label4->TabIndex = 13;
			this->label4->Text = L"A line speed(dot per min)";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(37, 396);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(123, 13);
			this->label5->TabIndex = 14;
			this->label5->Text = L"B line speed(dot per min)";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(37, 422);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(123, 13);
			this->label6->TabIndex = 15;
			this->label6->Text = L"C line speed(dot per min)";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Enabled = false;
			this->checkBox1->Location = System::Drawing::Point(306, 307);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(114, 17);
			this->checkBox1->TabIndex = 22;
			this->checkBox1->Text = L"Show Optinal Path";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Interface::checkBox1_CheckedChanged);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(280, 90);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(146, 36);
			this->button1->TabIndex = 16;
			this->button1->Text = L"Generate";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Interface::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(452, 29);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(550, 320);
			this->pictureBox1->TabIndex = 17;
			this->pictureBox1->TabStop = false;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->menuToolStripMenuItem,
					this->aboutToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(444, 24);
			this->menuStrip1->TabIndex = 18;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// menuToolStripMenuItem
			// 
			this->menuToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->viewMapToolStripMenuItem,
					this->debugModeToolStripMenuItem, this->exitToolStripMenuItem
			});
			this->menuToolStripMenuItem->Name = L"menuToolStripMenuItem";
			this->menuToolStripMenuItem->Size = System::Drawing::Size(50, 20);
			this->menuToolStripMenuItem->Text = L"Menu";
			// 
			// viewMapToolStripMenuItem
			// 
			this->viewMapToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->hideMapToolStripMenuItem });
			this->viewMapToolStripMenuItem->Name = L"viewMapToolStripMenuItem";
			this->viewMapToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->viewMapToolStripMenuItem->Text = L"View Map";
			this->viewMapToolStripMenuItem->Click += gcnew System::EventHandler(this, &Interface::viewMapToolStripMenuItem_Click_1);
			// 
			// hideMapToolStripMenuItem
			// 
			this->hideMapToolStripMenuItem->Name = L"hideMapToolStripMenuItem";
			this->hideMapToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->hideMapToolStripMenuItem->Text = L"Hide Map";
			this->hideMapToolStripMenuItem->Visible = false;
			this->hideMapToolStripMenuItem->Click += gcnew System::EventHandler(this, &Interface::hideMapToolStripMenuItem_Click_1);
			// 
			// debugModeToolStripMenuItem
			// 
			this->debugModeToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->enableToolStripMenuItem,
					this->disableToolStripMenuItem
			});
			this->debugModeToolStripMenuItem->Name = L"debugModeToolStripMenuItem";
			this->debugModeToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->debugModeToolStripMenuItem->Text = L"Debug Mode";
			// 
			// enableToolStripMenuItem
			// 
			this->enableToolStripMenuItem->Name = L"enableToolStripMenuItem";
			this->enableToolStripMenuItem->Size = System::Drawing::Size(112, 22);
			this->enableToolStripMenuItem->Text = L"Enable";
			this->enableToolStripMenuItem->Click += gcnew System::EventHandler(this, &Interface::enableToolStripMenuItem_Click_1);
			// 
			// disableToolStripMenuItem
			// 
			this->disableToolStripMenuItem->Enabled = false;
			this->disableToolStripMenuItem->Name = L"disableToolStripMenuItem";
			this->disableToolStripMenuItem->Size = System::Drawing::Size(112, 22);
			this->disableToolStripMenuItem->Text = L"Disable";
			this->disableToolStripMenuItem->Click += gcnew System::EventHandler(this, &Interface::disableToolStripMenuItem_Click_1);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &Interface::exitToolStripMenuItem_Click);
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->aboutToolStripMenuItem1 });
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(52, 20);
			this->aboutToolStripMenuItem->Text = L"About";
			// 
			// aboutToolStripMenuItem1
			// 
			this->aboutToolStripMenuItem1->Name = L"aboutToolStripMenuItem1";
			this->aboutToolStripMenuItem1->Size = System::Drawing::Size(107, 22);
			this->aboutToolStripMenuItem1->Text = L"About";
			this->aboutToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Interface::aboutToolStripMenuItem1_Click_1);
			// 
			// Interface
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(444, 360);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"Interface";
			this->Text = L"Metro Path Routing Soft";
			this->Load += gcnew System::EventHandler(this, &Interface::Interface_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
	private: System::Void Interface_Load(System::Object^  sender, System::EventArgs^  e) {
	}
private:
	void TextBoxControlerfunc(bool TBox1Status, bool TBox2Status){
		textBox1->Visible = TBox1Status;
		label1->Visible = TBox1Status;
		textBox6->Visible = TBox2Status;
		label2->Visible = TBox2Status;
	}
	void Printerfunc(void){
		array<String^>^ cities = {
			"Andei",
			"Cerny Most",
			"Chodov",
			"CM",
			"Budejovicka",
			"Dejvicka",
			"Depo Hostivar",
			"Flora",
			"Florenc",
			"Haje",
			"Hloubetin",
			"Hradcanska",
			"Hurka",
			"Hlavni nadrazi",
			"Inalidovna",
			"I.P.Pavlova",
			"Jinonice",
			"Jiriho z Podebrad",
			"Kacerov",
			"Karlovo namesti",
			"Kobylisy",
			"Kolbenova",
			"Krizikova",
			"Ladvi",
			"Letnany",
			"Luka",
			"Luziny",
			"Malostranka",
			"Mustek",
			"Museum",
			"Nadrazi Holesovice",
			"Namesti Miru",
			"Narodni trida",
			"Nove Butovice",
			"NR",
			"Opatov",
			"Palmovka",
			"Pankrac",
			"Prazskeho povstani",
			"Prosek",
			"Radlicka",
			"Rajska zahrada",
			"Roztyly",
			"Skalka",
			"Smichovske nadrazi",
			"Staromestska",
			"Strasnicka",
			"Strizkov",
			"Stodulky",
			"Viltavska",
			"Vysehrad",
			"Vysocanska",
			"Zelivskeho",
			"Zlicin"
		};

		bool ViaMustec = false;
		bool ViaFlorenc = false;
		bool ViaMuzeum = false;

		int InternalReturendValueHolder = ReturendValue;


		this->textBox1->Text = "Distance to"  + "\tTime" + "\t\tLine" + "\tStation\r\n   next(x0.5 km)\t  next station(min)";
		for (int i = 0; i < PathOrderHolder.NextStoreIndex; i++){
			switch (PathOrderHolder.StationOrder[i].name){
			case (8 + 65) :
				ViaFlorenc = true;
				break;

			case (28 + 65) :
				ViaMustec = true;
				break;

			case (29 + 65) :
				ViaMuzeum = true;
				break;

			default:
				break;
			}

			this->textBox1->Text = textBox1->Text + "\r\n  " + PathOrderHolder.StationOrder[i].EdgeLength + "\t\t  " + PathOrderHolder.StationOrder[i].cost + "\t\t  " + Convert::ToChar(PathOrderHolder.StationOrder[i].EdgeType) + "\t" + cities[PathOrderHolder.StationOrder[i].name - 65];
		}

		this->label1->Text = "Total Journey Time  " + InternalReturendValueHolder + " min";

		Nowtime = Nowtime + InternalReturendValueHolder;
		TextBoxControlerfunc(true, false);
		ViaTriStations = ((ViaFlorenc&&ViaMustec) || (ViaMustec&&ViaMuzeum) || (ViaFlorenc&&ViaMuzeum));

		if ((ViaTriStations == true) && (((Nowtime >= 9 * 60) && (Nowtime <= 16 * 60)) || ((Nowtime >= 19 * 60) && (Nowtime <= (23 * 60) + 59)))){
			TIME_SCALER_PER_DOT_LINE_C = DEF_TIME_SCALER_PER_DOT_LINE_C / SPEED_INCREASED_BY;

			InitializeDatabase();
			PathOrderHolder.NextStoreIndex = 0;
			CalculateAllDistance(nodes + INTStartPoint);
			OrderingPath(nodes + INTEndPoint);

			if (ReturendValue != InternalReturendValueHolder){
				TextBoxControlerfunc(false, true);
				checkBox1->Enabled = true;
				checkBox1->Checked = true;
				this->textBox6->Text = "Time optimized path \r\nDistance to"  + "\tTime to" + "\t\tLine" + "\tStation\r\n   next(x0.5 km)\t  next station(min)";
				for (int i = 0; i < PathOrderHolder.NextStoreIndex; i++){
					this->textBox6->Text = textBox6->Text + "\r\n  " + PathOrderHolder.StationOrder[i].EdgeLength + "\t\t  " + PathOrderHolder.StationOrder[i].cost + "\t\t  " + Convert::ToChar(PathOrderHolder.StationOrder[i].EdgeType) + "\t" + cities[PathOrderHolder.StationOrder[i].name - 65];
				}
				this->label2->Text = "Total Journey Time  " + ReturendValue + " min";
			}
		}
	}
	void GenaratePathfunc(void){

		checkBox1->Enabled = false;

		TIME_SCALER_PER_DOT_LINE_C = DEF_TIME_SCALER_PER_DOT_LINE_C;

		Nowtime = (dateTimePicker1->Value.Hour * 60 + dateTimePicker1->Value.Minute);

		InitializeDatabase();
		PathOrderHolder.NextStoreIndex = 0;
		CalculateAllDistance(nodes + INTStartPoint);
		OrderingPath(nodes + INTEndPoint);
		Printerfunc();

#ifdef LOW_MEMORY_SYSTEM
		/* real programmers don't free memories (they use Fortran) */
		free_edges();
		free(heap);
		free(nodes);
#endif
	}
	void WindowSizeControlfunc(void){
		if (debugMode && ViewMap){
			this->ClientSize = System::Drawing::Size(1020, 450);
		}
		else if (debugMode){
			this->ClientSize = System::Drawing::Size(444, 450);
		}
		else if (ViewMap){
			this->ClientSize = System::Drawing::Size(1020, 360);
		}
		else{
			this->ClientSize = System::Drawing::Size(444, 360);
		}
	}
	void DebugModefunc(bool DebugModestatus){
		debugMode = DebugModestatus;
		this->label3->Text = "DEBUG MODE ENABLED";
		this->enableToolStripMenuItem->Enabled = !DebugModestatus;
		this->disableToolStripMenuItem->Enabled = DebugModestatus;
		this->button1->Enabled = !DebugModestatus;
		this->textBox2->Visible = DebugModestatus;
		if (DebugModestatus){
			this->label3->ForeColor = System::Drawing::Color::Red;
			this->label3->Text = "DEBUG MODE ENABLED";
		}
		else{
			this->label3->ForeColor = System::Drawing::Color::Gray;
			this->label3->Text = L"Version 1900";
			this->textBox2->Text = "";
		}
		WindowSizeControlfunc();

	}
	void ViewMapfunc(bool Mapstatus){
		ViewMap = Mapstatus;
		this->pictureBox1->Visible = Mapstatus;
		this->hideMapToolStripMenuItem->Visible = Mapstatus;
		WindowSizeControlfunc();
	}

private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 ComboBox^ comboBox1 = (ComboBox^)(sender);
			 String^ selectedEmployee = (String^)(comboBox1->SelectedItem);

			 ReturendValue = 0;
			 INTStartPoint = comboBox1->FindStringExact(selectedEmployee);
			 if (debugMode){
				 GenaratePathfunc();
			 }
}
private: System::Void comboBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 ComboBox^ comboBox2 = (ComboBox^)(sender);
			 String^ selectedEmployee = (String^)(comboBox2->SelectedItem);

			 ReturendValue = 0;
			 INTEndPoint = comboBox2->FindStringExact(selectedEmployee);
			 if (debugMode){
				 GenaratePathfunc();
			 }
}
private: System::Void radioButton1_Checked(System::Object^  sender, System::EventArgs^  e) {
			 dateTimePicker1->Enabled = false;
			 
			 /*
			 TIME_SCALER_PER_DOT_LINE_C = DEF_TIME_SCALER_PER_DOT_LINE_C;
			 if (debugMode){
				 GenaratePathfunc();
			 }*/
}
private: System::Void radioButton2_Checked(System::Object^  sender, System::EventArgs^  e) {
			 dateTimePicker1->Enabled = true;

			 /*
			 TIME_SCALER_PER_DOT_LINE_C = DEF_TIME_SCALER_PER_DOT_LINE_C / SPEED_INCREASED_BY;
			 if (debugMode){
				 GenaratePathfunc();
			 }*/
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 GenaratePathfunc();
}
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 int key;
			 if ((int::TryParse(textBox2->Text, key)) && (key == DEBUG_KEY)){
				 DebugModefunc(true);
				 this->textBox2->Visible = false;
			 }
}
private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 int key;
			 if (int::TryParse(textBox3->Text, key)){
				 TIME_SCALER_PER_DOT_LINE_A = Convert::ToInt32(textBox3->Text);
			 }
}
private: System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 int key;
			 if (int::TryParse(textBox4->Text, key)){
				 TIME_SCALER_PER_DOT_LINE_A = Convert::ToInt32(textBox4->Text);
			 }
}
private: System::Void textBox5_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 int key;
			 if (int::TryParse(textBox5->Text, key)){
				 TIME_SCALER_PER_DOT_LINE_A = Convert::ToInt32(textBox5->Text);
			 }
}
private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 bool checked = checkBox1->Checked;
			 TextBoxControlerfunc(!checked, checked);
}

private: System::Void viewMapToolStripMenuItem_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 ViewMapfunc(true);
}
private: System::Void hideMapToolStripMenuItem_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 ViewMapfunc(false);
}
private: System::Void enableToolStripMenuItem_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 this->textBox2->Visible = true;
			 enableToolStripMenuItem->Enabled = false;
			 this->label3->Text = "enter debug key";
}
private: System::Void disableToolStripMenuItem_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 DebugModefunc(false);
}
private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 Application::Exit();
}
private: System::Void aboutToolStripMenuItem1_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show("Metro Path Router soft: \r\nBuild 2.11 Full Ver\r\Copyright (c) 2014\r\nBy:\tMalithM\r\n\tKalinduG\r\n\tJayankaS\r\nAll Rights Reserved.", " ", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
private: System::Void dateTimePicker1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			 Nowtime = (dateTimePicker1->Value.Hour * 60 + dateTimePicker1->Value.Minute);
			 if (debugMode){
				 GenaratePathfunc();
			 }
}
};
}
