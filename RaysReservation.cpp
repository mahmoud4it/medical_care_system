#include "RaysReservation.h"

RaysReservation::RaysReservation()
{
	className = "Rays Reservation";
}

RaysReservation::RaysReservation(const RaysReservation& orig)
{
	rID = orig.rID;
	pID = orig.pID;
	tID = orig.tID;
	date = orig.date;
}

RaysReservation::~RaysReservation()
{
	rID = 0;
	pID = 0;
	tID = 0;
	date = "00/00/0000";
}

void RaysReservation::setID(int i)
{
	rID = i;
}

int RaysReservation::getID()
{
	return rID;
}

void RaysReservation::setPatientID(int i)
{
	pID = i;
}

int RaysReservation::getPatientID()
{
	return pID;
}

void RaysReservation::setTypesID(int i)
{
	tID = i;
}

int RaysReservation::getTypeID()
{
	return tID;
}

void RaysReservation::setDate(string d)
{
	date = d;
}

string RaysReservation::getDate()
{
	return date;
}

void RaysReservation::setName(string n)
{
    name = n;
}

string RaysReservation::getName()
{
    return name;
}

string RaysReservation::getClassName()
{
	return className;
}

string RaysReservation::getMenu()
{
	menu = ""
		"1- Add " + getClassName() + "\n"
		"2- Find " + getClassName() + " By ID\n"
		"3- Find " + getClassName() + " By Name\n"
		"4- Delete " + getClassName() + "\n"
		"0- .. Back to Main Menu\n"
		"Please Enter Option Number: ";
	return menu;
}

void RaysReservation::add()
{
	cout << "Please Enter Rays ID: ";
	cin >> rID;

	cout << "Please Enter patient ID: ";
	cin >> pID;

	cout << "Please Enter Type of Rays ID: ";
	cin >> tID;

	cout << "Please Enter Rays Reservation Date: ";
	cin >> date;

}

string RaysReservation::print(string msg)
{
    if(!msg.empty()) msg = "\t"+msg;
	string data = to_string(rID) + "\t " + to_string(pID) + "\t" + to_string(tID)  + "\t"+ date;
	return data;
}
