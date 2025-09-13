//
//  bq.cpp
//  as
//
//  Created by  mohammd al-badiah on 14/08/2025.
//


#include "bq.h"
#include <iostream>
#include <string>
using namespace std;


  /*
   
    
   void checkprice();
   
   void entername();
   void proudect_type();
   // ***
   
   int p_price();
   string p_name();
   string type();
   
   */


 /*
  
  int cardnum = 4023 , price;
  string name , type ;
  
  */

   
 





void bq::checkprice(){
    
    cout << "how much proudect : " << endl;
    int o;
    cin >> o ;
    
    int i = 0 ;
    int store ;
    do {
        
        i += 1 ;
        
        cout << "prodect number : "<<i << endl;
        cin >> store ;
        
        
        
        
        
    }while( i <= o);
    
    
    price = store ;
    
    
}


void bq::entername(){
    
    int f ;
 
    cout << "etner how many name do u want to write :  " << endl;
    cin >> f;
    
    string n[f] ;

    
    for (int i = 0 ; i <=f;i++){
        
        cout << "name number : " << i+1<<endl;
        cin >> n[i];
    }
}



void bq::checkcard(){
    
    
    int x ;
    
    cin>> x ;
    
    
    switch (x) {
        case 4023:
            
            cout << "True ! " << endl;
            cout << " You now in onwer level " << endl;
            cout << " for  " << endl;
            cout << " put the prices choes /""1""/" << endl;
            cout << " put the names of the proudects /""2""/" << endl;
            cout << " put the type of proudects /""3""/" << endl;
            int y ;
            cin >> y  ;
             
            switch (y) {
                case 1:
                    
                    checkprice();
    
                    break;
                    
                    
                    
                case 2 :
                    
                    
                    
                    break;
                    
                    
                case 3 :
                    
                    
                    break;
                    
                    
                default:
                    break;
            }
            break;
            
            
            
            
            
            
        default:
            
            cout << "wrong number ! " << endl;
            break;
    }
}
