#pragma once
#include "User.h"
#include "Country.h"
#include "Guide.h"
#include "Discount.h"

#include <vector>
#include <fstream>
#include "nlohmann/json.hpp"
#include "Tour.h"
#include "Feedback.h"
using namespace std;
using namespace nlohmann;

class TourAgency
{
    string name;
    string logo;
    string description;
    string phoneNumber;
    vector<Country> countries;
    vector<Guide> guids;
    vector<Tour> tours;
    Discount* discount;
    vector<Feedback<Tourist, string, string, string>> feedbacks;
    vector<Tourist> tourists;
    
public:
    TourAgency(){};
    TourAgency(string new_name, string new_logo, string new_description, string phone, Discount* new_discount): name(new_name), logo(new_logo), description(new_description), phoneNumber(phone), discount(new_discount){}
    void setName(string new_name) {
        name = new_name;
    }
    
    void ReadFeedbacksFromFile(const std::string& filename) {
        std::ifstream file(filename);
        if (file.is_open()) {
            json jsonData;
            file >> jsonData;

            for (const auto& feedback : jsonData) {
                std::string new_username = feedback["author"]["username"];
                

                Tourist tourist = this->findTouristByName(new_username);


                std::string rating = feedback["rating"];
                std::string date = feedback["date"];
                std::string comment = feedback["comment"];

                Feedback<Tourist, std::string, std::string, std::string> newFeedback(tourist, rating, date, comment);
                feedbacks.push_back(newFeedback);
            }

            file.close();
        }
        else {
            std::cerr << "Unable to open file!" << std::endl;
        }
    }
    vector<Feedback<Tourist, std::string, std::string, std::string>> getFeedbacks() {
        return feedbacks;
    }
    vector<Tourist> getTourists() {
        return this->tourists;
    }
    void addFeedback(Feedback<Tourist, std::string, std::string, std::string> feedback) {
        feedbacks.push_back(feedback);
    }
    void readTouristsFromFile() {
        ifstream input_file("users.json");
        if (!input_file.is_open()) {
            cerr << "Не вдалося відкрити файл users.json" << endl;
            
        }

        json data; // Змінна для зберігання зчитаних даних JSON
        input_file >> data; // Зчитування даних у змінну data

        input_file.close(); // Закриття файлу

        // Проходження через кожен об'єкт у JSON та створення об'єктів класу Tourist
        for (const auto& user : data) {
            Tourist new_tourist(
                user["username"],
                user["password"],
                user["email"],
                user["photo"],
                user["phone"],
                user["firstName"],
                user["lastName"],
                user["age"],
                user["sex"],
                user["budget"]
            );

            tourists.push_back(new_tourist); // Додавання нового туриста до вектора
        }
    }
    void setLogo(string new_logo) {
        logo = new_logo;
    }
    void setDescription(string new_description) {
        description = new_description;
    }
    void setPhone(string new_phone) {
        phoneNumber = new_phone;
    }

