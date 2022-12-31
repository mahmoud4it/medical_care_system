#include "ClinicReservation.h"

ClinicReservation::ClinicReservation()
{
	className = "Clinic Reservation";
}

ClinicReservation::ClinicReservation(const ClinicReservation& orig)
{
	clinicID = orig.clinicID;
	patientID = orig.patientID;
	date = orig.date;
}

ClinicReservation::~ClinicReservation()
{
	clinicID = 0;
	patientID = 0;
	date = "00/00/0000";
}

void ClinicReservation::setID(int i)
{
	clinicID = i;
}

int ClinicReservation::getID()
{
	return clinicID;
}

void ClinicReservation::setPatientID(int i)
{
	patientID = i;
}

int ClinicReservation::getPatientID()
{
	return patientID;
}

void ClinicReservation::setDate(string d)
{
	date = d;
}

string ClinicReservation::getDate()
{
	return date;
}

void ClinicReservation::setName(string n){
    name = n;
}

string ClinicReservation::getName(){
    return name;
}

string ClinicReservation::getClassName()
{
	return className;
}

string ClinicReservation::getMenu()
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

void ClinicReservation::add()
{
	cout << "Please Enter Clinic ID: ";
	cin >> clinicID;

	cout << "Please Enter Patient ID: ";
	cin >> patientID;

	cout << "Please Enter Reservation Date: ";
	cin >> date;

}

string ClinicReservation::print(string msg)
{
    if(!msg.empty()) msg = "\t"+msg;
    string data = to_string(clinicID) + "\t " + to_string(patientID) + "\t" + date  + msg;
    return data;
}
