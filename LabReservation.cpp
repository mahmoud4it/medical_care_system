#include "LabReservation.h"

LabReservation::LabReservation()
{
	className = "Lab Reservation";
}

LabReservation::LabReservation(const LabReservation& orig)
{
	labID = orig.labID;
	patientID = orig.patientID;
	analysisID = orig.analysisID;
	date = orig.date;
}

LabReservation::~LabReservation()
{
	labID = 0;
	patientID = 0;
	analysisID = 0;
	date = "00/00/0000";
}

void LabReservation::setID(int i)
{
	labID = i;
}

int LabReservation::getID()
{
	return labID;
}

void LabReservation::setPatientID(int i)
{
	patientID = i;
}

int LabReservation::getPatientID()
{
	return patientID;
}

void LabReservation::setAnalysisID(int i)
{
	analysisID = i;
}

int LabReservation::getAnalysisID()
{
	return analysisID;
}

void LabReservation::setDate(string d)
{
	date = d;
}

string LabReservation::getDate()
{
	return date;
}

void LabReservation::setName(string n){
    name = n;
}

string LabReservation::getName(){
    return name;
}

void LabReservation::add()
{
	cout << "Please Enter Lab ID: ";
	cin >> labID;

	cout << "Please Enter Patient ID: ";
	cin >> patientID;

	cout << "Please Enter Analysis ID: ";
	cin >> analysisID;

	cout << "Please Enter Date: ";
	cin >> date;
}

string LabReservation::print(string msg)
{
    if(msg != "") msg = "\t"+msg;
	string data = to_string(labID) + "\t" + to_string(patientID) + "\t" + to_string(analysisID) + "\t" + date  + msg;
	return data;
}

string LabReservation::getClassName()
{
	return className;
}

string LabReservation::getMenu()
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
