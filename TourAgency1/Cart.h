#pragma once
#include <vector>
#include <msclr\marshal_cppstd.h>
#include <string>
#include "Tour.h"
#include "TourAgency.h"
namespace TourAgency1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic; // Підключення для List
	using namespace System::Runtime::InteropServices;
	/// <summary>
	/// Сводка для Cart
	/// </summary>
	
	public ref class Cart : public System::Windows::Forms::Form
	{
	
	public: List<String^>^ tours = gcnew List<String^>();

	public:
		String^ username;

		Cart(List<String^>^ new_tours, String^ new_username)
		{
			InitializeComponent();
			this->tours = new_tours;
			this->username = new_username;
			
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Cart()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DarkOrange;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(30, 371);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(127, 29);
			this->button1->TabIndex = 0;
			this->button1->Text = L"BUY";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Cart::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Crimson;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button2->Location = System::Drawing::Point(178, 371);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(127, 29);
			this->button2->TabIndex = 1;
			this->button2->Text = L"CLEAR";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Cart::button2_Click);
			// 
			// Cart
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(335, 412);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"Cart";
			this->Text = L"Cart";
			this->Load += gcnew System::EventHandler(this, &Cart::Cart_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
		List<Panel^>^ createdPanels = gcnew List<Panel^>();
		Discount* discount = nullptr;
		Tourist* tourist = nullptr;
		TourAgency* agency = nullptr;
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		vector<Tour*> tours_selected = tourist->getToursSelectedPointers();
		Tour* tour_combined = new Tour();

		tour_combined->setPrice(0);
		for (auto& tour : tours_selected) {
			*tour_combined += *tour;
		}
		bool reservation = tourist->reserveTour(tour_combined);
		if (reservation) {

			tourist->addReservationsToFile(tours_selected);
			MessageBox::Show("Tour succesfully reserved");
		}
		else {
			MessageBox::Show("Insufficient funds");
		}

	}
	private: System::Void Cart_Load(System::Object^ sender, System::EventArgs^ e) {
		System::String^ usernameNew = username;
		std::string usernameStr = msclr::interop::marshal_as<std::string>(usernameNew);
		tourist = TourAgency::findTouristByUsername(usernameStr);
		agency = TourAgency::getAgencyInfo();
		
		discount = agency->getDiscount();
		vector<Tour> toursAgency;
		agency->addToursToVector();
		toursAgency = discount->calculateDiscount(agency->getTours());
		agency->setTours(toursAgency);
		vector<Tour*> tours_select;
		for each (String ^ tour in tours) {
			std::string stdStr = msclr::interop::marshal_as<std::string>(tour);
			tours_select.push_back(agency->findTourByNamePointer(stdStr));
		}
		tourist->setToursSelectedPointer(tours_select);
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
			pictureBox->ImageLocation = gcnew System::String(tour->getMainPhoto().c_str());
			

			Label^ label = gcnew Label();
			label->AutoSize = true;
			label->Text = gcnew System::String(tour->getName().c_str());

			// Розташовуємо Label праворуч від PictureBox
			label->Location = Point(pictureBox->Width + 5, 0);
			Label^ countryLabel = gcnew Label();
			System::String^ countryStr = gcnew System::String(tour->getCountry()->getName().c_str());
			System::String^ cityStr = gcnew System::String(tour->getCity().c_str());
			countryLabel->Text = "Country: " + countryStr + " | " + " City: " + cityStr;

			countryLabel->AutoSize = true;
			countryLabel->Location = Point(pictureBox->Width + 5, label->Height);
			countryLabel->AutoEllipsis = true;
			Label^ priceLabel = gcnew Label();
			System::String^ priceStr = gcnew System::String(tour->getPrice().ToString());

			priceLabel->Text = "Price: " + priceStr;
			

			priceLabel->AutoSize = true;
			priceLabel->Location = Point(pictureBox->Width + 5, label->Height + countryLabel->Height + priceLabel->Height);
			priceLabel->AutoEllipsis = true;

			guidePanel->Controls->Add(pictureBox);
			guidePanel->Controls->Add(label);
			guidePanel->Controls->Add(countryLabel);
			guidePanel->Controls->Add(priceLabel);
			this->Controls->Add(guidePanel);
			createdPanels->Add(guidePanel);

			currentY += 100 + 10;
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		for each (Panel ^ panel in createdPanels)
		{
			this->Controls->Remove(panel);
		}
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
};
}
