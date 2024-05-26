#include "Plan.h"
using namespace std;

Plan::Plan() : name(""), coverageLimit(0.0), privacyAndPolicy("") {}

Plan::Plan(const string& p_name, float p_coverageLimit, const string& p_privacyAndPolicy)
    : name(p_name), coverageLimit(p_coverageLimit), privacyAndPolicy(p_privacyAndPolicy) {}

void Plan::setName(const string& p_name) {
    name = p_name;
}

void Plan::setCoverageLimit(float p_coverageLimit) {
    coverageLimit = p_coverageLimit;
}

void Plan::setPrivacyAndPolicy(const string& p_privacyAndPolicy) {
    privacyAndPolicy = p_privacyAndPolicy;
}

string Plan::getName() const {
    return name;
}

float Plan::getCoverageLimit() const {
    return coverageLimit;
}

string Plan::getPrivacyAndPolicy() const {
    return privacyAndPolicy;
}

void Plan::updatePlanName(const string& p_name) {
    name = p_name;
}

void Plan::updateCoverageLimit(float p_coverageLimit) {
    coverageLimit = p_coverageLimit;
}

void Plan::updatePrivacyAndPolicy(const string& p_privacyAndPolicy) {
    privacyAndPolicy = p_privacyAndPolicy;
}

void Plan::display() const {
    cout << "Plan Name: " << name <<" Plan" << endl;
    cout << "Coverage Limit: " << coverageLimit << endl;
    cout << "Privacy and Policy: " << name << " Privacy and Policy"<< endl;
}
