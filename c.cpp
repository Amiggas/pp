#include <iostream>
using namespace std ;



int main (){
    int  n , m ; 
    string op ;
    cout << " Input number n:  " ; 
    cin >> n ; 

    cout << " Input number m:  " ; 
    cin  >> m ;


   
    cout << " n ? m : "  ; 
    cin >> op ;

    if ( op == "==") {
        if  ( n == m )  {
            cout << " True " ; 
        }
        else {
            cout << " False " ; 
        }
    } 
    else if ( op == "!=") {
        if  ( n != m )  {
            cout << " True " ; 
         }
        else {
            cout << " False " ; 
        }
     }
    else if ( op == ">") {
        if  ( n > m )  {
            cout << " True " ; 
         }
        else {
            cout << " False " ; 
        }
     }
    else if ( op == "<") {
        if  ( n < m )  {
            cout << " True " ; 
         }
        else {
            cout << " False " ; 
        }
     }
    else if ( op == "<=") {
        if  ( n <= m )  {
            cout << " True " ; 
         }
        else {
            cout << " False " ; 
        }
     }
    else if ( op == ">=") {
        if  ( n >= m )  {
            cout << " True " ; 
         }
        else {
            cout << " False " ; 
        }
     }
    else {
        cout << " Unknown operator ";
    }
    




}