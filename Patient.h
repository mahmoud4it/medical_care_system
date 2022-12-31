/* 
 * File:   Patient.h
 * Author: admin
 *
 * Created on 20 December 2022, 14.50
 */

#include <vector>
#include "string"
using namespace std;

class Patient {
public:
    Patient();
    Patient(const Patient& orig);
    Patient(vector<string> row);
    ~Patient();
    void setID(int i);
    int getID();

    void setAge(int i);
    int getAge();

    void setName(string n);
    string getName();
    
    void setPhone(string p);
    string getPhone();
    
    void setAddress(string a);
    string getAddress();
    
    void setData(vector<string> row);
    string getData();
    void load(string);
    
    void add();
    string print(string msg="");
    string getClassName();
    string getMenu();
    
private:
    int id;
    int age;
    string name;
    string phone;
    string address;
    string className;
    string menu;
};


