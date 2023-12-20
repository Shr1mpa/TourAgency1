#pragma once
#include <string>
#include "TourAgency.h"
#include <msclr/marshal_cppstd.h>
#include <list>
#include "Cart.h"
#include "Profile.h"
#include "MyTours.h"
#include "Reviews.h"
using namespace std;
namespace TourAgency1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Runtime::InteropServices;
	using namespace System::Collections::Generic;
	
	using namespace System::Drawing::Drawing2D;

	/// <summary>
	/// Сводка для TouristForm
	/// </summary>
	public ref class TouristForm : public System::Windows::Forms::Form
	{
	private: System::String^ username;
	private:
		
		
	public:
		
	public:
		TouristForm(System::String^ username)
		{
			InitializeComponent();
			this->username = username;
			
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~TouristForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;





	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::PictureBox^ pictureBox2;

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;



	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::PictureBox^ pictureBox10;
	private: System::Windows::Forms::PictureBox^ pictureBox9;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::PictureBox^ pictureBox6;

	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::PictureBox^ pictureBox11;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label33;
	private: System::Windows::Forms::Label^ label32;
	private: System::Windows::Forms::Panel^ panel10;
	private: System::Windows::Forms::Label^ label34;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label35;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::Button^ button6;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(TouristForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->panel4->SuspendLayout();
			this->panel9->SuspendLayout();
			this->panel8->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->panel10->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Location = System::Drawing::Point(1189, 14);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(51, 47);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &TouristForm::pictureBox1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"NewsGoth BT", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label4->Location = System::Drawing::Point(44, 48);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(92, 32);
			this->label4->TabIndex = 5;
			this->label4->Text = L"TWIST";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"News706 BT", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label3->Location = System::Drawing::Point(16, 11);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(148, 36);
			this->label3->TabIndex = 4;
			this->label3->Text = L"TRAVEL";
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(1107, 16);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(51, 47);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 6;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &TouristForm::pictureBox2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(653, 31);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(412, 22);
			this->textBox1->TabIndex = 8;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(619, 22);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(27, 34);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 9;
			this->pictureBox3->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Wheat;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(203, 25);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(96, 31);
			this->label1->TabIndex = 10;
			this->label1->Text = L"TOURS";
			this->label1->Click += gcnew System::EventHandler(this, &TouristForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Wheat;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(329, 25);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(89, 31);
			this->label2->TabIndex = 11;
			this->label2->Text = L"GUIDS";
			this->label2->Click += gcnew System::EventHandler(this, &TouristForm::label2_Click);
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::FloralWhite;
			this->panel4->Controls->Add(this->button2);
			this->panel4->Controls->Add(this->panel9);
			this->panel4->Controls->Add(this->panel8);
			this->panel4->Controls->Add(this->label12);
			this->panel4->Controls->Add(this->label11);
			this->panel4->Controls->Add(this->panel7);
			this->panel4->Controls->Add(this->panel6);
			this->panel4->Controls->Add(this->panel5);
			this->panel4->Controls->Add(this->pictureBox4);
			this->panel4->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel4->Location = System::Drawing::Point(1, 84);
			this->panel4->Margin = System::Windows::Forms::Padding(4);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(1300, 569);
			this->panel4->TabIndex = 15;
			this->panel4->Visible = false;
			this->panel4->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &TouristForm::panel4_Paint);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(15, 17);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(48, 44);
			this->button2->TabIndex = 8;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &TouristForm::button2_Click);
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::Color::Wheat;
			this->panel9->Controls->Add(this->label15);
			this->panel9->Controls->Add(this->label16);
			this->panel9->Location = System::Drawing::Point(1067, 58);
			this->panel9->Margin = System::Windows::Forms::Padding(4);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(175, 62);
			this->panel9->TabIndex = 7;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(4, 39);
			this->label15->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(73, 19);
			this->label15->TabIndex = 3;
			this->label15->Text = L"language";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(4, 11);
			this->label16->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(92, 19);
			this->label16->TabIndex = 2;
			this->label16->Text = L"Cost of food";
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::Color::Wheat;
			this->panel8->Controls->Add(this->label13);
			this->panel8->Controls->Add(this->label14);
			this->panel8->Location = System::Drawing::Point(869, 58);
			this->panel8->Margin = System::Windows::Forms::Padding(4);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(161, 62);
			this->panel8->TabIndex = 6;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(4, 39);
			this->label13->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(73, 19);
			this->label13->TabIndex = 3;
			this->label13->Text = L"language";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(4, 11);
			this->label14->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(134, 19);
			this->label14->TabIndex = 2;
			this->label14->Text = L"The price of coffee";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(231, 16);
			this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(53, 19);
			this->label12->TabIndex = 7;
			this->label12->Text = L"About";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(169, 15);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(50, 19);
			this->label11->TabIndex = 6;
			this->label11->Text = L"About";
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::Wheat;
			this->panel7->Controls->Add(this->label9);
			this->panel7->Controls->Add(this->label10);
			this->panel7->Location = System::Drawing::Point(625, 58);
			this->panel7->Margin = System::Windows::Forms::Padding(4);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(196, 62);
			this->panel7->TabIndex = 5;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(4, 39);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(73, 19);
			this->label9->TabIndex = 3;
			this->label9->Text = L"language";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(4, 11);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(56, 19);
			this->label10->TabIndex = 2;
			this->label10->Text = L"Capital";
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::Wheat;
			this->panel6->Controls->Add(this->label7);
			this->panel6->Controls->Add(this->label8);
			this->panel6->Location = System::Drawing::Point(465, 58);
			this->panel6->Margin = System::Windows::Forms::Padding(4);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(125, 62);
			this->panel6->TabIndex = 4;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(4, 39);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(73, 19);
			this->label7->TabIndex = 3;
			this->label7->Text = L"language";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(4, 11);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(66, 19);
			this->label8->TabIndex = 2;
			this->label8->Text = L"Currency";
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::Wheat;
			this->panel5->Controls->Add(this->label6);
			this->panel5->Controls->Add(this->label5);
			this->panel5->Location = System::Drawing::Point(312, 58);
			this->panel5->Margin = System::Windows::Forms::Padding(4);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(125, 62);
			this->panel5->TabIndex = 1;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(5, 36);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(73, 19);
			this->label6->TabIndex = 3;
			this->label6->Text = L"language";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(4, 11);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(68, 18);
			this->label5->TabIndex = 2;
			this->label5->Text = L"Language";
			// 
			// pictureBox4
			// 
			this->pictureBox4->Location = System::Drawing::Point(147, 58);
			this->pictureBox4->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(133, 62);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox4->TabIndex = 0;
			this->pictureBox4->TabStop = false;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->pictureBox11);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->pictureBox8);
			this->panel1->Controls->Add(this->pictureBox7);
			this->panel1->Controls->Add(this->pictureBox6);
			this->panel1->Controls->Add(this->label19);
			this->panel1->Controls->Add(this->label18);
			this->panel1->Controls->Add(this->label17);
			this->panel1->Controls->Add(this->pictureBox5);
			this->panel1->Location = System::Drawing::Point(1, 81);
			this->panel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1300, 559);
			this->panel1->TabIndex = 8;
			this->panel1->Visible = false;
			// 
			// pictureBox11
			// 
			this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.Image")));
			this->pictureBox11->Location = System::Drawing::Point(5, 7);
			this->pictureBox11->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(57, 39);
			this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox11->TabIndex = 9;
			this->pictureBox11->TabStop = false;
			this->pictureBox11->Click += gcnew System::EventHandler(this, &TouristForm::pictureBox11_Click);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::AliceBlue;
			this->panel3->Controls->Add(this->label33);
			this->panel3->Controls->Add(this->label32);
			this->panel3->Controls->Add(this->label31);
			this->panel3->Controls->Add(this->label20);
			this->panel3->Controls->Add(this->button1);
			this->panel3->Controls->Add(this->label30);
			this->panel3->Controls->Add(this->label29);
			this->panel3->Controls->Add(this->pictureBox10);
			this->panel3->Controls->Add(this->pictureBox9);
			this->panel3->Controls->Add(this->label28);
			this->panel3->Controls->Add(this->label27);
			this->panel3->Controls->Add(this->label26);
			this->panel3->Controls->Add(this->label25);
			this->panel3->Controls->Add(this->label24);
			this->panel3->Controls->Add(this->label23);
			this->panel3->Controls->Add(this->label22);
			this->panel3->Controls->Add(this->label21);
			this->panel3->Location = System::Drawing::Point(695, 127);
			this->panel3->Margin = System::Windows::Forms::Padding(4);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(439, 412);
			this->panel3->TabIndex = 8;
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label33->Location = System::Drawing::Point(95, 182);
			this->label33->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(68, 23);
			this->label33->TabIndex = 16;
			this->label33->Text = L"Guide: ";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label32->Location = System::Drawing::Point(19, 182);
			this->label32->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(68, 23);
			this->label32->TabIndex = 15;
			this->label32->Text = L"Guide: ";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 20.25F, System::Drawing::FontStyle::Strikeout, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label31->ForeColor = System::Drawing::Color::IndianRed;
			this->label31->Location = System::Drawing::Point(227, 295);
			this->label31->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(120, 45);
			this->label31->TabIndex = 14;
			this->label31->Text = L"24392";
			this->label31->Visible = false;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label20->Location = System::Drawing::Point(63, 295);
			this->label20->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(125, 45);
			this->label20->TabIndex = 13;
			this->label20->Text = L"18999";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Orange;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::SystemColors::Control;
			this->button1->Location = System::Drawing::Point(111, 356);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(187, 43);
			this->button1->TabIndex = 12;
			this->button1->Text = L"Add to cart";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &TouristForm::button1_Click);
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label30->Location = System::Drawing::Point(77, 262);
			this->label30->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(322, 23);
			this->label30->TabIndex = 11;
			this->label30->Text = L" December 9, Saturday from Hurghada";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label29->Location = System::Drawing::Point(69, 218);
			this->label29->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(315, 23);
			this->label29->TabIndex = 10;
			this->label29->Text = L" December 02, Sat 1225 from Warsaw";
			// 
			// pictureBox10
			// 
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->Location = System::Drawing::Point(21, 263);
			this->pictureBox10->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(40, 22);
			this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox10->TabIndex = 9;
			this->pictureBox10->TabStop = false;
			// 
			// pictureBox9
			// 
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(21, 218);
			this->pictureBox9->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(40, 22);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox9->TabIndex = 8;
			this->pictureBox9->TabStop = false;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label28->Location = System::Drawing::Point(95, 148);
			this->label28->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(77, 24);
			this->label28->TabIndex = 7;
			this->label28->Text = L"2 adults";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label27->Location = System::Drawing::Point(19, 148);
			this->label27->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(83, 23);
			this->label27->TabIndex = 6;
			this->label27->Text = L"Tourists: ";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label26->Location = System::Drawing::Point(79, 107);
			this->label26->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(133, 24);
			this->label26->TabIndex = 5;
			this->label26->Text = L"AI all inclusive";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label25->Location = System::Drawing::Point(19, 107);
			this->label25->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(63, 23);
			this->label25->TabIndex = 4;
			this->label25->Text = L"Meals:";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label24->Location = System::Drawing::Point(107, 65);
			this->label24->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(252, 24);
			this->label24->TabIndex = 3;
			this->label24->Text = L"7 nights in a Standard Room";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label23->Location = System::Drawing::Point(19, 65);
			this->label23->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(89, 23);
			this->label23->TabIndex = 2;
			this->label23->Text = L"Duration: ";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label22->Location = System::Drawing::Point(171, 21);
			this->label22->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(175, 24);
			this->label22->TabIndex = 1;
			this->label22->Text = L"from 02.12 to 09.12";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label21->Location = System::Drawing::Point(19, 21);
			this->label21->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(151, 23);
			this->label21->TabIndex = 0;
			this->label21->Text = L"Dates of the tour:";
			// 
			// pictureBox8
			// 
			this->pictureBox8->Location = System::Drawing::Point(513, 375);
			this->pictureBox8->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(127, 117);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox8->TabIndex = 7;
			this->pictureBox8->TabStop = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->Location = System::Drawing::Point(513, 251);
			this->pictureBox7->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(127, 117);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox7->TabIndex = 6;
			this->pictureBox7->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Location = System::Drawing::Point(513, 127);
			this->pictureBox6->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(127, 117);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox6->TabIndex = 5;
			this->pictureBox6->TabStop = false;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label19->Location = System::Drawing::Point(157, 70);
			this->label19->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(89, 23);
			this->label19->TabIndex = 3;
			this->label19->Text = L"Hurghada";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label18->Location = System::Drawing::Point(91, 70);
			this->label18->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(56, 23);
			this->label18->TabIndex = 2;
			this->label18->Text = L"Egypt";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label17->Location = System::Drawing::Point(84, 34);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(255, 36);
			this->label17->TabIndex = 1;
			this->label17->Text = L"Sand Beach Hotel";
			// 
			// pictureBox5
			// 
			this->pictureBox5->Location = System::Drawing::Point(85, 127);
			this->pictureBox5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(400, 369);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 0;
			this->pictureBox5->TabStop = false;
			// 
			// panel10
			// 
			this->panel10->BackColor = System::Drawing::Color::AliceBlue;
			this->panel10->Controls->Add(this->button6);
			this->panel10->Controls->Add(this->label34);
			this->panel10->Controls->Add(this->button5);
			this->panel10->Controls->Add(this->button4);
			this->panel10->Controls->Add(this->button3);
			this->panel10->Location = System::Drawing::Point(1145, 68);
			this->panel10->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(153, 167);
			this->panel10->TabIndex = 12;
			this->panel10->Visible = false;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Cornsilk;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Location = System::Drawing::Point(16, 138);
			this->button6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(125, 27);
			this->button6->TabIndex = 4;
			this->button6->Text = L"Sign out";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &TouristForm::button6_Click);
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Location = System::Drawing::Point(13, 6);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(42, 16);
			this->label34->TabIndex = 3;
			this->label34->Text = L"Close";
			this->label34->Click += gcnew System::EventHandler(this, &TouristForm::label34_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Cornsilk;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Location = System::Drawing::Point(17, 107);
			this->button5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(125, 27);
			this->button5->TabIndex = 2;
			this->button5->Text = L"Update data";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &TouristForm::button5_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Moccasin;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Location = System::Drawing::Point(17, 66);
			this->button4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(125, 34);
			this->button4->TabIndex = 1;
			this->button4->Text = L"MyTours";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &TouristForm::button4_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Orange;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Location = System::Drawing::Point(17, 32);
			this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(125, 30);
			this->button3->TabIndex = 0;
			this->button3->Text = L"Change data";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &TouristForm::button3_Click);
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->BackColor = System::Drawing::Color::Wheat;
			this->label35->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label35->ForeColor = System::Drawing::Color::Black;
			this->label35->Location = System::Drawing::Point(453, 26);
			this->label35->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(117, 31);
			this->label35->TabIndex = 16;
			this->label35->Text = L"REVIEWS";
			this->label35->Click += gcnew System::EventHandler(this, &TouristForm::label35_Click);
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Location = System::Drawing::Point(1, 81);
			this->flowLayoutPanel1->Margin = System::Windows::Forms::Padding(4);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(1300, 578);
			this->flowLayoutPanel1->TabIndex = 10;
			// 
			// TouristForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FloralWhite;
			this->ClientSize = System::Drawing::Size(1307, 652);
			this->Controls->Add(this->panel10);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Controls->Add(this->label35);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"TouristForm";
			this->Text = L"TouristForm";
			this->Load += gcnew System::EventHandler(this, &TouristForm::TouristForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->panel10->ResumeLayout(false);
			this->panel10->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		Tourist* tourist = nullptr;
		TourAgency* agency = nullptr;
		PictureBox^ lastClickedPictureBox = nullptr;
		Panel^ lastClickedPanel = nullptr;
		List<PictureBox^>^ pictureBoxList = gcnew List<PictureBox^>();
		List<Label^>^ labelList = gcnew List<Label^>();
		List<String^>^ tours_selectes = gcnew List<String^>();
		Discount* discount = nullptr;
		List<Panel^>^ createdPanels = gcnew List<Panel^>();
		void SetRoundedPanel(Panel^ panel, int cornerRadius)
		{
			GraphicsPath^ path = gcnew GraphicsPath();
			path->StartFigure();
			path->AddArc(0, 0, cornerRadius * 2, cornerRadius * 2, 180, 90);
			path->AddArc(panel->Width - cornerRadius * 2, 0, cornerRadius * 2, cornerRadius * 2, 270, 90);
			path->AddArc(panel->Width - cornerRadius * 2, panel->Height - cornerRadius * 2, cornerRadius * 2, cornerRadius * 2, 0, 90);
			path->AddArc(0, panel->Height - cornerRadius * 2, cornerRadius * 2, cornerRadius * 2, 90, 90);
			path->CloseFigure();

			panel->Region = gcnew System::Drawing::Region(path);
		}
		void LoadCountryPhotoAndName(PictureBox^ pictureBox, Label^ label, const std::string& countryName, const std::string& imagePath) {
			System::String^ imagePath2 = gcnew System::String(imagePath.c_str());
			pictureBox->ImageLocation = imagePath2;
			pictureBox->Image = Image::FromFile(gcnew System::String(imagePath.c_str()));
			label->Text = gcnew System::String(countryName.c_str());
		}
		private: System::Void ShowTourDetails(Object^ sender, EventArgs^ e) {
			Button^ clickedButton = dynamic_cast<Button^>(sender);
			
			panel1->Show();
			panel4->Hide();
			if (clickedButton != nullptr) {
				System::String^ tourName = dynamic_cast<System::String^>(clickedButton->Tag); // Отримання назви туру з Tag кнопки

				// Знаходження туру за його назвою
				Tour foundTour = agency->findTourByName(msclr::interop::marshal_as<std::string>(tourName));
				vector<string> photos = foundTour.getPhotos();
				pictureBox5->ImageLocation = gcnew System::String(foundTour.getMainPhoto().c_str());
				pictureBox6->ImageLocation = gcnew System::String(photos[0].c_str());
				pictureBox7->ImageLocation = gcnew System::String(photos[1].c_str());
				pictureBox8->ImageLocation = gcnew System::String(photos[2].c_str());
				System::String^ nameStr = gcnew System::String(foundTour.getName().c_str());
				label17->Text = nameStr;
				System::String^ countryStr = gcnew System::String(foundTour.getCountry()->getName().c_str());
				label18->Text = countryStr + " ,";
				System::String^ cityStr = gcnew System::String(foundTour.getCity().c_str());
				label19->Text = cityStr;
				System::String^ dateStr = gcnew System::String(foundTour.getDate().c_str());
				label22->Text = dateStr;
				System::String^ durationStr = gcnew System::String(foundTour.getDuration().c_str());
				label24->Text = durationStr;
				System::String^ mealsStr = gcnew System::String(foundTour.getMeals().c_str());
				label26->Text = mealsStr;
				System::String^ touristsStr = gcnew System::String(foundTour.getTourists().ToString());
				label28->Text = touristsStr + " adults";
				System::String^ fromStr = gcnew System::String(foundTour.getPlaceFrom().c_str());
				label29->Text = fromStr;
				System::String^ toStr = gcnew System::String(foundTour.getPlaceTo().c_str());
				label30->Text = toStr;
				System::String^ priceStr = gcnew System::String(foundTour.getPrice().ToString());
				label20->Text = priceStr;
				if (foundTour.getGuide() != nullptr) {
                System::String^ guideStr = gcnew System::String((foundTour.getGuide()->getName()+" "+foundTour.getGuide()->getSurname()).c_str());
				label33->Text = guideStr;
				}
				else {
					label33->Text = "No guide";
				}
				
				if (agency->getDiscount()->getName() != "NoDiscount") {
					label31->Show();
					System::String^ discountStr = gcnew System::String(agency->originalTourPrice(foundTour.getName()).ToString());
					
					label31->Text = discountStr;
				}


				// Тут можна виконати інші дії для відображення інформації про тур, як ви робили раніше
			}
		}

		void ShowCountryInfo(Object^ sender, EventArgs^ e) {
			PictureBox^ clickedPictureBox = dynamic_cast<PictureBox^>(sender);
			vector<Country> countries = agency->getCountries();
			vector<Tour> toursAll = agency->getTours();
			vector<Tour> selected_tours;
			
			
			panel4->Show();
			if (clickedPictureBox != lastClickedPictureBox) {
				lastClickedPictureBox = clickedPictureBox;

				System::String^ clickedImageLocation = clickedPictureBox->ImageLocation;

				for (auto& country : countries) {
					if (clickedPictureBox->ImageLocation == gcnew System::String(country.getPhoto().c_str())) {
						for (auto& tour : toursAll) {
							if (country.getName() == tour.getCountry()->getName()) {
								selected_tours.push_back(tour);
							}
						}
						label12->Text = gcnew System::String(country.getName().c_str());
						pictureBox4->ImageLocation = gcnew System::String(country.getPhoto().c_str());
						label6->Text = gcnew System::String(country.getLanguage().c_str());
						label7->Text = gcnew System::String(country.getCurrency().c_str());
						label9->Text = gcnew System::String(country.getCapital().c_str());
						label13->Text = gcnew System::String(country.getCoffee().c_str());
						label15->Text = gcnew System::String(country.getFood().c_str());
						SetRoundedPanel(panel5, 7);
						SetRoundedPanel(panel6, 7);
						SetRoundedPanel(panel7, 7);
						SetRoundedPanel(panel8, 7);
						SetRoundedPanel(panel9, 7);
                            int panelWidth = 300; // Ширина панелі туру
							int panelHeight = 200; // Висота панелі туру
							int horizontalSpacing = 0; // Горизонтальний відступ між панелями
							int verticalSpacing = 10; // Вертикальний відступ між панелями

							int currentX = horizontalSpacing;
							int currentY = verticalSpacing+150;
							int maxPanelsPerRow = (panel4->Width - horizontalSpacing) / (panelWidth + horizontalSpacing);
							int currentRow = 0;
							int currentColumn = 0;
							panel4->AutoScroll = true;
						for (auto& tour : selected_tours) {
							

							int panelX = currentColumn * (panelWidth + horizontalSpacing) + horizontalSpacing+100;
							int panelY = currentRow * (panelHeight + verticalSpacing) + verticalSpacing+125;
								Panel^ guidePanel = gcnew Panel();
								guidePanel->Width = 225; // Розмір Panel можна змінити за необхідності
								guidePanel->Height = 300;
								guidePanel->Location = Point(panelX, panelY);
								guidePanel->BackColor = System::Drawing::Color::Moccasin;
								
								PictureBox^ pictureBox = gcnew PictureBox();
								pictureBox->SizeMode = PictureBoxSizeMode::StretchImage;
								pictureBox->Width = 250; // Розмір PictureBox можна змінити за необхідності
								pictureBox->Height = 150;
								pictureBox->ImageLocation = gcnew System::String(tour.getMainPhoto().c_str()); // Завантаження фото гіда

								Label^ nameLabel = gcnew Label();
								System::String^ nameStr = gcnew System::String(tour.getName().c_str());
								nameLabel->Text =  nameStr;

								float fontSize = 9.0f; // Змініть коефіцієнт за необхідності
								nameLabel->Font = gcnew System::Drawing::Font(nameLabel->Font->FontFamily, fontSize);

								nameLabel->AutoSize = true;
								nameLabel->Location = Point(0, pictureBox->Height+2);
								nameLabel->AutoEllipsis = true;
								Label^ countryLabel = gcnew Label();
								System::String^ countryStr = gcnew System::String(tour.getCountry()->getName().c_str());
								System::String^ cityStr = gcnew System::String(tour.getCity().c_str());
								countryLabel->Text = countryStr + " , "  + cityStr;


								countryLabel->Font = gcnew System::Drawing::Font(nameLabel->Font->FontFamily, fontSize);

								countryLabel->AutoSize = true;
								countryLabel->Location = Point(0, nameLabel->Height+pictureBox->Height+2);
								countryLabel->AutoEllipsis = true;
								PictureBox^ pictureBoxDate = gcnew PictureBox();
								pictureBoxDate->SizeMode = PictureBoxSizeMode::StretchImage;
								pictureBoxDate->Image = Image::FromFile("C:\\Users\\User\\Desktop\\TourAgency1\\Calendar.png"); // Вкажіть шлях до зображення літака
								pictureBoxDate->Width = 15;
								pictureBoxDate->Height = 15;
								pictureBoxDate->Location = Point(0, nameLabel->Height + pictureBox->Height + countryLabel->Height + 2);
								
								Label^ dateLabel = gcnew Label();
								System::String^ dateStr = gcnew System::String(tour.getDate().c_str());

								dateLabel->Text =  dateStr;
								dateLabel->Font = gcnew System::Drawing::Font(nameLabel->Font->FontFamily, fontSize);

								dateLabel->AutoSize = true;
								dateLabel->Location = Point(pictureBoxDate->Width + 5, nameLabel->Height + pictureBox->Height + countryLabel->Height + 2);
								dateLabel->AutoEllipsis = true;
								PictureBox^ pictureBoxPlane = gcnew PictureBox();
								pictureBoxPlane->SizeMode = PictureBoxSizeMode::StretchImage;
								pictureBoxPlane->Image = Image::FromFile("C:\\Users\\User\\Desktop\\TourAgency1\\plane.png"); // Вкажіть шлях до зображення літака
								pictureBoxPlane->Width = 15;
								pictureBoxPlane->Height = 15;
								pictureBoxPlane->Location = Point(0, nameLabel->Height + pictureBox->Height + countryLabel->Height + dateLabel->Height + 2);
								Label^ timeLabel = gcnew Label();
								System::String^ placeFromStr = gcnew System::String(tour.getPlaceFrom().c_str());
								System::String^ timeStr = "";

								// Пошук позиції початку підстроки "from"
								int fromIndex = placeFromStr->IndexOf("from");

								if (fromIndex != -1) { // Якщо "from" знайдено у рядку
									// Вибір підстроки, що починається з "from" до кінця рядка
									timeStr = placeFromStr->Substring(fromIndex);
								}
								else {
									// Якщо "from" не знайдено у рядку
									// Зробіть потрібні дії для відсутності "from" у рядку
								}
								

								timeLabel->Text = timeStr;
								timeLabel->Font = gcnew System::Drawing::Font(nameLabel->Font->FontFamily, fontSize);

								timeLabel->AutoSize = true;
								timeLabel->Location = Point(pictureBoxPlane->Width + 5, nameLabel->Height + pictureBox->Height + countryLabel->Height + dateLabel->Height + 2);
								timeLabel->AutoEllipsis = true;
								
								Label^ priceLabel = gcnew Label();
								System::String^ priceStr = gcnew System::String(tour.getPrice().ToString());

								priceLabel->Text =  priceStr;
								priceLabel->Font = gcnew System::Drawing::Font(nameLabel->Font->FontFamily, 14);

								priceLabel->AutoSize = true;
								priceLabel->Location = Point(20, nameLabel->Height + pictureBox->Height + countryLabel->Height + dateLabel->Height + timeLabel->Height + 2);
								priceLabel->AutoEllipsis = true;

								if (agency->getDiscount()->getName() != "NoDiscount") {
									Label^ discountLabel = gcnew Label();
									System::String^ discountStr = gcnew System::String(agency->originalTourPrice(tour.getName()).ToString());

									discountLabel->Text = discountStr;
									discountLabel->Font = gcnew System::Drawing::Font(nameLabel->Font->FontFamily, 14, System::Drawing::FontStyle::Strikeout);
									discountLabel->ForeColor = System::Drawing::Color::Red; // Налаштування кольору шрифту на червоний
									discountLabel->BackColor = System::Drawing::Color::Transparent;
									discountLabel->AutoSize = true;
									discountLabel->Location = Point(priceLabel->Location.X + priceLabel->Width, nameLabel->Height + pictureBox->Height + countryLabel->Height + dateLabel->Height + timeLabel->Height + 2); // Розміщення справа від priceLabel
									discountLabel->AutoEllipsis = true;
									

									guidePanel->Controls->Add(discountLabel);
								}
								Button^ detailsButton = gcnew Button();
								detailsButton->Text = "More Details";
								detailsButton->Width = 100;
								detailsButton->Height = 30;
								detailsButton->Location = Point(pictureBox->Width/4, nameLabel->Height + pictureBox->Height + countryLabel->Height + dateLabel->Height + timeLabel->Height + priceLabel->Height+4);
								detailsButton->Click += gcnew EventHandler(this, &TouristForm::ShowTourDetails); // Підключення методу-обробника подій для кнопки
								detailsButton->Tag = gcnew System::String(tour.getName().c_str()); // Позначка для визначення, яке зображення показувати
								detailsButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat; // Змініть стиль на Flat для більшої сучасності
								detailsButton->BackColor = System::Drawing::Color::Orange; // Змініть колір фону кнопки
								detailsButton->ForeColor = System::Drawing::Color::White; // Змініть колір тексту кнопки
								detailsButton->Font = gcnew System::Drawing::Font("Arial", 10, FontStyle::Bold);
								
								// Додавання кнопки до панелі туру
								guidePanel->Controls->Add(detailsButton);

								// Додавання елементів до панелі гіда

								guidePanel->Controls->Add(pictureBox);
								guidePanel->Controls->Add(nameLabel);
								guidePanel->Controls->Add(countryLabel);
								guidePanel->Controls->Add(dateLabel);
								guidePanel->Controls->Add(timeLabel);
								guidePanel->Controls->Add(priceLabel);
								guidePanel->Controls->Add(pictureBoxDate);
								guidePanel->Controls->Add(pictureBoxPlane);

								// Додавання панелі гіда до panel36
								panel4->Controls->Add(guidePanel);
								createdPanels->Add(guidePanel);

								// Оновлення координат для наступної панелі туру
								currentColumn++;
								if (currentColumn >= maxPanelsPerRow) {
									currentColumn = 0;
									currentRow++;
								}
							
						}
						break;
					}
				}
			}
		}
		void ClearPictureBoxesAndLabels() {
			// Очищення створених PictureBox і Label зі списків
			for (int i = 0; i < pictureBoxList->Count; i++) {
				this->Controls->Remove(pictureBoxList[i]);
				delete pictureBoxList[i];
			}
			pictureBoxList->Clear();

			for (int i = 0; i < labelList->Count; i++) {
				this->Controls->Remove(labelList[i]);
				delete labelList[i];
			}
			labelList->Clear();
		}
		private: System::Void pictureBox_Click(System::Object^ sender, System::EventArgs^ e) {
			PictureBox^ clickedPictureBox = dynamic_cast<PictureBox^>(sender);
			ShowCountryInfo(clickedPictureBox, e);
		}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
		panel10->Show();
	}
	private: System::Void TouristForm_Load(System::Object^ sender, System::EventArgs^ e) {
		System::String^ usernameNew = username; 
		std::string usernameStr = msclr::interop::marshal_as<std::string>(usernameNew);
		tourist = TourAgency::findTouristByUsername(usernameStr);
		std::string photoPath = tourist->getPhotoPath();
		pictureBox1->ImageLocation = gcnew System::String(photoPath.c_str());

		agency = TourAgency::getAgencyInfo();
		agency->addCountriestToVector();
		discount = agency->getDiscount();
		vector<Tour> tours;
		agency->addToursToVector();
		tours = discount->calculateDiscount(agency->getTours());
		agency->setTours(tours);
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
		flowLayoutPanel1->Hide();
		const int topMargin = 100;
		const int rightMargin = 10;
		const int horizontalSpacing = 40; // Відстань між PictureBox
		
		
		vector<Country> countries = agency->getCountries();
		int x = rightMargin;
		int y = topMargin;
		int maxWidth = this->Width - rightMargin; 
		for (auto& country : countries) {
			PictureBox^ pictureBox = gcnew PictureBox();
			pictureBox->SizeMode = PictureBoxSizeMode::Zoom;
			pictureBox->Width = 100; // Розмір PictureBox можна змінити за необхідності
			pictureBox->Height = 50;
			pictureBox->Click += gcnew EventHandler(this, &TouristForm::pictureBox_Click); // Додаємо подію кліку
			pictureBox->Location = Point(x, y);

			Label^ label = gcnew Label();
			label->AutoSize = true;
			label->Text = gcnew System::String(country.getName().c_str());
			label->Location = Point(x, y + pictureBox->Height);

			LoadCountryPhotoAndName(pictureBox, label, country.getName(), country.getPhoto());
			label->Location = Point(
				pictureBox->Location.X + (pictureBox->Width - label->Width) / 2 + pictureBox->Width / 3 + 2, // Центруємо Label по горизонталі
				pictureBox->Location.Y + pictureBox->Height // Розміщуємо Label під PictureBox
			);
			pictureBoxList->Add(pictureBox);
			labelList->Add(label);
			this->Controls->Add(pictureBox);
			this->Controls->Add(label);

			x += pictureBox->Width + horizontalSpacing; // Додаємо до x ширину PictureBox та відстань між ними

			// Переносимо на наступний рядок, якщо вийшли за межі панелі
			if (x + pictureBox->Width > maxWidth) {
				x = 0;
				y += pictureBox->Height + label->Height; // Додаємо висоту PictureBox та Label
			}
		}

	}
