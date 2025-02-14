#include<bits/stdc++.h>
using namespace std;

class Student{
 public:
    char name[100];
    int roll;
    double cgpa;
};
int main()
{
    Student a,b;

    // name with space 
    cin.getline(a.name,100);
    cin>>a.roll>>a.cgpa;
    getchar();

    cin.getline(b.name,100);
    cin>>b.roll>>b.cgpa;

    cout<<a.name<< " "<<a.roll<< " "<<a.cgpa<<endl;
    cout<<b.name<< " "<<b.roll<< " "<<b.cgpa<<endl;



// for name without any space 
    // cin>>a.name>>a.roll>>a.cgpa;
    // cin>>b.name>>b.roll>>b.cgpa;
    // cout<<a.name<< " "<<b.roll<< " "<<b.cgpa;
    // cout<<a.name<< " "<<b.roll<< " "<<b.cgpa;
    // a.roll=20;
    
    // a.cgpa=3.24;
    // char tmp[100]= "Joy";
    // strcpy(a.name,tmp);
    // cout<<a.name<<endl;
    
    return 0;
}