#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> dp;
void init(long n){
    vector<int> t;
    dp.clear();
    for(long j =0;j<n;j++){
            t.push_back(-1);
    }
    for(long i = 0; i < n ; i++){
        dp.push_back(t);
    }
}
bool solve(string s,long low,long high){
    if(low == high){
        if(s[low] == '0'){
            dp[low][low] = 0;
            return false;
        }
        else {
            dp[low][low] = 1;
            return true;
        }
    }
    if(dp[low][high] != -1){
        return dp[low][high];
    }
    else{
        bool flag = false;
        for(long j = low ; j <=high; j++){
            if(s[j] == '1'){
                bool flag1;
                bool flag2;
                if(j == low){
                    flag1 = true;
                }
                else{
                    s[j-1] = (s[j-1] == '1') ? '0' : '1'; 
                    flag1 = solve(s,low,j-1);
                }
                if(j == high){
                    flag2 = true;
                }
                else{
                    s[j+1] = (s[j+1] == '1') ? '0' : '1';
                    flag2 = solve(s,j+1,high);
                }
                if(flag1&&flag2){
                    flag = true;
                    break;
                }
            }
        }
        dp[low][high] = flag;
        return flag;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        init(s.length());
        if(solve(s,0,s.length()-1)){
            cout<<"WIN"<<endl;
        }
        else{
            cout<<"LOSE"<<endl;
        }
    }
}