

#include <iostream>
#include <string>
#include <cmath>
using namespace std ; 


 class student {


     private :
      
      int marks[10]; 
      int  id; 
      int subject ; 

      public : 

      float sum_marks () {

          float sum = 0;
           int  num ;
          float mark[10] ;


          cout << "enter how many marks do you want to sum : " << endl; 
          cin >> num ; 
           for (int i = 1  ; i <= num ; i++ ) {

             cout << "enter marks number " << i << endl;
             cin >> marks[i] ; 
             sum = sum + marks[i] ; 
           }

           return sum ; 
      }


      void print_marks () { 

         
         for (int i = 1 ; i <= 10 ; i++ ) { 

             cout << marks[i] << endl;

         }

      }


 };




  int main() { 





     student s1  , s2 , s3 ; 
     cout << s1.sum_marks() << endl;
     cout << s2.sum_marks() << endl;
     cout << s3.sum_marks() << endl;
     s1.print_marks() ;
     s2.print_marks() ;
     s3.print_marks() ;
     


     return 0 ; 
  }