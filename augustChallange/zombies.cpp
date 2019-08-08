#include<bits/stdc++.h>
#include "../vectorprint.cpp"
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
        vector<long> arr,c;
        unordered_multiset<long> h;
        for(long i =0 ;i < n; i++)
            arr.push_back(0);
        for(long i =0 ;i < n; i++){
            long tmp;
            cin>>tmp;
            c.push_back(tmp);
        }
        for(long i =0 ;i < n; i++){
            long tmp;
            cin>>tmp;
            h.insert(tmp);
        }
        for(long i = 0; i < n;i++){
            long low = i- c[i] < 0 ? 0 : i - c[i];
            long high = i + c[i] >n -1? n -1 : i+c[i];
            for(long j = low; j <= high; j++){
                arr[j]++;
            }
        }
        bool flag = true;
        for(long i:arr){
            unordered_multiset<long>::iterator it = h.find(i);
            if(it == h.end()){
                flag = false;
            }
            else
            {
                h.erase(it);
            }
            
        }
        if(flag){
            cout<<"YES"<<endl;
        }
        else 
            cout<<"NO"<<endl;

    }
}