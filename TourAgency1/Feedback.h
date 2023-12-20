#pragma once
#include <iostream>
#include <string>
#include <nlohmann/json.hpp>
using namespace nlohmann;

template<typename AuthorType, typename RatingType, typename DateType, typename CommentType>
class Feedback {
private:
    AuthorType author;
    RatingType rating;
    DateType date;
    CommentType comment;


public:
    Feedback(const AuthorType& a, const RatingType& r, const DateType& d, const CommentType& c)
        : author(a), rating(r), date(d), comment(c) {}

    AuthorType getAuthor() const { return author; }
    RatingType getRating() const { return rating; }
    DateType getDate() const { return date; }
    CommentType getComment() const { return comment; }

    bool operator>(const Feedback& other) const {
        return rating > other.rating;
    }

    bool operator<(const Feedback& other) const {
        return rating < other.rating;
    }

    bool operator==(const Feedback& other) const {
        return rating == other.rating;
    }

    bool operator!=(const Feedback& other) const {
        return rating != other.rating;
    }
    nlohmann::json toJson() {
        return {
           {"author", author.to_json()},
         {"rating", rating},
         {"date", date},
         {"comment", comment}
         // додайте інші властивості туру, які вам потрібні
        };
    }
    
    void saveToJsonFile(const std::string& filename) {
        nlohmann::json j;

        // Try to open the file for reading
        std::ifstream inputFile(filename);
        if (inputFile.is_open()) {
            inputFile >> j;
            inputFile.close();
        }

        // If the file was not open, create a new JSON array
        if (!j.is_array()) {
            j = nlohmann::json::array();
        }

        // Add the new tour to the JSON array
        j.push_back(this->toJson());

        // Write the updated JSON to the file
        std::ofstream outputFile(filename);
        if (outputFile.is_open()) {
            outputFile << std::setw(4) << j << std::endl;
            outputFile.close();
        }
        else {
            std::cerr << "Unable to open file for writing." << std::endl;
        }
        
    }



    


};
template<typename T>
T getHigherRatedFeedback(const T& feedback1, const T& feedback2) {
    return (feedback1 > feedback2) ? feedback1 : feedback2;
}
template<typename AuthorType, typename RatingType, typename DateType, typename CommentType>
void ReadFeedbacksFromFile(const std::string& filename, std::vector<Feedback<AuthorType, RatingType, DateType, CommentType>>& feedbacks) {
    std::ifstream file(filename);
    if (file.is_open()) {
        json jsonData;
        file >> jsonData;

        for (const auto& feedback : jsonData) {
            AuthorType author = feedback["author"]["firstName"] + " " + feedback["author"]["lastName"];
            RatingType rating = feedback["rating"];
            DateType date = feedback["date"];
            CommentType comment = feedback["comment"];

            Feedback<AuthorType, RatingType, DateType, CommentType> newFeedback(author, rating, date, comment);
            feedbacks.push_back(newFeedback);
        }

        file.close();
    }
    else {
        std::cerr << "Unable to open file!" << std::endl;
    }
}





