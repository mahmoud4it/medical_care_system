#include "BloodReservation.h"

BloodReservation::BloodReservation()
{
	className = "Blood Reservation";
}

BloodReservation::BloodReservation(const BloodReservation& orig)
{
	bID = orig.bID;
	pID = orig.pID;
	sID = orig.sID;
	date = orig.date;
}

BloodReservation::~BloodReservation()
{
	bID = 0;
	pID = 0;
	sID = 0;
	date = "00/00/0000";
}

void BloodReservation::setID(int i)
{
	bID = i;
}

int BloodReservation::getID()
{
	return bID;
}

void BloodReservation::setPatientID(int i)
{
	pID = i;
}

int BloodReservation::getPatientID()
{
	return pID;
}

void BloodReservation::setSamplesID(int i)
{
	sID = i;
}

int BloodReservation::getSamplesID()
{
	return sID;
}

void BloodReservation::setDate(string d)
{
	date = d;
}

void BloodReservation::setName(string n)
{
    name = n;
}

string BloodReservation::getName()
{
    return name;
}

string BloodReservation::getDate()
{
	return date;
}

string BloodReservation::getClassName()
{
	return className;
}

string BloodReservation::getMenu()
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

void BloodReservation::add()
{
	cout << "Please Enter Blood ID: ";
	cin >> bID;

	cout << "Please Enter Patient ID: ";
	cin >> pID;

	cout << "Please Enter Samples ID: ";
	cin >> sID;

	cout << "Please Enter Blood Reservation  Date: ";
	cin >> date;

	
}

string BloodReservation::print(string msg)
{
    if(!msg.empty()) msg = "\t"+msg;
	string data = to_string(bID) + "\t" + to_string(pID) + to_string(sID) + "\t" + date ;
	return data;
}


