#include<bits/stdc++.h>
using namespace std;
int main()
{

  int arr[3];
  for(int i=0;i<3;i++)
  {
    cin>>arr[i];
  }
  

  int x=arr[0];
  for(int i=1;i<3;i++){
    if(arr[i]< x){
        x =arr[i];
    }
  }
  
  int maxValue = arr[0];
  for(int i=1;i<3;i++){
    if(arr[i]>maxValue){
        maxValue=arr[i];
    }
  }

 cout<<x <<" "<<maxValue;
   
    return 0;
}