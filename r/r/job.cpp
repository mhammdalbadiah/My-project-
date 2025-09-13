#include "job.h"
#include <iostream>
using namespace std;


job::job(){
    
    /*
     string comb , major ;
     int level , id ;
   */
    
    comp = "none" ;
    major = "none" ;
    level = 1 ;
    id = 000000000;
    
}

job::~job(){
    
    cout << "have a nice day ! " << endl;
    
}


 // set


void job::set_comp(){
    
    string c ;
    cin >> c;
    comp = c ;
}

void job::set_major(){
    
    string m ;
    
    cin >> m ;
    major = m ;
    
}

void job::set_level(){
    
    int l ;
    cin>>l;
    level = l ;
}

void job::set_id(){
    
    int i ;
    cin >> i ;
    id = i ;
}


//get


int job::get_id(){
    return id ;
}
int job::get_level(){
    return level ;
    
}

string job::get_comp(){
    return comp;
}

string job::get_major(){
    return major;
}



