#pragma once
#include <iostream>
#include "string"
using namespace std;
class HospitalReservation
{
private:
	int hID;
	int pID;
	string date;

        string name;
	string className;
	string menu;
public:
	HospitalReservation();
	HospitalReservation(const HospitalReservation& orig);
	~HospitalReservation();
	
	void setID(int i);
	int getID();

	void setPatientID(int n);
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

