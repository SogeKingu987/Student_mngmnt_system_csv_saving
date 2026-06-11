#pragma once
#include <string>
#include <vector>
using namespace std;

class student{
    public:
    string name;
    int ID;
    float marks;
};


void addStudent(vector<student> &students);
void viewstudents(const vector<student> &students);
char continuum(bool &continu);
bool saveRecord(const vector<student> &students);