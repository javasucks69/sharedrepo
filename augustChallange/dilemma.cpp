#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       string s;
       cin>>s;
       bool flag = false;
       long pos = s.find('1');
       if(pos == string::npos){
           cout<<"LOSE"<<endl;
           continue;
       }
       long i = 0;
       while(i < s.size()){
            if(flag && s[i] == '1')
                flag = false;
            else if(s[i] == '1')
                flag = true;
       }
       if(flag){
           cout<<"LOSE"<<endl;
       }
       else
       {
            cout<<"WIN"<<endl;
       }
       
    }
}