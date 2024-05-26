#include "User.h"
using namespace std;

User::User() : username(""), password("") {}

User::User(const string& u_username, const string& u_password)
    : username(u_username), password(u_password) {}

void User::display() const {
    cout << "Username: " << username << endl;
}
