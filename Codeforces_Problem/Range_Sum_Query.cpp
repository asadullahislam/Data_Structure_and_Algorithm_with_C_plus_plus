// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     /// here time complexity is very high 5*10^14 or o(n*q) this is not good here use prefixsum to reduce time_complexity 

//     int n ,q;
//     cin>>n>>q;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     while(q--){
//         int l,r;
//         cin>>l>>r;
//         l--;
//         r--;
//         int sum=0;

//         for(int i=l;i<=r;i++){
//             sum+=a[i];
//         }
//         cout<<sum<<endl;
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long  n,q;
    cin>>n>>q;
    long long  a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    long long  pre[n];
     pre[0]=a[0];
    for(int i=1;i<n;i++){
        pre[i]=a[i]+pre[i-1];
    }
    while(q--){
        long long l,r;
        cin>>l>>r;
        l--;
        r--;
        long long  sum ;
        if(l==0){
            sum=pre[r];
        }
        else{
            sum=pre[r]-pre[l-1];
        }
        cout<<sum<<endl;

    }

    return 0;
}  