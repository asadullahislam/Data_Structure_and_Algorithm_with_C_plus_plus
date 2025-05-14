#include<bits/stdc++.h>
using namespace std;
class Person
{
    public:
    string name;
    int age;
    Person(string name,int age){
        this->name=name;
        this->age=age;
    }
    void hello(){
        cout<<"hello";
    }
};
int main()
{
    Person rakib("Rakib",24);
    cout<<rakib.name<<" "<<rakib.age<<endl;
    rakib.hello();
    
    return 0;
}