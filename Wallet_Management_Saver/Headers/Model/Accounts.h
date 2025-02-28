//
// Created by corre on 20/05/2024.
//

#ifndef WALLET_MANAGEMENT_ACCOUNTS_H
#define WALLET_MANAGEMENT_ACCOUNTS_H

#include "Client.h"

using namespace std;

class Accounts{

private:
    Accounts(int nr, float balance, void *client);

    int nr;
    float balance;
    Client * client;
    bool isPointerNotNull(void * pointer);

public:
    Accounts(int nr, float balance, Client * client);
    Accounts(const Accounts& obj);
    ~Accounts();

    void setNumber(int &nr);

    void setBalance(float newBalance);
};


#endif //WALLET_MANAGEMENT_ACCOUNTS_H
