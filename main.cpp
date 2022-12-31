/* 
 * File:   main.cpp
 * Author: admin
 *
 * Created on 20 December 2022, 13.34
 */

#include <iostream>
#include <sstream>
#include "filehandling.h"

#include "MedLinkedList.cpp"
#include "MedStack.cpp"
#include "MedQueue.cpp"

#include "Hospital.h"
#include "HospitalReservation.h"

#include "Clinic.h"
#include "ClinicReservation.h"

#include "Lab.h"
#include "Analysis.h"
#include "LabReservation.h"

#include "Pharmacy.h"
#include "Medication.h"
#include "BuyingMedicine.h"

#include "Doctor.h"
#include "Specialty.h"

#include "Patient.h"


using namespace std;

MedLinkedList<Hospital> hospitals;
MedLinkedList<HospitalReservation> hospitalReservation;

MedLinkedList<Clinic> clinics;
MedLinkedList<ClinicReservation> clinicsReservation;

MedLinkedList<Lab> lab;
MedLinkedList<Analysis> analysis;
MedLinkedList<LabReservation> labsReservation;

//MedLinkedList<XRay> xrays;

MedLinkedList<Pharmacy> pharmacys;
MedLinkedList<Medication> medications;
MedLinkedList<BuyingMedicine> buyingMedicine;

MedLinkedList<Doctor> doctors;
MedLinkedList<Specialty> specialtys;

MedLinkedList<Patient> patients;

MedQueue<Patient> pq;

void Clear();
void menu();
template <class Temp>
void addClass();
void report();

template <class Temp>
void subMenu(MedLinkedList<Temp> &list,bool clear);
template <class Temp,class Relation>
void subMenu(MedLinkedList<Temp> &list,MedLinkedList<Relation> &relation,bool clear);
template <class Temp,class Source,class Relation>
void subMenu(MedLinkedList<Temp> &list,MedLinkedList<Source> &source,MedLinkedList<Relation> &relation,bool clear);

template <class Temp,class Source>
void getReport(int patientID,MedLinkedList<Temp> &relation,MedLinkedList<Source> &source);
template <class Temp,class Source,class Specialty>
void getReport(int patientID,MedLinkedList<Temp> &relation,MedLinkedList<Specialty> &specialty);

int main(int argc, char** argv) {
    //----------- Patient ------------//
    /*MedLinkedList<Patient> pl;
    MedStack<Patient> ps;
    MedQueue<Patient> pq;
    cout << "------------- Linked List ------------- " << endl;
     * */
    
    menu();
    
    return 0;
}

//hospital_Patients(PID - HID - Date)
//Clinic_Patients(PID - CID - Date)


void Clear(){
    #if defined _WIN32
        system("cls");
        //clrscr(); // including header file : conio.h
    #elif defined (__LINUX__) || defined(__gnu_linux__) || defined(__linux__)
        system("clear");
        //std::cout<< u8"\033[2J\033[1;1H"; //Using ANSI Escape Sequences 
    #elif defined (__APPLE__)
        system("clear");
    #endif
}

void printMessage(string msg){
    cout << msg << endl;
}

template <class Temp>
void addClass(MedLinkedList<Temp> &list){
    Temp t;
    t.add();
    list.insert(t);
}

void menu() {
    int select = 0;
    
    string menu = ""
            "1- Hospital\n"
            "2- Clinic\n"
            "3- Labs\n"
            "4- x-Rays\n"
            "5- Pharmacy\n"
            "6- Blood Bank\n"
            "7- Doctors\n"
            "8- Patients\n"
            "9- Quit\n"
            "Please Enter Option Number: ";
    
    Clear();
    cout << "Welcome to Medical Care System" << endl;
    cout << "---------------- Main Menu ----------------" << endl;
    cout << menu;
    cin >> select;
    
    switch(select){
        case 1:
            subMenu(hospitals,hospitalReservation,true);
            break;
        case 2:
            subMenu(clinics,clinicsReservation,true);
            break;
        case 3:
            subMenu(lab,analysis,labsReservation,true);
            break;
        case 4:
            subMenu(doctors,specialtys,true);
            break;
        case 5:
            subMenu(pharmacys,medications,buyingMedicine,true);
            break;
        case 6:
            subMenu(doctors,true);
            break;
        case 7:
            subMenu(doctors,specialtys,true);
            break;
        case 8:
            subMenu(patients,true);
            break;
        case 9:
            cout << "Thanks for using Medical Care System" << endl;
            return;
            break;
    }
}

template <class Temp>
void subMenu(MedLinkedList<Temp> &list,bool clear){
    int select = 0;
    Temp t;
    
    if(clear) Clear();
    cout << "Welcome to " << t.getClassName() << " Menu " << endl;
    cout << "-------------------------------" << endl;
    cout << t.getMenu();
    cin >> select;
    select = (int) select;
    
    switch(select){
        case 1:
            addClass(list);
            subMenu(list,true);
            break;
        case 2:
            Clear();
            list.findByID();
            subMenu(list,false);
            break;
        case 3:
            Clear();
            list.findByName();
            subMenu(list,false);
            break;
        case 4:
            Clear();
            list.remove();
            subMenu(list,false); 
        case 5:
            Clear();
            subMenu(list,true);
            break;
        case 6:
            Clear();
            report();
            break;
        case 0:
            menu();
            break;
        default:
            menu();
            break;
    }
}

