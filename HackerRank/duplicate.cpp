#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    set<int>s;
    for(int i=0;i<n;i++){
        cin>>v[i];
        s.insert(v[i]);
    }
  if(s.size()==v.size()){
    cout<<"NO"<<endl;
  }
  else{
    cout<<"YES"<<endl;
  }
    return 0;
} 