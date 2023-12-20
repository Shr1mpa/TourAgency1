#pragma once
#include <msclr\marshal_cppstd.h>
#include "User.h"
#include "TourAgency.h"
#include "Feedback.h"
#include <vector>
#include <sstream>
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
	/// Сводка для Reviews
	/// </summary>
	public ref class Reviews : public System::Windows::Forms::Form
	{
	public:
		String^ username;
		Reviews(String^ new_username)
		{
			InitializeComponent();
			this->username = new_username;
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Reviews()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;

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
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(49, 49);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(147, 135);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Reviews::pictureBox1_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(212, 88);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(798, 96);
			this->richTextBox1->TabIndex = 1;
			this->richTextBox1->Text = L"";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"5", L"4", L"3", L"2", L"1" });
			this->comboBox1->Location = System::Drawing::Point(270, 52);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 24);
			this->comboBox1->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(209, 52);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(55, 19);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Rating";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::SandyBrown;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(212, 190);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(103, 35);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Save";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Reviews::button1_Click);
			// 
			// Reviews
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->BackColor = System::Drawing::Color::AntiqueWhite;
			this->ClientSize = System::Drawing::Size(1154, 620);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"Reviews";
			this->Text = L"Reviews";
			this->Load += gcnew System::EventHandler(this, &Reviews::Reviews_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		Tourist* tourist = nullptr;
		TourAgency* agency = new TourAgency();
		List<Panel^>^ createdPanels = gcnew List<Panel^>();
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void Reviews_Load(System::Object^ sender, System::EventArgs^ e) {
	System::String^ usernameNew = username;
	std::string usernameStr = msclr::interop::marshal_as<std::string>(usernameNew);
	tourist = TourAgency::findTouristByUsername(usernameStr);
	pictureBox1->ImageLocation = gcnew System::String(tourist->getPhotoPath().c_str());
	agency->ReadFeedbacksFromFile("Feedbacks.json");

	vector<Feedback<Tourist, string, string, string>> feedbacks = agency->getFeedbacks();
	int panelWidth = 300; // Ширина панелі туру
	int panelHeight = 200; // Висота панелі туру
	int horizontalSpacing = 10; // Горизонтальний відступ між панелями
	int verticalSpacing = 10; // Вертикальний відступ між панелями

	int currentX = horizontalSpacing;
	int currentY = verticalSpacing + 200;
	
	for (auto& tour : feedbacks) {


		int rating;
		std::stringstream(tour.getRating()) >> rating;

		Panel^ guidePanel = gcnew Panel();
		guidePanel->Width = 700; // Розмір Panel можна змінити за необхідності
		guidePanel->Height = 155;
		guidePanel->Location = Point(currentX, currentY);
		guidePanel->BackColor = System::Drawing::Color::Moccasin;

		PictureBox^ pictureBox = gcnew PictureBox();
		pictureBox->SizeMode = PictureBoxSizeMode::StretchImage;
		pictureBox->Width = 150; // Розмір PictureBox можна змінити за необхідності
		pictureBox->Height = 150;
		pictureBox->ImageLocation = gcnew System::String(tour.getAuthor().getPhotoPath().c_str()); // Завантаження фото гіда

		Label^ nameLabel = gcnew Label();
		System::String^ nameStr = gcnew System::String(tour.getAuthor().getFirstName().c_str());
		System::String^ surnameStr = gcnew System::String(tour.getAuthor().getLastName().c_str());
		nameLabel->Text = surnameStr + " " + nameStr;

		float fontSize = static_cast<float>(pictureBox->Width) / 8.0f; // Змініть коефіцієнт за необхідності
		nameLabel->Font = gcnew System::Drawing::Font(nameLabel->Font->FontFamily, fontSize);

		nameLabel->AutoSize = true;
		nameLabel->Location = Point(pictureBox->Width + 5, 0);
		nameLabel->AutoEllipsis = true;
		
		Label^ dateLabel = gcnew Label();
		System::String^ dateStr = gcnew System::String(tour.getDate().c_str());

		dateLabel->Text = "Dates: " + dateStr;
		dateLabel->Font = gcnew System::Drawing::Font(nameLabel->Font->FontFamily, fontSize);

		dateLabel->AutoSize = true;
		dateLabel->Location = Point(pictureBox->Width + 5, nameLabel->Height);
		dateLabel->AutoEllipsis = true;
		RichTextBox^ commentRichTextBox = gcnew RichTextBox();
		System::String^ commentStr = gcnew System::String(tour.getComment().c_str());
		commentRichTextBox->BackColor = System::Drawing::Color::Moccasin;
		commentRichTextBox->Text = commentStr;
		commentRichTextBox->Font = gcnew System::Drawing::Font(nameLabel->Font->FontFamily, 10); // Зменшення розміру шрифту

		commentRichTextBox->ReadOnly = true;
		commentRichTextBox->Width = 500; // Збільшення ширини
		commentRichTextBox->Height = 100; // Збільшення висоти

		commentRichTextBox->Location = Point(pictureBox->Width + 5, nameLabel->Height + dateLabel->Height+5);
		commentRichTextBox->WordWrap = true;
		int starX = 700 - 20 - 5;
		for (int i = 0; i < rating; i++) {
			PictureBox^ starPictureBox = gcnew PictureBox();
			starPictureBox->SizeMode = PictureBoxSizeMode::StretchImage;
			starPictureBox->Width = 20; // Змініть ширину зірочки за необхідності
			starPictureBox->Height = 20; // Змініть висоту зірочки за необхідності
			starPictureBox->Image = Image::FromFile("C:\\Users\\User\\Desktop\\TourAgency\\star2.png"); // Змініть шлях до зображення зірочки
			starPictureBox->Location = Point(starX - i * (starPictureBox->Width + horizontalSpacing), nameLabel->Location.Y);

			// Додавання зірочки до форми чи панелі
			guidePanel->Controls->Add(starPictureBox); // Змініть 'this' на вашу форму або панель
			// Або
			// panel1->Controls->Add(starPictureBox); // Якщо ви додаєте до певної панелі

			
		}

		// Додавання коментаря до панелі гіда
		
		// Додавання коментаря до панелі гіда
		guidePanel->Controls->Add(commentRichTextBox);

		
		// Додавання елементів до панелі гіда

		guidePanel->Controls->Add(pictureBox);
		guidePanel->Controls->Add(nameLabel);
		
		guidePanel->Controls->Add(dateLabel);
		
		


		// Додавання панелі гіда до panel36
		this->Controls->Add(guidePanel);
		createdPanels->Add(guidePanel);

		// Оновлення координат для наступної панелі туру
		currentY += panelHeight + verticalSpacing;

	}

}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	DateTime currentDate = DateTime::Today;
	String^ formattedDate = currentDate.ToString("dd/MM/yyyy");
	System::String^ textBoxValue = richTextBox1->Text; //comment
	System::String^ textBoxValue2 = comboBox1->Text;  //rating
	


	// Перевірка, чи не є поля порожніми
	if (String::IsNullOrEmpty(textBoxValue) || String::IsNullOrEmpty(textBoxValue2) ||
		String::IsNullOrEmpty(formattedDate)) {
		std::cerr << "Один або декілька полів порожні." << std::endl;
		return;
	}

	// Конвертація до std::string
	string comment = msclr::interop::marshal_as<std::string>(richTextBox1->Text);
	string raiting = msclr::interop::marshal_as<std::string>(textBoxValue2);
	string data = msclr::interop::marshal_as<std::string>(formattedDate);
	Feedback<Tourist, std::string, string, std::string> feedback1(*tourist, raiting, data, comment);
	feedback1.saveToJsonFile("Feedbacks.json");
	
}
};
}
