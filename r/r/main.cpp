#include <string>
#include <iostream>
#include "age.h"
#include "job.h"
 using namespace std;

int main(){
    
    int x , y ;
    cout << " ********** WELLCOME *********" << endl;
    cout << "    FILL     YOUR      INFO   " << endl;
    cout << " *****************************" << endl;
    
    cout << "enter how many people you want : " << endl;
    cin >> x ;
    cout << "enter how many jobs : "<< endl;
    cin >> y ;
    
    
    
    
    x = x - 1;
    y = y - 1;
    
    
    
    job j[y];
    age a[x];
    
    
    cout << " please enter /""age""/ " << endl;
    for (int i = 0 ; i <= x ; i++ ){
        cout << "num : " << i+1 << endl;
        cout << "entre your age :" << endl;
        a[i].set_ag();
        cout << "enter your gen :"<<endl;;
        a[i].set_gen();
        cout << "enter your sex :" <<endl;
        a[i].set_sex();
    }
    
    cout << "please enter /""job""/"<<endl;
    
    for (int i = 0; i<=y ; i++ ){
        
        cout << "num :" << i+1 << endl;
        
        cout << "etner your id : " << endl;
        j[i].set_id();
        cout << "enter your company : " << endl;
        j[i].set_comp();
        cout << "enter your level : " << endl;
        j[i].set_level();
        cout << "enter your major : " <<endl;
        j[i].set_major();
    }
    
    int q;
    cout << " so.... if u want print the info ! " << endl;
    cout << " press 1  , if don't press 0 " << endl;
    cin >> q;
      
     
    switch (q) {
        case 1:
            
            for (int i = 0 ; i <= x ; i++ ){
                
                a[i].get_ag();
                a[i].get_gen();
                a[i].get_sex();
            }
            
            for (int i = 0; i<=y ; i++ ){
                
                j[i].get_id();
                j[i].get_comp();
                j[i].get_level();
                j[i].get_major();
            }
            
            
            
            
            
            break;
            
        default:
            break;
    }
   
    
    return 0;
    
}
