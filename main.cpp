#include <iostream>
#include <string>
#include <map>
using namespace std;

struct StudentGrade{

    string student_name;
    char grade;

    void addGrade(map<string, char>& grades){
        grades[student_name] = grade;
    }
};

int main() {
    map<string, char> grades;
    for(int i=0; i<5; i++){
        StudentGrade newGrade =*new StudentGrade;
        cout << "Enter name: ";
        cin >> newGrade.student_name;
        cout << "Enter grade: ";
        cin >> newGrade.grade;
        newGrade.addGrade(grades);
    }
    cout << grades["Arina"];
    cout << grades["Masha"];
    return 0;
}
