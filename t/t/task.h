//
//  task.h
//  t
//
//  Created by  mohammd al-badiah on 21/08/2025.
//

#pragma once
#include <string>
using namespace std ;

class task {
    
    
    private :
    
    string taskname , des , day ;
    
    
    public :
    
    task();
    ~task();
    void setasdone();
    void print_task();
    void set_taskname();
    void set_des();
    void set_day();
    
    string get_taskname();
    string get_des();
    string get_day();
    
    
    
    
    
};
