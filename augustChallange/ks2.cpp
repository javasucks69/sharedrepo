#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    #ifndef ONLINE_JUDGE
        freopen("in.txt","r",stdin);
    #endif
    cin>>t;
    while(t--){
        long n;
        cin>>n;
        vector<vector<long>> temp;
        vector<unordered_set<long>> arr2;
        vector<long> arr;
        long count = 0;
        vector<long> t;
        for(int i =0 ; i < n;i++)
            t.push_back(0);
        for(int i =0 ; i < n;i++){
            vector<long> t;
            temp.push_back(t);
        }
        for(int i =0 ; i < n;i++){
            long tmp;
            cin>>tmp;
            arr.push_back(tmp);
        }
        vector<long> allXOR;
        long XORofall = 0;
        for(long i:arr)
            XORofall^=i;
        long tempXORofall = 0;
        for(long i:arr){
            tempXORofall^=i;
            allXOR.push_back(XORofall^tempXORofall);
        }
        sort(arr.begin(),arr.end());
        for(long i : allXOR){
            if(binary_search(arr.begin(),arr.end(),i))
                count++;
        }
        cout<<count<<endl;
    }
}