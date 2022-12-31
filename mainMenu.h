/* 
 * File:   mainMenu.h
 * Author: admin
 *
 * Created on 23 December 2022, 18.38
 */
#include "Menu.cpp"
#include "Major.h"
#include "Doctor.h"
#include "Patient.h"

class MainMenu {
public:
    Menu<Patient> patient;
    Menu<Doctor> doctor;
    Menu<Major> major;
    MainMenu();
    MainMenu(const MainMenu& orig);
    ~MainMenu();
    void Clear();
    void firstMenu();
private:
    //typedef void (MainMenu::*Func)();
};