private: System::Void panel4_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void pictureBox11_Click(System::Object^ sender, System::EventArgs^ e) {
	panel4->Show();
	panel1->Hide();
	label31->Hide();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ name = label17->Text;

	tours_selectes->Add(name);
	MessageBox::Show("Added to cart");
}
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	
	Cart^ cart = gcnew Cart(tours_selectes, username);
	cart->Show();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	panel4->Hide();
	for each (Panel ^ panel in createdPanels)
	{
		panel4->Controls->Remove(panel);
	}
}
private: System::Void label34_Click(System::Object^ sender, System::EventArgs^ e) {
	panel10->Hide();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	Profile^ profile = gcnew Profile(username);
	profile->Show();
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	System::String^ usernameNew = username;
	std::string usernameStr = msclr::interop::marshal_as<std::string>(usernameNew);
	tourist = TourAgency::findTouristByUsername(usernameStr);
	pictureBox1->ImageLocation = gcnew System::String(tourist->getPhotoPath().c_str());
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	MyTours^ toursForm = gcnew MyTours(username);
	toursForm->Show();
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	flowLayoutPanel1->Controls->Clear();
	flowLayoutPanel1->Show();
	agency->clearGuidsVector();
	agency->addGuidsToVector();
	vector<Guide> guids = agency->getGuids();

	for (auto& guide : guids) {
		Panel^ guidePanel = gcnew Panel();
		guidePanel->Width = 300; // Розмір Panel можна змінити за необхідності

		PictureBox^ pictureBox = gcnew PictureBox();
		pictureBox->SizeMode = PictureBoxSizeMode::StretchImage;
		pictureBox->Width = 100; // Розмір PictureBox можна змінити за необхідності
		pictureBox->Height = 100;
		pictureBox->ImageLocation = gcnew System::String(guide.getPhoto().c_str()); // Завантаження фото гіда

		Label^ nameLabel = gcnew Label();
		nameLabel->Text = "Name: " + gcnew System::String(guide.getName().c_str());

		Label^ surnameLabel = gcnew Label();
		surnameLabel->Text = "Surname: " + gcnew System::String(guide.getSurname().c_str());

		Label^ ageLabel = gcnew Label();
		ageLabel->Text = "Age: " + guide.getAge().ToString(); // Перетворення віку в рядок і додавання до Label

		Label^ languageLabel = gcnew Label();
		languageLabel->Text = "Language: " + gcnew System::String(guide.getLanguages().c_str());

		// Параметри розташування інформації про гіда на панелі
		pictureBox->Location = Point(0, 0);
		nameLabel->Location = Point(pictureBox->Width + 5, 0);
		surnameLabel->Location = Point(pictureBox->Width + 5, nameLabel->Height);
		ageLabel->Location = Point(pictureBox->Width + 5, nameLabel->Height + surnameLabel->Height);
		languageLabel->Location = Point(pictureBox->Width + 5, nameLabel->Height + surnameLabel->Height + ageLabel->Height);

		// Додавання елементів до панелі гіда
		guidePanel->Margin = System::Windows::Forms::Padding(0, 20, 0, 0);
		guidePanel->Controls->Add(pictureBox);
		guidePanel->Controls->Add(nameLabel);
		guidePanel->Controls->Add(surnameLabel);
		guidePanel->Controls->Add(ageLabel);
		guidePanel->Controls->Add(languageLabel);

		// Додавання панелі гіда до FlowLayoutPanel
		flowLayoutPanel1->Controls->Add(guidePanel);
	}
}
private: System::Void label35_Click(System::Object^ sender, System::EventArgs^ e) {
	Reviews^ review = gcnew Reviews(username);
	review->Show();

}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	Owner->Show();
	this->Close();
}
};
}
