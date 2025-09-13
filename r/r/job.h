#pragma once
#include <string>
using namespace std;


class job {
    
    
    private :
    
    string comp , major ;
    int level , id ;
  
    
public:
    
    job();
    ~job();
    void set_comp();
    void set_major();
    void set_level();
    void set_id();
    
    string get_comp();
    string get_major();
    int get_level();
    int get_id();
    
    
};
