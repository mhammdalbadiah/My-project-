#include <iostream>
using namespace std ; 








// to creat to do list and print it 
void to_do_list (){

 int i = 0 ; 

 string c [8] ; 
 char choice ; 
 int x,y, z , edit , ok ;  
 
     while (true){
      

    cout << "welcome to the to do list  ! " << endl; 
    cout << " enter the thing , the day  " << endl; 
    cout << " to creat a new to do list \"1\" " << endl;
    cin >> x ; 

     for (int i = 0; i < 8; i++) {
    cout << "Enter your to do list : ";
    cin >> c[i];
    cout << "You have only " << (7 - i) << " spaces left." << endl;
        
        }
 
    cout << "\nYour final list:\n";
      for (int i = 0; i < 8; i++) {
       cout << c[i] << endl;
     }
            

     cout << "do you want do it again ?  " << endl;
     cin >> choice ; 


     if (choice == 'n' || choice == 'N' ) 
     break;
    
     }

}






  







 




   // to print statment
  void print(string x ) {

    
     cout << x << endl;




  }






// to calculate your grade in 1 subject
void grade () {

            

                double a1 ,a2,q1,q2,m1,f1,t1 ;   
                char ccc ; 

                while (true) {
        

               cout << "enter the first Assignment : " << endl; 
               cin >> a1 ;

               cout << "enter the second Assignment : " <<endl; 
               cin >> a2 ; 

               cout << " enter the first quiz : " << endl; 
               cin >> q1 ; 

               cout << " enter the second quiz " << endl; 
               cin >> q2 ; 

               cout << " enter the midterm : " <<endl;
               cin >> m1 ; 

               cout << " enter the final : " << endl;
               cin >> f1 ; 

      
               (t1 = a1 + a2 + q1 + q2 + m1 + f1 ) ; //to calculate the grade  


              if ( t1 < 60 ) { // F

               cout << " your grade is \" F \" " << endl; 

              } 

                if ( t1 >= 60 && t1 < 64){ // D

               cout << " your grade is \" D \" " << endl; 

              }

               if ( t1 >= 65 && t1 < 69 ){  // D+

                cout << " your grade is \" D+ \" " << endl; 

              }

               if ( t1 >= 70 && t1 < 74 ) {  // C 

               cout << " your grade is \" C \" " << endl; 

               }

               if (  t1 >= 75 && t1 < 79 ) {  // C+

               cout << " your grade is \" C+ \" " << endl; 

              }

                if (  t1 >= 80 && t1 < 84 ){  // B
  
                cout<< " your degree is \" B \" " << endl; 

              }

                if ( t1 >= 85 && t1 < 89 ) {  // B+

               cout << " your degree is \" B+ \" " << endl; 
              }

               if( t1 >= 90 && t1 < 94 ){  // A

               cout << " your degree is \" A \" " << endl; 

              }

               if ( t1 >= 95 && t1 <= 100) {  // A+

                cout << " your degree is  \" A+ \" " << endl; 
              }
              
        


          

        
               cout << " your grade is : " << t1 <<endl;  // to print the grade 


                cout << " do you want to calculate again ? " << endl; 
                cin >> ccc ; 

                if (ccc == 'n' || ccc == 'N' ) 
                break; 
                }
    
}





// to calculate BMI 
void bmi() { 



 double weight, height;
    char g;

    while (true) {
        cout << "Enter your weight (kg):\n";
        cin >> weight;

        cout << "Please enter your height in meters:\n";
        cin >> height;

        double bmi = weight / (height * height);
        cout << "Your BMI is: " << bmi << endl;

        if (bmi < 18)
            cout << "Underweight" << endl;
        else if (bmi >= 18 && bmi < 25)
            cout << "Normal weight" << endl;
        else if (bmi >= 25 && bmi < 30)
            cout << "Overweight" << endl;
        else
            cout << "Obese" << endl;

        cout << "Do you want to calculate again? (y/n): ";
        cin >> g;

        if (g == 'n' || g == 'N')
            break;
    }
}


// calculate 2 numbers and print the largest and print even or odd 
  void biggest_even_or_odd () {

  



      int xxx,yyy,ttt ; 
      int zzz  ;
      char rrr ; 

     while (true ) {

     zzz =2 ;

    cout << "enter the first number :" <<endl;
    cin>>xxx;


    cout<<"enter the second number :" <<endl; 
    cin >> yyy ; 

    if(xxx>yyy) {

        cout << "\n\nthe first number is larger than second " <<endl;

         

          int remainder = xxx % zzz ;

       

        if ( remainder == 0  ) {

        

            cout << "\n\neven \n\n" << endl;
        }
         else if ( remainder != 0) {

        cout << "\n\n odd \n\n" << endl; 

         }
    }
    else if (yyy > xxx ) {


    cout << "\n\nthe second number is larger than the first " << endl;

     int remainder = xxx % zzz ;

     if ( remainder != 0 ) {

        cout << "\n\nodd\n\n" << endl; 
        
     }else if ( remainder == 0 ) {
      cout << "\n\n even\n\n " << endl; 
     }

     


    


    }

     cout << " do you want to calculate again ? ( y , n ) " << endl; 
     cin >> rrr ; 


     if ( rrr == 'n' || rrr == 'N') 
     break; 

}


  }



 /// to calculate GPA 
 void gpa () {



    double oldGPA, newGPA;
    int oldHours, newHours;

    cout << "Enter your current GPA (out of 5): ";
    cin >> oldGPA;

    cout << "Enter your completed credit hours: ";
    cin >> oldHours;

    cout << "Enter your new semester GPA (out of 5): ";
    cin >> newGPA;

    cout << "Enter your new semester credit hours: ";
    cin >> newHours;

    double totalPoints = (oldGPA * oldHours) + (newGPA * newHours);
    int totalHours = oldHours + newHours;

    double updatedGPA = totalPoints / totalHours;

    cout << "\nYour updated GPA is: " << updatedGPA << " out of 5.0\n\n\n\n" << endl;




    }

 

  
  












   int main () { 

 

  gpa();






    //to_do_list();






   return 0 ;

}


