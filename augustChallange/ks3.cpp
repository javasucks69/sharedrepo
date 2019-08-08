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
        vector<long> arr;
        unordered_multiset<long> arr2;
        long count = 0;
        for(int i =0;i<n;i++){
            long t;
            cin>>t;
            arr.push_back(t);
        }
        copy(arr.begin(),arr.end(),back_inserter(arr2));
        for(int i = 0; i < n ; i++){
            long temp = 0;
            for(int j = i; j <n;j++){
                temp^=arr[j];
                if(arr2.find(temp));
                    count++;
            }
        }
        cout<<count<<endl;
    }
}