#include<bits/stdc++.h>
using namespace std;
class Student{
  public:
    int roll;
    int clas;
    double gpa;

   /*
    ###############
    way to create constructor 
    ####################
  
    Student(int r, int c, int g){
        roll=r;
        clas=c;
        gpa=g;
    }

          
    */ 

  /*   
   ###############
  another way to create constructor 
  ####################

    Student(int roll,int clas, int gpa){
        (*this).roll=roll;
        (*this).clas=clas;
        (*this).gpa=gpa;
    }

  */ 

    /*     ##########
    anothter way to create constructor 
    ##############*/

    Student(int roll,int clas,int gpa){
        this->roll=roll;
        this->clas=clas;
        this->gpa=gpa;
    }



};
int main()
{
    Student rahim(20 ,5, 4.33);
    cout<<rahim.roll<<" "<<rahim.clas<<" "<<rahim.gpa<<endl;
    return 0;
}