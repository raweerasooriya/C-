#include "Plan.h"
#include "RegisteredUser.h"
#include <iostream>

using namespace std;

int main() {
    // Create a RegisteredUser object with data
        RegisteredUser regUser("akila", "1234", "U0001", "Akila Dilshan", "Galle", "1998/06/14", "akiladilshan@gmail.com", "0768959799", "Male");

    // Log in to the system with provided credentials
    string username = "akila";
    string password = "1234";
    regUser.logInToSystem(username, password);
    cout << endl;

    // Display the details of the registered user
    cout << "Details of User: " << endl;
    regUser.display();
    cout << endl;

    // Deactivate the account
    regUser.deactivateAccount();
    cout << endl;

    // Display the updated details of the registered user
    regUser.display();
    cout << endl;


    // Create a Plan object with data
    Plan plan("Standard", 50000.0, "Standard");

    // Display the details of the plan
    cout << "Details of Plan: " << endl;
    plan.display();
    cout << endl;

    char update;
    cout << "Are you want to update details of the plan? (y/n): ";
    cin >> update;

    if (update == 'y' || update == 'Y') {

        // Update details of the plan
        string PlanName;
        float CoverageLimit;
        cout << "Enter Reqset Plane Name (Basic/Premiums/Standard): " << endl;
        cin >> PlanName;
        cout << "Enter CoverageLimit: ";
        cin >> CoverageLimit;
        cout << endl;

        plan.updatePlanName(PlanName);
        plan.updateCoverageLimit(CoverageLimit);
        plan.updatePrivacyAndPolicy("");

        // Display the updated details of the plan
        cout << "Updated Details of Plan: ";
        cout << endl;
        plan.display();
        cout << endl;
    }
  
    return 0;
}
