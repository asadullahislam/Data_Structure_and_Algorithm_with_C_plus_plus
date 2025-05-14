#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        int sum1=0;
        int sum2=0;
        for(int i=0;i<s.length()/2;i++){
           
            sum1=sum1 +s[i]-'0';
            
        }
        for(int i=s.length()/2;i<s.length();i++){
            sum2=sum2+s[i]-'0';

        }
        if(sum1==sum2){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
     
    }
    return 0;
}