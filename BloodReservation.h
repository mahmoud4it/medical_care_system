#pragma once
#include <iostream>
#include "string"
using namespace std;
class BloodReservation
{
private:
	int bID;
	int pID;
	int sID;
	string date;

        string name;
	string className;
	string menu;
public:
	BloodReservation();
	BloodReservation(const BloodReservation& orig);
	~BloodReservation();

	void setID(int i);
	int getID();

	void setPatientID(int i);
	int getPatientID();
	
	void setSamplesID(int i);
	int getSamplesID();

	void setDate(string d);
	string getDate();
        
        void setName(string n);
    string getName();

	void add();
        string print(string msg="");
        string getClassName();
        string getMenu();
};

