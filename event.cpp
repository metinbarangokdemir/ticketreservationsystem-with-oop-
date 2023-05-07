#include <iostream>
#include <windows.h>
#include "event.h"
using namespace std;
//
 // manager constructor
manager::manager(string _id, int _pin) {
	id = _id;
	pin = _pin;
};
//destructor 
manager::~manager(){
}
void manager::setId(string _id) {
	id = _id;
}
string manager::getId() {
	return id;
}
void manager::setPin(int _pin) {
	pin = _pin;
}
int manager::getPin() {
	return pin;
}

//
//constructor event
event::event(string _name, int _catagory, int _hour, int _capacity, int _price,int _sold) {
	name = _name;
	catagory = _catagory;
	hour = _hour;
	capacity = _capacity;
	price = _price;
	sold = _sold;
}
// destructor
event::~event(){
}
// event bilgiler
void event::infos() {
	cout << "                      Name of event : " << name << endl;
	cout << "                      Catagory of event : ";
	if (catagory == 1) {
		cout << "Concert";
	}
	else if (catagory == 2) {
		cout << "Cinema";
	}
	else {
		cout << "Theatre";
	}
	cout << endl;
	cout << "                      Hour of event : " << hour / 100 << ":";
	if (hour % 100 == 0) { cout << "00" << endl; }
	else { cout << hour % 100 << endl; }
	cout << "                      Capacity of event : " << capacity << endl;
	cout << "                      Price of ticket : " << price << " TL" << endl;


}
//kullanýcý bilgileri
//destructor
customer::~customer(){
}
void customer::infos(int i) {
	cout << "                      Name of customer : " << name << endl;
	cout << "                      Phone number of customer : " << phone_number << endl;
	cout << "                      Customer paid : " << paid << " TL" << endl;
	cout << "                      Name of event : " << eventName << endl;
	cout << "                      Number of event : " << eventNumber << endl;
	cout << "                      Seat number : " << seatNumber << endl;
}
void event::setName(string _name) {
	name = _name;
}
string event::getName() {
	return name;
}
void event::setCatagory(int _catagory) {
	catagory = _catagory;
}
int event::getCatagory() {
	return catagory;
}
void event::setHour(int _hour) {
	hour = _hour;
}
int event::getHour() {
	return hour;
}
void event::setCapacity(int _Capacity) {
	capacity = _Capacity;
}
int event::getCapacity() {
	return capacity;
}
void event::setPrice(int _price) {
	price = _price;
}
int event::getPrice() {
	return price;
}
void event::setSold(bool _sold) {
	sold = _sold;
}
bool event::getSold() {
	return sold;
}
//
string customer::getName() {
	return name;
}
void customer::setName(string _name) {
	name = _name;
}
int long long customer::getPhone_number() {
	return phone_number;
}
void customer::setPhone_number(int long long _phone_number) {
	phone_number = _phone_number;
}
int customer::getPaid() {
	return paid;
}
void customer::setPaid(int _paid) {
	paid = _paid;
}
string customer::geteventName() {
	return eventName;
}
void customer::seteventName(string _eventName) {
	eventName = _eventName;
}
int customer::geteventNumber() {
	return eventNumber;
}
void customer::seteventNumber(int _eventNumber) {
	eventNumber = _eventNumber;
}
void customer::setseatNumber(int _seatNumber) {
	seatNumber = _seatNumber;
}
int customer::getseatNumber() {
	return seatNumber;
}

