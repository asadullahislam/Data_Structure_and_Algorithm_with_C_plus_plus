#include<bits/stdc++.h>
using namespace std;
int main()
{
    char x;
    cin>>x;
    if(x >='A' && x<='Z'){
        cout<<"ALPHA"<<endl;
        cout<<"IS CAPITAL"<<endl;

    }
    else if(x>='a' && x<='z'){
        cout<<"ALPHA"<<endl;
        cout<<"IS SMALL"<<endl;
    }
    else{
        cout<<"IS DIGIT"<<endl;
    }
}