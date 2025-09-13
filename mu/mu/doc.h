//
//  doc.h
//  mu
//
//  Created by  mohammd al-badiah on 20/08/2025.
//

#pragma once
#include <string>
using namespace std;


class doctor {
    
    
private:
    
    int id  ;
    string name , major , coures ;
    
    public :
    
    doctor();
    ~doctor();
     
    void set_Did();
    void set_Dname();
    void set_Dmajor();
    void set_Dcoures();
    
    int get_Did ();
    string get_Dname();
    string get_Dmajor();
    string get_Dcoures();
    
};

class salary {
    
    private :
    
    double money ;
    
    public :
    
    salary();
    ~salary();
    void set_salary();
    double get_salary();
    
};
