#include "User.h"
#include <string>
using namespace std;


class RegisteredUser : public User {
private:
    string user_ID;
    string name;
    string address;
    string dob;
    string email;
    string phone;
    string gender;
    bool isActive; // Added to keep track of account status

public:
    RegisteredUser();
    RegisteredUser(const string& u_username, const string& u_password, const string& u_id,
        const string& u_name, const string& u_address, const string& u_dob,
        const string& u_email, const string& u_phone, const string& u_gender);

    void logInToSystem(const string& rusername, const string& rassword);
    void deactivateAccount();
    void display() const override;
};

