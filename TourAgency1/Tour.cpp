#include "Tour.h"
void Tour::setDate(string new_date) {
	this->date = new_date;
}
vector<string> Tour::getPhotos() {
	return this->photos;
}
string Tour::getDuration() {
	return this->time;
}
string Tour::getMeals() {
	return this->meals;
}
int Tour::getTourists() {
	return this->touristNumber;
}
string Tour::getPlaceFrom() {
	return this->placeFrom;
}
string Tour::getPlaceTo() {
	return this->placeTo;
}