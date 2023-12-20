#pragma once
#include "User.h"
#include "TouristForm.h"
#include "AdminForm.h"
#include <msclr/marshal_cppstd.h>
namespace TourAgency1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	
	using namespace System::Runtime::InteropServices;
	/// <summary>
	/// Сводка для Loading
	/// </summary>
	public ref class Loading : public System::Windows::Forms::Form
	{
	public:
		Loading(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Loading()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;

	private: System::Windows::Forms::Button^ button1;



	private: System::Windows::Forms::Button^ button2;

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::PictureBox^ pictureBox9;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;


	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Loading::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panel5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->panel4);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->panel5);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Location = System::Drawing::Point(0, -4);
			this->panel1->Margin = System::Windows::Forms::Padding(2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(356, 578);
			this->panel1->TabIndex = 0;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Loading::panel1_Paint);
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->checkBox1);
			this->panel3->Controls->Add(this->label13);
			this->panel3->Controls->Add(this->label12);
			this->panel3->Controls->Add(this->label11);
			this->panel3->Controls->Add(this->label10);
			this->panel3->Controls->Add(this->button4);
			this->panel3->Controls->Add(this->pictureBox7);
			this->panel3->Controls->Add(this->textBox6);
			this->panel3->Controls->Add(this->label9);
			this->panel3->Controls->Add(this->textBox5);
			this->panel3->Controls->Add(this->pictureBox6);
			this->panel3->Controls->Add(this->label7);
			this->panel3->Controls->Add(this->label8);
			this->panel3->Controls->Add(this->pictureBox4);
			this->panel3->Controls->Add(this->pictureBox5);
			this->panel3->Controls->Add(this->textBox3);
			this->panel3->Controls->Add(this->textBox4);
			this->panel3->Controls->Add(this->label6);
			this->panel3->Location = System::Drawing::Point(20, 51);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(312, 387);
			this->panel3->TabIndex = 10;
			this->panel3->Visible = false;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(82, 290);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(53, 17);
			this->checkBox1->TabIndex = 25;
			this->checkBox1->Text = L"Show";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Loading::checkBox1_CheckedChanged);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->label13->Location = System::Drawing::Point(205, 357);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(37, 13);
			this->label13->TabIndex = 24;
			this->label13->Text = L"Log In";
			this->label13->Click += gcnew System::EventHandler(this, &Loading::label13_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(69, 357);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(132, 13);
			this->label12->TabIndex = 23;
			this->label12->Text = L"Already have an account\?";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Yi Baiti", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(3, 354);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(34, 16);
			this->label11->TabIndex = 22;
			this->label11->Text = L"Back";
			this->label11->Click += gcnew System::EventHandler(this, &Loading::label11_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(79, 125);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(32, 13);
			this->label10->TabIndex = 21;
			this->label10->Text = L"Email";
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::RoyalBlue;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button4->Location = System::Drawing::Point(112, 321);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 10;
			this->button4->Text = L"CONTINUE";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Loading::button4_Click);
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.BackgroundImage")));
			this->pictureBox7->Location = System::Drawing::Point(52, 136);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(24, 25);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox7->TabIndex = 20;
			this->pictureBox7->TabStop = false;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(85, 143);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(164, 20);
			this->textBox6->TabIndex = 19;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(79, 248);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(91, 13);
			this->label9->TabIndex = 18;
			this->label9->Text = L"Confirm Password";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(82, 264);
			this->textBox5->Name = L"textBox5";
			this->textBox5->PasswordChar = '*';
			this->textBox5->Size = System::Drawing::Size(164, 20);
			this->textBox5->TabIndex = 17;
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.BackgroundImage")));
			this->pictureBox6->Location = System::Drawing::Point(52, 257);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(24, 25);
			this->pictureBox6->TabIndex = 16;
			this->pictureBox6->TabStop = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(82, 188);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(53, 13);
			this->label7->TabIndex = 15;
			this->label7->Text = L"Password";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(81, 63);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(55, 13);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Username";
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->Location = System::Drawing::Point(52, 201);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(24, 25);
			this->pictureBox4->TabIndex = 13;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.BackgroundImage")));
			this->pictureBox5->Location = System::Drawing::Point(54, 74);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(24, 25);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 12;
			this->pictureBox5->TabStop = false;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(82, 206);
			this->textBox3->Name = L"textBox3";
			this->textBox3->PasswordChar = '*';
			this->textBox3->Size = System::Drawing::Size(164, 20);
			this->textBox3->TabIndex = 11;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(84, 79);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(164, 20);
			this->textBox4->TabIndex = 10;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(76, 12);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(160, 36);
			this->label6->TabIndex = 0;
			this->label6->Text = L"SIGN UP";
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->label14);
			this->panel4->Controls->Add(this->label15);
			this->panel4->Controls->Add(this->pictureBox8);
			this->panel4->Controls->Add(this->pictureBox9);
			this->panel4->Controls->Add(this->label17);
			this->panel4->Controls->Add(this->label18);
			this->panel4->Controls->Add(this->button5);
			this->panel4->Controls->Add(this->textBox7);
			this->panel4->Controls->Add(this->textBox8);
			this->panel4->Location = System::Drawing::Point(3, 109);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(344, 290);
			this->panel4->TabIndex = 25;
			this->panel4->Visible = false;
			this->panel4->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Loading::panel4_Paint);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(110, 136);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(53, 13);
			this->label14->TabIndex = 9;
			this->label14->Text = L"Password";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(83, 69);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(55, 13);
			this->label15->TabIndex = 8;
			this->label15->Text = L"Username";
			// 
			// pictureBox8
			// 
			this->pictureBox8->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.BackgroundImage")));
			this->pictureBox8->Location = System::Drawing::Point(56, 151);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(24, 25);
			this->pictureBox8->TabIndex = 7;
			this->pictureBox8->TabStop = false;
			// 
			// pictureBox9
			// 
			this->pictureBox9->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.BackgroundImage")));
			this->pictureBox9->Location = System::Drawing::Point(56, 92);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(24, 25);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox9->TabIndex = 5;
			this->pictureBox9->TabStop = false;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::Color::Transparent;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Yi Baiti", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(9, 272);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(34, 16);
			this->label17->TabIndex = 4;
			this->label17->Text = L"Back";
			this->label17->Click += gcnew System::EventHandler(this, &Loading::label17_Click);
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(111, 11);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(117, 31);
			this->label18->TabIndex = 3;
			this->label18->Text = L"ADMIN";
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::RoyalBlue;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button5->Location = System::Drawing::Point(126, 198);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 2;
			this->button5->Text = L"Login";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Loading::button5_Click);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(86, 156);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(164, 20);
			this->textBox7->TabIndex = 1;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(86, 97);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(164, 20);
			this->textBox8->TabIndex = 0;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->checkBox2);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->pictureBox3);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->pictureBox2);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->button3);
			this->panel2->Controls->Add(this->textBox2);
			this->panel2->Controls->Add(this->textBox1);
			this->panel2->Location = System::Drawing::Point(24, 120);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(308, 279);
			this->panel2->TabIndex = 7;
			this->panel2->Visible = false;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(70, 185);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(53, 17);
			this->checkBox2->TabIndex = 10;
			this->checkBox2->Text = L"Show";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &Loading::checkBox2_CheckedChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(69, 136);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(53, 13);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Password";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(69, 74);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(55, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Username";
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->Location = System::Drawing::Point(42, 156);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(24, 25);
			this->pictureBox3->TabIndex = 7;
			this->pictureBox3->TabStop = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Yi Baiti", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(214, 253);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(78, 16);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Administrator";
			this->label3->Click += gcnew System::EventHandler(this, &Loading::label3_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->Location = System::Drawing::Point(42, 97);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(24, 25);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 5;
			this->pictureBox2->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Yi Baiti", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 253);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(34, 16);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Back";
			this->label2->Click += gcnew System::EventHandler(this, &Loading::label2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(85, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(136, 38);
			this->label1->TabIndex = 3;
			this->label1->Text = L"LOGIN";
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::RoyalBlue;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button3->Location = System::Drawing::Point(112, 212);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Login";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Loading::button3_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(72, 161);
			this->textBox2->Name = L"textBox2";
			this->textBox2->PasswordChar = '*';
			this->textBox2->Size = System::Drawing::Size(164, 20);
			this->textBox2->TabIndex = 1;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(72, 102);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(164, 20);
			this->textBox1->TabIndex = 0;
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->label24);
			this->panel5->Controls->Add(this->button6);
			this->panel5->Controls->Add(this->textBox13);
			this->panel5->Controls->Add(this->label23);
			this->panel5->Controls->Add(this->comboBox1);
			this->panel5->Controls->Add(this->label22);
			this->panel5->Controls->Add(this->textBox12);
			this->panel5->Controls->Add(this->label21);
			this->panel5->Controls->Add(this->textBox11);
			this->panel5->Controls->Add(this->label20);
			this->panel5->Controls->Add(this->textBox10);
			this->panel5->Controls->Add(this->label19);
			this->panel5->Controls->Add(this->textBox9);
			this->panel5->Controls->Add(this->label16);
			this->panel5->Location = System::Drawing::Point(20, 42);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(319, 405);
			this->panel5->TabIndex = 10;
			this->panel5->Visible = false;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(12, 386);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(32, 13);
			this->label24->TabIndex = 13;
			this->label24->Text = L"Back";
			this->label24->Click += gcnew System::EventHandler(this, &Loading::label24_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::RoyalBlue;
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button6->Location = System::Drawing::Point(112, 296);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 12;
			this->button6->Text = L"REGISTER";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Loading::button6_Click);
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(22, 264);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(270, 20);
			this->textBox13->TabIndex = 11;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(23, 238);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(41, 13);
			this->label23->TabIndex = 10;
			this->label23->Text = L"Budget";
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"male", L"female" });
			this->comboBox1->Location = System::Drawing::Point(171, 137);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 9;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(172, 118);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(25, 13);
			this->label22->TabIndex = 8;
			this->label22->Text = L"Sex";
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(22, 200);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(270, 20);
			this->textBox12->TabIndex = 7;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(19, 174);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(78, 13);
			this->label21->TabIndex = 6;
			this->label21->Text = L"Phone Number";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(22, 138);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(121, 20);
			this->textBox11->TabIndex = 5;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(23, 112);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(26, 13);
			this->label20->TabIndex = 4;
			this->label20->Text = L"Age";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(176, 77);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(116, 20);
			this->textBox10->TabIndex = 3;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(177, 53);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(58, 13);
			this->label19->TabIndex = 2;
			this->label19->Text = L"Last Name";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(22, 77);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(125, 20);
			this->textBox9->TabIndex = 1;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(23, 53);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(57, 13);
			this->label16->TabIndex = 0;
			this->label16->Text = L"First Name";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(254)));
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->Location = System::Drawing::Point(28, 127);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(304, 256);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->Location = System::Drawing::Point(28, 464);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(304, 45);
			this->button2->TabIndex = 4;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Loading::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(28, 416);
			this->button1->Margin = System::Windows::Forms::Padding(0);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(304, 45);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Loading::button1_Click);
			// 
			// Loading
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(354, 571);
			this->Controls->Add(this->panel1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Loading";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Loading";
			this->Load += gcnew System::EventHandler(this, &Loading::Loading_Load);
			this->panel1->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		Tourist* new_tourist = nullptr;
		void registerUser(Tourist* user) {
			std::ifstream inputFile("users.json");
			nlohmann::json usersJson;

			if (inputFile.is_open()) {
				inputFile >> usersJson;
			}

			// Додаємо новий тур до JSON об'єкту
			usersJson.push_back(user->to_json());

			// Записуємо оновлений JSON у файл
			std::ofstream outputFile("users.json");
			outputFile << std::setw(4) << usersJson << std::endl;

		}

	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void Loading_Load(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		panel2->Show();
		button1->Hide();
		button2->Hide();
	}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	panel2->Hide();
	button1->Show();
	button2->Show();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	panel3->Show();
	button1->Hide();
	button2->Hide();

}
private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
	panel3->Hide();
	button1->Show();
	button2->Show();
}
private: System::Void label13_Click(System::Object^ sender, System::EventArgs^ e) {
	panel2->Show();
	panel3->Hide();

}

