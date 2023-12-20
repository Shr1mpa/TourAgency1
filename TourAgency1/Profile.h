#pragma once
#include "User.h"
#include <msclr\marshal_cppstd.h>
#include "TourAgency.h"
namespace TourAgency1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Runtime::InteropServices;

	/// <summary>
	/// Сводка для Profile
	/// </summary>
	public ref class Profile : public System::Windows::Forms::Form
	{
	public:
		String^ username;
		Profile(String^ new_username)
		{
			InitializeComponent();
			this->username = new_username;
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Profile()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label11;

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
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(9, 10);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(91, 98);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(104, 10);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(77, 17);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Username:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(105, 82);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(42, 17);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Email";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DarkOrange;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(9, 113);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(91, 25);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Change Photo";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Profile::button1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(105, 120);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(33, 17);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Age";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(177, 10);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(76, 20);
			this->textBox1->TabIndex = 6;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(149, 82);
			this->textBox2->Margin = System::Windows::Forms::Padding(2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(104, 20);
			this->textBox2->TabIndex = 7;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(149, 120);
			this->textBox3->Margin = System::Windows::Forms::Padding(2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(76, 20);
			this->textBox3->TabIndex = 8;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(105, 46);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(31, 17);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Sex";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"female", L"male" });
			this->comboBox1->Location = System::Drawing::Point(149, 46);
			this->comboBox1->Margin = System::Windows::Forms::Padding(2);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(92, 21);
			this->comboBox1->TabIndex = 10;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(82, 164);
			this->textBox4->Margin = System::Windows::Forms::Padding(2);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(103, 20);
			this->textBox4->TabIndex = 12;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(7, 166);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(70, 17);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Firstname";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(82, 194);
			this->textBox5->Margin = System::Windows::Forms::Padding(2);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(103, 20);
			this->textBox5->TabIndex = 14;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(7, 196);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(70, 17);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Lastname";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(82, 228);
			this->textBox6->Margin = System::Windows::Forms::Padding(2);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(103, 20);
			this->textBox6->TabIndex = 16;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(7, 230);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(49, 17);
			this->label7->TabIndex = 15;
			this->label7->Text = L"Phone";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Orange;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button2->Location = System::Drawing::Point(72, 68);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(106, 22);
			this->button2->TabIndex = 17;
			this->button2->Text = L"Change password";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Profile::button2_Click);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(116, 40);
			this->textBox7->Margin = System::Windows::Forms::Padding(2);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(103, 20);
			this->textBox7->TabIndex = 21;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(15, 41);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(99, 17);
			this->label8->TabIndex = 20;
			this->label8->Text = L"New password";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(116, 10);
			this->textBox8->Margin = System::Windows::Forms::Padding(2);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(103, 20);
			this->textBox8->TabIndex = 19;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(15, 11);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(69, 17);
			this->label9->TabIndex = 18;
			this->label9->Text = L"Password";
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::DarkOrange;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button3->Location = System::Drawing::Point(76, 323);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(91, 25);
			this->button3->TabIndex = 22;
			this->button3->Text = L"Save";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Profile::button3_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(44, 297);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(172, 13);
			this->label10->TabIndex = 23;
			this->label10->Text = L"Do you want to change password\?";
			this->label10->Click += gcnew System::EventHandler(this, &Profile::label10_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->textBox8);
			this->panel1->Controls->Add(this->textBox7);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Location = System::Drawing::Point(9, 312);
			this->panel1->Margin = System::Windows::Forms::Padding(2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(230, 100);
			this->panel1->TabIndex = 24;
			this->panel1->Visible = false;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(82, 261);
			this->textBox9->Margin = System::Windows::Forms::Padding(2);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(103, 20);
			this->textBox9->TabIndex = 26;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(7, 263);
			this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(53, 17);
			this->label11->TabIndex = 25;
			this->label11->Text = L"Budget";
			// 
			// Profile
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::AntiqueWhite;
			this->ClientSize = System::Drawing::Size(256, 426);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Profile";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Profile";
			this->Load += gcnew System::EventHandler(this, &Profile::Profile_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		Tourist* tourist = nullptr;
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		System::String^ textBoxPassword = textBox8->Text;
		std::string passwordText = msclr::interop::marshal_as<std::string>(textBoxPassword);
		if (passwordText == tourist->getPassword()) {
			System::String^ textBoxNewPassword = textBox7->Text;
			std::string passwordTextNew = msclr::interop::marshal_as<std::string>(textBoxNewPassword);
			tourist->changePassword(passwordTextNew);
			MessageBox::Show("Password succesfully changed");
		}
		else {
			MessageBox::Show("Invalid password");
		}
	}
private: System::Void Profile_Load(System::Object^ sender, System::EventArgs^ e) {
	System::String^ usernameNew = username;
	std::string usernameStr = msclr::interop::marshal_as<std::string>(usernameNew);
	tourist = TourAgency::findTouristByUsername(usernameStr);
	pictureBox1->ImageLocation = gcnew System::String(tourist->getPhotoPath().c_str());
	textBox1->Text = gcnew System::String(tourist->getUsername().c_str());
	string sex = tourist->getSex();
	if (sex == "male") {
		comboBox1->SelectedIndex = 1; // Якщо 'male' є першим значенням у ComboBox
	}
	else if (sex == "female") {
		comboBox1->SelectedIndex = 0; // Якщо 'female' є другим значенням у ComboBox
	}
	textBox2->Text = gcnew System::String(tourist->getEmail().c_str());
	textBox3->Text = gcnew System::String(tourist->getAge().ToString());
	textBox4->Text = gcnew System::String(tourist->getFirstName().c_str());
	textBox5->Text = gcnew System::String(tourist->getLastName().c_str());
	textBox6->Text = gcnew System::String(tourist->getPhone().c_str());
	textBox9->Text = gcnew System::String(tourist->getBudget().ToString());
}
private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
	int currentX = button3->Location.X;
	int currentY = button3->Location.Y;
	this->Height += 40;
	button3->Location = Point(currentX, currentY + 100);
	panel1->Show();
	label10->Enabled = false;
	
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ openFileDialog = gcnew OpenFileDialog();
	openFileDialog->Filter = "Зображення (*.bmp;*.jpg;*.gif;*.png)|*.bmp;*.jpg;*.gif;*.png|Всі файли (*.*)|*.*";
	if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		System::String^ imagePath = openFileDialog->FileName;  // Зберігаємо шлях до файлу

		try {
			// Встановлюємо зображення у PictureBox з ім'ям "myPictureBox"
			PictureBox^ pictureBox = dynamic_cast<PictureBox^>(this->Controls->Find("pictureBox1", true)[0]);
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
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	System::String^ photo = pictureBox1->ImageLocation;
	std::string photoStr = msclr::interop::marshal_as<std::string>(photo);
	String^ username = textBox1->Text;
	String^ sex = comboBox1->Text;
	String^ email = textBox2->Text;
	String^ age = textBox3->Text;
	String^ firstName = textBox4->Text;
	String^ lastName = textBox5->Text;
	String^ phone = textBox6->Text;
	String^ budget = textBox9->Text;
	std::string usernameStr = msclr::interop::marshal_as<std::string>(username);
	std::string sexStr = msclr::interop::marshal_as<std::string>(sex);
	std::string emailStr = msclr::interop::marshal_as<std::string>(email);
	int ageStr = System::Convert::ToInt32(age);
	std::string firstNameStr = msclr::interop::marshal_as<std::string>(firstName);
	std::string lastNameStr = msclr::interop::marshal_as<std::string>(lastName);
	std::string phoneStr = msclr::interop::marshal_as<std::string>(phone);
	int budgetStr = System::Convert::ToInt32(budget);
	tourist->changedatas(usernameStr, sexStr, emailStr, ageStr, firstNameStr, lastNameStr, phoneStr, budgetStr, photoStr);
	MessageBox::Show("Data successfully changed");
}
};
}
