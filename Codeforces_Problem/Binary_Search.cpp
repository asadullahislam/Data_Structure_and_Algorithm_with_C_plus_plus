#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    while(q--){
        int x;
        cin>>x;
        int left=0;
        int right= n-1;
        bool flag=false;

        while(left<=right){

        int mid=(left + right)/2;
  
        if(a[mid] == x){
            flag=true;
            break;
        }
        else if(x > a[mid]){
            left =mid +1;
        }
        else{
            right=mid -1;
        }
        }
        if(flag==true) cout<<"found"<<endl;
        else if(flag==false) cout<<"not found"<<endl;
    }
    return 0;
}