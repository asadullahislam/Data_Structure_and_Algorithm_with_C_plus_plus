#include<bits/stdc++.h>
using namespace std;
int main()
{

    string s;
    while(getline(cin,s)){
        s.erase(remove(s.begin(),s.end(),' '),s.end());
        sort(s.begin(),s.end());
        cout<<s<<endl;
    }
   
    
    return 0;
}