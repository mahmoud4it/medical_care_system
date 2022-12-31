#pragma once
#include <iostream>
#include "string"
using namespace std;
class LabReservation
{
private:
	int labID;
	int patientID;
	int analysisID;
	string date;

        string name;
	string className;
	string menu;
public:
	LabReservation();
	LabReservation(const LabReservation& orig);
	~LabReservation();

	void setID(int i);
	int getID();

	void setPatientID(int i);
	int getPatientID();
	
	void setAnalysisID(int i);
	int getAnalysisID();
	
	void setDate(string d);
	string getDate();
        
        void setName(string n);
	string getName();
	
	void add();
	string print(string msg="");
	string getClassName();
	string getMenu();
};

