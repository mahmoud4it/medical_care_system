/* 
 * File:   Menu.cpp
 * Author: admin
 * 
 * Created on 23 December 2022, 15.34
 */

#include <iostream>
#include "Menu.h"

using namespace std;

template <class Temp>
Menu<Temp>::Menu() {
    //mainMenu = m;
}

template <class Temp>
Menu<Temp>::Menu(const Menu& orig) {
}

template <class Temp>
Menu<Temp>::~Menu() {
}


/*template <class Temp>
int Menu<Temp>::invoke(function func)
{
    return func();
}*/

template <class Temp>
void Menu<Temp>::setFunc(){
    //funcs = fun;
}

template <class Temp>
void Menu<Temp>::add(MedLinkedList<Temp> &list){
    Temp t;
    t.add();
    list.insert(t);
}

template <class Temp>
void Menu<Temp>::Clear()
{
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

/*
template <class Temp>
void Menu<Temp>::getMenu(){
    int select = 0;
    string menu = ""
            "1- Hospital\n"
            "2- Labs\n"
            "3- x-Rays\n"
            "4- Pharmacy\n"
            "5- Blood Bank\n"
            "6- Clinic\n"
            "7- Doctors\n"
            "8- Patients\n"
            "9- Quit"
            "Please Enter Option Number: ";
    
    Clear();
    cout << menu;
    cin >> select;
    
    switch(select){
        case 1:
            getSubMenu(list);
            break;
        case 7:
            Clear();
            getSubMenu(dl);
            break;
        case 8:
            Clear();
            getSubMenu(pl);
            break;
        case 9:
            return;
            break;
        default:
            Clear();
            cout << menu;
            break;
    }
}
*/

template <class Temp>
void Menu<Temp>::getMenu(void (*func)()){
    int select = 0;
    Temp t;
    /*string menu = ""
            "1- Add "+t.getClassName()+"\n"
            "2- Find "+t.getClassName()+" By ID\n"
            "3- Find "+t.getClassName()+" By Name\n"
            "3- Delete "+t.getClassName()+"\n"
            "0- .. Back to Main Menu\n"
            "Please Enter Option Number: ";*/
    
    Clear();
    cout << t.getMenu();
    cin >> select;
    select = (int) select;
    
    switch(select){
        case 1:
            add(list);
            getSubMenu(list,func);
            break;
        case 2:
            list.findByID();
            break;
        //case 3:list.remove();
        case 0:
            func();
            break;
        default:
            Clear();
            getMenu(func);
            break;
    }
}

template <class Temp>
void Menu<Temp>::getSubMenu(MedLinkedList<Temp> &list,void (*func)()){
    int select = 0;
    Temp t;
    /*string menu = ""
            "1- Add "+t.getClassName()+"\n"
            "2- Find "+t.getClassName()+" By ID\n"
            "3- Find "+t.getClassName()+" By Name\n"
            "3- Delete "+t.getClassName()+"\n"
            "0- .. Back to Main Menu\n"
            "Please Enter Option Number: ";*/
    
    Clear();
    cout << t.getMenu();
    cin >> select;
    select = (int) select;
    
    /*if(select == 1){
        add(list);
    }
    
    if(select == 2){
        list.findByID();
    }
    
    if(select == 3){
        //list.findByID();
    }
    
    if(select == 0){
        mainMaue();
    }*/
    
    switch(select){
        case 1:
            add(list);
            getSubMenu(list,func);
            break;
        case 2:
            list.findByID();
            break;
        //case 3:list.remove();
        case 0:
            getMenu(func);
            break;
        default:
            Clear();
            getMenu(func);
            break;
    }
}

template <class Temp>
MedLinkedList<Temp> Menu<Temp>::getList(){
    return list;
}

template <class Temp>
MedStack<Temp> Menu<Temp>::getStack(){
    return stack;
}

template <class Temp>
MedQueue<Temp> Menu<Temp>::getQueue(){
    return queue;
}