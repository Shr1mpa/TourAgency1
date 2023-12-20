#include "TourAgency.h"
bool TourAgency::doesUsernameExist(const std::string& targetUsername) {
    std::ifstream inputFile("users.json");
    json usersJson;

    if (inputFile.is_open()) {
        inputFile >> usersJson;


        for (const auto& user : usersJson) {
            if (user["username"] == targetUsername) {
                return true; //Знайшли
            }
        }
    }

    return false; //Ні
}
bool TourAgency::isLoginValid(const std::string& targetUsername, const std::string& enteredPassword) {
    std::ifstream inputFile("users.json");
    json usersJson;

    if (inputFile.is_open()) {
        inputFile >> usersJson;

        
        for (const auto& user : usersJson) {
            if (user["username"] == targetUsername && user["password"] == enteredPassword) {
                return true; 
            }
        }
    }

    return false; 
}
void TourAgency::addGuidsToVector() {
    std::ifstream file("guids.json"); // Передбачається, що файл містить ваші дані JSON і названий "countries.json"


    json data;
    file >> data;



    for (auto& item : data) {
        string name = item["firstName"];
        string language = item["languages"];
        string lastName = item["lastName"];
        int age = item["age"];
        string photo = item["photo"]; // Примітка: поле у вашому JSON назване "photo", а не "flag"
        

        Guide guide(name, lastName, age, language, photo);
        this->guids.push_back(guide);
    }
}
vector<Guide> TourAgency::getGuids() {
    return guids;
}
void TourAgency::setToVectorCountries(Country country) {
    countries.push_back(country);
}