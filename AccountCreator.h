#ifndef ACCOUNT_CREATOR_H
#define ACCOUNT_CREATOR_H
#include <string>
using namespace std;
class AccountCreator {
public:
    static bool registerNewCustomer(string username, string password, string email);
};
#endif
