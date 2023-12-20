#pragma once
#include "Country.h"
#include "Guide.h"
#include <string>
#include "nlohmann/json.hpp"
#include <vector>
using namespace nlohmann;
using namespace std;
class Tour
{
private:
	Country* m_country;
	string city;
	string meals;
	int touristNumber;
	Guide* m_guide;
	string name;
	string placeFrom;
	string placeTo;
	string mainPhoto;
	vector<string> photos;
	int price;
	string time;
	string date;
public:
	Tour(Country* country, string new_city, string new_meals, int new_touristNumber, string new_name, string new_placeFrom, string new_placeTo, string new_mainPhoto,
		vector<string> new_photos, int new_price, string new_time, string new_date) : m_country(country), city(new_city), meals(new_meals), touristNumber(new_touristNumber),
		name(new_name), placeFrom(new_placeFrom), placeTo(new_placeTo), mainPhoto(new_mainPhoto), photos(new_photos), price(new_price), time(new_time), date(new_date) {}
	/*Tour(Guide* guide, Country* country,string new_city, string new_meals, int new_touristNumber, string new_name, string new_placeFrom, string new_placeTo, string new_mainPhoto,
		vector<string> new_photos, int new_price, string new_time, string new_date) :m_guide(guide),  city(new_city), meals(new_meals), touristNumber(new_touristNumber),
		name(new_name), placeFrom(new_placeFrom), placeTo(new_placeTo), mainPhoto(new_mainPhoto), photos(new_photos), price(new_price), time(new_time), date(new_date) {}*/
	Tour() {
		this->price = 0;
	};
	void setGuide(Guide* newGuide) {
		this->m_guide = newGuide;
	}
	/*void setPrice(int new_price) {
		this->price = new_price;
	}*/
	json to_json() const {
		json jsonData;

		jsonData["country"] = m_country->to_json();
		jsonData["guide"] = m_guide->to_json();
		jsonData["city"] = city;
		jsonData["meals"] = meals;
		jsonData["touristNumber"] = touristNumber;
		
		jsonData["name"] = name;
		jsonData["placeFrom"] = placeFrom;
		jsonData["placeTo"] = placeTo;
		jsonData["mainPhoto"] = mainPhoto;
		jsonData["photos"] = photos;
		jsonData["price"] = price;
		jsonData["time"] = time;
		jsonData["date"] = date;

		return jsonData;
	}
	Tour& operator+=(const Tour& other) {
		this->price += other.price;
		
		return *this;
	}
	void setDate(string new_date);
	Guide* getGuide() {
		return m_guide;
	}
	int getPrice() {
		return price;
	}
	void setPrice(int new_price) {
		this->price = new_price;
	}
	vector<string> getPhotos();
	string getDuration();
	string getMeals();
	int getTourists();
	string getPlaceFrom();
	string getPlaceTo();
	string getMainPhoto() {
		return mainPhoto;
	}
	string getName() {
		return name;
	}
	Country* getCountry() {
		return m_country;
	}
	string getCity() {
		return city;
	}
	string getDate() {
		return date;
	}
	string getTime() {
		return time;
	}
	

};

