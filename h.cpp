#include <iostream> 
 using namespace std ; 

 int main (){
    double w , h ; 

    cout << "Input your weight (in kg) :" ; 
    cin >> w ; 
    cout << endl ; 


    cout << "Input your height (in meters) :" ; 
    cin >> h ; 

    cout << "Your BMI is " << w/(h*100*h*100)*10000 ; 
 }