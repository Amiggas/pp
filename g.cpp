#include <iostream> 
 using namespace std ; 

 int main (){
    int p , r , t ; 

   
    cout << "Input principal amount :" ;
    cin >> p ;
    cout << endl ;
    
    cout << "Input rate of interest :" ;
    cin >> r ;
    cout << endl ; 

     cout << "Input time (in years) :" ;
    cin >> t ;
    
    cout << "Simple Interst is " << (p*r*t)/100 <<"." ;


 }