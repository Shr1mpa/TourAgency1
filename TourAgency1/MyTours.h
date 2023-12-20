#pragma once
#include "User.h"
#include "TourAgency.h"
#include <msclr\marshal_cppstd.h>
namespace TourAgency1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Runtime::InteropServices;

	/// <summary>
	/// Сводка для MyTours
	/// </summary>
	public ref class MyTours : public System::Windows::Forms::Form
	{
	public:
		String^ username;
		MyTours(String^ new_username)
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
		~MyTours()
		{
			if (components)
			{
				delete components;
			}
		}

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
			this->SuspendLayout();
			// 
			// MyTours
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(335, 412);
			this->Name = L"MyTours";
			this->Text = L"MyTours";
			this->Load += gcnew System::EventHandler(this, &MyTours::MyTours_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
		Tourist* tourist = nullptr;
	private: System::Void MyTours_Load(System::Object^ sender, System::EventArgs^ e) {
		System::String^ usernameNew = username;
		std::string usernameStr = msclr::interop::marshal_as<std::string>(usernameNew);
		tourist = TourAgency::findTouristByUsername(usernameStr);
		tourist->findMyTours();
		vector<Tour> tours_select = tourist->getTours();
		int currentX = 10;
		int currentY = 10;
		int maxWidth = this->Width;
		for (auto& tour : tours_select) {
			PictureBox^ pictureBox = gcnew PictureBox();

			Panel^ guidePanel = gcnew Panel();
			guidePanel->Width = 300; // Розмір Panel можна змінити за необхідності
			guidePanel->Height = 100;
			guidePanel->Location = Point(currentX, currentY);
			guidePanel->BackColor = System::Drawing::Color::BlanchedAlmond;
			pictureBox->SizeMode = PictureBoxSizeMode::StretchImage;
			pictureBox->Width = 100; // Розмір PictureBox
			pictureBox->Height = 100;
			pictureBox->ImageLocation = gcnew System::String(tour.getMainPhoto().c_str());


			Label^ label = gcnew Label();
			label->AutoSize = true;
			label->Text = gcnew System::String(tour.getName().c_str());

			// Розташовуємо Label праворуч від PictureBox
			label->Location = Point(pictureBox->Width + 5, 0);
			Label^ countryLabel = gcnew Label();
			System::String^ countryStr = gcnew System::String(tour.getCountry()->getName().c_str());
			System::String^ cityStr = gcnew System::String(tour.getCity().c_str());
			countryLabel->Text = "Country: " + countryStr + " | " + " City: " + cityStr;

			countryLabel->AutoSize = true;
			countryLabel->Location = Point(pictureBox->Width + 5, label->Height);
			countryLabel->AutoEllipsis = true;
			Label^ priceLabel = gcnew Label();
			System::String^ priceStr = gcnew System::String(tour.getPrice().ToString());

			priceLabel->Text = "Price: " + priceStr;


			priceLabel->AutoSize = true;
			priceLabel->Location = Point(pictureBox->Width + 5, label->Height + countryLabel->Height + priceLabel->Height);
			priceLabel->AutoEllipsis = true;

			guidePanel->Controls->Add(pictureBox);
			guidePanel->Controls->Add(label);
			guidePanel->Controls->Add(countryLabel);
			guidePanel->Controls->Add(priceLabel);
			this->Controls->Add(guidePanel);
			

			currentY += 100 + 10;
		}
	}
	};
}
