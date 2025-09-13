#include "student.h"
#include <string>
#include <iostream>
using namespace std ;


/*
 void set_id();
 void set_level();
 void set_gpa();
 void set_name();
 
 
 */




student::student(){
    
    name = "none";
    id = 0 ;
    level = 0 ;
    gpa = 0.0;
    
}

student::student(int x , int y ) : id (x) , level (y) {

}

student::~student(){
    
    cout << "object student DEAD " << endl;
}

void student::set_id(){
    
    int i ;
    
    cout << "etner your id : " << endl;
    cin >> i;
    
    id = i ; 
}


void student::set_level(){
    
    int l ;
    
    cout << "enter your level :" << endl;
    cin >> l;
    
    level= l ;
}

void student::set_gpa(){
     
    float g ;
    
    cout << "enter your GPA : " << endl;
    cin >> g;
    
    gpa = g ;
}

void student::set_name(){
    string n ;
    
    cout << "enter your name : " << endl;
    cin >> n ;
    
    name = n ; 
}


// getter now

/*int get_id();
 int get_level();
 int get_gpa();
 string get_name();
 */


int student::get_id(){
    
    return id ;
}

float student::get_gpa(){
    return gpa ;
}

string student::get_name(){
    return name ;
}

int student::get_level(){
    
    return level ;
}


// second class " coures "


coures::coures(){
    
    coures_code = 000 ;
    coures_name = "none" ;
}
 

coures::~coures(){
    
    cout << "object courea DEAD " << endl;
}
  
void coures::set_coures_code(){
    
    int c ;
    
    cout << "enter your coures code : " << endl;
    cin >> c;
    
    coures_code = c ;
}

void coures::set_coures_name(){
    
    string n ;
    
    cout << "enter your coures name : " << endl;
    cin >> n ;
    
    coures_name = n ;
}

int coures::get_coures_code(){
    
    return coures_code;
}

string coures::get_coures_name(){
    
    return coures_name;
}


