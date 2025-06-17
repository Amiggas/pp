#include <iostream>
using namespace std;

int main() {
    double salary, monthlyPayment, loan;
    int month = 1;

    cout << "Enter your monthly salary: ";
    cin >> salary;

    cout << "Enter your total loan amount: ";
    cin >> loan;

    cout << "Enter your monthly payment: ";
    cin >> monthlyPayment;

    if (monthlyPayment > salary) {
        cout << "Your payment is more than your salary!" << endl;
        return 0;
    }

    do {
        cout << "Month " << month << ":" << endl;
        cout << "Loan before payment: " << loan << " KZT" << endl;

        loan -= monthlyPayment;
        if (loan < 0) loan = 0;

        cout << "You paid: " << monthlyPayment << " KZT" << endl;
        cout << "Money left after payment: " << salary - monthlyPayment << " KZT" << endl;
        cout << "Remaining loan: " << loan << " KZT" << endl;

        cout << endl; 
        month++;
    } while (loan > 0);

    cout << "Congratulations! You paid off your loan in " << month - 1 << " months!" << endl;

    return 0;
}


