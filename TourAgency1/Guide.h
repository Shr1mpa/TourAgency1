#pragma once
#include <vector>
#include <string>
#include "nlohmann/json.hpp"
#include <fstream>
using namespace nlohmann;
using namespace std;
class Guide
{
private:
	string firstName;
	string lastName;
	string photo;
	int age;
	string languages;
public:
	
	Guide(string first, string last, int a, string l, string new_photo) : firstName(first), lastName(last), age(a), languages(l), photo(new_photo) {}
	json to_json() const {
		return {
			{"firstName", firstName},
			{"lastName", lastName},
			{"photo", photo},
			{"age", age},
			{"languages", languages}
		};
	}
	static void removeGuideByName(const std::string& filePath, const std::string& firstName, const std::string& lastName) {
		std::ifstream i(filePath);
		json j;
		i >> j;

		// Пошук гіда за ім'ям та прізвищем та видалення його з JSON
		for (auto it = j.begin(); it != j.end(); ++it) {
			if (it->at("firstName") == firstName && it->at("lastName") == lastName) {
				j.erase(it);
				break;
			}
		}

		std::ofstream o(filePath);
		o << std::setw(4) << j << std::endl;
	}
	string getName() {
		return firstName;
	}
	string getSurname() {
		return lastName;
	}
	string getPhoto() {
		return photo;
	}
	int getAge() {
		return age;
	}
	string getLanguages() {
		return languages;
	}

};

