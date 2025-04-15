#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include "string.h"
class Employee{

private:
    int id;
    String name;
    Employee * pManager;
    //
    Employee(const Employee& rhs);
    Employee& operator=(const Employee& rhs);
public:
    Employee(int id , String name , /* const */ Employee *pManager);
    // Employee() {  } is not generated!
    // Employee(const Employee& rhs) { /* memberwise copy */}
    // ~Employee() {  }

    // Employee& operator=(const Employee& rhs) { /*memberwise copy return *this; */}
    // Employee* operator&() { return this;}
    // const Employee * operator&() const { return this; }

    int getId();
    String getName();
    Employee *getManager();

    bool isManager();
    
};

#endif