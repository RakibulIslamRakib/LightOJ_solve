#include<bits/stdc++.h>
using namespace std;

int main(){
    int testcase;
    cin>>testcase;

    for(int ts=1; ts<=testcase; ts++){
       int n,q;cin>>n>>q;
       deque<int>dq;
       string s;int a;
       cout<<"Case "<<ts<<":"<<endl;
       for(int i=1;i<=q;i++){
       cin>>s;
       if(s=="pushLeft"){
        cin>>a;
        if(dq.size()<n){
            dq.push_back(a);
            cout<<"Pushed in left: "<<a<<endl;
        }
        else cout<<"The queue is full"<<endl;
       }

       else if(s=="pushRight"){
        cin>>a;
        if(dq.size()<n){
            dq.push_front(a);
            cout<<"Pushed in right: "<<a<<endl;
        }
        else cout<<"The queue is full"<<endl;
       }

       else if(s=="popRight"){
            if(dq.size()==0){
                cout<<"The queue is empty"<<endl;
            }
            else{
              cout<<"Popped from right: "<<dq.front()<<endl;
              dq.pop_front();
            }
       }
       else if(s=="popLeft"){
            if(dq.size()==0){
                cout<<"The queue is empty"<<endl;
            }
            else{
              cout<<"Popped from left: "<<dq.back()<<endl;
              dq.pop_back();
            }
       }
       }
    }
}
