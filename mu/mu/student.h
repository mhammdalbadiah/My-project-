//
//  student.h
//  mu
//
//  Created by  mohammd al-badiah on 20/08/2025.
//

#pragma once
#include <string>
using namespace std ;


class student{
    
private:
    
    int id , level  ;
    string name ;
    float gpa ; 
    
    public :
    
    student();
    student(int x , int y ) ; 
    ~student();
    void set_id();
    void set_level();
    void set_gpa();
    void set_name();
    
    int get_id();
    int get_level();
    float get_gpa();
    string get_name();
    
    
    
};


class coures {
    
    
private:
    
    int coures_code ;
    string coures_name;
    
    
public:
    
    coures();
    ~coures();
    void set_coures_code();
    void set_coures_name();
    
    int get_coures_code();
    string get_coures_name();
};
