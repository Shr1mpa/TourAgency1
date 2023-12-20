#pragma once
#include <msclr/marshal_cppstd.h>
#include "Guide.h"
#include <fstream>
#include "nlohmann/json.hpp"
#include "TourAgency.h"
#include "ClientsForm.h"
using namespace nlohmann;
#include "Country.h"
using namespace std;
namespace TourAgency1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Runtime::InteropServices;

	/// <summary>
	/// Сводка для AdminForm
	/// </summary>
	public ref class AdminForm : public System::Windows::Forms::Form
	{
	public:
		AdminForm(void)
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
		~AdminForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private: System::Windows::Forms::Panel^ panel5;


	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Panel^ panelTours;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Panel^ panel10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::PictureBox^ pictureBox6;




	private: System::Windows::Forms::Panel^ panel13;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::Panel^ panel14;






	private: System::Windows::Forms::Panel^ panel18;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::PictureBox^ pictureBox11;

	private: System::Windows::Forms::Panel^ panel19;
	private: System::Windows::Forms::Panel^ panel20;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::PictureBox^ pictureBox5;































private: System::Windows::Forms::Panel^ panel28;



private: System::Windows::Forms::Panel^ panel30;
private: System::Windows::Forms::Label^ label28;
private: System::Windows::Forms::PictureBox^ pictureBox18;
private: System::Windows::Forms::Panel^ panel31;
private: System::Windows::Forms::Label^ label29;
private: System::Windows::Forms::PictureBox^ pictureBox19;
private: System::Windows::Forms::Panel^ panel32;
private: System::Windows::Forms::Label^ label30;
private: System::Windows::Forms::PictureBox^ pictureBox20;
private: System::Windows::Forms::Button^ button3;
private: System::Windows::Forms::PictureBox^ pictureBox21;
private: System::Windows::Forms::Label^ label32;
private: System::Windows::Forms::Label^ label31;
private: System::Windows::Forms::Panel^ panel33;
private: System::Windows::Forms::Button^ button4;
private: System::Windows::Forms::TextBox^ textBox10;
private: System::Windows::Forms::TextBox^ textBox9;
private: System::Windows::Forms::TextBox^ textBox8;
private: System::Windows::Forms::Label^ label33;
private: System::Windows::Forms::TextBox^ textBox7;
private: System::Windows::Forms::Label^ label34;
private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;




































private: System::Windows::Forms::Panel^ panel34;
private: System::Windows::Forms::Panel^ panel35;
private: System::Windows::Forms::PictureBox^ pictureBox28;
private: System::Windows::Forms::TextBox^ textBox20;
private: System::Windows::Forms::Label^ label44;
private: System::Windows::Forms::Button^ button7;
private: System::Windows::Forms::ComboBox^ comboBox2;
private: System::Windows::Forms::Label^ label47;
private: System::Windows::Forms::TextBox^ textBox21;
private: System::Windows::Forms::Label^ label46;
private: System::Windows::Forms::RichTextBox^ richTextBox1;
private: System::Windows::Forms::Label^ label45;
private: System::Windows::Forms::Button^ button9;









private: System::Windows::Forms::Panel^ panel21;
private: System::Windows::Forms::Panel^ panel26;
private: System::Windows::Forms::Panel^ panel27;
private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::PictureBox^ pictureBox16;
private: System::Windows::Forms::TextBox^ textBox6;
private: System::Windows::Forms::Button^ button1;
private: System::Windows::Forms::Label^ label26;
private: System::Windows::Forms::Label^ label21;
private: System::Windows::Forms::Button^ button2;
private: System::Windows::Forms::Label^ label22;
private: System::Windows::Forms::TextBox^ textBox5;
private: System::Windows::Forms::Label^ label23;
private: System::Windows::Forms::TextBox^ textBox4;
private: System::Windows::Forms::Label^ label24;
private: System::Windows::Forms::TextBox^ textBox3;
private: System::Windows::Forms::Label^ label25;
private: System::Windows::Forms::TextBox^ textBox2;
private: System::Windows::Forms::TextBox^ textBox1;
private: System::Windows::Forms::Panel^ panel25;
private: System::Windows::Forms::Label^ label19;
private: System::Windows::Forms::PictureBox^ pictureBox15;
private: System::Windows::Forms::Panel^ panel24;
private: System::Windows::Forms::Label^ label18;
private: System::Windows::Forms::PictureBox^ pictureBox14;
private: System::Windows::Forms::ComboBox^ comboBox1;
private: System::Windows::Forms::PictureBox^ pictureBox23;
private: System::Windows::Forms::PictureBox^ pictureBox24;
private: System::Windows::Forms::PictureBox^ pictureBox25;
private: System::Windows::Forms::Button^ button8;
private: System::Windows::Forms::Label^ label35;
private: System::Windows::Forms::TextBox^ textBox11;
private: System::Windows::Forms::Label^ label36;
private: System::Windows::Forms::Button^ button5;
private: System::Windows::Forms::Label^ label39;
private: System::Windows::Forms::TextBox^ textBox12;
private: System::Windows::Forms::Label^ label37;
private: System::Windows::Forms::TextBox^ textBox13;
private: System::Windows::Forms::Label^ label38;
private: System::Windows::Forms::TextBox^ textBox14;
private: System::Windows::Forms::Label^ label40;
private: System::Windows::Forms::TextBox^ textBox15;
private: System::Windows::Forms::Label^ label41;
private: System::Windows::Forms::TextBox^ textBox16;
private: System::Windows::Forms::PictureBox^ pictureBox26;
private: System::Windows::Forms::TextBox^ textBox18;
private: System::Windows::Forms::PictureBox^ pictureBox27;
private: System::Windows::Forms::TextBox^ textBox19;
private: System::Windows::Forms::Button^ button6;
private: System::Windows::Forms::Label^ label42;
private: System::Windows::Forms::TextBox^ textBox17;
private: System::Windows::Forms::ComboBox^ comboBoxGuide;
private: System::Windows::Forms::Label^ label43;
private: System::Windows::Forms::Panel^ panel36;
private: System::Windows::Forms::Panel^ panel17;
private: System::Windows::Forms::PictureBox^ pictureBox22;




















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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AdminForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel34 = (gcnew System::Windows::Forms::Panel());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->panel18 = (gcnew System::Windows::Forms::Panel());
			this->panel19 = (gcnew System::Windows::Forms::Panel());
			this->panel20 = (gcnew System::Windows::Forms::Panel());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->panelTours = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->panel35 = (gcnew System::Windows::Forms::Panel());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->pictureBox28 = (gcnew System::Windows::Forms::PictureBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->panel13 = (gcnew System::Windows::Forms::Panel());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->panel14 = (gcnew System::Windows::Forms::Panel());
			this->panel28 = (gcnew System::Windows::Forms::Panel());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panel30 = (gcnew System::Windows::Forms::Panel());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->pictureBox18 = (gcnew System::Windows::Forms::PictureBox());
			this->panel31 = (gcnew System::Windows::Forms::Panel());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->pictureBox19 = (gcnew System::Windows::Forms::PictureBox());
			this->panel32 = (gcnew System::Windows::Forms::Panel());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->pictureBox20 = (gcnew System::Windows::Forms::PictureBox());
			this->panel33 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox21 = (gcnew System::Windows::Forms::PictureBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->panel21 = (gcnew System::Windows::Forms::Panel());
			this->panel26 = (gcnew System::Windows::Forms::Panel());
			this->panel27 = (gcnew System::Windows::Forms::Panel());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->panel25 = (gcnew System::Windows::Forms::Panel());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->panel24 = (gcnew System::Windows::Forms::Panel());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->pictureBox23 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox24 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox25 = (gcnew System::Windows::Forms::PictureBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox26 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox27 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->comboBoxGuide = (gcnew System::Windows::Forms::ComboBox());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->panel36 = (gcnew System::Windows::Forms::Panel());
			this->panel17 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox22 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			this->panel34->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			this->panel20->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->panelTours->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panel8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->panel35->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->BeginInit();
			this->panel10->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			this->panel13->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			this->panel14->SuspendLayout();
			this->panel28->SuspendLayout();
			this->panel30->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->BeginInit();
			this->panel31->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->BeginInit();
			this->panel32->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->BeginInit();
			this->panel33->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->BeginInit();
			this->panel21->SuspendLayout();
			this->panel27->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->BeginInit();
			this->panel25->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->BeginInit();
			this->panel24->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox26))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->BeginInit();
			this->panel17->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(239)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(111)));
			this->panel1->Controls->Add(this->panel34);
			this->panel1->Controls->Add(this->panel19);
			this->panel1->Controls->Add(this->panel20);
			this->panel1->Controls->Add(this->panelTours);
			this->panel1->Controls->Add(this->panel6);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->panel5);
			this->panel1->Controls->Add(this->panel4);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->panel7);
			this->panel1->Controls->Add(this->panel8);
			this->panel1->Controls->Add(this->panel9);
			this->panel1->Location = System::Drawing::Point(-4, -7);
			this->panel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(205, 665);
			this->panel1->TabIndex = 0;
			// 
			// panel34
			// 
			this->panel34->BackColor = System::Drawing::Color::Transparent;
			this->panel34->Controls->Add(this->label15);
			this->panel34->Controls->Add(this->pictureBox11);
			this->panel34->Controls->Add(this->panel18);
			this->panel34->Location = System::Drawing::Point(4, 362);
			this->panel34->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel34->Name = L"panel34";
			this->panel34->Size = System::Drawing::Size(211, 73);
			this->panel34->TabIndex = 11;
			this->panel34->Click += gcnew System::EventHandler(this, &AdminForm::panel34_Click);
			this->panel34->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &AdminForm::panel34_Paint);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::Transparent;
			this->label15->Font = (gcnew System::Drawing::Font(L"Schadow BT", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label15->Location = System::Drawing::Point(60, 17);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(127, 32);
			this->label15->TabIndex = 12;
			this->label15->Text = L"Settings";
			// 
			// pictureBox11
			// 
			this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.Image")));
			this->pictureBox11->Location = System::Drawing::Point(3, 17);
			this->pictureBox11->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(41, 36);
			this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox11->TabIndex = 11;
			this->pictureBox11->TabStop = false;
			// 
			// panel18
			// 
			this->panel18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(241)),
				static_cast<System::Int32>(static_cast<System::Byte>(196)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel18->Location = System::Drawing::Point(-1, 58);
			this->panel18->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel18->Name = L"panel18";
			this->panel18->Size = System::Drawing::Size(200, 10);
			this->panel18->TabIndex = 13;
			// 
			// panel19
			// 
			this->panel19->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(241)),
				static_cast<System::Int32>(static_cast<System::Byte>(196)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel19->Location = System::Drawing::Point(1, 217);
			this->panel19->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel19->Name = L"panel19";
			this->panel19->Size = System::Drawing::Size(207, 10);
			this->panel19->TabIndex = 3;
			// 
			// panel20
			// 
			this->panel20->BackColor = System::Drawing::Color::Transparent;
			this->panel20->Controls->Add(this->label14);
			this->panel20->Controls->Add(this->pictureBox5);
			this->panel20->ForeColor = System::Drawing::Color::Black;
			this->panel20->Location = System::Drawing::Point(1, 158);
			this->panel20->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel20->Name = L"panel20";
			this->panel20->Size = System::Drawing::Size(211, 59);
			this->panel20->TabIndex = 4;
			this->panel20->Click += gcnew System::EventHandler(this, &AdminForm::panel20_Click);
			this->panel20->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &AdminForm::panel20_Paint);
			this->panel20->MouseEnter += gcnew System::EventHandler(this, &AdminForm::panel20_MouseEnter);
			this->panel20->MouseLeave += gcnew System::EventHandler(this, &AdminForm::panel20_MouseLeave);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::Transparent;
			this->label14->Font = (gcnew System::Drawing::Font(L"Schadow BT", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label14->Location = System::Drawing::Point(53, 16);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(148, 32);
			this->label14->TabIndex = 2;
			this->label14->Text = L"Countries";
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(12, 11);
			this->pictureBox5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(41, 36);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox5->TabIndex = 1;
			this->pictureBox5->TabStop = false;
			// 
			// panelTours
			// 
			this->panelTours->BackColor = System::Drawing::Color::Transparent;
			this->panelTours->Controls->Add(this->label1);
			this->panelTours->Controls->Add(this->pictureBox1);
			this->panelTours->Location = System::Drawing::Point(0, 89);
			this->panelTours->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panelTours->Name = L"panelTours";
			this->panelTours->Size = System::Drawing::Size(211, 59);
			this->panelTours->TabIndex = 1;
			this->panelTours->Click += gcnew System::EventHandler(this, &AdminForm::panelTours_Click);
			this->panelTours->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &AdminForm::panelTours_Paint);
			this->panelTours->MouseEnter += gcnew System::EventHandler(this, &AdminForm::panelTours_MouseEnter);
			this->panelTours->MouseLeave += gcnew System::EventHandler(this, &AdminForm::panelTours_MouseLeave);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Schadow BT", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Location = System::Drawing::Point(61, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(94, 32);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Tours";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 16);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(41, 37);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(241)),
				static_cast<System::Int32>(static_cast<System::Byte>(196)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel6->Location = System::Drawing::Point(3, 613);
			this->panel6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(200, 10);
			this->panel6->TabIndex = 7;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Schadow BT", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label7->Location = System::Drawing::Point(3, 625);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(95, 24);
			this->label7->TabIndex = 10;
			this->label7->Text = L"Sign out";
			this->label7->Click += gcnew System::EventHandler(this, &AdminForm::label7_Click);
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(241)),
				static_cast<System::Int32>(static_cast<System::Byte>(196)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel5->Location = System::Drawing::Point(1, 418);
			this->panel5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(204, 10);
			this->panel5->TabIndex = 9;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(241)),
				static_cast<System::Int32>(static_cast<System::Byte>(196)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel4->Location = System::Drawing::Point(1, 351);
			this->panel4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(204, 10);
			this->panel4->TabIndex = 6;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"NewsGoth BT", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label4->Location = System::Drawing::Point(49, 54);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(92, 32);
			this->label4->TabIndex = 3;
			this->label4->Text = L"TWIST";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"News706 BT", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label3->Location = System::Drawing::Point(21, 18);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(148, 36);
			this->label3->TabIndex = 2;
			this->label3->Text = L"TRAVEL";
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(241)),
				static_cast<System::Int32>(static_cast<System::Byte>(196)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel3->Location = System::Drawing::Point(0, 283);
			this->panel3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(205, 10);
			this->panel3->TabIndex = 2;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(241)),
				static_cast<System::Int32>(static_cast<System::Byte>(196)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel2->Location = System::Drawing::Point(4, 146);
			this->panel2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(200, 10);
			this->panel2->TabIndex = 1;
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::Transparent;
			this->panel7->Controls->Add(this->label2);
			this->panel7->Controls->Add(this->pictureBox2);
			this->panel7->ForeColor = System::Drawing::Color::Black;
			this->panel7->Location = System::Drawing::Point(0, 224);
			this->panel7->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(211, 59);
			this->panel7->TabIndex = 2;
			this->panel7->Click += gcnew System::EventHandler(this, &AdminForm::panel7_Click);
			this->panel7->MouseEnter += gcnew System::EventHandler(this, &AdminForm::panel7_MouseEnter);
			this->panel7->MouseLeave += gcnew System::EventHandler(this, &AdminForm::panel7_MouseLeave);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Schadow BT", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label2->Location = System::Drawing::Point(61, 16);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(110, 32);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Clients";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(12, 11);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(41, 36);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::Color::Transparent;
			this->panel8->Controls->Add(this->pictureBox3);
			this->panel8->Controls->Add(this->label5);
			this->panel8->Location = System::Drawing::Point(-3, 290);
			this->panel8->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(211, 59);
			this->panel8->TabIndex = 2;
			this->panel8->Click += gcnew System::EventHandler(this, &AdminForm::panel8_Click);
			this->panel8->MouseEnter += gcnew System::EventHandler(this, &AdminForm::panel8_MouseEnter);
			this->panel8->MouseLeave += gcnew System::EventHandler(this, &AdminForm::panel8_MouseLeave);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(15, 16);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(41, 36);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 4;
			this->pictureBox3->TabStop = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Schadow BT", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label5->Location = System::Drawing::Point(64, 21);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(95, 32);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Guids";
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::Color::Transparent;
			this->panel9->Location = System::Drawing::Point(-3, 362);
			this->panel9->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(211, 59);
			this->panel9->TabIndex = 3;
			this->panel9->MouseEnter += gcnew System::EventHandler(this, &AdminForm::panel9_MouseEnter);
			this->panel9->MouseLeave += gcnew System::EventHandler(this, &AdminForm::panel9_MouseLeave);
			// 
			// panel35
			// 
			this->panel35->BackColor = System::Drawing::Color::SeaShell;
			this->panel35->Controls->Add(this->button9);
			this->panel35->Controls->Add(this->comboBox2);
			this->panel35->Controls->Add(this->label47);
			this->panel35->Controls->Add(this->textBox21);
			this->panel35->Controls->Add(this->label46);
			this->panel35->Controls->Add(this->richTextBox1);
			this->panel35->Controls->Add(this->label45);
			this->panel35->Controls->Add(this->textBox20);
			this->panel35->Controls->Add(this->label44);
			this->panel35->Controls->Add(this->button7);
			this->panel35->Controls->Add(this->pictureBox28);
			this->panel35->Location = System::Drawing::Point(-4, 0);
			this->panel35->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel35->Name = L"panel35";
			this->panel35->Size = System::Drawing::Size(1123, 638);
			this->panel35->TabIndex = 0;
			this->panel35->Visible = false;
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::Orange;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Location = System::Drawing::Point(356, 405);
			this->button9->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(132, 32);
			this->button9->TabIndex = 10;
			this->button9->Text = L"SAVE";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &AdminForm::button9_Click);
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"NoDiscount", L"BlackFriday", L"SpringDiscount",
					L"AutumnDiscount"
			});
			this->comboBox2->Location = System::Drawing::Point(403, 192);
			this->comboBox2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(160, 24);
			this->comboBox2->TabIndex = 9;
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->Location = System::Drawing::Point(301, 193);
			this->label47->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(59, 16);
			this->label47->TabIndex = 8;
			this->label47->Text = L"Discount";
			// 
			// textBox21
			// 
			this->textBox21->Location = System::Drawing::Point(407, 144);
			this->textBox21->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(132, 22);
			this->textBox21->TabIndex = 7;
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->Location = System::Drawing::Point(301, 144);
			this->label46->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(46, 16);
			this->label46->TabIndex = 6;
			this->label46->Text = L"Phone";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(407, 240);
			this->richTextBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(424, 118);
			this->richTextBox1->TabIndex = 5;
			this->richTextBox1->Text = L"";
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->Location = System::Drawing::Point(301, 239);
			this->label45->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(75, 16);
			this->label45->TabIndex = 4;
			this->label45->Text = L"Description";
			// 
			// textBox20
			// 
			this->textBox20->Location = System::Drawing::Point(409, 97);
			this->textBox20->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(132, 22);
			this->textBox20->TabIndex = 3;
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Location = System::Drawing::Point(301, 98);
			this->label44->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(44, 16);
			this->label44->TabIndex = 2;
			this->label44->Text = L"Name";
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Orange;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Location = System::Drawing::Point(127, 223);
			this->button7->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(100, 28);
			this->button7->TabIndex = 1;
			this->button7->Text = L"Add photo";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &AdminForm::button7_Click);
			// 
			// pictureBox28
			// 
			this->pictureBox28->BackColor = System::Drawing::Color::MistyRose;
			this->pictureBox28->Location = System::Drawing::Point(116, 96);
			this->pictureBox28->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox28->Name = L"pictureBox28";
			this->pictureBox28->Size = System::Drawing::Size(133, 107);
			this->pictureBox28->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox28->TabIndex = 0;
			this->pictureBox28->TabStop = false;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Schadow BT", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(491, 18);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(138, 48);
			this->label8->TabIndex = 1;
			this->label8->Text = L"Tours";
			// 
			// panel10
			// 
			this->panel10->BackColor = System::Drawing::Color::Transparent;
			this->panel10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel10.BackgroundImage")));
			this->panel10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel10->Controls->Add(this->label9);
			this->panel10->Controls->Add(this->pictureBox6);
			this->panel10->Location = System::Drawing::Point(592, 97);
			this->panel10->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(136, 113);
			this->panel10->TabIndex = 2;
			this->panel10->Click += gcnew System::EventHandler(this, &AdminForm::panel10_Click);
			this->panel10->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &AdminForm::panel10_Paint);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label9->Location = System::Drawing::Point(36, 62);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(57, 25);
			this->label9->TabIndex = 1;
			this->label9->Text = L"ADD";
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(41, 15);
			this->pictureBox6->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(48, 42);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox6->TabIndex = 0;
			this->pictureBox6->TabStop = false;
			// 
			// panel13
			// 
			this->panel13->BackColor = System::Drawing::Color::Transparent;
			this->panel13->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel13.BackgroundImage")));
			this->panel13->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel13->Controls->Add(this->label11);
			this->panel13->Controls->Add(this->pictureBox8);
			this->panel13->Location = System::Drawing::Point(780, 97);
			this->panel13->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel13->Name = L"panel13";
			this->panel13->Size = System::Drawing::Size(136, 113);
			this->panel13->TabIndex = 3;
			this->panel13->Click += gcnew System::EventHandler(this, &AdminForm::panel13_Click);
			this->panel13->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &AdminForm::panel13_Paint);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label11->Location = System::Drawing::Point(24, 62);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(80, 25);
			this->label11->TabIndex = 1;
			this->label11->Text = L"SHOW";
			// 
			// pictureBox8
			// 
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(41, 15);
			this->pictureBox8->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(48, 42);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox8->TabIndex = 0;
			this->pictureBox8->TabStop = false;
			// 
			// panel14
			// 
			this->panel14->BackColor = System::Drawing::Color::FloralWhite;
			this->panel14->Controls->Add(this->label8);
			this->panel14->Location = System::Drawing::Point(195, -7);
			this->panel14->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel14->Name = L"panel14";
			this->panel14->Size = System::Drawing::Size(1137, 85);
			this->panel14->TabIndex = 2;
			// 
			// panel28
			// 
			this->panel28->Controls->Add(this->panel35);
			this->panel28->Controls->Add(this->flowLayoutPanel1);
			this->panel28->Controls->Add(this->panel30);
			this->panel28->Controls->Add(this->panel31);
			this->panel28->Controls->Add(this->panel32);
			this->panel28->Controls->Add(this->panel33);
			this->panel28->Location = System::Drawing::Point(199, 0);
			this->panel28->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel28->Name = L"panel28";
			this->panel28->Size = System::Drawing::Size(1163, 645);
			this->panel28->TabIndex = 0;
			this->panel28->Visible = false;
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->AutoScroll = true;
			this->flowLayoutPanel1->BackColor = System::Drawing::Color::DarkOrange;
			this->flowLayoutPanel1->Location = System::Drawing::Point(0, 209);
			this->flowLayoutPanel1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(1100, 422);
			this->flowLayoutPanel1->TabIndex = 25;
			this->flowLayoutPanel1->Visible = false;
			// 
			// panel30
			// 
			this->panel30->BackColor = System::Drawing::Color::Transparent;
			this->panel30->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel30.BackgroundImage")));
			this->panel30->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel30->Controls->Add(this->label28);
			this->panel30->Controls->Add(this->pictureBox18);
			this->panel30->Location = System::Drawing::Point(647, 34);
			this->panel30->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel30->Name = L"panel30";
			this->panel30->Size = System::Drawing::Size(136, 113);
			this->panel30->TabIndex = 10;
			this->panel30->Click += gcnew System::EventHandler(this, &AdminForm::panel30_Click);
			this->panel30->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &AdminForm::panel30_Paint);
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label28->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label28->Location = System::Drawing::Point(15, 60);
			this->label28->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(102, 25);
			this->label28->TabIndex = 1;
			this->label28->Text = L"DISMISS";
			// 
			// pictureBox18
			// 
			this->pictureBox18->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox18.Image")));
			this->pictureBox18->Location = System::Drawing::Point(41, 15);
			this->pictureBox18->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox18->Name = L"pictureBox18";
			this->pictureBox18->Size = System::Drawing::Size(48, 42);
			this->pictureBox18->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox18->TabIndex = 0;
			this->pictureBox18->TabStop = false;
			// 
			// panel31
			// 
			this->panel31->BackColor = System::Drawing::Color::Transparent;
			this->panel31->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel31.BackgroundImage")));
			this->panel31->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel31->Controls->Add(this->label29);
			this->panel31->Controls->Add(this->pictureBox19);
			this->panel31->Location = System::Drawing::Point(273, 34);
			this->panel31->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel31->Name = L"panel31";
			this->panel31->Size = System::Drawing::Size(136, 113);
			this->panel31->TabIndex = 9;
			this->panel31->Click += gcnew System::EventHandler(this, &AdminForm::panel31_Click);
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label29->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label29->Location = System::Drawing::Point(36, 62);
			this->label29->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(57, 25);
			this->label29->TabIndex = 1;
			this->label29->Text = L"ADD";
			// 
			// pictureBox19
			// 
			this->pictureBox19->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox19.Image")));
			this->pictureBox19->Location = System::Drawing::Point(41, 15);
			this->pictureBox19->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox19->Name = L"pictureBox19";
			this->pictureBox19->Size = System::Drawing::Size(48, 42);
			this->pictureBox19->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox19->TabIndex = 0;
			this->pictureBox19->TabStop = false;
			// 
			// panel32
			// 
			this->panel32->BackColor = System::Drawing::Color::Transparent;
			this->panel32->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel32.BackgroundImage")));
			this->panel32->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel32->Controls->Add(this->label30);
			this->panel32->Controls->Add(this->pictureBox20);
			this->panel32->Location = System::Drawing::Point(461, 34);
			this->panel32->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel32->Name = L"panel32";
			this->panel32->Size = System::Drawing::Size(136, 113);
			this->panel32->TabIndex = 11;
			this->panel32->Click += gcnew System::EventHandler(this, &AdminForm::panel32_Click);
			this->panel32->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &AdminForm::panel32_Paint);
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label30->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label30->Location = System::Drawing::Point(24, 62);
			this->label30->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(80, 25);
			this->label30->TabIndex = 1;
			this->label30->Text = L"SHOW";
			// 
			// pictureBox20
			// 
			this->pictureBox20->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox20.Image")));
			this->pictureBox20->Location = System::Drawing::Point(41, 15);
			this->pictureBox20->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox20->Name = L"pictureBox20";
			this->pictureBox20->Size = System::Drawing::Size(48, 42);
			this->pictureBox20->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox20->TabIndex = 0;
			this->pictureBox20->TabStop = false;
			// 
			// panel33
			// 
			this->panel33->BackColor = System::Drawing::Color::Wheat;
			this->panel33->Controls->Add(this->pictureBox21);
			this->panel33->Controls->Add(this->button4);
			this->panel33->Controls->Add(this->button3);
			this->panel33->Controls->Add(this->textBox10);
			this->panel33->Controls->Add(this->label31);
			this->panel33->Controls->Add(this->textBox9);
			this->panel33->Controls->Add(this->label32);
			this->panel33->Controls->Add(this->textBox8);
			this->panel33->Controls->Add(this->label33);
			this->panel33->Controls->Add(this->textBox7);
			this->panel33->Controls->Add(this->label34);
			this->panel33->Location = System::Drawing::Point(241, 240);
			this->panel33->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel33->Name = L"panel33";
			this->panel33->Size = System::Drawing::Size(572, 246);
			this->panel33->TabIndex = 24;
			this->panel33->Visible = false;
			// 
			// pictureBox21
			// 
			this->pictureBox21->BackColor = System::Drawing::Color::LemonChiffon;
			this->pictureBox21->Location = System::Drawing::Point(27, 17);
			this->pictureBox21->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox21->Name = L"pictureBox21";
			this->pictureBox21->Size = System::Drawing::Size(153, 121);
			this->pictureBox21->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox21->TabIndex = 13;
			this->pictureBox21->TabStop = false;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::DarkOrange;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button4->Location = System::Drawing::Point(277, 153);
			this->button4->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(100, 28);
			this->button4->TabIndex = 23;
			this->button4->Text = L"ADD";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &AdminForm::button4_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::DarkOrange;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button3->Location = System::Drawing::Point(60, 154);
			this->button3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 28);
			this->button3->TabIndex = 14;
			this->button3->Text = L"Add photo";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &AdminForm::button3_Click);
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(307, 110);
			this->textBox10->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(151, 22);
			this->textBox10->TabIndex = 22;
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label31->Location = System::Drawing::Point(213, 22);
			this->label31->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(44, 18);
			this->label31->TabIndex = 15;
			this->label31->Text = L"Name";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(307, 78);
			this->textBox9->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(151, 22);
			this->textBox9->TabIndex = 21;
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label32->Location = System::Drawing::Point(213, 52);
			this->label32->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(62, 18);
			this->label32->TabIndex = 16;
			this->label32->Text = L"Surname";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(307, 46);
			this->textBox8->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(151, 22);
			this->textBox8->TabIndex = 20;
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label33->Location = System::Drawing::Point(213, 82);
			this->label33->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(32, 18);
			this->label33->TabIndex = 17;
			this->label33->Text = L"Age";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(307, 14);
			this->textBox7->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(151, 22);
			this->textBox7->TabIndex = 19;
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label34->Location = System::Drawing::Point(216, 116);
			this->label34->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(74, 18);
			this->label34->TabIndex = 18;
			this->label34->Text = L"Languages";
			// 
			// panel21
			// 
			this->panel21->BackColor = System::Drawing::Color::PapayaWhip;
			this->panel21->Controls->Add(this->panel26);
			this->panel21->Controls->Add(this->panel27);
			this->panel21->Controls->Add(this->panel25);
			this->panel21->Controls->Add(this->panel24);
			this->panel21->Location = System::Drawing::Point(199, -4);
			this->panel21->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel21->Name = L"panel21";
			this->panel21->Size = System::Drawing::Size(1108, 645);
			this->panel21->TabIndex = 2;
			this->panel21->Visible = false;
			// 
			// panel26
			// 
			this->panel26->BackColor = System::Drawing::Color::DarkOrange;
			this->panel26->Location = System::Drawing::Point(0, 214);
			this->panel26->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel26->Name = L"panel26";
			this->panel26->Size = System::Drawing::Size(1108, 443);
			this->panel26->TabIndex = 25;
			this->panel26->Visible = false;
			// 
			// panel27
			// 
			this->panel27->BackColor = System::Drawing::Color::LightGoldenrodYellow;
			this->panel27->Controls->Add(this->label20);
			this->panel27->Controls->Add(this->pictureBox16);
			this->panel27->Controls->Add(this->textBox6);
			this->panel27->Controls->Add(this->button1);
			this->panel27->Controls->Add(this->label26);
			this->panel27->Controls->Add(this->label21);
			this->panel27->Controls->Add(this->button2);
			this->panel27->Controls->Add(this->label22);
			this->panel27->Controls->Add(this->textBox5);
			this->panel27->Controls->Add(this->label23);
			this->panel27->Controls->Add(this->textBox4);
			this->panel27->Controls->Add(this->label24);
			this->panel27->Controls->Add(this->textBox3);
			this->panel27->Controls->Add(this->label25);
			this->panel27->Controls->Add(this->textBox2);
			this->panel27->Controls->Add(this->textBox1);
			this->panel27->Location = System::Drawing::Point(-4, 228);
			this->panel27->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel27->Name = L"panel27";
			this->panel27->Size = System::Drawing::Size(1116, 426);
			this->panel27->TabIndex = 26;
			this->panel27->Visible = false;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(65, 11);
			this->label20->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(34, 16);
			this->label20->TabIndex = 11;
			this->label20->Text = L"Flag";
			// 
			// pictureBox16
			// 
			this->pictureBox16->BackColor = System::Drawing::Color::SeaShell;
			this->pictureBox16->Location = System::Drawing::Point(17, 41);
			this->pictureBox16->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox16->Name = L"pictureBox16";
			this->pictureBox16->Size = System::Drawing::Size(133, 102);
			this->pictureBox16->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox16->TabIndex = 9;
			this->pictureBox16->TabStop = false;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(295, 219);
			this->textBox6->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(137, 22);
			this->textBox6->TabIndex = 24;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(35, 151);
			this->button1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 28);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Add photo";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AdminForm::button1_Click_1);
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(169, 219);
			this->label26->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(49, 16);
			this->label26->TabIndex = 23;
			this->label26->Text = L"Capital";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(169, 43);
			this->label21->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(89, 16);
			this->label21->TabIndex = 12;
			this->label21->Text = L"Country name";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(253, 260);
			this->button2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 28);
			this->button2->TabIndex = 22;
			this->button2->Text = L"Add";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &AdminForm::button2_Click_1);
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(169, 78);
			this->label22->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(68, 16);
			this->label22->TabIndex = 13;
			this->label22->Text = L"Language";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(295, 177);
			this->textBox5->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(137, 22);
			this->textBox5->TabIndex = 21;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(172, 112);
			this->label23->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(60, 16);
			this->label23->TabIndex = 14;
			this->label23->Text = L"Currency";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(295, 145);
			this->textBox4->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(137, 22);
			this->textBox4->TabIndex = 20;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(172, 145);
			this->label24->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(88, 16);
			this->label24->TabIndex = 15;
			this->label24->Text = L"Cost of coffee";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(295, 112);
			this->textBox3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(137, 22);
			this->textBox3->TabIndex = 19;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(172, 182);
			this->label25->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(78, 16);
			this->label25->TabIndex = 16;
			this->label25->Text = L"Cost of food";
			this->label25->Click += gcnew System::EventHandler(this, &AdminForm::label25_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(295, 78);
			this->textBox2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(137, 22);
			this->textBox2->TabIndex = 18;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(295, 41);
			this->textBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(137, 22);
			this->textBox1->TabIndex = 17;
			// 
			// panel25
			// 
			this->panel25->BackColor = System::Drawing::Color::Transparent;
			this->panel25->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel25.BackgroundImage")));
			this->panel25->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel25->Controls->Add(this->label19);
			this->panel25->Controls->Add(this->pictureBox15);
			this->panel25->Location = System::Drawing::Point(376, 26);
			this->panel25->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel25->Name = L"panel25";
			this->panel25->Size = System::Drawing::Size(136, 113);
			this->panel25->TabIndex = 5;
			this->panel25->Click += gcnew System::EventHandler(this, &AdminForm::panel25_Click);
			this->panel25->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &AdminForm::panel25_Paint);
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label19->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label19->Location = System::Drawing::Point(36, 62);
			this->label19->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(57, 25);
			this->label19->TabIndex = 1;
			this->label19->Text = L"ADD";
			// 
			// pictureBox15
			// 
			this->pictureBox15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox15.Image")));
			this->pictureBox15->Location = System::Drawing::Point(41, 15);
			this->pictureBox15->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(48, 42);
			this->pictureBox15->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox15->TabIndex = 0;
			this->pictureBox15->TabStop = false;
			// 
			// panel24
			// 
			this->panel24->BackColor = System::Drawing::Color::Transparent;
			this->panel24->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel24.BackgroundImage")));
			this->panel24->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel24->Controls->Add(this->label18);
			this->panel24->Controls->Add(this->pictureBox14);
			this->panel24->Location = System::Drawing::Point(564, 26);
			this->panel24->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->panel24->Name = L"panel24";
			this->panel24->Size = System::Drawing::Size(136, 113);
			this->panel24->TabIndex = 7;
			this->panel24->Click += gcnew System::EventHandler(this, &AdminForm::panel24_Click);
			this->panel24->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &AdminForm::panel24_MouseClick);
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label18->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label18->Location = System::Drawing::Point(24, 62);
			this->label18->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(80, 25);
			this->label18->TabIndex = 1;
			this->label18->Text = L"SHOW";
			// 
			// pictureBox14
			// 
			this->pictureBox14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox14.Image")));
			this->pictureBox14->Location = System::Drawing::Point(41, 15);
			this->pictureBox14->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(48, 42);
			this->pictureBox14->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox14->TabIndex = 0;
			this->pictureBox14->TabStop = false;
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(527, 41);
			this->comboBox1->Margin = System::Windows::Forms::Padding(4);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(160, 24);
			this->comboBox1->TabIndex = 3;
			// 
			// pictureBox23
			// 
			this->pictureBox23->BackColor = System::Drawing::Color::MistyRose;
			this->pictureBox23->Location = System::Drawing::Point(64, 281);
			this->pictureBox23->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox23->Name = L"pictureBox23";
			this->pictureBox23->Size = System::Drawing::Size(100, 62);
			this->pictureBox23->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox23->TabIndex = 6;
			this->pictureBox23->TabStop = false;
			// 
			// pictureBox24
			// 
			this->pictureBox24->BackColor = System::Drawing::Color::MistyRose;
			this->pictureBox24->Location = System::Drawing::Point(191, 281);
			this->pictureBox24->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox24->Name = L"pictureBox24";
			this->pictureBox24->Size = System::Drawing::Size(100, 62);
			this->pictureBox24->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox24->TabIndex = 7;
			this->pictureBox24->TabStop = false;
			// 
			// pictureBox25
			// 
			this->pictureBox25->BackColor = System::Drawing::Color::MistyRose;
			this->pictureBox25->Location = System::Drawing::Point(327, 281);
			this->pictureBox25->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox25->Name = L"pictureBox25";
			this->pictureBox25->Size = System::Drawing::Size(100, 62);
			this->pictureBox25->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox25->TabIndex = 8;
			this->pictureBox25->TabStop = false;
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::DarkOrange;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button8->Location = System::Drawing::Point(173, 238);
			this->button8->Margin = System::Windows::Forms::Padding(4);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(129, 28);
			this->button8->TabIndex = 11;
			this->button8->Text = L"Add main photo";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &AdminForm::button8_Click);
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Location = System::Drawing::Point(459, 12);
			this->label35->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(44, 16);
			this->label35->TabIndex = 12;
			this->label35->Text = L"Name";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(527, 10);
			this->textBox11->Margin = System::Windows::Forms::Padding(4);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(193, 22);
			this->textBox11->TabIndex = 13;
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Location = System::Drawing::Point(459, 44);
			this->label36->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(52, 16);
			this->label36->TabIndex = 14;
			this->label36->Text = L"Country";
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::DarkOrange;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button5->Location = System::Drawing::Point(191, 370);
			this->button5->Margin = System::Windows::Forms::Padding(4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(100, 28);
			this->button5->TabIndex = 16;
			this->button5->Text = L"Add photos";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &AdminForm::button5_Click);
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Location = System::Drawing::Point(459, 119);
			this->label39->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(29, 16);
			this->label39->TabIndex = 20;
			this->label39->Text = L"City";
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(527, 119);
			this->textBox12->Margin = System::Windows::Forms::Padding(4);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(193, 22);
			this->textBox12->TabIndex = 21;
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Location = System::Drawing::Point(459, 160);
			this->label37->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(103, 16);
			this->label37->TabIndex = 22;
			this->label37->Text = L"Dates of the tour";
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(571, 156);
			this->textBox13->Margin = System::Windows::Forms::Padding(4);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(193, 22);
			this->textBox13->TabIndex = 23;
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Location = System::Drawing::Point(459, 197);
			this->label38->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(57, 16);
			this->label38->TabIndex = 24;
			this->label38->Text = L"Duration";
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(527, 197);
			this->textBox14->Margin = System::Windows::Forms::Padding(4);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(193, 22);
			this->textBox14->TabIndex = 25;
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Location = System::Drawing::Point(800, 9);
			this->label40->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(44, 16);
			this->label40->TabIndex = 26;
			this->label40->Text = L"Meals";
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(867, 9);
			this->textBox15->Margin = System::Windows::Forms::Padding(4);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(193, 22);
			this->textBox15->TabIndex = 27;
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Location = System::Drawing::Point(800, 49);
			this->label41->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(55, 16);
			this->label41->TabIndex = 28;
			this->label41->Text = L"Tourists";
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(867, 49);
			this->textBox16->Margin = System::Windows::Forms::Padding(4);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(193, 22);
			this->textBox16->TabIndex = 29;
			// 
			// pictureBox26
			// 
			this->pictureBox26->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox26.Image")));
			this->pictureBox26->Location = System::Drawing::Point(809, 82);
			this->pictureBox26->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox26->Name = L"pictureBox26";
			this->pictureBox26->Size = System::Drawing::Size(37, 22);
			this->pictureBox26->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox26->TabIndex = 32;
			this->pictureBox26->TabStop = false;
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(867, 82);
			this->textBox18->Margin = System::Windows::Forms::Padding(4);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(193, 22);
			this->textBox18->TabIndex = 33;
			// 
			// pictureBox27
			// 
			this->pictureBox27->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox27.Image")));
			this->pictureBox27->Location = System::Drawing::Point(809, 126);
			this->pictureBox27->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox27->Name = L"pictureBox27";
			this->pictureBox27->Size = System::Drawing::Size(37, 22);
			this->pictureBox27->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox27->TabIndex = 34;
			this->pictureBox27->TabStop = false;
			// 
			// textBox19
			// 
			this->textBox19->Location = System::Drawing::Point(867, 126);
			this->textBox19->Margin = System::Windows::Forms::Padding(4);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(193, 22);
			this->textBox19->TabIndex = 35;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::DarkOrange;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button6->Location = System::Drawing::Point(721, 250);
			this->button6->Margin = System::Windows::Forms::Padding(4);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(100, 28);
			this->button6->TabIndex = 36;
			this->button6->Text = L"ADD";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &AdminForm::button6_Click);
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Location = System::Drawing::Point(800, 161);
			this->label42->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(38, 16);
			this->label42->TabIndex = 37;
			this->label42->Text = L"Price";
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(867, 161);
			this->textBox17->Margin = System::Windows::Forms::Padding(4);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(193, 22);
			this->textBox17->TabIndex = 38;
			// 
			// comboBoxGuide
			// 
			this->comboBoxGuide->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxGuide->FormattingEnabled = true;
			this->comboBoxGuide->Location = System::Drawing::Point(527, 74);
			this->comboBoxGuide->Margin = System::Windows::Forms::Padding(4);
			this->comboBoxGuide->Name = L"comboBoxGuide";
			this->comboBoxGuide->Size = System::Drawing::Size(160, 24);
			this->comboBoxGuide->TabIndex = 39;
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Location = System::Drawing::Point(459, 78);
			this->label43->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(43, 16);
			this->label43->TabIndex = 40;
			this->label43->Text = L"Guide";
			// 
			// panel36
			// 
			this->panel36->BackColor = System::Drawing::Color::MistyRose;
			this->panel36->Location = System::Drawing::Point(33, -2);
			this->panel36->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel36->Name = L"panel36";
			this->panel36->Size = System::Drawing::Size(1111, 425);
			this->panel36->TabIndex = 41;
			this->panel36->Visible = false;
			// 
			// panel17
			// 
			this->panel17->BackColor = System::Drawing::Color::SandyBrown;
			this->panel17->Controls->Add(this->panel36);
			this->panel17->Controls->Add(this->label43);
			this->panel17->Controls->Add(this->comboBoxGuide);
			this->panel17->Controls->Add(this->textBox17);
			this->panel17->Controls->Add(this->label42);
			this->panel17->Controls->Add(this->button6);
			this->panel17->Controls->Add(this->textBox19);
			this->panel17->Controls->Add(this->pictureBox27);
			this->panel17->Controls->Add(this->textBox18);
			this->panel17->Controls->Add(this->pictureBox26);
			this->panel17->Controls->Add(this->textBox16);
			this->panel17->Controls->Add(this->label41);
			this->panel17->Controls->Add(this->textBox15);
			this->panel17->Controls->Add(this->label40);
			this->panel17->Controls->Add(this->textBox14);
			this->panel17->Controls->Add(this->label38);
			this->panel17->Controls->Add(this->textBox13);
			this->panel17->Controls->Add(this->label37);
			this->panel17->Controls->Add(this->textBox12);
			this->panel17->Controls->Add(this->label39);
			this->panel17->Controls->Add(this->button5);
			this->panel17->Controls->Add(this->label36);
			this->panel17->Controls->Add(this->textBox11);
			this->panel17->Controls->Add(this->label35);
			this->panel17->Controls->Add(this->button8);
			this->panel17->Controls->Add(this->pictureBox25);
			this->panel17->Controls->Add(this->pictureBox24);
			this->panel17->Controls->Add(this->pictureBox23);
			this->panel17->Controls->Add(this->pictureBox22);
			this->panel17->Controls->Add(this->comboBox1);
			this->panel17->Location = System::Drawing::Point(168, 235);
			this->panel17->Margin = System::Windows::Forms::Padding(4);
			this->panel17->Name = L"panel17";
			this->panel17->Size = System::Drawing::Size(1143, 422);
			this->panel17->TabIndex = 5;
			// 
			// pictureBox22
			// 
			this->pictureBox22->BackColor = System::Drawing::Color::SeaShell;
			this->pictureBox22->Location = System::Drawing::Point(64, 10);
			this->pictureBox22->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox22->Name = L"pictureBox22";
			this->pictureBox22->Size = System::Drawing::Size(361, 220);
			this->pictureBox22->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox22->TabIndex = 4;
			this->pictureBox22->TabStop = false;
			// 
			// AdminForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::PapayaWhip;
			this->ClientSize = System::Drawing::Size(1307, 652);
			this->Controls->Add(this->panel28);
			this->Controls->Add(this->panel21);
			this->Controls->Add(this->panel13);
			this->Controls->Add(this->panel10);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel17);
			this->Controls->Add(this->panel14);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"AdminForm";
			this->Text = L"AdminForm";
			this->Load += gcnew System::EventHandler(this, &AdminForm::AdminForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel34->ResumeLayout(false);
			this->panel34->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			this->panel20->ResumeLayout(false);
			this->panel20->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->panelTours->ResumeLayout(false);
			this->panelTours->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->panel35->ResumeLayout(false);
			this->panel35->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->EndInit();
			this->panel10->ResumeLayout(false);
			this->panel10->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			this->panel13->ResumeLayout(false);
			this->panel13->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			this->panel14->ResumeLayout(false);
			this->panel14->PerformLayout();
			this->panel28->ResumeLayout(false);
			this->panel30->ResumeLayout(false);
			this->panel30->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->EndInit();
			this->panel31->ResumeLayout(false);
			this->panel31->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->EndInit();
			this->panel32->ResumeLayout(false);
			this->panel32->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->EndInit();
			this->panel33->ResumeLayout(false);
			this->panel33->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->EndInit();
			this->panel21->ResumeLayout(false);
			this->panel27->ResumeLayout(false);
			this->panel27->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->EndInit();
			this->panel25->ResumeLayout(false);
			this->panel25->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->EndInit();
			this->panel24->ResumeLayout(false);
			this->panel24->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox26))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->EndInit();
			this->panel17->ResumeLayout(false);
			this->panel17->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		TourAgency* agency = new TourAgency();
		
		PictureBox^ lastClickedPictureBox = nullptr;
		System::String^ imagePath;
		System::String^ imagePath1;
		System::String^ imagePath2;
		System::String^ imagePath3;
		
		void addGuideToJs(Guide* guide) {
			std::ifstream inputFile("guids.json");
			nlohmann::json guidsJson;

			if (inputFile.is_open()) {
				inputFile >> guidsJson;
			}

			// Додаємо новий тур до JSON об'єкту
			guidsJson.push_back(guide->to_json());

			// Записуємо оновлений JSON у файл
			std::ofstream outputFile("guids.json");
			outputFile << std::setw(4) << guidsJson << std::endl;

		}
		void addCountryToJs(Country* country) {
			std::ifstream inputFile("countries.json");
			nlohmann::json guidsJson;

			if (inputFile.is_open()) {
				inputFile >> guidsJson;
			}

			// Додаємо новий тур до JSON об'єкту
			guidsJson.push_back(country->to_json());

			// Записуємо оновлений JSON у файл
			std::ofstream outputFile("countries.json");
			outputFile << std::setw(4) << guidsJson << std::endl;

		}
		void ShowCountryInfo(Object^ sender, EventArgs^ e) {
			PictureBox^ clickedPictureBox = dynamic_cast<PictureBox^>(sender);
			vector<Country> countries = agency->getCountries();

			if (clickedPictureBox != lastClickedPictureBox) {
				lastClickedPictureBox = clickedPictureBox;

				System::String^ clickedImageLocation = clickedPictureBox->ImageLocation;

				for (auto& country : countries) {
					if (clickedPictureBox->ImageLocation == gcnew System::String(country.getPhoto().c_str())) {
						System::String^ message = "Name: " + gcnew System::String(country.getName().c_str()) + "\n" +
							"Language: " + gcnew System::String(country.getLanguage().c_str()) + "\n" +
							"Capital: " + gcnew System::String(country.getCapital().c_str()) + "\n" +
							"Currency: " + gcnew System::String(country.getCurrency().c_str()) + "\n" +
							"Cost of Coffee: " + gcnew System::String(country.getCoffee().c_str()) + "\n" +
							"Cost of Food: " + gcnew System::String(country.getFood().c_str());

						MessageBox::Show(message, "Country Information", MessageBoxButtons::OK);
						break;
					}
				}
			}
		}

		void LoadImageToPictureBox(PictureBox^ pictureBox, String^ filePath) {
			try {
				// Загрузка изображения из файла и отображение в PictureBox
				Image^ img = Image::FromFile(filePath);
				pictureBox->Image = img;

				// Сохранение пути к изображению в соответствующую переменную
				if (pictureBox == pictureBox23) {
					imagePath1 =filePath;
				}
				else if (pictureBox == pictureBox24) {
					imagePath2 = filePath;
				}
				else if (pictureBox == pictureBox25) {
					imagePath3 =filePath;
				}
			}
			catch (Exception^ ex) {
				MessageBox::Show("Ошибка загрузки изображения: " + ex->Message, "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}

	private: System::Void panelTours_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
private: System::Void panelTours_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	
	this->panelTours->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
		static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
}
private: System::Void panelTours_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	this->panelTours->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(239)),
		static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(111)));
}
private: System::Void panel7_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	this->panel7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
		static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
}
private: System::Void panel7_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	this->panel7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(239)),
		static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(111)));
}
private: System::Void panel8_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	this->panel8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
		static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
}
private: System::Void panel8_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	this->panel8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(239)),
		static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(111)));
}
private: System::Void panel9_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	this->panel9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
		static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
}
private: System::Void panel9_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	this->panel9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(239)),
		static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(111)));
}
private: System::Void panel11_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void panel11_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void AdminForm_Load(System::Object^ sender, System::EventArgs^ e) {
	agency->clearVector();
	agency->addCountriestToVector();
	agency->clearGuidsVector();
	agency->addGuidsToVector();
	vector<Guide> guids = agency->getGuids();
	vector<Country> countries = agency->getCountries();
	vector<string> guidsNames;
	vector<string> names;
	for (auto& country : countries) {
		string countryName = country.getName();
		names.push_back(countryName);
	}
	for (const auto& countryName : names) {
		comboBox1->Items->Add(msclr::interop::marshal_as<System::String^>(countryName));
	}
	for (auto& guide : guids) {
		string guideName = guide.getName();
		guidsNames.push_back(guideName);
	}
	for (const auto& guideName : guidsNames) {
		comboBoxGuide->Items->Add(msclr::interop::marshal_as<System::String^>(guideName));
	}

}
private: System::Void panel10_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void panel13_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	//OpenFileDialog^ openFileDialog = gcnew OpenFileDialog();
	//openFileDialog->Filter = "Зображення (*.bmp;*.jpg;*.gif;*.png)|*.bmp;*.jpg;*.gif;*.png|Всі файли (*.*)|*.*";

	//if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
	//	imagePath = openFileDialog->FileName;  // Зберігаємо шлях до файлу

	//	try {
	//		// Встановлюємо зображення у PictureBox з ім'ям "myPictureBox"
	//		PictureBox^ pictureBox = dynamic_cast<PictureBox^>(this->Controls->Find("pictureBox11", true)[0]);
	//		if (pictureBox != nullptr) {
	//			pictureBox->ImageLocation = imagePath;
	//		}
	//		else {
	//			MessageBox::Show("PictureBox не знайдено.", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	//		}
	//	}
	//	catch (Exception^ ex) {
	//		MessageBox::Show("Помилка: " + ex->Message, "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	//	}
	//}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	/*System::String^ textBoxName = textBox1->Text;
	System::String^ textBoxSurname = textBox2->Text;
	System::String^ textBoxAge = textBox3->Text;
	System::String^ textBoxLanguages = textBox4->Text;
	int age = System::Convert::ToInt32(textBoxAge);
	std::string name = msclr::interop::marshal_as<std::string>(textBoxName);
	std::string surname = msclr::interop::marshal_as<std::string>(textBoxSurname);
	std::string languages = msclr::interop::marshal_as<std::string>(textBoxLanguages);
	System::String^ photoNew = imagePath;
	std::string photo = msclr::interop::marshal_as<std::string>(photoNew);
	Guide* new_guide = new Guide(name, surname, age, languages, photo);
	addGuideToJs(new_guide);*/


}
private: System::Void panel20_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	
}
private: System::Void panel20_Click(System::Object^ sender, System::EventArgs^ e) {
	panel21->Show();
	panel28->Hide();
	panel35->Hide();
}
private: System::Void label25_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ openFileDialog = gcnew OpenFileDialog();
	openFileDialog->Filter = "Зображення (*.bmp;*.jpg;*.gif;*.png)|*.bmp;*.jpg;*.gif;*.png|Всі файли (*.*)|*.*";

	if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		imagePath = openFileDialog->FileName;  // Зберігаємо шлях до файлу

		try {
			// Встановлюємо зображення у PictureBox з ім'ям "myPictureBox"
			PictureBox^ pictureBox = dynamic_cast<PictureBox^>(this->Controls->Find("pictureBox16", true)[0]);
			if (pictureBox != nullptr) {
				pictureBox->ImageLocation = imagePath;
			}
			else {
				MessageBox::Show("PictureBox не знайдено.", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show("Помилка: " + ex->Message, "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
}
private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	System::String^ textBoxName = textBox1->Text;
	System::String^ textBoxLanguage = textBox2->Text;
	System::String^ textBoxCurrency = textBox3->Text;
	System::String^ textBoxCoffee = textBox4->Text;
	System::String^ textBoxFood = textBox5->Text;
	System::String^ textBoxCapital = textBox6->Text;
	
	std::string name = msclr::interop::marshal_as<std::string>(textBoxName);
	std::string language = msclr::interop::marshal_as<std::string>(textBoxLanguage);
	std::string currency = msclr::interop::marshal_as<std::string>(textBoxCurrency);
	std::string coffee = msclr::interop::marshal_as<std::string>(textBoxCoffee);
	std::string food = msclr::interop::marshal_as<std::string>(textBoxFood);
	std::string capital = msclr::interop::marshal_as<std::string>(textBoxCapital);
	System::String^ photoNew = imagePath;
	std::string photo = msclr::interop::marshal_as<std::string>(photoNew);
	Country* country = new Country(name, language, capital, currency, photo, coffee, food);
	
	addCountryToJs(country);
}
private: System::Void panel24_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
}
	   void LoadCountryPhotoAndName(PictureBox^ pictureBox, Label^ label, const std::string& countryName, const std::string& imagePath) {
		   System::String^ imagePath2 = gcnew System::String(imagePath.c_str());
		   pictureBox->ImageLocation = imagePath2;
		   pictureBox->Image = Image::FromFile(gcnew System::String(imagePath.c_str()));
		   label->Text = gcnew System::String(countryName.c_str());
	   }
private: System::Void panel24_Click(System::Object^ sender, System::EventArgs^ e) {
	panel27->Hide();
	panel26->Show();
	panel26->Controls->Clear();
	agency->clearVector();
	agency->addCountriestToVector();
	vector<Country> countries = agency->getCountries();
	int x = 0;
	int y = 0;
	int maxWidth = panel26->Width;

	for (auto& country : countries) {
		PictureBox^ pictureBox = gcnew PictureBox();
		pictureBox->SizeMode = PictureBoxSizeMode::Zoom;
		pictureBox->Width = 100; // Розмір PictureBox можна змінити за необхідності
		pictureBox->Height = 50;
		pictureBox->Click += gcnew EventHandler(this, &AdminForm::pictureBox_Click); // Додаємо подію кліку
		pictureBox->Location = Point(x, y);
		
		Label^ label = gcnew Label();
		label->AutoSize = true;
		label->Text = gcnew System::String(country.getName().c_str());
		label->Location = Point(x, y + pictureBox->Height);

		LoadCountryPhotoAndName(pictureBox, label, country.getName(), country.getPhoto());
		label->Location = Point(
			pictureBox->Location.X + (pictureBox->Width - label->Width) / 2+ pictureBox->Width/3+2, // Центруємо Label по горизонталі
			pictureBox->Location.Y + pictureBox->Height // Розміщуємо Label під PictureBox
		);

		panel26->Controls->Add(pictureBox);
		panel26->Controls->Add(label);

		x += pictureBox->Width+30;

		// Переносимо на наступний рядок, якщо вийшли за межі панелі
		if (x + pictureBox->Width > maxWidth) {
			x = 0;
			y += pictureBox->Height + label->Height; // Додаємо висоту PictureBox та Label
		}
	}

}
	   private: System::Void pictureBox_Click(System::Object^ sender, System::EventArgs^ e) {
		   PictureBox^ clickedPictureBox = dynamic_cast<PictureBox^>(sender);
		   ShowCountryInfo(clickedPictureBox, e);
	   }
private: System::Void panel25_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void panel25_Click(System::Object^ sender, System::EventArgs^ e) {
	panel27->Show();
	panel26->Hide();
}
private: System::Void panel20_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	this->panel20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
		static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
}
private: System::Void panel20_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	this->panel20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(250)), static_cast<System::Int32>(static_cast<System::Byte>(239)),
		static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(111)));
}
private: System::Void panel8_Click(System::Object^ sender, System::EventArgs^ e) {
	panel28->Show();
	panel21->Hide();
	panel35->Hide();
}
private: System::Void panel31_Click(System::Object^ sender, System::EventArgs^ e) {
	flowLayoutPanel1->Hide();
	panel33->Show();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ openFileDialog = gcnew OpenFileDialog();
	openFileDialog->Filter = "Зображення (*.bmp;*.jpg;*.gif;*.png)|*.bmp;*.jpg;*.gif;*.png|Всі файли (*.*)|*.*";

	if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		imagePath = openFileDialog->FileName;  // Зберігаємо шлях до файлу

		try {
			// Встановлюємо зображення у PictureBox з ім'ям "myPictureBox"
			PictureBox^ pictureBox = dynamic_cast<PictureBox^>(this->Controls->Find("pictureBox21", true)[0]);
			if (pictureBox != nullptr) {
				pictureBox->ImageLocation = imagePath;
			}
			else {
				MessageBox::Show("PictureBox не знайдено.", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show("Помилка: " + ex->Message, "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	System::String^ textBoxName = textBox7->Text;
System::String^ textBoxSurname = textBox8->Text;
System::String^ textBoxAge = textBox9->Text;
System::String^ textBoxLanguages = textBox10->Text;
int age = System::Convert::ToInt32(textBoxAge);
std::string name = msclr::interop::marshal_as<std::string>(textBoxName);
std::string surname = msclr::interop::marshal_as<std::string>(textBoxSurname);
std::string languages = msclr::interop::marshal_as<std::string>(textBoxLanguages);
System::String^ photoNew = imagePath;
std::string photo = msclr::interop::marshal_as<std::string>(photoNew);
Guide* new_guide = new Guide(name, surname, age, languages, photo);
addGuideToJs(new_guide);
}
private: System::Void panel32_Click(System::Object^ sender, System::EventArgs^ e) {
	flowLayoutPanel1->Controls->Clear();
	panel33->Hide();
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
		nameLabel->Font = gcnew System::Drawing::Font("Arial", 10, System::Drawing::FontStyle::Bold);
		nameLabel->ForeColor = System::Drawing::Color::White;
		nameLabel->AutoSize = true;
		Label^ surnameLabel = gcnew Label();
		surnameLabel->Text = "Surname: " + gcnew System::String(guide.getSurname().c_str());
		surnameLabel->Font = gcnew System::Drawing::Font("Arial", 10, System::Drawing::FontStyle::Bold);
		surnameLabel->ForeColor = System::Drawing::Color::White;
		surnameLabel->AutoSize = true;
		Label^ ageLabel = gcnew Label();
		ageLabel->Text = "Age: " + guide.getAge().ToString(); // Перетворення віку в рядок і додавання до Label
		ageLabel->Font = gcnew System::Drawing::Font("Arial", 10, System::Drawing::FontStyle::Bold);
		ageLabel->ForeColor = System::Drawing::Color::White;
		ageLabel->AutoSize = true;
		Label^ languageLabel = gcnew Label();
		languageLabel->Text = "Language: " + gcnew System::String(guide.getLanguages().c_str());
		languageLabel->Font = gcnew System::Drawing::Font("Arial", 10, System::Drawing::FontStyle::Bold);
		languageLabel->ForeColor = System::Drawing::Color::White;
		languageLabel->AutoSize = true;
		// Параметри розташування інформації про гіда на панелі
		pictureBox->Location = Point(0, 0);
		nameLabel->Location = Point(pictureBox->Width + 5, 0);
		surnameLabel->Location = Point(pictureBox->Width + 5, nameLabel->Height);
		ageLabel->Location = Point(pictureBox->Width + 5, nameLabel->Height + surnameLabel->Height);
		languageLabel->Location = Point(pictureBox->Width + 5, nameLabel->Height + surnameLabel->Height + ageLabel->Height);

		// Додавання елементів до панелі гіда
		guidePanel->Controls->Add(pictureBox);
		guidePanel->Controls->Add(nameLabel);
		guidePanel->Controls->Add(surnameLabel);
		guidePanel->Controls->Add(ageLabel);
		guidePanel->Controls->Add(languageLabel);

		// Додавання панелі гіда до FlowLayoutPanel
		flowLayoutPanel1->Controls->Add(guidePanel);
	}
}

private: System::Void panelTours_Click(System::Object^ sender, System::EventArgs^ e) {
	panel28->Hide();
	panel21->Hide();
	agency->clearVector();
	agency->addCountriestToVector();
	agency->clearGuidsVector();
	agency->addGuidsToVector();

	vector<Guide> guids = agency->getGuids();
	vector<Country> countries = agency->getCountries();
	vector<string> guidsNames;
	vector<string> names;
	comboBox1->Items->Clear();
	comboBoxGuide->Items->Clear();
	for (auto& country : countries) {
		string countryName = country.getName();
		names.push_back(countryName);
	}
	for (const auto& countryName : names) {
		comboBox1->Items->Add(msclr::interop::marshal_as<System::String^>(countryName));
	}
	for (auto& guide : guids) {
		string guideName = guide.getName();
		guidsNames.push_back(guideName);
	}
	for (const auto& guideName :guidsNames) {
		comboBoxGuide->Items->Add(msclr::interop::marshal_as<System::String^>(guideName));
	}
	
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ openFileDialog = gcnew OpenFileDialog();
	openFileDialog->Multiselect = true;
	openFileDialog->Filter = "Изображения|*.jpg;*.jpeg;*.png;*.gif;*.bmp|Все файлы|*.*";

	if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		cli::array<String^>^ fileNames = openFileDialog->FileNames;

		// Проверяем, что выбрано ровно три изображения
		if (fileNames->Length == 3) {
			LoadImageToPictureBox(pictureBox23, fileNames[0]); // Загрузка первого изображения в pictureBox1
			LoadImageToPictureBox(pictureBox24, fileNames[1]); // Загрузка второго изображения в pictureBox2
			LoadImageToPictureBox(pictureBox25, fileNames[2]); // Загрузка третьего изображения в pictureBox3
		}
		else {
			MessageBox::Show("Пожалуйста, выберите три изображения.", "Предупреждение", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}
}
private: System::Void label38_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ openFileDialog = gcnew OpenFileDialog();
	openFileDialog->Filter = "Зображення (*.bmp;*.jpg;*.gif;*.png)|*.bmp;*.jpg;*.gif;*.png|Всі файли (*.*)|*.*";

	if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		imagePath = openFileDialog->FileName;  // Зберігаємо шлях до файлу

		try {
			// Встановлюємо зображення у PictureBox з ім'ям "myPictureBox"
			PictureBox^ pictureBox = dynamic_cast<PictureBox^>(this->Controls->Find("pictureBox22", true)[0]);
			if (pictureBox != nullptr) {
				pictureBox->ImageLocation = imagePath;
			}
			else {
				MessageBox::Show("PictureBox не знайдено.", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show("Помилка: " + ex->Message, "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	agency->clearVector();
	agency->addCountriestToVector();
	agency->clearGuidsVector();
	agency->addGuidsToVector();
	if (textBox12->Text == "" || textBox15->Text == "" || textBox16->Text == "" || textBox11->Text == "" ||
		textBox18->Text == "" || textBox19->Text == "" || textBox17->Text == "" || textBox14->Text == "" ||
		textBox13->Text == "" || imagePath1 == "" || imagePath2 == "" || imagePath3 == "" || imagePath == "") {
		// Якщо хоча б одне поле порожнє, відображаємо MessageBox про порожні поля
		MessageBox::Show("Please complete all fields before adding a tour.");
	}
	else {
		System::String^ imagePath1New = imagePath1;
		std::string new_imagePath1 = msclr::interop::marshal_as<std::string>(imagePath1New);
		System::String^ imagePath2New = imagePath2;
		std::string new_imagePath2 = msclr::interop::marshal_as<std::string>(imagePath2New);
		System::String^ imagePath3New = imagePath3;
		std::string new_imagePath3 = msclr::interop::marshal_as<std::string>(imagePath3New);
		std::vector<std::string> new_photos = { new_imagePath1, new_imagePath2, new_imagePath3 };
		vector<Country> countries = agency->getCountries();
		std::string selectedCountryName = msclr::interop::marshal_as<std::string>(comboBox1->SelectedItem->ToString());
		Country* country = agency->getCountryByName(countries, selectedCountryName);
		vector<Guide> guids = agency->getGuids();
		System::String^ selectedItem = comboBoxGuide->SelectedItem->ToString();
		System::String^ trimmedSelectedItem = selectedItem->Trim(); 

		
		std::string selectedGuideName = msclr::interop::marshal_as<std::string>(trimmedSelectedItem);
		Guide* guide = agency->getGuideByName(selectedGuideName);
		if (guide != nullptr && country!=nullptr) {
			std::string new_city = msclr::interop::marshal_as<std::string>(textBox12->Text);
		std::string new_meals = msclr::interop::marshal_as<std::string>(textBox15->Text);

		int new_touristNumber = Convert::ToInt32(textBox16->Text);
		std::string new_name = msclr::interop::marshal_as<std::string>(textBox11->Text);
		std::string new_placeFrom = msclr::interop::marshal_as<std::string>(textBox18->Text);
		std::string new_placeTo = msclr::interop::marshal_as<std::string>(textBox19->Text);
		System::String^ photoNew = imagePath;
		std::string new_mainPhoto = msclr::interop::marshal_as<std::string>(photoNew);
		int new_price = Convert::ToInt32(textBox17->Text);
		std::string new_time = msclr::interop::marshal_as<std::string>(textBox14->Text);
		std::string new_date = msclr::interop::marshal_as<std::string>(textBox13->Text);
		Tour newTour(country, new_city, new_meals, new_touristNumber, new_name, new_placeFrom, new_placeTo, new_mainPhoto, new_photos, new_price, new_time, new_date);
		newTour.setGuide(guide);
		agency->addTourToVectorAndFile(newTour);
		MessageBox::Show("Tour successfully added.");
		}
		else {
			MessageBox::Show("Error");
		}
		
	}
	
}
private: System::Void panel34_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void panel34_Click(System::Object^ sender, System::EventArgs^ e) {
	panel28->Show();
	panel21->Hide();
	panel35->Show();
	TourAgency* agency2 = TourAgency::getAgencyInfo();
	std::string photoPath = agency2->getLogo();
	pictureBox28->ImageLocation = gcnew System::String(photoPath.c_str());
	textBox20->Text = gcnew System::String(agency2->getName().c_str());
	textBox21->Text = gcnew System::String(agency2->getNumber().c_str());
	richTextBox1 ->Text = gcnew System::String(agency2->getDescription().c_str());
	comboBox2->Text = gcnew System::String(agency2->getDiscount()->getName().c_str());

}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	std::string new_name = msclr::interop::marshal_as<std::string>(textBox20->Text);
	std::string new_phone = msclr::interop::marshal_as<std::string>(textBox21->Text);
	std::string new_discount = msclr::interop::marshal_as<std::string>(comboBox2->Text);
	System::String^ photoPath = pictureBox28->ImageLocation;
	std::string new_logo = msclr::interop::marshal_as<std::string>(photoPath);
	Discount* agencyDiscount = nullptr;
	if (new_discount == "AutumnDiscount") {
		agencyDiscount = new AutumnDiscount();
	}
	else if (new_discount == "SpringDiscount") {
		agencyDiscount = new SpringDiscount();
	}
	else if (new_discount == "BlackFriday") {
		agencyDiscount = new BlackFriday();
	}
	else if (new_discount == "NoDiscount") {
		agencyDiscount = new NoDiscount();
	}
	std::string new_description = msclr::interop::marshal_as<std::string>(richTextBox1->Text);
	agency = new TourAgency(new_name, new_logo, new_description, new_phone, agencyDiscount);
	agency->addInfoToFile();

}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ openFileDialog = gcnew OpenFileDialog();
	openFileDialog->Filter = "Зображення (*.bmp;*.jpg;*.gif;*.png)|*.bmp;*.jpg;*.gif;*.png|Всі файли (*.*)|*.*";

	if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		imagePath = openFileDialog->FileName;  // Зберігаємо шлях до файлу

		try {
			// Встановлюємо зображення у PictureBox з ім'ям "myPictureBox"
			PictureBox^ pictureBox = dynamic_cast<PictureBox^>(this->Controls->Find("pictureBox28", true)[0]);
			if (pictureBox != nullptr) {
				pictureBox->ImageLocation = imagePath;
			}
			else {
				MessageBox::Show("PictureBox не знайдено.", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show("Помилка: " + ex->Message, "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
}
private: System::Void panel32_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void panel13_Click(System::Object^ sender, System::EventArgs^ e) {
	panel36->Controls->Clear(); // Очищення вмісту панелі перед відображенням нових даних
	panel36->Show(); // Відображення панелі

	agency->clearTourVector();
	agency->addToursToVector();
	vector<Tour> guids = agency->getTours();

	int panelWidth = 300; // Ширина панелі туру
	int panelHeight = 120; // Висота панелі туру
	int horizontalSpacing = 10; // Горизонтальний відступ між панелями
	int verticalSpacing = 10; // Вертикальний відступ між панелями

	int currentX = horizontalSpacing;
	int currentY = verticalSpacing;
	panel36->AutoScroll = true;

	for (auto& guide : guids) {
		Panel^ guidePanel = gcnew Panel();
		guidePanel->Width = 500; // Розмір Panel можна змінити за необхідності
		guidePanel->Location = Point(currentX, currentY);

		PictureBox^ pictureBox = gcnew PictureBox();
		pictureBox->SizeMode = PictureBoxSizeMode::StretchImage;
		pictureBox->Width = 100; // Розмір PictureBox можна змінити за необхідності
		pictureBox->Height = 100;
		pictureBox->ImageLocation = gcnew System::String(guide.getMainPhoto().c_str()); // Завантаження фото гіда

		Label^ nameLabel = gcnew Label();
		System::String^ nameStr = gcnew System::String(guide.getName().c_str());
		nameLabel->Text = "Name: " + nameStr;

		float fontSize = static_cast<float>(pictureBox->Width) / 8.0f; // Змініть коефіцієнт за необхідності
		nameLabel->Font = gcnew System::Drawing::Font(nameLabel->Font->FontFamily, fontSize);
		
		nameLabel->AutoSize = true;
		nameLabel->Location = Point(pictureBox->Width + 5, 0);
		nameLabel->AutoEllipsis = true;
		Label^ countryLabel = gcnew Label();
		System::String^ countryStr = gcnew System::String(guide.getCountry()->getName().c_str());
		System::String^ cityStr = gcnew System::String(guide.getCity().c_str());
		countryLabel->Text = "Country: " + countryStr +" | " + " City: " + cityStr;

		
		countryLabel->Font = gcnew System::Drawing::Font(nameLabel->Font->FontFamily, fontSize);

		countryLabel->AutoSize = true;
		countryLabel->Location = Point(pictureBox->Width + 5, nameLabel->Height);
		countryLabel->AutoEllipsis = true;
		Label^ dateLabel = gcnew Label();
		System::String^ dateStr = gcnew System::String(guide.getDate().c_str());
		
		dateLabel->Text = "Dates: "+dateStr;
		dateLabel->Font = gcnew System::Drawing::Font(nameLabel->Font->FontFamily, fontSize);

		dateLabel->AutoSize = true;
		dateLabel->Location = Point(pictureBox->Width + 5, nameLabel->Height+countryLabel->Height);
		dateLabel->AutoEllipsis = true;
		Label^ timeLabel = gcnew Label();
		System::String^ timeStr = gcnew System::String(guide.getTime().c_str());

		timeLabel->Text = "Duration: " + timeStr;
		timeLabel->Font = gcnew System::Drawing::Font(nameLabel->Font->FontFamily, fontSize);

		timeLabel->AutoSize = true;
		timeLabel->Location = Point(pictureBox->Width + 5, nameLabel->Height + countryLabel->Height+timeLabel->Height);
		timeLabel->AutoEllipsis = true;

		// Додавання елементів до панелі гіда
		
		guidePanel->Controls->Add(pictureBox);
		guidePanel->Controls->Add(nameLabel);
		guidePanel->Controls->Add(countryLabel);
		guidePanel->Controls->Add(dateLabel);
		guidePanel->Controls->Add(timeLabel);


		// Додавання панелі гіда до panel36
		panel36->Controls->Add(guidePanel);

		// Оновлення координат для наступної панелі туру
		currentY += panelHeight + verticalSpacing;
	}
}

private: System::Void panel10_Click(System::Object^ sender, System::EventArgs^ e) {
	panel36->Hide();
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
	Owner->Show();
	this->Hide();
}
private: System::Void panel30_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
	   private: System::Void deletePictureBox_Click(System::Object^ sender, System::EventArgs^ e) {
		   PictureBox^ deletePictureBox = safe_cast<PictureBox^>(sender);
		   String^ guideFirstName = safe_cast<String^>(deletePictureBox->Name); // Позначка містить ім'я гіда
		   String^ guideLastName = safe_cast<String^>(deletePictureBox->Tag); // І прізвище гіда

		   std::string filePath = "guids.json"; // Шлях до файлу JSON
		   std::string firstNameStr = msclr::interop::marshal_as<std::string>(guideFirstName); // Конвертація System::String до std::string
		   std::string lastNameStr = msclr::interop::marshal_as<std::string>(guideLastName); // Конвертація System::String до std::string

		   Guide::removeGuideByName(filePath, firstNameStr, lastNameStr);

		   // Очищення FlowLayoutPanel та оновлення вмісту
		   flowLayoutPanel1->Controls->Clear();
		   panel33->Hide();
		   flowLayoutPanel1->Show();

		   agency->clearGuidsVector();
		   agency->addGuidsToVector();
		   vector<Guide> guids = agency->getGuids();

		   for (auto& guide : guids) {
			   Panel^ guidePanel = gcnew Panel();
			   guidePanel->Width = 300; // Розмір Panel можна змінити за необхідності
			   guidePanel->BackColor = System::Drawing::Color::PapayaWhip;
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
			  
			   PictureBox^ deletePictureBox = gcnew PictureBox();
			   deletePictureBox->SizeMode = PictureBoxSizeMode::StretchImage;
			   deletePictureBox->Width = 20; // Розмір pictureBox хрестика
			   deletePictureBox->Height = 20;
			   deletePictureBox->Image = Image::FromFile("C:\\Users\\User\\Desktop\\TourAgency\\Cross.png"); // Зображення хрестика
			   deletePictureBox->Name = gcnew System::String(guide.getName().c_str()); // Ім'я гіда
			   deletePictureBox->Tag = gcnew System::String(guide.getSurname().c_str()); // Прізвище гіда

			   // Параметри розташування pictureBox хрестика
			   deletePictureBox->Location = Point(pictureBox->Width + nameLabel->Width + 40, nameLabel->Height);

			   // Додавання обробника подій Click до pictureBox хрестика
			   deletePictureBox->Click += gcnew System::EventHandler(this, &AdminForm::deletePictureBox_Click);


			   // Додавання pictureBox хрестика до панелі гіда
			   guidePanel->Controls->Add(deletePictureBox);
			   // Додавання елементів до панелі гіда
			   guidePanel->Controls->Add(pictureBox);
			   guidePanel->Controls->Add(nameLabel);
			   guidePanel->Controls->Add(surnameLabel);
			   guidePanel->Controls->Add(ageLabel);
			   guidePanel->Controls->Add(languageLabel);

			   // Додавання панелі гіда до FlowLayoutPanel
			   flowLayoutPanel1->Controls->Add(guidePanel);
		   }

	   }
private: System::Void panel30_Click(System::Object^ sender, System::EventArgs^ e) {
	flowLayoutPanel1->Controls->Clear();
	
	panel33->Hide();
	flowLayoutPanel1->Show();

	agency->clearGuidsVector();
	agency->addGuidsToVector();
	vector<Guide> guids = agency->getGuids();

	for (auto& guide : guids) {
		Panel^ guidePanel = gcnew Panel();
		guidePanel->Width = 300; // Розмір Panel можна змінити за необхідності
		guidePanel->BackColor = System::Drawing::Color::PapayaWhip;
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
		PictureBox^ deletePictureBox = gcnew PictureBox();
		
		deletePictureBox->SizeMode = PictureBoxSizeMode::StretchImage;
		deletePictureBox->Width = 20; // Розмір pictureBox хрестика
		deletePictureBox->Height = 20;
		deletePictureBox->Image = Image::FromFile("C:\\Users\\User\\Desktop\\TourAgency\\Cross.png"); // Зображення хрестика
		deletePictureBox->Name = gcnew System::String(guide.getName().c_str()); // Ім'я гіда
		deletePictureBox->Tag = gcnew System::String(guide.getSurname().c_str()); // Прізвище гіда

		// Параметри розташування pictureBox хрестика
		deletePictureBox->Location = Point(pictureBox->Width + nameLabel->Width+40, nameLabel->Height);

		// Додавання обробника подій Click до pictureBox хрестика
		deletePictureBox->Click += gcnew System::EventHandler(this, &AdminForm::deletePictureBox_Click);


		// Додавання pictureBox хрестика до панелі гіда
		guidePanel->Controls->Add(deletePictureBox);
		// Додавання елементів до панелі гіда
		guidePanel->Controls->Add(pictureBox);
		guidePanel->Controls->Add(nameLabel);
		guidePanel->Controls->Add(surnameLabel);
		guidePanel->Controls->Add(ageLabel);
		guidePanel->Controls->Add(languageLabel);

		// Додавання панелі гіда до FlowLayoutPanel
		flowLayoutPanel1->Controls->Add(guidePanel);
	}

}
private: System::Void panel7_Click(System::Object^ sender, System::EventArgs^ e) {
	ClientsForm^ formOpen = gcnew ClientsForm();
	formOpen->Show();
}
};
}
