#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> myList={20,40,10,30,10,10,10};
    //remove elemet 
    // myList.remove(10);
    // sort ascending
    // myList.sort();
    
    //sort descending order 
    // myList.sort(greater<int>());

    // use unique before sort kore nite hobe 
    // myList.sort();
    // myList.unique();

    //reverse list 

 myList.reverse();
    for(int val:myList)
   
    {
        cout<<val<<endl;
    }
    
    return 0;
}