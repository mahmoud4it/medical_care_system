#include "HospitalReservation.h"

HospitalReservation::HospitalReservation()
{
	className = "Hospital Reservation";
}

HospitalReservation::HospitalReservation(const HospitalReservation& orig)
{
	hID = orig.hID;
	pID = orig.pID;
	date = orig.date;
}

HospitalReservation::~HospitalReservation()
{
	hID = 0;
	pID = 0;
	date = "00/00/0000";
}

void HospitalReservation::setID(int i)
{
	hID = i;
}

int HospitalReservation::getID()
{
	return hID;
}

void HospitalReservation::setPatientID(int n)
{
	pID = n;
}

int HospitalReservation::getPatientID()
{
	return pID;
}

void HospitalReservation::setDate(string d)
{
	date = d;
}

string HospitalReservation::getDate()
{
	return date;
}

void HospitalReservation::setName(string n){
    name = n;
}

string HospitalReservation::getName(){
    return name;
}

void HospitalReservation::add()
{
	cout << "Please Enter Hospital ID: ";
	cin >> hID;

	cout << "Please Enter Patient ID: ";
	cin >> pID;

	cout << "Please Enter " + getClassName() + " Date: ";
	cin >> date;

}

string HospitalReservation::print(string msg)
{
    if(msg != "") msg = "\t"+msg;
	string data = to_string(hID) + "\t" + to_string(pID) + "\t" + date  + msg;
	return data;
}

string HospitalReservation::getClassName()
{
	return className;
}

string HospitalReservation::getMenu()
{
	menu = ""
		"1- Make Reservation\n"
		"2- Find Reservation By ID\n"
		"3- Find Reservation By Name\n"
		"4- Delete Reservation\n"
		"0- .. Back to Main Menu\n"
		"Please Enter Option Number: ";
	return menu;
}
