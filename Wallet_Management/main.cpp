//
// Created by gvice on 13/05/2024.
//

#include <iostream>
#include "Wallet_Management.h"

#include "Controller.h"
using namespace std;

int main()
{
    Wallet_Management walletManagement ("Wallet Management");

    Controller controller (walletManagement);
    controller.run();

    cout << "Aplication has existed" << endl;
    return 0;
}