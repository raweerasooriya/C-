#pragma once
#include <iostream>
#include <string>

using namespace std;


class User {
protected:
    string username;
    string password;

public:
    User();
    User(const string& u_username, const string& u_password);
    virtual void display() const;
};