template <class Temp,class Relation>
void subMenu(MedLinkedList<Temp> &list,MedLinkedList<Relation> &relation,bool clear){
    int select = 0;
    Temp t;
    
    if(clear) Clear();
    cout << "Welcome to " << t.getClassName() << " Menu " << endl;
    cout << "-------------------------------" << endl;
    cout << t.getMenu();
    cin >> select;
    select = (int) select;
    
    switch(select){
        case 1:
            addClass(list);
            subMenu(list,relation,true);
            break;
        case 2:
            Clear();
            list.findByID();
            subMenu(list,relation,false);
            break;
        case 3:
            Clear();
            list.findByName();
            subMenu(list,relation,false);
            break;
        case 4:
            Clear();
            list.remove();
            subMenu(list,relation,true);
        case 5:
            Clear();
            subMenu(relation,true);
            //subMenu(relation,list,true);
            break;
        case 6:
            Clear();
            report();
            break;
        case 0:
            Clear();
            menu();
            //subMenu(list,relation,true);
            break;
        default:
            menu();
            break;
    }
}

template <class Temp,class Source,class Relation>
void subMenu(MedLinkedList<Temp> &list,MedLinkedList<Source> &source,MedLinkedList<Relation> &relation,bool clear){
    int select = 0;
    Temp t;
    
    if(clear) Clear();
    cout << "Welcome to " << t.getClassName() << " Menu " << endl;
    cout << "-------------------------------" << endl;
    cout << t.getMenu();
    cin >> select;
    select = (int) select;
    
    switch(select){
        case 1:
            addClass(list);
            subMenu(list,source,relation,true);
            break;
        case 2:
            Clear();
            list.findByID();
            subMenu(list,source,relation,false);
            break;
        case 3:
            Clear();
            list.findByName();
            subMenu(list,source,relation,false);
            break;
        case 4:
            Clear();
            list.remove();
            subMenu(list,source,relation,false);
            break;
        case 5:
            Clear();
            subMenu(source,true);
            break;
        case 6:
            Clear();
            subMenu(relation,true);
            break;
        case 0:
            menu();
            break;
        default:
            menu();
            break;
    }
}

template <class Temp,class Source>
void getReport(int patientID,MedLinkedList<Temp> &relation,MedLinkedList<Source> &source){
    
    while(!relation.curIsEmpty()){
        Temp r = relation.getTemp();
        int RPID = r.getPatientID();
        int SID = r.getID();
        if(RPID == patientID){
            source.findByID(SID,r.getDate());
        }
        relation.advace();
    }
}

template <class Temp,class Source,class Specialty>
void getReport(int patientID,MedLinkedList<Temp> &relation,MedLinkedList<Source> &source,MedLinkedList<Specialty> &specialty){
    
    while(!relation.curIsEmpty()){
        Temp r = relation.getTemp();
        int RPID = r.getPatientID();
        int SID = r.getID();
        if(RPID == patientID){
            source.findByID(SID);
        }
        relation.advace();
    }
}

void report(){
    int id,m;
    cout << "Please Enter ID: ";
    cin >> id;
    
    id = (int) id;
    
    cout << "------------------------- Patient Details ---------------------------" << endl;
    patients.findByID(id);
    cout << "------------------------- Reports ---------------------------" << endl;
    
    cout << "------------------------- Hospital Report ---------------------------" << endl;
    getReport(id,hospitalReservation,hospitals);
    cout << "------------------------- Clinic Report ---------------------------" << endl;
    getReport(id,clinicsReservation,clinics);
    cout << "------------------------- Labs Report ---------------------------" << endl;
    getReport(id,labsReservation,lab);
    cout << "------------------------- Pharmacy Report ---------------------------" << endl;
    getReport(id,buyingMedicine,pharmacys);
    cout << "------------------------- Rays Report ---------------------------" << endl;
    cout << "------------------------- Blood Bank Report ---------------------------" << endl;
    
    cout << "0- .. Back to Main Menu" << endl;
    cout << "9- .. Quit" << endl;
    cout << "Please Enter Option Number: ";
    cin >> m;
    //t.reservation();
    if(m == 0) subMenu(patients,true);
    if(m == 9) return;
    
}

/*template <class Temp>
void report(MedLinkedList<Temp> &list){
    Temp t;
    int id,m;
    cout << "Please Enter ID: ";
    cin >> id;
    bool found = false;
    while(!list.curIsEmpty()){
        t = list.getTemp();
        int TID = t.getID();
        if(TID == id){
            cout << t.print() << endl;
            //--------- Clinic -----------//
            cout << "------------------------- Clinic ---------------------------" << endl;
            getReport(id,clinicsBooking,clinics);
            found = true;
            break;
        }
        if(!found) cout << t.getClassName() << " with ID: " << id << " not found!" << endl;
        list.advace();
    }
}*/

