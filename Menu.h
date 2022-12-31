/* 
 * File:   Menu.h
 * Author: admin
 *
 * Created on 23 December 2022, 15.34
 */

//#include <functional>
#include "MedLinkedList.cpp"
#include "MedStack.cpp"
#include "MedQueue.cpp"
//#include "mainMenu.h"

using namespace std;

template <class Temp>

class Menu{
public:
    Menu();
    Menu(const Menu& orig);
    ~Menu();
    void setFunc();
    void add(MedLinkedList<Temp> &list);
    void Clear();
    //void firstMenu();
    void getSubMenu(MedLinkedList<Temp> &list,void (*func)());
    void getMenu(void (*func)());
    //void getSubMenu(MedLinkedList<Temp> &list,void (*func)());
    MedLinkedList<Temp> getList();
    MedStack<Temp> getStack();
    MedQueue<Temp> getQueue();
private:
    //----------- Patient ------------//
    MedLinkedList<Temp> list;
    MedStack<Temp> stack;
    MedQueue<Temp> queue;
    //MainMenu mainMenu;
    //typedef mainMenu Func;
    //typedef function<void> Func;
    //Func funcs;
    //typedef void (*Func)();
    //Func funcs;
};


