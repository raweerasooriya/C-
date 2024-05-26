#include "RegisteredUser.h"
#include <iostream>
using namespace std;


RegisteredUser::RegisteredUser()
    : User(), user_ID(""), name(""), address(""), dob(""), email(""), phone(""), gender(""), isActive(true) {}

RegisteredUser::RegisteredUser(const string& u_username, const string& u_password, const string& u_id,
    const string& u_name, const string& u_address, const string& u_dob,
    const string& u_email, const string& u_phone, const string& u_gender)
    : User(u_username, u_password), user_ID(u_id), name(u_name), address(u_address), dob(u_dob), email(u_email), phone(u_phone), gender(u_gender), isActive(true) {}

void RegisteredUser::logInToSystem(const string& rusername, const string& rassword) {
    string entered_username, entered_password;
    cout << "Enter username: ";
    cin >> entered_username;
    cout << "Enter password: ";
    cin >> entered_password;

    if (entered_username == rusername && entered_password == rassword) {
        cout << "Login successful!" << endl;
    }
    else {
        cout << "Invalid username or password." << endl;
        exit(0);
    }
}

void RegisteredUser::deactivateAccount() {
    char confirmation;
    cout << "Are you sure you want to deactivate your account? (y/n): ";
    cin >> confirmation;

    if (confirmation == 'y' || confirmation == 'Y') {
        isActive = false;
        cout << "Account has been deactivated." << endl;
    }
    else {
        cout << "Account deactivation canceled." << endl;
    }
}

void RegisteredUser::display() const {
    User::display();
    cout << "User ID: " << user_ID << endl;
    cout << "Name: " << name << endl;
    cout << "Address: " << address << endl;
    cout << "Date of Birth: " << dob << endl;
    cout << "Email: " << email << endl;
    cout << "Phone: " << phone << endl;
    cout << "Gender: " << gender << endl;
    cout << "Account Status: " << (isActive ? "Active" : "Inactive") << endl;
}
