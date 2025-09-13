#pragma once
#include <iostream>
#include <string>
#include "age.h"
using namespace std ;



age::age(){
    
    /*
     int ag ;
     string sex , gen ;
     */
    ag = 0 ;
    sex = "none";
    gen = "none";
    
}

age::~age(){
    
    cout << "thanks ! " << endl;
    
}

void age::set_ag(){
    
    int a ;
    cin >> a ;
    ag = a ;
}

void age::set_gen(){
    
    string g ;
    cin >> g ;
    gen = g ;
}

void age::set_sex(){
    
    string s ;
    cin>>s ;
    sex = s ;
}

int age::get_ag(){
    
    return ag ;
}

string age::get_gen(){
    
    return gen ;
}

string age::get_sex(){
    
    return sex ;
}


