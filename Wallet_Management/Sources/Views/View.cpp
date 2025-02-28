#include "View.h"
#include "Utils.h"
#include <iostream>

using namespace std;

View::View() {}

int View::menuClient() {
    int option;
    cout << "\n**************** Menu Client ****************" << endl;
    cout << "1- Create Account" << endl;
    cout << "2- List" << endl;
    cout << "3- Account Information" << endl;
    cout << "4- Delete" << endl;
    cout << "0- Exit" << endl;
    option = Utils::getNumber("Option");
    return option;
}

int View::menuBank() {
    int option;
    cout << "\n**************** Menu Bank ****************" << endl;
    cout << "1- Account" << endl;
    cout << "2- Loans" << endl;
    cout << "3- Transactions" << endl;
    cout << "4- Insurance" << endl;
    cout << "0- Log Out" << endl;
    option = Utils::getNumber("Option");
    return option;
}

int View::menuLoans() {
    int option;
    cout << "\n**************** Menu Loans ****************" << endl;
    cout << "1- Add Loan" << endl;
    cout << "2- List Loans" << endl;
    cout << "3- Loan Details" << endl;
    cout << "4- Amortize Loan" << endl;
    cout << "0- Exit" << endl;
    option = Utils::getNumber("Option");
    return option;
}

int View::menuTransactions() {
    int option;
    cout << "\n**************** Menu Transactions ****************" << endl;
        cout << "1- Add Transaction" << endl;
        cout << "2- List Transactions" << endl;
        cout << "0- Exit" << endl;
        option = Utils::getNumber("Option");
        return option;
}

int View::menuInsurance() {
    cout << "\n**************** Menu Insurance ****************" << endl;
    cout << "1- Add  insurance" << endl;
    cout << "2- List insurances" << endl;
    cout << "3- Monitor insurance" << endl; // Add new option
    cout << "0- Exit" << endl;
    return Utils::getNumber("Option");
}