#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       string s;
       cin>>s;
       bool flag = false;
       if(count(s.begin(),s.end(),'1') % 2 == 0)
            flag = true;
       if(flag){
           cout<<"LOSE"<<endl;
       }
       else
       {
            cout<<"WIN"<<endl;
       }
       
    }
}