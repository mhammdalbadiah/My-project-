//
//  task.cpp
//  t
//
//  Created by  mohammd al-badiah on 21/08/2025.
//

#include "task.h"
#include <iostream>
#include <string>
using namespace std;
/*
 string taskname , des , day ;
 int id ;
 */

task::task(){
    
    taskname = "None";
    des = "None" ;
    day = "None";
    id = 0 ;
}

task::~task(){
    
    cout << "object task DAED " << endl;
    
}

// setter functions

/*void setasdone();
 void print_task();
 void set_taskname();
 void set_des();
 void set_day();

 */

void task::setasdone(){
    cout << "task DONE" << endl;
}

void task::print_task(){
    
    get_taskname();
    get_des();
    get_day();
    
}

void task::set_taskname(){
    
    string tn  ;
    cout << "enter your task name : " << endl;
    cin >> tn ;
    
    taskname = tn ;
}

void task::set_des(){
    
    string ds ;
    cout << "enter your task description : " << endl;
    cin >> ds ;
    
    des = ds ;
}

void task::set_day(){
    
    string d ;
    cout << "enter which day 'll be the task : " << endl;
    cin >> d ;
    day = d ;
}



// getter functions

/*
 string get_taskname();
 string get_des();
 string get_day();
 */


string task::get_taskname(){
    return taskname;
}
string task::get_day(){
    return day;
}
string task::get_des(){
    return des;
}



