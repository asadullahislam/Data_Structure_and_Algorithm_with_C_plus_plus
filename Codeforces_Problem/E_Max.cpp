#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  


  for(int i=0;i<n;i++){
    if(arr[i+1]>arr[0]){
        arr[0]=arr[i+1];
    }
  }

 cout<<arr[0]; 
   
    return 0;
}