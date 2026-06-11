#include "student.hpp"
#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>
using namespace std;

void addStudent(vector<student> &students){
    student s;
    cout << "\nEnter the ID of this student : ";
    cin >> s.ID;
    cout << "Enter the name of the student : ";
    cin.ignore();
    getline(cin,s.name);
    cout << "Enter the marks : ";
    cin >> s.marks;
    students.push_back(s);
}

char continuum(bool &continu){
    char c;
    cin >> c;

    switch(c){
        case 'y' :
            continu = true;
            break;
        case 'Y' : 
            continu = true;
            break;
        case 'N' :
            continu = false;
            break;
        case 'n' :
            continu = false;
            break;
    }
    return continu;
}

void viewstudents(const vector<student> &students){
    if(students.size() == 0){
        cout << "\n***** No students currently exist in the records. Please add students first *****";
    }
    else{
        cout << "\n--------------------------------------------------------------------------";
        cout << "\n                          student Records";
        cout << "\n--------------------------------------------------------------------------\n";
        cout << left
             << setw(15) << "ID"
             << setw(35) << "name"
             << setw(30) << "marks";
        cout << "\n--------------------------------------------------------------------------\n";

        for(const student &s: students){
            cout << left
                 << setw(15) << s.ID
                 << setw(35) << s.name 
                 << setw(30) << s.marks
                 << endl;
        }
        cout << "--------------------------------------------------------------------------\n";
    }

}

bool saveRecord(const vector<student> &students){
        ofstream file("student_record.csv");

        if(!file){
            cout << "/nError opening file !";
            return false;
        }

        file << "ID,Name,Marks\n";
        for(const student &s : students)
        {
            file << s.ID << ",";
            file << s.name<< ",";
            file << s.marks << "\n";
        }

        file.close();
        return true;
    }
