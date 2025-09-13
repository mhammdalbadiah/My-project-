#include <iostream>
using namespace std ;








// to creat to do list and print it
 void to_do_list (){





 int i = 0 ;

 string c [8] ;  // array c the size of it is 8
 char choice ;    // char for the loop  in line 25
 int x,y, z ;     // for the " if statment "
 
     while (true) {    // the loop

    cout << "welcome to the to do list  ! " << endl;         //
    cout << " enter the thing , the day  " << endl;          //      <------------  the menu of the program !
    cout << " to creat a new to do list \"1\" " << endl;     //
    cout << " to print your to do list \"2\" " << endl;      //
    cin >> x ;   // here the user enter the value of the switch statment

  switch (x) { // switch statment
    
    
    
    
    case 1:    // when the user enter  " 1 "


            for (int i = 0; i < 8; i++) {     // for loop to enter 8 lists


                cout << "Enter your to do list : ";
                cin >> c[i];
                cout << "You have only " << (7 - i) << " spaces left." << endl;
            }

            cout << "\nYour final list:\n";




            for (int i = 0; i < 8; i++) {   // for loop to print lists
                cout << c[i] << endl;
            }
            break;



            case 2 :  // when the user enter  " 2 "  for switch statment
       

                cout << "\n\n\n\n\n\n\n\n\n\n" << endl;    // to print space between case 1 & 2 after the program runs


              for (int i = 0; i < 8; i++) {   // for loop to print the list
                cout  <<  c[i] << endl;
            }
 

              cout << "\n\n\n\n\n\n\n\"" << endl;


            }

       

     

     cout << "do you want do it again ?  " << endl;  // to enter the value of the loop
     cin >> choice ;


     if (choice == 'n' || choice == 'N' )    // if the user enter n or N the program will be stop
     break;
    
     }








}


            /* ^
               |
               |   up there is first function
               |
               |     */






  // to print the biggest number
 void the_biggest_num () {







    while (true) {       // while loop
    int x , y , z ; // the num variables
    char choice ;   // loop variable

    cout << "enter the first number " << endl;
    cin >> x ;

    cout << "enter the second number" << endl;
    cin >> y ;

    cout << "enter the third number " << endl;
    cin >> z;

    
   
     if (x>y && x > z ) {                                  // that is if statment for the program
                                                          // if x = 1 , y = 2 , z = 3
                                                          // find the output
        cout << "the largest number : " << x <<endl;
        
        if ( y == z ) {

            cout << " invalid  numbers ! " << endl;
            cout <<"\t" <<  y  <<"\t" <<  z <<endl;
        }

    }
    else if ( y > x && y > z ) {


        cout << "the largest number : " << y << endl;

        if ( x == z ) {


            cout << " invalid  numbers !" << endl;
            cout << "\t" << x <<"\t" <<  z << endl;


        }


    }
    else if ( z > x && z > y ) {


        cout << "the largest number :" << z << endl;

        if ( x == y ) {


            cout << "  invalid  numbers ! " <<endl;
            cout << "\t" << x <<"\t" << y <<endl;


        }

    }
    else if ( z == x && z == y ) {

        cout << " invalid  numbers ! " << endl;

        if ( x == y ) {


            cout << " invalid  numbers ! " << endl;
            cout <<"\t" <<  x << "\t" << y << endl;


        }


    }
    else if ( z == x || z == y ) {

        cout << " invalid  numbers !! " << endl;

        if ( x == y ) {


            cout << " invalid  numbers ! " <<endl;
            cout << "\t" << x <<"\t" <<  y << endl;
        }


    }     // here the if statment end


    cout << "do you want to calculate again ? (y,n) " << endl;
    cin >> choice ;     // for the loop


    if (choice == 'n' || choice =='N' )
    break;

    }

      
 }

         /*    ^
               |
               |   up there is second  function
               |
               |     */



   // to print statment
  void print(string x ) {

    
     cout << x << endl;
    

    // this function is replace of "   cout << "hello world "  << endl;   "
   
   
    // we can  ues
    

    // print("hello world")






  }


       /*      ^
               |
               |   up there is third function
               |
               |     */



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


 


    /*         ^
               |
               |   up there is fourth  function
               |
               |     */


// to calculate BMI
void bmi() {



 double weight, height;
    char g;

    while (true) {
        cout << "Enter your weight (kg):\n";
        cin >> weight;

        cout << "Please enter your height in meters:\n";
        cin >> height;

        double bmi = weight / (height * height);    // let weight = 85 , height = 1.85
        cout << "Your BMI is: " << bmi << endl;     //  the calculation will be like this
                                                    /*
                                                               85
                                                        ----------------   =  24.8356
                                                          1.85 *  1.85
                                                          
                                                          
                                                         
                                                         
                                                          
                                                  */



        if (bmi < 18)                         // will be  " normal weight "
            cout << "Underweight" << endl;
        else if (bmi >= 18 && bmi < 25)
            cout << "Normal weight" << endl;
        else if (bmi >= 25 && bmi < 30)
            cout << "Overweight" << endl;
        else
            cout << "Obese" << endl;


                                                    

        cout << "Do you want to calculate again? (y/n): ";  // for the loop
        cin >> g;

        if (g == 'n' || g == 'N')
            break;
    }
}




     /*        ^
               |
               |   up there is fifth function
               |
               |     */





 // to calculate your GPA
 void gpa () {



    double oldGPA, newGPA;
    double oldHours, newHours;

    cout << "Enter your current GPA (out of 5): ";
    cin >> oldGPA;

    cout << "Enter your completed credit hours: ";
    cin >> oldHours;

    cout << "Enter your new semester GPA (out of 5): ";
    cin >> newGPA;

    cout << "Enter your new semester credit hours: ";
    cin >> newHours;

    double totalPoints = (oldGPA * oldHours) + (newGPA * newHours);
    double totalHours = oldHours + newHours;

    double updatedGPA = totalPoints / totalHours;

    cout << "\nYour updated GPA is: " << updatedGPA << " out of 5.0\n\n\n\n" << endl;




    }




    
      /*       ^
               |
               |   up there is sixth function
               |
               |     */
 









         /*
               |
               |   down  there is main function
               |   you can test in function there
               |   only delete the //
               |
               ٧       */









    int multiplay (int x , int y ) {    // this function will take two va

                                    

        return x * y ;


    }




















int main ()

{

 // to_do_list () ;

//the_biggest_num();

 //print ("hello world " ) ;

//grade();

 // bmi();

 // biggest_even_or_odd();


 // gpa();



 // cout <<   multiplay(5,5) << endl ;

 // any function have return value we must ues cout << name of the function ;
 // to print the value

  




   return 0 ;

}


