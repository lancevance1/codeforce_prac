#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

//https://codeforces.com/contest/734/problem/A
// count the number of 'A' and 'D' by using string[i] to access the char of string, 
//then compare them
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    // solution comes here
    int t,resA,resD;
    string s;
    cin>>t>>s;
    resA=-1;
    resD=-1;
    while (t--)
    {
       if(s[t]=='A'){
        resA++;
        
       }else{
           resD++;
       }
        
    }
    if(resA>resD){
        cout<<"Anton"<<"\n";
    }else if (resD>resA)        
    {
       cout<<"Danik"<<"\n";
    }else{
        cout<<"Friendship"<<"\n";
    }
 
}