#include<bits/stdc++.h>
using namespace std;

int a[1005];
vector<pair<int,int> >v;
void divisors(){for(int i=1;i<=1000;i++){for(int j=i;j<=1000;j+=i){a[j]++;}}}

bool sortbysecond(const pair<int,int>&a,const pair<int,int>&b){
    if(a.second<b.second)return true;
    else if(a.second == b.second  &&  a.first>b.first)return true;
    else return false;
}
int main()
{
   int t,n,cas=1;cin>>t;
   memset(a,0,sizeof(a));
   divisors();
   for(int i=1;i<=1000;i++){
    v.push_back(make_pair(i,a[i]));
   }
   sort(v.begin(),v.end(),sortbysecond);
   for(int i=1;i<=t;i++){
   cin>>n;
   cout<<"Case "<<i<<": "<<v[n-1].first<<endl;
  // cout<<i<<" "<<a[i]<<endl;
     }
}

