#include <iostream>
using namespace std ;
 
int main (){
    int   n , m   ; 
    string operation ; 
    cout << "Input number n:  "  ; 
    cin >> n ;
    cout << "Input number m:  " ; 
    cin >> m ; 

    cout <<  "Input common mathematical operation : " ; 
    cin >> operation ; 

    if ( operation == "+" ) {
        cout << n+m << endl ;  
    }
    else if ( operation == "-") {
        cout << n-m << endl  ; 
    }
    else if ( operation == "*") {
        cout << n*m << endl ;

    }
    else if ( operation == "/") {
        if ( m!=0){
        cout << n/m << endl ; 
    }
       else {
        cout << " No answer "; 
       }

        
    }
    else if (operation == "%") {
    if (m != 0) {
        cout << n % m << endl;
    } else {
        cout << "No answer" << endl;
      }
    }
   
    else if ( operation == "++n"){
        cout <<  ++n ; 
    }
    else if ( operation == "++m"){
        cout <<  ++m ; 
    }
     else if ( operation == "--n"){
        cout <<  --n ; 
    }
    else if ( operation == "--m"){
        cout <<  --m ; 
    }
    
    

    else {
        cout << " Unknown operatior " ; 

    }




}