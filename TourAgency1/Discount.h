#pragma once
#include "Tour.h"
#include <string> 

class Discount {
public:
    virtual std::vector<Tour> calculateDiscount(std::vector<Tour> tours) const = 0;
    virtual std::string getName() const = 0; 
    virtual ~Discount() {}
};

class AutumnDiscount : public Discount {
public:
    std::vector<Tour> calculateDiscount(std::vector<Tour> tours) const override {
        std::vector<Tour> newTours;
        for (auto& tour : tours) {
            int price = tour.getPrice() * 0.75;
            tour.setPrice(price);
            newTours.push_back(tour);
        }
        return newTours;
    }

    std::string getName() const override { 
        return "AutumnDiscount";
    }
};

class SpringDiscount : public Discount {
public:
    std::vector<Tour> calculateDiscount(std::vector<Tour> tours) const override {
        std::vector<Tour> newTours;
        for (auto& tour : tours) {
            int price = tour.getPrice() * 0.9;
            tour.setPrice(price);
            newTours.push_back(tour);
        }
        return newTours;
    }

    std::string getName() const override { 
        return "SpringDiscount";
    }
};

class BlackFriday : public Discount {
public:
    std::vector<Tour> calculateDiscount(std::vector<Tour> tours) const override {
        std::vector<Tour> newTours;
        for (auto& tour : tours) {
            int price = tour.getPrice() * 0.45;
            tour.setPrice(price);
            newTours.push_back(tour);
        }
        return newTours;
    }

    std::string getName() const override { 
        return "BlackFriday";
    }
};

class NoDiscount : public Discount {
public:
    std::vector<Tour> calculateDiscount(std::vector<Tour> tours) const override {
        return tours;
    }

    std::string getName() const override { 
        return "NoDiscount";
    }
};
