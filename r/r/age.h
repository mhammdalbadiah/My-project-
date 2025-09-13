#pragma once
#include <string>
using namespace std;


class age {
    
    
private:
    
    int ag ;
    string sex , gen ;
    
    
    
public:
     
    age();
    ~age();
    void set_ag();
    void set_sex();
    void set_gen();
    int get_ag();
    string get_sex();
    string get_gen();
    
    
};
