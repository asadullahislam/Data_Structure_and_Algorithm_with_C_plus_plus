



#include <bits/stdc++.h>
using namespace std;

class student {
public:
    int id;
    string name;
    char section;
    int totalMarks;

    // Constructor
    student(int id, string name, char section, int totalMarks) {
        this->id = id;
        this->name = name;
        this->section = section;
        this->totalMarks = totalMarks;
    }

    // Default constructor for array initialization
    student() {}
};

int main() {
    int t;
    cin >> t;

    while (t--) {
        student students[3]; // Array of Student objects

        // Input student details
        for (int i = 0; i < 3; i++) {
            int id, totalMarks;
            string name;
            char section;
            cin >> id >> name >> section >> totalMarks;
            students[i] = student(id, name, section, totalMarks);
        }

        student topStudent= students[0];
       for(int i=0;i<3;i++){
        if(students[i].totalMarks > topStudent.totalMarks || students[i].totalMarks==topStudent.totalMarks && students[i].id < topStudent.id){
            topStudent=students[i];
        }
       }
        cout<<topStudent.id<<" "<<topStudent.name<<" "<<topStudent.section<<" "<<topStudent.totalMarks<<endl;

      
    }

    return 0;
}