private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	panel2->Hide();
	panel4->Show();
}
private: System::Void label17_Click(System::Object^ sender, System::EventArgs^ e) {
	panel4->Hide();
	panel2->Show();
}
private: System::Void panel4_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	/*panel5->Show();*/
	/*panel3->Hide();*/
	System::String^ textBoxUsername = textBox4->Text;
	System::String^ textBoxEmail = textBox6->Text;
	System::String^ textBoxPassword = textBox3->Text;
	System::String^ textBoxConfirmPassword = textBox5->Text;
	std::string username = msclr::interop::marshal_as<std::string>(textBoxUsername);
	// Перевірка, чи не є поля порожніми
	if (String::IsNullOrEmpty(textBoxUsername) || String::IsNullOrEmpty(textBoxEmail) ||
		String::IsNullOrEmpty(textBoxPassword) || String::IsNullOrEmpty(textBoxConfirmPassword)) {
		MessageBox::Show("One of the required field is empty");
		
	}
	
	else if (textBoxPassword == textBoxConfirmPassword && !TourAgency::doesUsernameExist(username)) {
		
		std::string email = msclr::interop::marshal_as<std::string>(textBoxEmail);
		std::string password = msclr::interop::marshal_as<std::string>(textBoxPassword);
		new_tourist = new Tourist(username, password, email, "C:\\Users\\User\\Desktop\\TourAgency\\DefaultPhoto.png");

		panel5->Show();
	panel3->Hide();
	}
	else if(TourAgency::doesUsernameExist(username)) {
		MessageBox::Show("Username is already taken");
	}
	else {
		MessageBox::Show("Passwords do not match");
	}

}
private: System::Void label24_Click(System::Object^ sender, System::EventArgs^ e) {
	panel3->Show();
	panel5->Hide();
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	System::String^ textBoxUsername = textBox4->Text;
	System::String^ textBoxName = textBox9->Text;
	System::String^ textBoxSurname = textBox10->Text;
	System::String^ textBoxAge = textBox11->Text;
	System::String^ textBoxSex = comboBox1->Text;
	System::String^ textBoxPhone = textBox12->Text;
	System::String^ textBoxBudget = textBox13->Text;
	std::string name = msclr::interop::marshal_as<std::string>(textBoxName);
	std::string surname = msclr::interop::marshal_as<std::string>(textBoxSurname);
	std::string sex = msclr::interop::marshal_as<std::string>(textBoxSex);
	std::string phone = msclr::interop::marshal_as<std::string>(textBoxPhone);

	// Конвертация строк в int
	int age = System::Convert::ToInt32(textBoxAge);
	int budget = System::Convert::ToInt32(textBoxBudget);
	if (String::IsNullOrEmpty(textBoxName) || String::IsNullOrEmpty(textBoxSurname) ||
		String::IsNullOrEmpty(textBoxAge) || String::IsNullOrEmpty(textBoxSex) || String::IsNullOrEmpty(textBoxPhone) || String::IsNullOrEmpty(textBoxBudget)) {
		MessageBox::Show("One of the required field is empty");

	}
	else {
		new_tourist->setName(name);
		new_tourist->setSurname(surname);
		new_tourist->setSex(sex);
		new_tourist->setphone(phone);
		new_tourist->setAge(age);
		new_tourist->setBudget(budget);
		registerUser(new_tourist);
		TouristForm^ form2 = gcnew TouristForm(textBoxUsername);
		form2->Owner = this;
		form2->Show();
		this->Hide();
		
	}

}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox1->Checked) {
		textBox3->PasswordChar = '\0';
		textBox5->PasswordChar = '\0';

	}
	else {
		textBox3->PasswordChar = '*';
		textBox5->PasswordChar = '*';

	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	System::String^ textBoxUsername = textBox1->Text;
	System::String^ textBoxPassword = textBox2->Text;
	std::string username = msclr::interop::marshal_as<std::string>(textBoxUsername);
	std::string password = msclr::interop::marshal_as<std::string>(textBoxPassword);
	if (TourAgency::isLoginValid(username, password)) {
		TouristForm^ form2 = gcnew TouristForm(textBoxUsername);
		form2->Owner = this;
		form2->Show();
		this->Hide();
		textBox1->Clear();
		textBox2->Clear();
	}
	else {
		MessageBox::Show("Invalid username or password");
	}
}
private: System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox2->Checked) {
		textBox2->PasswordChar = '\0';
		

	}
	else {
		textBox2->PasswordChar = '*';
		
	}
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox8->Text == "admin" && textBox7->Text == "theBestTours123") {
		AdminForm^ form2 = gcnew AdminForm();
		form2->Owner = this;
		form2->Show();
		this->Hide();
		textBox7->Clear();
		textBox8->Clear();
	}
	else {
		MessageBox::Show("Invalid username or password");
	}
}
};
}
