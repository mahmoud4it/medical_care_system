/* 
 * File:   mainMenu.cpp
 * Author: admin
 * 
 * Created on 23 December 2022, 18.38
 */

#include <iostream>
#include "mainMenu.h"

using namespace std;

MainMenu::MainMenu() {
    //patient.setFunc(this);
}

MainMenu::MainMenu(const MainMenu& orig) {
}

MainMenu::~MainMenu() {
}

void MainMenu::Clear(){
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

void MainMenu::firstMenu() {
    int select = 0;
    
    //Func func = &(MainMenu::firstMenu); 
    
    string menu = ""
            "1- Hospital\n"
            "2- Labs\n"
            "3- x-Rays\n"
            "4- Pharmacy\n"
            "5- Blood Bank\n"
            "6- Clinic\n"
            "7- Doctors\n"
            "8- Patients\n"
            "9- Quit\n"
            "Please Enter Option Number: ";
    
    Clear();
    cout << menu;
    cin >> select;
    
    switch(select){
        case 7:
            //doctor.getMenu(&(MainMenu::firstMenu()));
            break;
        case 8:
            //patient.getMenu(&(MainMenu::firstMenu()));
            break;
        case 9:
            return;
            break;
    }
}