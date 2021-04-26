#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll a[20];

ll fact(int n){
    if(a[n]!=0)return a[n];
    if(n==1)return 1;
    else return a[n]=n*fact(n-1);
}

void solve(ll a[]){
    a[0]=a[1]=1;
    for(int i=2;i<=19;i++){
        a[i]= fact(i);
    }
}

int main(){
    int testcase;
    cin>>testcase;
    memset(a,0,sizeof(a));
    solve(a);
    ll n;
    for(int ts=1; ts<=testcase; ts++){
        cin>>n;
        vector<int>v;
        cout << "Case " << ts << ": ";
        for(int i=19;i>=0;i--){
            if(a[i]<=n){
                n-=a[i];v.push_back(i);
            }
        }
        if(n==0)
        {
            for(int i=v.size()-1; i>0; i--)
            {
                cout<<v[i]<<"!+";
            }
            cout<<v[0]<<"!\n";
        }
        else
            cout<<"impossible\n";

    }
}
