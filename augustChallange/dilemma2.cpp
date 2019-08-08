#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int pos=s.find("1");
        bool searchison = false;
        int i = pos;
        if(s == "1"){
            cout<<"WIN"<<endl;
            continue;
        }
        if(s == "0"){
            cout<<"LOSE"<<endl;
            continue;
        }
        if(s.find('1','1') == string::npos){
            cout<<"WIN"<<endl;
            continue;
        }
        while(i < s.size()){


            if(!searchison){
                if( i == s.size() - 1){
                    if(s[i] == '1')
                        searchison = true;
                    else
                        searchison = false;
                }
                if( s[i+1] == '1'){
                    searchison = true;
                    i+=2;
                }
                else{
                    //int p = count_if(s+i+1,s.size(),[](char c){return c == '0';});
                    int p = s.find('1',i+1);
                    if(p == string::npos){
                        break;
                    }
                    if( p-i == 2){
                        searchison = true;
                        i = p + 1;
                    }
                    else{
                        int pp = s.find('1',p+1);
                        if(pp == string::npos){
                            break;
                        }
                        else
                            i = pp + 1;
                    }
                }
            }
            else{
                int p = s.find('1',i);
                if(p != string::npos){
                    searchison = false;
                    i= p + 1;
                }
                else
                    break;

            }
        }
        if(searchison){
            cout<<"LOSE"<<endl;
        }
        else
        {
            cout<<"WIN"<<endl;
        }
    }
}