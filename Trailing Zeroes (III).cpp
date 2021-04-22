#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll RIGHT = 1e18;

ll count_trailing_zeroes(ll n){
    ll trailingzero=0;
    for(ll i=5;i<=n;i*=5){
        ll res = n/i;
        trailingzero+=res;
    }
    return trailingzero;
}

int main()
{
  int t;cin>>t;
  for(int i=1;i<=t;i++){
        ll n,ans=-1,LIMIT = RIGHT,start=1;cin>>n;
        while(start<=LIMIT){
            ll mid = (LIMIT + start)/2;
            ll trailingzero = count_trailing_zeroes(mid);
            if(trailingzero>n){
                LIMIT=mid-1;
            }
            else if(trailingzero<n){
                start = mid+1;
            }
            else{
                ans=mid;
                LIMIT=mid-1;
            }
        }
        cout<<"Case "<<i<<": ";
        if(ans==-1){
            cout<<"impossible"<<endl;
        }
        else cout<<ans<<endl;
  }
}

