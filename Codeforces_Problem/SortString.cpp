#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    // for(int i=0;i<n-1;i++){
    //     for(int j=0;j<n-i-1;j++){
    //         if(s[j]>s[j+1]){
    //             char temp=s[j];
    //             s[j]=s[j+1];
    //             s[j+1]=temp;
    //         }
    //     }
    // }

    cout<< s <<endl;
    
    
    return 0;
}