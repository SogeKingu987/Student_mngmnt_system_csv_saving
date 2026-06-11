#include "student.hpp"
#include <string>
#include <iomanip>
#include <fstream>
#include <vector>
#include <iostream>
using namespace std;

void printmenu();
int promptmenu(int &menuselect);

int main() {
    int i, menuselect;
    student s;
    vector<student> students;

    for(i = 0; menuselect != 4; i++){
        printmenu();
        promptmenu(menuselect);
        
        switch(menuselect){
            case 1:{
                bool continu = true;
                while (continu == true){
                    addStudent(students);
                    cout << "\nDo you wish to add another student (Y/N) ?" << endl;
                    continuum(continu);
                }
            break;}
              
            case 2 :{
                string nothin;
                viewstudents(students);
                cout << "\n\nEnter Any Key to go back to Main Menu : ";
                cin >> nothin;
            break;}

            case 3 :{
                saveRecord(students);

                if(saveRecord(students) == true){
                    cout << "\n Saved Successfully";
                }
                else{
                    cout << "\n Save Failed !";
                }
                
                break;
            }

    }
}}

void printmenu(){
    cout << "\n--------------------------------------------------------------------------------------";
    cout << "\n                          student Record Management System";
    cout << "\n--------------------------------------------------------------------------------------";
    cout << "\n 1. Add student";
    cout << "\n 2. View students";
    cout << "\n 3. Save";
    cout << "\n 4. Exit";
    cout << "\n--------------------------------------------------------------------------------------";
}

int promptmenu(int &menuselect){
    cout << "\nSelect an option (1 - 4) : ";
    cin >> menuselect;
    return menuselect;
}

