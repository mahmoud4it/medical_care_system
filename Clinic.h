
#include <iostream>
#include "string"
using namespace std;
class Clinic
{
private:
	int id;
	string name;
	string phone;
	string address;
	int doctorId;
	int specialtiesId;

	string className;
	string menu;
public:
	Clinic();
	Clinic( const Clinic& orig );
	~Clinic();

	void setID(int i);
	int getID();

	void setName(string n);
	string getName();

	void setPhone(string p);
	string getPhone();

	void setAddress(string a);
	string getAddress();

	void setDoctorId(int i);
	int getDoctorId();

	void setSpecialtiesId(int i);
	int getSpecialtiesId();

	void add();
        string print(string msg="");
        string getClassName();
        string getMenu();
};

