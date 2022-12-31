/* 
 * File:   Doctor.h
 * Author: admin
 *
 * Created on 20 December 2022, 17.11
 */

#include "string"
using namespace std;

class Doctor {
public:
    Doctor();
    Doctor(const Doctor& orig);
    ~Doctor();
    
    void setID(int i);
    int getID();

    void setSpecialtyID(int i);
    int getSpecialtyID();

    void setName(string n);
    string getName();
    
    void setPhone(string p);
    string getPhone();
    
    void setAddress(string a);
    string getAddress(); 
    
    void add();
    string print(string msg="");
    string getClassName();
    string getMenu();
    
private:
    int id;
    int specialtyID;
    string name;
    string phone;
    string address;
    
    string className;
    string menu;

};


