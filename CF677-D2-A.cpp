#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array
//https://codeforces.com/contest/677/problem/A
// find the person who is higher than the height of fence and add 1,
// then sum them up with the original numbers of people.
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    // solution comes here
    int t,h,a,res;

    cin>>t>>h;
    res=t;
    while (t--)
    {
        // solve();
        cin>>a;
        if(h-a<0){
            res++;
        }
        
    }
    cout<<res<<"\n";
    
}