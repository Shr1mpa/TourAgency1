#pragma once
#include "TourAgency.h"
#include "User.h"
#include <vector>
#include <msclr\marshal_cppstd.h>
namespace TourAgency1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Runtime::InteropServices;
	using namespace System::Collections::Generic;
	/// <summary>
	/// Сводка для ClientsForm
	/// </summary>
	public ref class ClientsForm : public System::Windows::Forms::Form
	{
	public:
		ClientsForm(void)
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
		~ClientsForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:







	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ UsernameColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ LastNameColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ FirstNameColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ AgeColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ SexColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ EmailColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ PhoneColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ BudgetColumn;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label5;









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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ClientsForm::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->UsernameColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->LastNameColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->FirstNameColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->AgeColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->SexColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->EmailColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PhoneColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->BudgetColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->flowLayoutPanel1->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::Color::PeachPuff;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::Color::Black;
			this->dataGridView1->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::SeaShell;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->UsernameColumn,
					this->LastNameColumn, this->FirstNameColumn, this->AgeColumn, this->SexColumn, this->EmailColumn, this->PhoneColumn, this->BudgetColumn
			});
			this->dataGridView1->GridColor = System::Drawing::Color::DarkGray;
			this->dataGridView1->Location = System::Drawing::Point(37, 48);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(1021, 185);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ClientsForm::dataGridView1_CellContentClick);
			// 
			// UsernameColumn
			// 
			this->UsernameColumn->HeaderText = L"Username";
			this->UsernameColumn->MinimumWidth = 6;
			this->UsernameColumn->Name = L"UsernameColumn";
			// 
			// LastNameColumn
			// 
			this->LastNameColumn->HeaderText = L"Lastname";
			this->LastNameColumn->MinimumWidth = 6;
			this->LastNameColumn->Name = L"LastNameColumn";
			// 
			// FirstNameColumn
			// 
			this->FirstNameColumn->HeaderText = L"Firstname";
			this->FirstNameColumn->MinimumWidth = 6;
			this->FirstNameColumn->Name = L"FirstNameColumn";
			// 
			// AgeColumn
			// 
			this->AgeColumn->HeaderText = L"Age";
			this->AgeColumn->MinimumWidth = 6;
			this->AgeColumn->Name = L"AgeColumn";
			// 
			// SexColumn
			// 
			this->SexColumn->HeaderText = L"Sex";
			this->SexColumn->MinimumWidth = 6;
			this->SexColumn->Name = L"SexColumn";
			// 
			// EmailColumn
			// 
			this->EmailColumn->HeaderText = L"Email";
			this->EmailColumn->MinimumWidth = 6;
			this->EmailColumn->Name = L"EmailColumn";
			// 
			// PhoneColumn
			// 
			this->PhoneColumn->HeaderText = L"Phone";
			this->PhoneColumn->MinimumWidth = 6;
			this->PhoneColumn->Name = L"PhoneColumn";
			// 
			// BudgetColumn
			// 
			this->BudgetColumn->HeaderText = L"Budget";
			this->BudgetColumn->MinimumWidth = 6;
			this->BudgetColumn->Name = L"BudgetColumn";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DarkOrange;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(144, 4);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 28);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Find";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &ClientsForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(4, 4);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(132, 22);
			this->textBox1->TabIndex = 2;
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->BackColor = System::Drawing::Color::NavajoWhite;
			this->flowLayoutPanel1->Controls->Add(this->textBox1);
			this->flowLayoutPanel1->Controls->Add(this->button1);
			this->flowLayoutPanel1->Location = System::Drawing::Point(1128, 44);
			this->flowLayoutPanel1->Margin = System::Windows::Forms::Padding(4);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(267, 47);
			this->flowLayoutPanel1->TabIndex = 3;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"From smaller to larger", L"From larger to smaller" });
			this->comboBox1->Location = System::Drawing::Point(199, 15);
			this->comboBox1->Margin = System::Windows::Forms::Padding(4);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(152, 24);
			this->comboBox1->TabIndex = 5;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &ClientsForm::comboBox1_SelectedIndexChanged);
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"By age", L"By budget" });
			this->comboBox2->Location = System::Drawing::Point(37, 15);
			this->comboBox2->Margin = System::Windows::Forms::Padding(4);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(152, 24);
			this->comboBox2->TabIndex = 6;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(1127, 15);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(100, 26);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Find User";
			this->label1->Click += gcnew System::EventHandler(this, &ClientsForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(29, 17);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(163, 26);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Budget Settings";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::NavajoWhite;
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->button5);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->textBox3);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Location = System::Drawing::Point(1128, 108);
			this->panel1->Margin = System::Windows::Forms::Padding(4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(349, 171);
			this->panel1->TabIndex = 9;
			this->panel1->Visible = false;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &ClientsForm::panel1_Paint);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::DarkOrange;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button5->Location = System::Drawing::Point(235, 130);
			this->button5->Margin = System::Windows::Forms::Padding(4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(45, 28);
			this->button5->TabIndex = 6;
			this->button5->Text = L"/";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &ClientsForm::button5_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::DarkOrange;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button4->Location = System::Drawing::Point(181, 130);
			this->button4->Margin = System::Windows::Forms::Padding(4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(45, 28);
			this->button4->TabIndex = 5;
			this->button4->Text = L"*";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &ClientsForm::button4_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::DarkOrange;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button3->Location = System::Drawing::Point(128, 130);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(45, 28);
			this->button3->TabIndex = 4;
			this->button3->Text = L"-";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &ClientsForm::button3_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(112, 98);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(132, 22);
			this->textBox3->TabIndex = 3;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::DarkOrange;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button2->Location = System::Drawing::Point(69, 130);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(51, 28);
			this->button2->TabIndex = 2;
			this->button2->Text = L"+";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &ClientsForm::button2_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(112, 65);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(132, 22);
			this->textBox2->TabIndex = 1;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(31, 69);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(50, 16);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Budget";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(373, 10);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(33, 31);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 10;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &ClientsForm::pictureBox1_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::NavajoWhite;
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->button8);
			this->panel2->Controls->Add(this->button9);
			this->panel2->Controls->Add(this->textBox5);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Location = System::Drawing::Point(1132, 302);
			this->panel2->Margin = System::Windows::Forms::Padding(4);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(349, 124);
			this->panel2->TabIndex = 10;
			this->panel2->Visible = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(29, 17);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(132, 26);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Age Settings";
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::DarkOrange;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button8->Location = System::Drawing::Point(74, 76);
			this->button8->Margin = System::Windows::Forms::Padding(4);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(30, 30);
			this->button8->TabIndex = 4;
			this->button8->Text = L"-";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &ClientsForm::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::DarkOrange;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button9->Location = System::Drawing::Point(252, 76);
			this->button9->Margin = System::Windows::Forms::Padding(4);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(30, 30);
			this->button9->TabIndex = 2;
			this->button9->Text = L"+";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &ClientsForm::button9_Click);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(112, 81);
			this->textBox5->Margin = System::Windows::Forms::Padding(4);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(132, 22);
			this->textBox5->TabIndex = 1;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(156, 61);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(32, 16);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Age";
			// 
			// ClientsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->BackColor = System::Drawing::Color::PapayaWhip;
			this->ClientSize = System::Drawing::Size(1513, 533);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Controls->Add(this->dataGridView1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"ClientsForm";
			this->Text = L"ClientsForm";
			this->Load += gcnew System::EventHandler(this, &ClientsForm::ClientsForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->flowLayoutPanel1->ResumeLayout(false);
			this->flowLayoutPanel1->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		TourAgency* agency = new TourAgency();
		Tourist* findedUser = nullptr;
		int ConvertTextToInt(System::Windows::Forms::TextBox^ textBox) {
			// Отримання тексту з textBox і збереження його у рядку (String^)
			System::String^ text = textBox->Text;

			// Перетворення тексту у ціле число
			int result = 0; // Ініціалізація результату

			try {
				result = System::Convert::ToInt32(text); // Перетворення тексту у ціле число
			}
			catch (System::FormatException^) {
				// Обробка винятку, якщо введений текст не є числом
				// Тут можна додати повідомлення про помилку або іншу обробку помилки за потреби
				// Наприклад, вивести повідомлення про помилку користувачеві
			}

			return result; // Повернення отриманого цілого числа
		}
		void SortDataGridView(String^ sorting, String^ order) {
			// Код сортування згідно обраних значень у ComboBox
			if (sorting == "By age") {
				if (order == "From smaller to larger") {
					// Сортування за віком у зростаючому порядку
					dataGridView1->Sort(dataGridView1->Columns["AgeColumn"], System::ComponentModel::ListSortDirection::Ascending);
				}
				else {
					// Сортування за віком у спадаючому порядку
					dataGridView1->Sort(dataGridView1->Columns["AgeColumn"], System::ComponentModel::ListSortDirection::Descending);
				}
			}
			else if (sorting == "By budget") {
				if (order == "From smaller to larger") {
					// Сортування за бюджетом у зростаючому порядку
					dataGridView1->Sort(dataGridView1->Columns["BudgetColumn"], System::ComponentModel::ListSortDirection::Ascending);
				}
				else {
					// Сортування за бюджетом у спадаючому порядку
					dataGridView1->Sort(dataGridView1->Columns["BudgetColumn"], System::ComponentModel::ListSortDirection::Descending);
				}
			}
		}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		panel1->Show();
		panel2->Show();
		String^ username = textBox1->Text;
		
		std::string usernameStr = msclr::interop::marshal_as<std::string>(username);
		findedUser = agency->findTouristByUsername(usernameStr);
		textBox2->Text = findedUser->getBudget().ToString();
		textBox5->Text = findedUser->getAge().ToString();
		dataGridView1->Rows->Clear();
		int rowIndex = dataGridView1->Rows->Add(); // Додавання нового рядка
		dataGridView1->Rows[rowIndex]->Cells[0]->Value = gcnew System::String(findedUser->getUsername().c_str());
		dataGridView1->Rows[rowIndex]->Cells[1]->Value = gcnew System::String(findedUser->getLastName().c_str());
		dataGridView1->Rows[rowIndex]->Cells[2]->Value = gcnew System::String(findedUser->getFirstName().c_str());
		dataGridView1->Rows[rowIndex]->Cells[3]->Value = findedUser->getAge();
		dataGridView1->Rows[rowIndex]->Cells[4]->Value = gcnew System::String(findedUser->getSex().c_str());
		dataGridView1->Rows[rowIndex]->Cells[5]->Value = gcnew System::String(findedUser->getEmail().c_str());
		dataGridView1->Rows[rowIndex]->Cells[6]->Value = gcnew System::String(findedUser->getPhone().c_str());
		dataGridView1->Rows[rowIndex]->Cells[7]->Value = findedUser->getBudget();
	}
private: System::Void ClientsForm_Load(System::Object^ sender, System::EventArgs^ e) {
	agency->readTouristsFromFile();
	vector<Tourist> tourists = agency->getTourists();
	
	for (auto& tourist : tourists) {
		int rowIndex = dataGridView1->Rows->Add(); // Додавання нового рядка

		// Встановлення значень для кожного стовпця в новому рядку
		dataGridView1->Rows[rowIndex]->Cells[0]->Value = gcnew System::String(tourist.getUsername().c_str());
		dataGridView1->Rows[rowIndex]->Cells[1]->Value = gcnew System::String(tourist.getLastName().c_str());
		dataGridView1->Rows[rowIndex]->Cells[2]->Value = gcnew System::String(tourist.getFirstName().c_str());
		dataGridView1->Rows[rowIndex]->Cells[3]->Value = tourist.getAge();
		dataGridView1->Rows[rowIndex]->Cells[4]->Value = gcnew System::String(tourist.getSex().c_str());
		dataGridView1->Rows[rowIndex]->Cells[5]->Value = gcnew System::String(tourist.getEmail().c_str());
		dataGridView1->Rows[rowIndex]->Cells[6]->Value = gcnew System::String(tourist.getPhone().c_str());
		dataGridView1->Rows[rowIndex]->Cells[7]->Value = tourist.getBudget();
	}
}
	   
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ selectedSorting = comboBox2->SelectedItem->ToString(); // Отримання обраного сортування (за віком або бюджетом)
	String^ selectedOrder = comboBox1->SelectedItem->ToString(); // Отримання обраного порядку сортування
	
	// Виклик методу сортування на підставі отриманих значень з ComboBox
	SortDataGridView(selectedSorting, selectedOrder);
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	agency->clearTouristVector();
	agency->readTouristsFromFile();
	dataGridView1->Rows->Clear();
	vector<Tourist> tourists = agency->getTourists();
	for (auto& tourist : tourists) {
		int rowIndex = dataGridView1->Rows->Add(); // Додавання нового рядка

		// Встановлення значень для кожного стовпця в новому рядку
		dataGridView1->Rows[rowIndex]->Cells[0]->Value = gcnew System::String(tourist.getUsername().c_str());
		dataGridView1->Rows[rowIndex]->Cells[1]->Value = gcnew System::String(tourist.getLastName().c_str());
		dataGridView1->Rows[rowIndex]->Cells[2]->Value = gcnew System::String(tourist.getFirstName().c_str());
		dataGridView1->Rows[rowIndex]->Cells[3]->Value = tourist.getAge();
		dataGridView1->Rows[rowIndex]->Cells[4]->Value = gcnew System::String(tourist.getSex().c_str());
		dataGridView1->Rows[rowIndex]->Cells[5]->Value = gcnew System::String(tourist.getEmail().c_str());
		dataGridView1->Rows[rowIndex]->Cells[6]->Value = gcnew System::String(tourist.getPhone().c_str());
		dataGridView1->Rows[rowIndex]->Cells[7]->Value = tourist.getBudget();
	}

}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	*findedUser += ConvertTextToInt(textBox3);
	dataGridView1->Rows[0]->Cells[7]->Value = findedUser->getBudget();
	findedUser->changeBudget(findedUser->getBudget());
	MessageBox::Show(findedUser->getBudget().ToString());
	

}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	*findedUser = *findedUser- ConvertTextToInt(textBox3);
	dataGridView1->Rows[0]->Cells[7]->Value = findedUser->getBudget();
	findedUser->changeBudget(findedUser->getBudget());
	MessageBox::Show(findedUser->getBudget().ToString());
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	*findedUser = *findedUser * ConvertTextToInt(textBox3);
	dataGridView1->Rows[0]->Cells[7]->Value = findedUser->getBudget();
	findedUser->changeBudget(findedUser->getBudget());
	MessageBox::Show(findedUser->getBudget().ToString());
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	*findedUser = *findedUser / ConvertTextToInt(textBox3);
	dataGridView1->Rows[0]->Cells[7]->Value = findedUser->getBudget();
	findedUser->changeBudget(findedUser->getBudget());
	MessageBox::Show(findedUser->getBudget().ToString());
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	
	++*findedUser;
	textBox5->Text = findedUser->getAge().ToString();
	dataGridView1->Rows[0]->Cells[3]->Value = findedUser->getAge();
	findedUser->changeAge(findedUser->getAge());
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	--*findedUser;
	textBox5->Text = findedUser->getAge().ToString();
	dataGridView1->Rows[0]->Cells[3]->Value = findedUser->getAge();
	findedUser->changeAge(findedUser->getAge());
}
};
}
