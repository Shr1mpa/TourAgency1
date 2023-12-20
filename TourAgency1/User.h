#pragma once
#include <string>
#include "nlohmann/json.hpp"
#include <iostream>
#include <fstream>
#include <vector>
#include "Tour.h"
using namespace nlohmann;
using namespace std;
class User
{
protected:
	string username;
	string password;
	string email;
	string photo;
	
public:
	User(string new_username, string new_password, string new_email, string new_photo): username(new_username), password(new_password), email(new_email), photo(new_photo){}
	json to_json() const {
		return {
			{"username", username},
			{"password", password},
			{"email", email},
			{"photo", photo}
			
		};
	}
	string getEmail() {
		return this->email;
	}
	string getPassword() {
		return password;
	}
};
class Tourist : public User {
private:
	string firstName;
	string lastName;
	int age;
	string sex;
	int budget;
	string phone;
	vector<Tour> tours_selected;
	vector<Tour*> tours_selected_pointers;
	vector<Tour> boughtTours;
	
public:
	Tourist(string new_username, string new_password, string new_email, string new_photo) : User(new_username, new_password, new_email, new_photo){};
	Tourist(string new_username, string new_password, string new_email, string new_photo, string new_phone, string name, string surname, int new_age, string new_sex, int new_budget): User(new_username, new_password, new_email, new_photo), phone(new_phone),
		firstName(name), lastName(surname), age(new_age), sex(new_sex), budget(new_budget){}

	json to_json() const {
		json user_json = User::to_json();
		user_json["firstName"] = firstName;
		user_json["lastName"] = lastName;
		user_json["phone"] = phone;
		user_json["age"] = age;
		user_json["sex"] = sex;
		user_json["budget"] = budget;

		return user_json;
	}
	void setName(string name);
	void setToursSelected(vector<Tour> tours) {
		this->tours_selected = tours;
	}
	int getAge() {
		return this->age;
	}
	string getFirstName() {
		return this->firstName;
	}
	string getLastName() {
		return this->lastName;
	}
	string getPhone() {
		return this->phone;
	}
	void setToursSelectedPointer(vector<Tour*> tours) {
		this->tours_selected_pointers = tours;
	}
	vector<Tour> getToursSelected() {
		return this->tours_selected;
	}
	vector<Tour*> getToursSelectedPointers() {
		return this->tours_selected_pointers;
	}
	Tourist operator+(int value) {
		
		Tourist result = *this;
		result.budget += value;
		return result;
	}
	Tourist operator-(int value) {
		// ³������� ����� �� ��'���� ����� Tourist
		// ����������, �� budget �� int ���� ����� Tourist
		Tourist result = *this;
		result.budget -= value;
		return result;
	}
	Tourist& operator++() {
		// ����� ��������� �������� �������
		++age;
		return *this;
	}
	Tourist& operator--() {
		// ����� ��������� �������� �������
		--age;
		return *this;
	}

	Tourist& operator=(const Tourist& other) {
		if (this != &other) { // �������� �� �������������
			// ��������� ������� � ������ ��'���� ����� Tourist
			this->budget = other.budget;
		}
		return *this; // ���������� ��������� �� �������� ��'���
	}
	Tourist& operator+=(int value) {
		this->budget += value;
		return *this;
	}
	

	Tourist operator*(int value) {
		// ���������� ��'���� ����� Tourist �� �����
		// ����������, �� budget �� int ���� ����� Tourist
		Tourist result = *this;
		result.budget *= value;
		return result;
	}

