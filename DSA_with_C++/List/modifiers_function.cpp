#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>myList={10,20,30,40,50,60,70,80};
    // list<int>newList;
    // newList=myList;
    // newList.assign(myList.begin(),myList.end());  
    
    // //push operation
    // myList.push_back(200);
    // myList.push_front(2000);
    // // pop operation 
    // myList.pop_back();
    // myList.pop_front();
    list<int> newList={100,200,300};

    //insert in linked list 
    // myList.insert(next(myList.begin(),2),100);
    // insert list(list)
    // myList.insert(next(myList.begin(),3),newList.begin(),newList.end());

    // delete operation in linked list 
    // myList.erase(next(myList.begin(),2));

    // myList.erase(next(myList.begin(),2),next(myList.begin(),5));
    // for(int val:myList)
    // {
    //     cout<<val<<endl;
    // }

    auto it=find(myList.begin(),myList.end(),400);
    if(it==myList.end())
    {
        cout<<"Not found";
    }
    else{
        cout<<"Found";
    }

    return 0;
}