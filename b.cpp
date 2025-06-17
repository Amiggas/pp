#include <iostream>
using namespace std ;

int main (){
    int n , m ; 
    string op ;
    cout << " Input number n:  " ; 
    cin >> n ; 

    cout << " Input number m:  " ; 
    cin >> m ; 


    cout << " Choose a operator:" ;
    cin >> op ;

    if( op=="+=" ){
        cout <<   "Same as: " << n << " + " <<  m << endl << "It is equal to: " << n+m ;
    }
    if( op=="-=" ){
        cout <<   "Same as: " << n << " - " <<  m << endl << "It is equal to: " << n-m ;
    }
    if( op=="*=" ){
        cout <<   "Same as: " << n << " * " <<  m << endl << "It is equal to: " << n*m ;
    }
    if( op=="/=" ){
        cout <<   "Same as: " << n << " / " <<  m << endl << "It is equal to: " << n/m ;
    }
    if( op=="%=" ){

        cout <<   "Same as: " << n << " % " <<  m << endl << "It is equal to: " << n % m ;
    }
    if( op=="&=" ){
        cout <<   "Same as: " << n << " & " <<  m << endl << "It is equal to: " <<  (n & m) ;
    }
    if( op=="|=" ){
        cout <<   "Same as: " << n << " | " <<  m << endl << "It is equal to: " << (n | m) ;
    }
   if( op=="^=" ){
        cout <<   "Same as: " << n << " ^ " <<  m << endl << "It is equal to: " <<  (n ^ m) ;
    }
    if( op==">>" ){
        cout <<   "Same as: " << n << "  >> " <<  m << endl << "It is equal to: " << (n >> m);
    }
     if( op=="<<" ){
        cout <<   "Same as: " << n << " << " <<  m << endl << "It is equal to: " << (n << m);
    }
    else {
        cout << "Unknown operator " ; 

    }
}
