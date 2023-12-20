#pragma once
#include <iostream>
#include <string>
#include "nlohmann/json.hpp"
using namespace std; 
using namespace nlohmann;
class Country
{
private:
    string countryName;
   
    string language;
    string capital;
    string currency;
    string flag;
    string cost_of_coffee;
    string cost_of_food;
public:
    Country() {};
  Country(string new_countryName, string new_language, string new_capital, string new_currency, string new_flag, string new_cost_of_coffee, string new_cost_of_food): countryName(new_countryName),
      language(new_language), capital(new_capital), currency(new_currency), flag(new_flag), cost_of_coffee(new_cost_of_coffee), cost_of_food(new_cost_of_food){}
  json to_json() const {
	  return {
		  {"name", countryName},
		  {"language",language},
		  {"capital", capital},
		  {"currency",currency},
          {"flag", flag},
          {"cost_of_coffee", cost_of_coffee},
          {"cost_of_food", cost_of_food}

	  };
  }
  string getName() {
      return countryName;
  }
  string getPhoto() {
      return flag;
  }
  string getCapital();
  string getLanguage();
  string getCurrency();
  string getCoffee();
  string getFood();

};

