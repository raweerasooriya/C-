#pragma once
#include <iostream>
#include <string>

using namespace std;

class Plan {
private:
    string name;
    float coverageLimit;
    string privacyAndPolicy;

public:
    Plan();
    Plan(const string& p_name, float p_coverageLimit, const string& p_privacyAndPolicy);

    void setName(const string& p_name);
    void setCoverageLimit(float p_coverageLimit);
    void setPrivacyAndPolicy(const string& p_privacyAndPolicy);

    string getName() const;
    float getCoverageLimit() const;
    string getPrivacyAndPolicy() const;

    void updatePlanName(const string& p_name);
    void updateCoverageLimit(float p_coverageLimit);
    void updatePrivacyAndPolicy(const string& p_privacyAndPolicy);

    void display() const;
};
