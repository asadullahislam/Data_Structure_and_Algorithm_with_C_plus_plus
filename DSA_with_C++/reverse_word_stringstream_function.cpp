#include<bits/stdc++.h>
using namespace std;

// forward seperate word from text 
// void print(stringstream& ss){
//     string word;
//    if(ss>>word){
//     cout<<word<<endl;
//     print(ss);
//    }
// }
// reverse seperate word from text
void print(stringstream& ss){
    string word;
   if(ss>>word){
    print(ss);
    cout<<word<<endl;

   }
}
int main()

{
    string s;
    getline(cin,s);
    stringstream ss(s);
    print(ss);

    return 0;
}