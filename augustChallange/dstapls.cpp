#include<iostream>
#include<math.h>
using namespace std;
typedef long long ll;
int main(){
    int t;
    #ifndef ONLINE_JUDGE
        freopen("in.txt","r",stdin);
        //freopen("out.txt","w",stdout);
    #endif
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        if( k==1){
            cout<<"NO"<<endl;
            continue;
        }
        long long rem = n;
        rem = rem / k;
        if(rem % k == 0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }

}