   static Tourist* findTouristByUsername(const std::string& username) {
        std::ifstream inputFile("users.json");
        json usersJson;

        if (inputFile.is_open()) {
            inputFile >> usersJson;

            for (const auto& user : usersJson) {
                if (user["username"] == username) {
                    // Найден пользователь с указанным username, создаем объект Tourist
                    Tourist *foundTourist = new Tourist(
                        user["username"],
                        user["password"],
                        user["email"],
                        user["photo"],
                        user["phone"],
                        user["firstName"],
                        user["lastName"],
                        user["age"],
                        user["sex"],
                        user["budget"]
                    );
                    return foundTourist;
                }
            }
        }

        
    }
   Tourist findTouristByName(const std::string& username) {
       std::ifstream inputFile("users.json");
       json usersJson;

       if (inputFile.is_open()) {
           inputFile >> usersJson;

           for (const auto& user : usersJson) {
               if (user["username"] == username) {
                   // Найден пользователь с указанным username, создаем объект Tourist
                   Tourist foundTourist (
                       user["username"],
                       user["password"],
                       user["email"],
                       user["photo"],
                       user["phone"],
                       user["firstName"],
                       user["lastName"],
                       user["age"],
                       user["sex"],
                       user["budget"]
                   );
                   return foundTourist;
               }
           }
       }


   }
   static bool doesUsernameExist(const std::string& targetUsername);
   static bool isLoginValid(const std::string& targetUsername, const std::string& enteredPassword);
   void addCountriestToVector() {
       std::ifstream file("countries.json");


       json data;
       file >> data;

      

       for (auto& item : data) {
           string name = item["name"];
           string language = item["language"];
           string capital = item["capital"];
           string currency = item["currency"];
           string flag = item["flag"]; 
           string cost_of_coffee = item["cost_of_coffee"];
           string cost_of_food = item["cost_of_food"];

           Country country(name, language, capital, currency, flag, cost_of_coffee, cost_of_food);
           this->countries.push_back(country);
       }
       
   }
   vector<Country> getCountries() {
       return countries;
   }
   void clearVector() {
       countries.clear();
   }
   void addGuidsToVector();
   vector<Guide> getGuids();
   void clearGuidsVector() {
       guids.clear();
   }
   void setToVectorCountries(Country new_country);
   void addTourToVectorAndFile(Tour& tour) {
       tours.push_back(tour);
       std::ifstream inputFile("tours.json");
       nlohmann::json toursJson;

       if (inputFile.is_open()) {
           inputFile >> toursJson;
       }

       // Додаємо новий тур до JSON об'єкту
       toursJson.push_back(tour.to_json());

       // Записуємо оновлений JSON у файл
       std::ofstream outputFile("tours.json");
       outputFile << std::setw(4) << toursJson << std::endl;
   }
   void clearTourVector() {
       tours.clear();
   }
   void clearTouristVector() {
       tourists.clear();
   }
   void addToursToVector() {
       std::ifstream file("tours.json");


       json data;
       file >> data;



       for (auto& item : data) {
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
               guide = new Guide(name, surname,age, languages, photo);
           }
           Country* country = new Country(country_name, language, capital, currency, flag_path, coffee_cost, food_cost);
           
           Tour tour(country, city, meals, tourist_number, name, place_from, place_to, main_photo, photos, price, time, date);
           tour.setGuide(guide);
           tours.push_back(tour);

       }
   }
   vector<Tour> getTours() {
       return tours;
   }
   Country* getCountryByName(std::vector<Country>& countries, const std::string& name) {
       for (auto& country : countries) {
           if (country.getName() == name) {
               // Возвращаем указатель на объект Country, найденный по имени
               return &country;
           }
       }

       // Если страна с заданным именем не найдена, возвращаем nullptr
       return nullptr;
   }
   Guide* getGuideByName(const std::string& name) {
       for (auto& guide : guids) {
           if (guide.getName() == name) {
              
               return &guide;
           }
       }

       // Если страна с заданным именем не найдена, возвращаем nullptr
       return nullptr;
   }
   static TourAgency* getAgencyInfo() {
      // std::ifstream inputFile("TourAgency.json");
      //

      // json agencyJson;
      // inputFile >> agencyJson;
      // inputFile.close();
      // string name, logo, description, phone;
      // TourAgency* agency = nullptr;
      // Discount* agencyDiscount = nullptr;
      ///* if (agencyJson.contains("description")) {
      //     description = agencyJson["description"];
      //    
      // }
      // if (agencyJson.contains("discount")) {
      //     std::string discountType = agencyJson["discount"];
      //     if (discountType == "AutumnDiscount") {
      //         agencyDiscount = new AutumnDiscount();
      //     }
      //     else if (discountType == "SpringDiscount") {
      //         agencyDiscount = new SpringDiscount();
      //     }
      //     else if (discountType == "BlackFriday") {
      //         agencyDiscount = new BlackFriday();
      //     }
      //     else if (discountType == "NoDiscount") {
      //         agencyDiscount = new NoDiscount();
      //     }

      // }
      // if (agencyJson.contains("logo")) {
      //     description = agencyJson["logo"];

      // }
      // if (agencyJson.contains("name")) {
      //     description = agencyJson["name"];

      // }*/

      // for (auto& agencyData : agencyJson) {
      //     description = agencyData["description"];
      //     std::string discountType = agencyData["discount"];
      //     
      //     if (discountType == "AutumnDiscount") {
      //         agencyDiscount = new AutumnDiscount();
      //     }
      //     else if (discountType == "SpringDiscount") {
      //         agencyDiscount = new SpringDiscount();
      //     }
      //     else if (discountType == "BlackFriday") {
      //         agencyDiscount = new BlackFriday();
      //     }
      //     else if (discountType == "NoDiscount") {
      //         agencyDiscount = new NoDiscount();
      //     }
      //     logo = agencyData["logo"];
      //     name = agencyData["name"];
      //     
      //     phone = agencyData["phoneNumber"];
      //     
      //     
      //     
      //     

      //    
      // }
      // agency = new TourAgency(name, logo, description, phone, agencyDiscount);
      // return agency;
       std::ifstream file("TourAgency.json"); // Вкажіть правильний шлях до вашого файлу JSON
      

       json data;
       file >> data;
       Discount* agencyDiscount = nullptr;
       if (!data.empty()) {

           std::string discountType = data["discount"];

           if (discountType == "AutumnDiscount") {
               agencyDiscount = new AutumnDiscount();
           }
           else if (discountType == "SpringDiscount") {
               agencyDiscount = new SpringDiscount();
           }
           else if (discountType == "BlackFriday") {
               agencyDiscount = new BlackFriday();
           }
           else if (discountType == "NoDiscount") {
               agencyDiscount = new NoDiscount();
           }

           TourAgency* tourAgency = new TourAgency(data["name"], data["logo"], data["description"], data["phoneNumber"], agencyDiscount);
           return tourAgency;
       }
       file.close();

   }
   void setDiscount(Discount* new_disount) {
       discount = new_disount;
   }
   string getName() {
       return name;
   }
   string getNumber() {
       return phoneNumber;
   }
   string getDescription() {
       return description;
   }
   string getLogo() {
       return logo;
   }
   Discount* getDiscount() {
       return discount;
   }
   void setTours(vector<Tour> new_tours) {
       this->tours = new_tours;
   }
   int originalTourPrice(string tour_name) {
       std::ifstream file("tours.json");
       if (!file.is_open()) {
           std::cerr << "Unable to open file!" << std::endl;
           return -1; 
       }

       json data;
       file >> data;

       for (const auto& item : data) {
           std::string name = item["name"];
           if (name == tour_name) {
               return item["price"]; 
           }
       }

       return -1; 
   }
   json to_json() const {
       return {
         {"name", name},
         {"description",description},
         {"phoneNumber", phoneNumber},
         {"discount",discount->getName()},
         {"logo", logo}
       };
   }
   void addInfoToFile() {
       
      
       nlohmann::json jsonData;

       
       // Додаємо новий тур до JSON об'єкту
       jsonData = this->to_json();

       // Записуємо оновлений JSON у файл
       std::ofstream outputFile("TourAgency.json");
       outputFile << std::setw(4) << jsonData << std::endl;
       outputFile.close();
   }
   vector<Tour> addSelectedToVector(string country_name) {

       std::ifstream file("tours.json");
       vector<Tour> tour_selected;

       json data;
       file >> data;



       for (auto& item : data) {
           std::string tour_country_name = item["country"]["name"];
           if (tour_country_name == country_name) {
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
           tour_selected.push_back(tour);
           }
           
           

       }
       return tour_selected;
   }
   Tour* findTourByNamePointer(string name) {
       for (auto& tour : tours) {
           if (tour.getName() == name) {
               return &tour;
               break;
           }
       }
       return nullptr;
   }
   Tour findTourByName(string name) {
       for (auto& tour : tours) {
           if (tour.getName() == name) {
               return tour;
               break;
           }
       }
   }

   

};

