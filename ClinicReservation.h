#pragma once
#include <iostream>
#include "string"
using namespace std;
class ClinicReservation
{
private:
	int clinicID;
	int patientID;
	string date;
        string name;

	string className;
	string menu;
public:
	ClinicReservation();
	ClinicReservation(const ClinicReservation& orig);
	~ClinicReservation();

	void setID(int i);
	int getID();

	void setPatientID(int i);
	int getPatientID();

	void setDate(string d);
	string getDate();
        
        void setName(string n);
        string getName();

	void add();
        string print(string msg="");
        string getClassName();
        string getMenu();
};

