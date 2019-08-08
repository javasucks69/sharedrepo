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
        for(int i =0 ; i < n;i++)
            t.push_back(0);
        for(int i =0 ; i < n;i++){
            vector<long> t;
            temp.push_back(t);
        }
        vector<long> arr;
        for(int i =0 ; i < n;i++){
            long tmp;
            cin>>tmp;
            arr.push_back(tmp);
        }
        for(long i =0;i<n;i++){
            long tmp = 0;
            for(long j =i;j<n;j++){
                tmp^=arr[j];
                temp[i][j] = tmp;
            }
            unordered_set<long> t;
            for(long j =i;j<n;j++)
                t.insert(temp[i][j]);
            arr2.push_back(t);
                
        }
        long count =0 ;
        for(long i =0 ;i < n;i++){
            for(long j =i ; j < n - 1;j++){
                if(arr2[j+1].find(temp[i][j]) != arr2[j+1].end()){
                        count++;
                }
            }
        }
        cout<<count<<endl;
    }
}