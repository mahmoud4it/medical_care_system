#include "Clinic.h"
//#include "ClinicReservation.h"

Clinic::Clinic()
{
	className = "Clinic";
}

Clinic::Clinic(const Clinic& orig)
{
	id = orig.id;
	name = orig.name;
	phone = orig.phone;
	address = orig.address;
	doctorId = orig.doctorId;
	specialtiesId = orig.specialtiesId;
}

Clinic::~Clinic()
{
	id = 0;
	name = " ";
	phone = " ";
	address = " ";
	doctorId = 0;
	specialtiesId = 0;
}

void Clinic::setID(int i)
{
	id = i;
}

int Clinic::getID()
{
	return id;
}

void Clinic::setName(string n)
{
	name = n;
}

string Clinic::getName()
{
	return name;
}

void Clinic::setPhone(string p)
{
	phone = p;
}

string Clinic::getPhone()
{
	return phone;
}

void Clinic::setAddress(string a)
{
	address = a;
}

string Clinic::getAddress()
{
	return address;
}

void Clinic::setDoctorId(int i)
{
	doctorId = i;
}

int Clinic::getDoctorId()
{
	return doctorId;
}

void Clinic::setSpecialtiesId(int i)
{
	specialtiesId = i;
}

int Clinic::getSpecialtiesId()
{
	return specialtiesId;
}

string Clinic::getClassName()
{
	return className;
}

string Clinic::getMenu()
{
	menu =  "" 
		"1- Add " + getClassName() + "\n"
		"2- Find " + getClassName() + " By ID\n"
		"3- Find " + getClassName() + " By Name\n"
		"4- Delete " + getClassName() + "\n"
                "5- Make " + getClassName() + " Reservation\n"
		"0- .. Back to Main Menu\n"
		"Please Enter Option Number: ";
	return menu;
}

void Clinic::add()
{
	cout << "Please Enter " + getClassName() + " ID: ";
	cin >> id;

	cout << "Please Enter " + getClassName() + " Name: ";
	cin >> name;

	cout << "Please Enter " + getClassName() + " Phone: ";
	cin >> phone;

	cout << "Please Enter " + getClassName() + " Address: ";
	cin >> address;

	cout << "Please Enter " + getClassName() + " Doctor ID: ";
	cin >> doctorId;

	//cout << "Please Enter " + getClassName() + " Specialties ID: ";
	//cin >> specialtiesId;
}

string Clinic::print(string msg)
{
    if(!msg.empty()) msg = "\t"+msg;
	string data = to_string(id) + "\t " + name + "\t" + phone + "\t" + address + "\t" + to_string(doctorId) + "\t" + to_string(specialtiesId) + msg;
	return data;
}