	Tourist operator/(int value) {
		// ĳ����� ��'���� ����� Tourist �� �����
		// ����������, �� budget �� int ���� ����� Tourist
		if (value != 0) {
			Tourist result = *this;
			result.budget /= value;
			return result;
		}
		else {
			// ������� ������� ������ �� ���� (����� �������� �� ������� �������)
			// � ����� ������� ������ ��������� ���������� ��'���
			return *this;
		}
	}
	bool reserveTour(Tour* tour) {
		double userBudget = this->getBudget();
		
		std::string tourIdentifier = this->getUsername();
		// �������� JSON-������������� ����������� �� ����
		if (userBudget >= tour->getPrice()) {
			// ³������ ������� ���� �� ������� �����������
			this->setBudget(this->getBudget() - tour->getPrice());
			std::ifstream inputFileUsers("users.json");
			json users;

			if (inputFileUsers.is_open()) {
				inputFileUsers >> users;
			}
			else {
				std::cerr << "Unable to open users file." << std::endl;
				return false;
			}

			// ����� ����������� �� ��'�� � ���� ������������
			auto userIt = std::find_if(users.begin(), users.end(), [&](const json& user) {
				return user["username"] == tourIdentifier;
				});

			if (userIt != users.end()) {
				// ��������� ������� ����������� � ����
				(*userIt)["budget"] = userBudget - tour->getPrice();

				// ���������� ��������� ����� � ����
				std::ofstream outputFileUsers("users.json");
				if (outputFileUsers.is_open()) {
					outputFileUsers << std::setw(4) << users << std::endl;
				}
				else {
					std::cerr << "Unable to write to users file." << std::endl;
					return false;
				}
			}
			else {
				std::cerr << "User not found in users file." << std::endl;
				return false;
			}

			
			return true;
			
		}
		else {
			return false;
		}
	}
	void changePassword(string new_password) {
		
		// �������� JSON-������������� ����������� �� ����
		
			// ³������ ������� ���� �� ������� �����������
		std::string tourIdentifier = this->getUsername();
			std::ifstream inputFileUsers("users.json");
			json users;

			if (inputFileUsers.is_open()) {
				inputFileUsers >> users;
			}
			

			// ����� ����������� �� ��'�� � ���� ������������
			auto userIt = std::find_if(users.begin(), users.end(), [&](const json& user) {
				return user["username"] == tourIdentifier;
				});

			if (userIt != users.end()) {
				// ��������� ������� ����������� � ����
				(*userIt)["password"] = new_password;

				// ���������� ��������� ����� � ����
				std::ofstream outputFileUsers("users.json");
				if (outputFileUsers.is_open()) {
					outputFileUsers << std::setw(4) << users << std::endl;
				}
				else {
					std::cerr << "Unable to write to users file." << std::endl;
					
				}
			}
			


		
		
	};
	void changeAge(int new_age) {

		// �������� JSON-������������� ����������� �� ����

			// ³������ ������� ���� �� ������� �����������
		std::string tourIdentifier = this->getUsername();
		std::ifstream inputFileUsers("users.json");
		json users;

		if (inputFileUsers.is_open()) {
			inputFileUsers >> users;
		}


		// ����� ����������� �� ��'�� � ���� ������������
		auto userIt = std::find_if(users.begin(), users.end(), [&](const json& user) {
			return user["username"] == tourIdentifier;
			});

		if (userIt != users.end()) {
			// ��������� ������� ����������� � ����
			(*userIt)["age"] = new_age;

			// ���������� ��������� ����� � ����
			std::ofstream outputFileUsers("users.json");
			if (outputFileUsers.is_open()) {
				outputFileUsers << std::setw(4) << users << std::endl;
			}
			else {
				std::cerr << "Unable to write to users file." << std::endl;

			}
		}





	};
	void changeBudget(int new_budget) {

		// �������� JSON-������������� ����������� �� ����

			// ³������ ������� ���� �� ������� �����������
		std::string tourIdentifier = this->getUsername();
		std::ifstream inputFileUsers("users.json");
		json users;

		if (inputFileUsers.is_open()) {
			inputFileUsers >> users;
		}


		// ����� ����������� �� ��'�� � ���� ������������
		auto userIt = std::find_if(users.begin(), users.end(), [&](const json& user) {
			return user["username"] == tourIdentifier;
			});

		if (userIt != users.end()) {
			// ��������� ������� ����������� � ����
			(*userIt)["budget"] = new_budget;

			// ���������� ��������� ����� � ����
			std::ofstream outputFileUsers("users.json");
			if (outputFileUsers.is_open()) {
				outputFileUsers << std::setw(4) << users << std::endl;
			}
			else {
				std::cerr << "Unable to write to users file." << std::endl;

			}
		}





	};
	void changedatas(string new_username, string new_sex, string new_email, int new_age, string new_name, string new_surname, string new_phone, int new_budget, string new_photo) {
		// �������� JSON-������������� ����������� �� ����

			// ³������ ������� ���� �� ������� �����������
		std::string tourIdentifier = this->getUsername();
		std::ifstream inputFileUsers("users.json");
		json users;

		if (inputFileUsers.is_open()) {
			inputFileUsers >> users;
		}


		// ����� ����������� �� ��'�� � ���� ������������
		auto userIt = std::find_if(users.begin(), users.end(), [&](const json& user) {
			return user["username"] == tourIdentifier;
			});

		if (userIt != users.end()) {
			// ��������� ������� ����������� � ����
			(*userIt)["username"] = new_username;
			(*userIt)["sex"] = new_sex;
			(*userIt)["email"] = new_email;
			(*userIt)["age"] = new_age;
			(*userIt)["firstName"] = new_name;
			(*userIt)["lastName"] = new_surname;
			(*userIt)["phone"] = new_phone;
			(*userIt)["budget"] = new_budget;
			(*userIt)["photo"] = new_photo;
			// ���������� ��������� ����� � ����
			std::ofstream outputFileUsers("users.json");
			if (outputFileUsers.is_open()) {
				outputFileUsers << std::setw(4) << users << std::endl;
			}
			else {
				std::cerr << "Unable to write to users file." << std::endl;

			}
		}


	}
	void findMyTours() {
		boughtTours.clear();
		std::ifstream file("reservations.json"); 
		json data;
		file >> data;
		if (data.find(this->username) != data.end()) {
			for (const auto& item : data[username]) {
				std::string city = item["city"];
				std::string name = item["name"];
				std::string country_name = item["country"]["name"];
				std::string capital = item["country"]["capital"];
				std::string coffee_cost = item["country"]["cost_of_coffee"];
				std::string food_cost = item["country"]["cost_of_food"];
				std::string currency = item["country"]["currency"];
				std::string flag_path = item["country"]["flag"];
				std::string language = item["country"]["language"];
				std::string date = item["date"];
				std::string main_photo = item["mainPhoto"];
				std::string meals = item["meals"];
				std::string place_from = item["placeFrom"];
				std::string place_to = item["placeTo"];
				int price = item["price"];
				std::string time = item["time"];
				int tourist_number = item["touristNumber"];
				std::vector<std::string> photos = item["photos"];
				Guide* guide = nullptr;
				if (item.find("guide") != item.end()) {
					int age = item["guide"]["age"];
					string name = item["guide"]["firstName"];
					string languages = item["guide"]["languages"];
					string surname = item["guide"]["lastName"];
					string photo = item["guide"]["photo"];
					guide = new Guide(name, surname, age, languages, photo);
				}
				Country* country = new Country(country_name, language, capital, currency, flag_path, coffee_cost, food_cost);

				Tour tour(country, city, meals, tourist_number, name, place_from, place_to, main_photo, photos, price, time, date);
				tour.setGuide(guide);
				boughtTours.push_back(tour);
			}
		}


	}
	void addReservationsToFile(vector<Tour*> selected_tours) {
		std::string tourIdentifier = this->getUsername(); // �������� ������������� �������

		// ��������� JSON ��'���� ��� ��������� ���������� �������
		nlohmann::json userReservations;

		// ��������� ������������� �������� ��������
		std::vector<Tour*> selectedTours = this->getToursSelectedPointers();

		// �������� ����� ����� ���� � ��������� �� �� JSON ��'����
		for (const auto& tour : selectedTours) {
			nlohmann::json tourJson = tour->to_json();
			// �������� ���� ���� ������ ���� ����� �������� �� ���� ��������� �����

			userReservations.push_back(tourJson);
		}

		// ���������� ����� � �����, ���� ���� ��� �������
		nlohmann::json reservations;
		std::ifstream inputFile("reservations.json");
		if (inputFile.is_open()) {
			inputFile >> reservations;
			inputFile.close(); // ��������� ���� ���� ����������
		}
		else {
			// ������� ������� �������� ����� ��� �������
			// ��������� ����������� ��� ������� ��� ��������� ���������� ��
		}

		// ��������� ���������� ������� �� �������� ���������� � JSON ��'���
		reservations[tourIdentifier] = userReservations;

		// ����� JSON ��'���� � ����
		std::ofstream outputFile("reservations.json");
		if (outputFile.is_open()) {
			outputFile << std::setw(4) << reservations << std::endl;
			outputFile.close(); // ��������� ���� ���� ������
			
		}
		
	}
	void setSurname(string surname);
	vector<Tour> getTours() {
		return this->boughtTours;
	}
	string getSex() {
		return this->sex;
	}
	void setAge(int new_age);
	void setSex(string new_sex);
	void setBudget(int new_budget);
	void setphone(string new_phone);
	string getPhotoPath() {
		return photo;
	}
	int getBudget() {
		return this->budget;
	}
	string getUsername() {
		return this->username;
	}
};


