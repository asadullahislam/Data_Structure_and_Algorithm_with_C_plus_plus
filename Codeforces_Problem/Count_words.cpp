#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    
    int count=0;
    string word;
  
    for(int i=0;i<s.size();i++){
        if(s[i]=='!' || s[i]=='.' || s[i] == '?' || s[i] == ','){
            s[i] = ' ';
        }
    }
    stringstream ss(s);
    while(ss>>word){
        count++;
    }
    cout<<count<<endl;
    return 0;
}