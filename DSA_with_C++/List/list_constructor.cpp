#include<bits/stdc++.h>
using namespace std;
int main()
{
    // list<int> myList;
    list<int> list2={1,2,3,4,5};
    
    // cout<<list2.size();
    vector<int> v={100,200,300};
    //  list<int>myList(10 ,5);
    //  for(auto it=myList.begin();it !=myList.end();it++)
    //  {
    //     cout<<*it<<
    //  }
    list<int> myList(v.begin(),v.end());
    // way to print list
    //  for(auto it=myList.begin();it !=myList.end();it++)
    //  {
    //     cout<<*it<<" ";
    //  }
    // without need index 
    for(int val: myList)
    {
        cout<<val<<endl;
    }
    
    return 0;

}