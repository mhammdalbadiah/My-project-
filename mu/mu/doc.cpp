//
//  doc.cpp
//  mu
//
//  Created by  mohammd al-badiah on 20/08/2025.
//

#include "doc.h"
#include <iostream>
#include <string>
using namespace std ;







doctor::doctor(){
    
    id = 000 ;
    name = "None" ;
    major= "None";
    coures = "None";
    
}

doctor::~doctor(){
    
    cout << "object doctor DEAD " << endl;
    
}

void doctor::set_Did(){
    
    int d ;
    cout << "enter your id number : " << endl;
    cin >> d ;
    
    id = d ;
}

void doctor::set_Dname(){
    
    string dn ;
    
    cout << "enter your name : " << endl;
    cin >> dn ;
    
    name = dn ;
}

void doctor::set_Dmajor(){
    
    string m ;
    
    cout << "enter your major : " << endl;
    cin >> m ;
    
    major = m;
}

void doctor::set_Dcoures(){
    string c ;
    
    cout << "enter the coures you have : " << endl;
    cin >> c;
    
    coures = c ;
}


int doctor::get_Did(){
    
    return id;
    
}

string doctor::get_Dname(){
    
    return name;
}

string doctor::get_Dmajor(){
    return major;
}

string doctor::get_Dcoures(){
    return coures ;
}
 



// second class " salary "


/*
 salary();
 ~salary();
 void set_salary();
 double get_salary();
 
};
*/


salary::salary(){
    
    money = 0.0;
}

salary::~salary(){
    
    cout << "object salary DEAD" << endl;
    
}

void salary::set_salary(){
    
    double s ;
    
    cout << "etner the salary : " << endl;
    cin >> s;
    
    money = s ;
}

double salary::get_salary(){
    
    return money;
}


