#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n ,s;
        cin>>n>>s;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        bool found= false;
        
        for(int i=0;i<n;i++){
            int left=i+1;
            int right=n-1;
            while (left<right)
            {
               int currentSum =arr[i]+arr[left]+arr[right];
               if(currentSum == s){
                cout<<"YES"<<endl;
                found=true;
                break;
               }
               if(currentSum < s){
                left++;
               }
               else{
                right--;
               }
            }
            if(found){
                break;
            }
            
        }
        if(!found){
            cout<<"NO"<<endl;;
        }
    
    }
    return 0;
}