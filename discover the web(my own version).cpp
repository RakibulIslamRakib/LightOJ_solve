#include<bits/stdc++.h>
using namespace std;

int main()
{
   int t;cin>>t;
   for(int i=1;i<=t;i++){
    vector<string>v;
    stack<string>b,f,c;
    b.push("http://www.lightoj.com/");
    string s1,s2;
    cout<<"Case "<<i<<":"<<endl;
    while(true){
        s2="";
        getline(cin,s1);
        if(s1 == "QUIT")break;

        else if(s1[0]=='V'){
            for(int j=6;j<s1.size();j++)s2+=s1[j];
            if(c.size()!=0){
                b.push(c.top());
                c.pop();
            }
            c.push(s2);
            cout<<c.top()<<endl;

        }

        else if(s1=="BACK"){
            if(b.size()==0){
                cout<<"Ignored"<<endl;
                continue;
            }
            else{
                    if(c.size()!=0){
                    f.push(c.top());
                    c.pop();
                    }
                    c.push(b.top());
                    b.pop();
                    cout<<c.top()<<endl;
                }
        }
        else if(s1=="FORWARD"){
            if(f.size()==0){
                cout<<"Ignored"<<endl;
                continue;
            }
            else {
                   if(c.size()!=0){
                    b.push(c.top());
                    c.pop();
                    }
                    c.push(f.top());
                    f.pop();
                    cout<<c.top()<<endl;
                }

            }

   }
}
}
