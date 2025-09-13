#pragma once
#include <string>
using namespace std;


class bq {
    
    
    private :
    int cardnum = 4023 , price;
    string name , type ;
    
    
    public :
    
    void checkcard ();
    void checkprice();
    void entername();
    void proudect_type();
    // ***
    
    int p_price();
    string p_name();
    string p_type();
    
};
